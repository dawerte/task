// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"
#include "Vquadra_top___024root.h"

void Vquadra_top___024root___eval_act(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_act\n"); );
}

extern const VlUnpacked<SData/*13:0*/, 128> Vquadra_top__ConstPool__TABLE_h85676e04_0;
extern const VlUnpacked<SData/*12:0*/, 128> Vquadra_top__ConstPool__TABLE_hcf8a9078_0;
extern const VlUnpacked<SData/*11:0*/, 128> Vquadra_top__ConstPool__TABLE_hd79e3f37_0;

VL_INLINE_OPT void Vquadra_top___024root___nba_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->quadra_top__DOT__x1 = (0x7fU & (vlSelf->x 
                                            >> 0x11U));
    vlSelf->quadra_top__DOT__quadra_inst__DOT__y_sum 
        = (0x3ffffffU & ((vlSelf->quadra_top__DOT__quadra_inst__DOT__t0 
                          + (0x1ffffffU & (vlSelf->quadra_top__DOT__quadra_inst__DOT__t1 
                                           >> 5U))) 
                         + (0x1ffffffU & (IData)((vlSelf->quadra_top__DOT__quadra_inst__DOT__t2 
                                                  >> 0xbU)))));
    vlSelf->y = (0x1ffffffU & vlSelf->quadra_top__DOT__quadra_inst__DOT__y_sum);
    vlSelf->quadra_top__DOT__quadra_inst__DOT__t0 = 
        (0x1ffffffU & VL_EXTENDS_II(25,14, (IData)(vlSelf->quadra_top__DOT__quadra_inst__DOT__a)));
    vlSelf->quadra_top__DOT__quadra_inst__DOT__t1 = 
        (0x3fffffffU & ((IData)(vlSelf->quadra_top__DOT__quadra_inst__DOT__b) 
                        * vlSelf->quadra_top__DOT__x2));
    vlSelf->quadra_top__DOT__quadra_inst__DOT__t2 = 
        (0xfffffffffULL & ((QData)((IData)(vlSelf->quadra_top__DOT__quadra_inst__DOT__c)) 
                           * (QData)((IData)((0xffffffU 
                                              & (IData)(
                                                        (0xffffffULL 
                                                         & (((QData)((IData)(vlSelf->quadra_top__DOT__x2)) 
                                                             * (QData)((IData)(vlSelf->quadra_top__DOT__x2))) 
                                                            >> 0xaU))))))));
    __Vtableidx1 = vlSelf->quadra_top__DOT__x1;
    vlSelf->quadra_top__DOT__quadra_inst__DOT__a = 
        Vquadra_top__ConstPool__TABLE_h85676e04_0[__Vtableidx1];
    __Vtableidx2 = vlSelf->quadra_top__DOT__x1;
    vlSelf->quadra_top__DOT__quadra_inst__DOT__b = 
        Vquadra_top__ConstPool__TABLE_hcf8a9078_0[__Vtableidx2];
    __Vtableidx3 = vlSelf->quadra_top__DOT__x1;
    vlSelf->quadra_top__DOT__quadra_inst__DOT__c = 
        Vquadra_top__ConstPool__TABLE_hd79e3f37_0[__Vtableidx3];
    vlSelf->quadra_top__DOT__x2 = (0x1ffffU & vlSelf->x);
}

VL_INLINE_OPT void Vquadra_top___024root___nba_sequent__TOP__1(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->quadra_top__DOT__dv_p2 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->quadra_top__DOT__dv_p1));
    vlSelf->y_dv = vlSelf->quadra_top__DOT__dv_p2;
    vlSelf->quadra_top__DOT__dv_p1 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->quadra_top__DOT__dv_p0));
    vlSelf->quadra_top__DOT__dv_p0 = ((IData)(vlSelf->rst_b) 
                                      && (IData)(vlSelf->x_dv));
}

void Vquadra_top___024root___eval_nba(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vquadra_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vquadra_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vquadra_top___024root___eval_triggers__act(Vquadra_top___024root* vlSelf);

bool Vquadra_top___024root___eval_phase__act(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vquadra_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vquadra_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vquadra_top___024root___eval_phase__nba(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vquadra_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__nba(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(Vquadra_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vquadra_top___024root___eval(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/maciek/Desktop/intel/lu373029e02/rtl-model/quadra_top.vs", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vquadra_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/maciek/Desktop/intel/lu373029e02/rtl-model/quadra_top.vs", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vquadra_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vquadra_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vquadra_top___024root___eval_debug_assertions(Vquadra_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_b & 0xfeU))) {
        Verilated::overWidthError("rst_b");}
    if (VL_UNLIKELY((vlSelf->x & 0xff000000U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((vlSelf->x_dv & 0xfeU))) {
        Verilated::overWidthError("x_dv");}
}
#endif  // VL_DEBUG
