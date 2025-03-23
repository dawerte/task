// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb___024root.h"

VL_ATTR_COLD void Vquadra_tb___024root___eval_static(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vquadra_tb___024root___eval_final(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__stl(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vquadra_tb___024root___eval_phase__stl(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD void Vquadra_tb___024root___eval_settle(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vquadra_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("quadra_tb.vs", 15, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vquadra_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__stl(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_tb___024root___stl_sequent__TOP__0(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__sq_out 
        = (0x3ffffffffULL & ((QData)((IData)(vlSelf->quadra_tb__DOT__u0__DOT__x2)) 
                             * (QData)((IData)(vlSelf->quadra_tb__DOT__u0__DOT__x2))));
}

VL_ATTR_COLD void Vquadra_tb___024root___eval_stl(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vquadra_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vquadra_tb___024root___eval_triggers__stl(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD bool Vquadra_tb___024root___eval_phase__stl(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vquadra_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vquadra_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__act(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge quadra_tb.clk or negedge quadra_tb.rst_b)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge quadra_tb.u0.dv_p0 or [changed] quadra_tb.u0.dv_p1 or [changed] quadra_tb.u0.dv_p2)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge quadra_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__nba(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge quadra_tb.clk or negedge quadra_tb.rst_b)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge quadra_tb.u0.dv_p0 or [changed] quadra_tb.u0.dv_p1 or [changed] quadra_tb.u0.dv_p2)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge quadra_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_tb___024root___ctor_var_reset(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->quadra_tb__DOT__x = VL_RAND_RESET_I(24);
    vlSelf->quadra_tb__DOT__x_dv = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__rst_b = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p0 = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p1 = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p2 = VL_RAND_RESET_I(1);
    vlSelf->quadra_tb__DOT__u0__DOT__x1 = VL_RAND_RESET_I(7);
    vlSelf->quadra_tb__DOT__u0__DOT__x2 = VL_RAND_RESET_I(17);
    vlSelf->quadra_tb__DOT__u0__DOT__y_quadra = VL_RAND_RESET_I(25);
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__sq_out = VL_RAND_RESET_Q(34);
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t0 = VL_RAND_RESET_I(25);
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t2 = VL_RAND_RESET_I(25);
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__result = VL_RAND_RESET_Q(41);
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__rst_b__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p2__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
