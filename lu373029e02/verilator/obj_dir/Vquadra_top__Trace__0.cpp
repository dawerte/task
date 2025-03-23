// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vquadra_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->quadra_top__DOT__x1),7);
        bufp->chgIData(oldp+1,(vlSelf->quadra_top__DOT__x2),17);
        bufp->chgQData(oldp+2,((0x3ffffffffULL & ((QData)((IData)(vlSelf->quadra_top__DOT__x2)) 
                                                  * (QData)((IData)(vlSelf->quadra_top__DOT__x2))))),34);
        bufp->chgIData(oldp+4,(vlSelf->quadra_top__DOT__quadra_inst__DOT__t1),31);
        bufp->chgQData(oldp+5,(vlSelf->quadra_top__DOT__quadra_inst__DOT__t2),37);
        bufp->chgIData(oldp+7,(vlSelf->quadra_top__DOT__quadra_inst__DOT__t0),27);
        bufp->chgIData(oldp+8,(vlSelf->quadra_top__DOT__quadra_inst__DOT__a),27);
        bufp->chgSData(oldp+9,(vlSelf->quadra_top__DOT__quadra_inst__DOT__b),14);
        bufp->chgSData(oldp+10,(vlSelf->quadra_top__DOT__quadra_inst__DOT__c),13);
        bufp->chgIData(oldp+11,(vlSelf->quadra_top__DOT__quadra_inst__DOT__y_sum),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+12,(vlSelf->quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+13,(vlSelf->quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+14,(vlSelf->quadra_top__DOT__dv_p2));
    }
    bufp->chgBit(oldp+15,(vlSelf->clk));
    bufp->chgBit(oldp+16,(vlSelf->rst_b));
    bufp->chgIData(oldp+17,(vlSelf->x),24);
    bufp->chgBit(oldp+18,(vlSelf->x_dv));
    bufp->chgIData(oldp+19,(vlSelf->y),25);
    bufp->chgBit(oldp+20,(vlSelf->y_dv));
}

void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_cleanup\n"); );
    // Init
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
