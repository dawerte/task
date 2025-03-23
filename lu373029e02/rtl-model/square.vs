`include "quadra.vh"
`timescale 1ps/1ps
module square
(
    input  x2_t x2,
    output sq_t sq
);
    // Compute x2^2:
    always_comb sq = x2 * x2;

endmodule    
