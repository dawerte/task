// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb___024root.h"

VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(Vquadra_tb___024root* vlSelf);
VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(Vquadra_tb___024root* vlSelf);
VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(Vquadra_tb___024root* vlSelf);

void Vquadra_tb___024root___eval_initial(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial\n"); );
    // Body
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0 
        = vlSelf->quadra_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__rst_b__0 
        = vlSelf->quadra_tb__DOT__rst_b;
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p0__0 
        = vlSelf->quadra_tb__DOT__u0__DOT__dv_p0;
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p1__0 
        = vlSelf->quadra_tb__DOT__u0__DOT__dv_p1;
    vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p2__0 
        = vlSelf->quadra_tb__DOT__u0__DOT__dv_p2;
}

VL_INLINE_OPT VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__0(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->quadra_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "quadra_tb.vs", 
                                           55);
        vlSelf->quadra_tb__DOT__clk = (1U & (~ (IData)(vlSelf->quadra_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__1(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->quadra_tb__DOT__rst_b = 1U;
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       61);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       61);
    vlSelf->quadra_tb__DOT__rst_b = 0U;
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       63);
    vlSelf->quadra_tb__DOT__rst_b = 1U;
}

VL_INLINE_OPT VlCoroutine Vquadra_tb___024root___eval_initial__TOP__Vtiming__2(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    VL_WRITEF("Started quadra_tb ...\n");
    vlSelf->quadra_tb__DOT__x = 0U;
    vlSelf->quadra_tb__DOT__x_dv = 0U;
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       76);
    vlSelf->quadra_tb__DOT__x = 0x7fffffU;
    vlSelf->quadra_tb__DOT__x_dv = 1U;
    VL_WRITEF("x = 0x%08x\n",24,vlSelf->quadra_tb__DOT__x);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       83);
    vlSelf->quadra_tb__DOT__x = 0U;
    vlSelf->quadra_tb__DOT__x_dv = 0U;
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       88);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       88);
    VL_WRITEF("y = 0x%011x\n",25,vlSelf->quadra_tb__DOT__u0__DOT__y_quadra);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    co_await vlSelf->__VtrigSched_hae643ed3__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge quadra_tb.clk)", 
                                                       "quadra_tb.vs", 
                                                       92);
    VL_WRITEF("Simulation finished.\n");
    VL_FINISH_MT("quadra_tb.vs", 96, "");
}

void Vquadra_tb___024root___eval_act(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vquadra_tb___024root___nba_sequent__TOP__0(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p2 = ((IData)(vlSelf->quadra_tb__DOT__rst_b) 
                                              && (IData)(vlSelf->quadra_tb__DOT__u0__DOT__dv_p1));
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p1 = ((IData)(vlSelf->quadra_tb__DOT__rst_b) 
                                              && (IData)(vlSelf->quadra_tb__DOT__u0__DOT__dv_p0));
    vlSelf->quadra_tb__DOT__u0__DOT__dv_p0 = ((IData)(vlSelf->quadra_tb__DOT__rst_b) 
                                              && (IData)(vlSelf->quadra_tb__DOT__x_dv));
}

VL_INLINE_OPT void Vquadra_tb___024root___nba_sequent__TOP__1(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    VL_WRITEF("x1 = 0x%05x, x2 = 0x%05x, sq_out = 0x%05x, t2= 0x%05x\n",
              7,vlSelf->quadra_tb__DOT__u0__DOT__x1,
              17,vlSelf->quadra_tb__DOT__u0__DOT__x2,
              34,vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__sq_out,
              25,vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t2);
    vlSelf->quadra_tb__DOT__u0__DOT__y_quadra = (0x1ffffffU 
                                                 & ((vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t0 
                                                     + vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t0) 
                                                    + vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t2));
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t0 = 0U;
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__t2 
        = (0x1ffffffU & (IData)(vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__result));
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__result = 0ULL;
}

VL_INLINE_OPT void Vquadra_tb___024root___nba_sequent__TOP__2(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->quadra_tb__DOT__u0__DOT__x1 = (0x7fU & 
                                           (vlSelf->quadra_tb__DOT__x 
                                            >> 0x11U));
    vlSelf->quadra_tb__DOT__u0__DOT__x2 = (0x1ffffU 
                                           & vlSelf->quadra_tb__DOT__x);
    vlSelf->quadra_tb__DOT__u0__DOT__quadra_inst__DOT__sq_out 
        = (0x3ffffffffULL & ((QData)((IData)(vlSelf->quadra_tb__DOT__u0__DOT__x2)) 
                             * (QData)((IData)(vlSelf->quadra_tb__DOT__u0__DOT__x2))));
}

void Vquadra_tb___024root___eval_nba(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vquadra_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vquadra_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vquadra_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vquadra_tb___024root___timing_resume(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hae643ed3__0.resume("@(posedge quadra_tb.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vquadra_tb___024root___timing_commit(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hae643ed3__0.commit("@(posedge quadra_tb.clk)");
    }
}

void Vquadra_tb___024root___eval_triggers__act(Vquadra_tb___024root* vlSelf);

bool Vquadra_tb___024root___eval_phase__act(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vquadra_tb___024root___eval_triggers__act(vlSelf);
    Vquadra_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vquadra_tb___024root___timing_resume(vlSelf);
        Vquadra_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vquadra_tb___024root___eval_phase__nba(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vquadra_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__nba(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__act(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_tb___024root___eval(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vquadra_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("quadra_tb.vs", 15, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vquadra_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("quadra_tb.vs", 15, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vquadra_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vquadra_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vquadra_tb___024root___eval_debug_assertions(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
