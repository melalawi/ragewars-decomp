#include "common/types.h"
#include "span_1000/code_80299FC4.h"
#include "span_1000/code_802A26F8.h"
#include "span_1000/code_802A31F4.h"
#include "span_16E000/code_8040EBC8.h"
#include "span_16E000/code_80414280.h"
#include "types.h"
#ifndef SHARED_REWORK2_SELECTION_STATE_H
#define SHARED_REWORK2_SELECTION_STATE_H
#include "types.h"

extern struct Triple D_800CDA20;
#endif

#include "types.h"





extern void func_802A2394_de(void);


void func_802A2434_de(void) {
    s32 *selected;

    func_80299468_de();
    func_804101BC_de();
    func_802A176C_de();
    func_80414384_de();
    selected = &D_800CDA20.z;
    *selected = 0;
    func_802A2394_de();
    D_800CDA20.x = 0;
}
