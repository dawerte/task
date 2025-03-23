`include "quadra.vh"

module quadra_top (
    input  ck_t clk,
    input  rs_t rst_b,
    input  x_t  x,
    input  dv_t x_dv,
    output y_t  y,
    output dv_t y_dv
);

    // Pipeline data valid (3 stages):
    dv_t dv_p0, dv_p1, dv_p2;

    x1_t x1;
    x2_t x2;
    y_t y_quadra;
    
    always_ff @(posedge clk or negedge rst_b) begin
        if (!rst_b) begin
            dv_p0 <= '0;
            dv_p1 <= '0;
            dv_p2 <= '0;
        end 
        else begin
            dv_p0 <= x_dv;
            dv_p1 <= dv_p0;
            dv_p2 <= dv_p1;
        end
    end

    quadra quadra_inst (
        .clk(clk),
        .rst(rst_b),
        .x1(x1),
        .x2(x2),
        .y_fxd(y_quadra)
    );

    always_ff @(posedge clk) begin
            x1    <= x[23:17];
            x2    <= x[16:0];
    end
    
    // Outputs:
    assign y_dv = dv_p2;
    assign y    = y_quadra;

endmodule
