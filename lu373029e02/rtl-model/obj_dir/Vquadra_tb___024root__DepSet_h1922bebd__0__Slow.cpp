// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_tb.h for the primary calling header

#include "Vquadra_tb__pch.h"
#include "Vquadra_tb__Syms.h"
#include "Vquadra_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_tb___024root___dump_triggers__stl(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_tb___024root___eval_triggers__stl(Vquadra_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
