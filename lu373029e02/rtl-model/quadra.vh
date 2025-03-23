// quadra.vh

`ifndef QUADRA_VH
`define QUADRA_VH

typedef logic ck_t; // clock
typedef logic rs_t; // reset
typedef logic dv_t; // data valid

// --------------------------------------------------------------------------------
// I/O precision
// --------------------------------------------------------------------------------

// x in [0,2) -> u1.23
localparam int  X_I =  1;          //         =  1
localparam int  X_F = 23;          //         = 23
localparam int  X_W = X_I + X_F;   //  1 + 23 = 24 (u1.23)

typedef logic [X_W-1:0] x_t;

// y [-2,2) -> s2.23
localparam int  Y_I =  2;          //         =  2
localparam int  Y_F = 23;          //         = 23
localparam int  Y_W = Y_I + Y_F;   //  2 + 23 = 25 (s2.23)

typedef logic signed [Y_W-1:0] y_t;

// --------------------------------------------------------------------------------
// Internal precision:
// --------------------------------------------------------------------------------

//x1 [23:17]
localparam int  X1_I = 1; 
localparam int  X1_F = 6;  
localparam int  X1_W = X1_I + X1_F; 

typedef logic [X1_W-1:0] x1_t;

//x2 [16:0]
localparam int  X2_I = 0;
localparam int  X2_J = X2_I - X1_F;
localparam int  X2_F = X_W - X1_W;
localparam int  X2_W = X2_I + X2_F;

typedef logic [X2_I-1:-X2_W] x2_t;


//multiply x2_x2
localparam int  X2X2_I = 0;
localparam int  X2X2_F = X2_F*2;
localparam int  X2X2_W = X2X2_I + X2X2_F;

typedef logic [X2X2_I-1:-X2X2_W] sq_t;

// a[31:0]
localparam int  A_I = 3;
localparam int  A_F = 24;
localparam int  A_W = A_I + A_F;

typedef logic signed [A_I-1:-A_F] a_t;

// b[31:0]
localparam int  B_I = 3;
localparam int  B_F = 11;
localparam int  B_W = B_I + B_F;

typedef logic signed [B_I-1:-B_F] b_t;

// c[31:0]
localparam int  C_I = 3;
localparam int  C_F = 10;
localparam int  C_W = C_I + C_F;

typedef logic signed [C_I-1:-C_F] c_t;

// t0 = a;
localparam int  T0_I = A_I;
localparam int  T0_F = A_F;
localparam int  T0_W = T0_I + T0_F;

typedef logic signed [T0_I-1:-T0_F] t0_t;

// t1 = b * x2;
localparam int  T1_I = B_I + X2_I;
localparam int  T1_F = B_F + X2_F;
localparam int  T1_W = T1_I + T1_F;

typedef logic signed [T1_I-1:-T1_F] t1_t;

// t2 = c * x2^2;
localparam int  T2_I = C_I + X2X2_I;
localparam int  T2_F = C_F + X2X2_F-10;
localparam int  T2_W = T2_I + T2_F;

typedef logic signed [T2_I-1:-T2_F] t2_t;

// y_sum = t0 + t1 + t3 [31:0]

localparam int  Y_SUM_I = T0_I;
localparam int  Y_SUM_F = T0_F;
localparam int  Y_SUM_W =  Y_SUM_I + Y_SUM_F;

typedef logic signed [Y_SUM_I:-Y_SUM_F] y_sum_t;

// <challenge!>

`endif
