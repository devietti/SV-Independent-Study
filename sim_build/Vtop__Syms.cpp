// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_I2C_main);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(31);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_I2C_main.configure(this, name(), "I2C_main", "I2C_main", "I2C_main", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_I2C_main);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_I2C_main.varInsert(__Vfinal,"addressFromMaster", &(TOP.I2C_main__DOT__addressFromMaster), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"address_check", &(TOP.I2C_main__DOT__address_check), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"bit_count", &(TOP.I2C_main__DOT__bit_count), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"counter", &(TOP.I2C_main__DOT__counter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"dataByte", &(TOP.I2C_main__DOT__dataByte), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"negEdgeSwitch", &(TOP.I2C_main__DOT__negEdgeSwitch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"registerAddress", &(TOP.I2C_main__DOT__registerAddress), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"repeated_start", &(TOP.I2C_main__DOT__repeated_start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"rw", &(TOP.I2C_main__DOT__rw), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"scl_1x", &(TOP.I2C_main__DOT__scl_1x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"scl_4x", &(TOP.I2C_main__DOT__scl_4x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"scl_o", &(TOP.I2C_main__DOT__scl_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"sda_i", &(TOP.I2C_main__DOT__sda_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"sda_o", &(TOP.I2C_main__DOT__sda_o), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"sda_o2", &(TOP.I2C_main__DOT__sda_o2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"sendStart", &(TOP.I2C_main__DOT__sendStart), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"state", &(TOP.I2C_main__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"stateHolder", &(TOP.I2C_main__DOT__stateHolder), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"stateHolderNeg", &(TOP.I2C_main__DOT__stateHolderNeg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"tester", &(TOP.I2C_main__DOT__tester), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_I2C_main.varInsert(__Vfinal,"writeComplete", &(TOP.I2C_main__DOT__writeComplete), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"scl_4x", &(TOP.scl_4x), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"scl_o", &(TOP.scl_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"sda_i", &(TOP.sda_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"sda_o", &(TOP.sda_o), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
    }
}
