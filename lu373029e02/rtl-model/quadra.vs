//
// Quadratic polynomial:  f(x) = a + b*x2 + c*(x2^2)
//

`include "quadra.vh"
`timescale 1ps/1ps
module quadra
(   
    input ck_t clk,
    input rs_t rst,
    input x1_t x1,
    input x2_t x2,
    output y_t y_fxd
    // <challenge>
);

sq_t sq_out;
t1_t t1;
t2_t t2;
t0_t t0;
a_t a;
b_t b;
c_t c;
y_sum_t y_sum;


 lut lut_coeff (
        .x1(x1),
        .a(a),
        .b(b),
        .c(c)
    );

square s1 (
    .x2(x2),
    .sq(sq_out)
);

always_ff @(posedge clk) begin
        t0 <= a;
        t1 <= b * x2; 
        t2 <= c * sq_out[-1:-23];    
        y_sum <= t0 + t1[2:-25] + t2[2:-25];
end

    assign y_fxd = y_sum[3:-24];
    // <challenge>    
endmodule
