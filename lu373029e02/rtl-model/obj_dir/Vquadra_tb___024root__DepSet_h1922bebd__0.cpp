// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb__Syms.h"
#include "Vquadra_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__act(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_tb___024root___eval_triggers__act(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->quadra_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->quadra_tb__DOT__rst_b)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__rst_b__0))));
    vlSelf->__VactTriggered.set(1U, ((((IData)(vlSelf->quadra_tb__DOT__u0__DOT__dv_p0) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p0__0))) 
                                      | ((IData)(vlSelf->quadra_tb__DOT__u0__DOT__dv_p1) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p1__0))) 
                                     | ((IData)(vlSelf->quadra_tb__DOT__u0__DOT__dv_p2) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__u0__DOT__dv_p2__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->quadra_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__quadra_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
