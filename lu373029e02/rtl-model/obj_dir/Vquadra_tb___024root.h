// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vquadra_tb.h for the primary calling header

#ifndef VERILATED_VQUADRA_TB___024ROOT_H_
#define VERILATED_VQUADRA_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vquadra_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vquadra_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ quadra_tb__DOT__clk;
    CData/*0:0*/ quadra_tb__DOT__rst_b;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p0;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p1;
    CData/*0:0*/ quadra_tb__DOT__u0__DOT__dv_p2;
    CData/*0:0*/ quadra_tb__DOT__x_dv;
    CData/*6:0*/ quadra_tb__DOT__u0__DOT__x1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__quadra_tb__DOT__rst_b__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p0__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p2__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*23:0*/ quadra_tb__DOT__x;
    IData/*16:0*/ quadra_tb__DOT__u0__DOT__x2;
    IData/*24:0*/ quadra_tb__DOT__u0__DOT__y_quadra;
    IData/*24:0*/ quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t0;
    IData/*24:0*/ quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t2;
    IData/*31:0*/ __VactIterCount;
    QData/*33:0*/ quadra_tb__DOT__u0__DOT__quadra_inst__DOT__sq_out;
    QData/*40:0*/ quadra_tb__DOT__u0__DOT__quadra_inst__DOT__result;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hae643ed3__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vquadra_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vquadra_tb___024root(Vquadra_tb__Syms* symsp, const char* v__name);
    ~Vquadra_tb___024root();
    VL_UNCOPYABLE(Vquadra_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
