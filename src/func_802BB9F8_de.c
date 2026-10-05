#include "span_1000/code_802BB67C.h"
#include "types.h"

extern void *D_800D5280;
extern u64 D_80149B98;
extern s32 D_80149B90;
extern s32 D_80149B94;



void func_802BB9F8_de(void) {
    Node_func_802BB9F8_de *node = (Node_func_802BB9F8_de *)D_800D5280;

    D_80149B98 = 0;
    D_80149B90 = 0;
    D_80149B94 = 0;
    node->field10 = 0;
    node->field8 = 0;
    node->prev = node;
    node->next = node;
    node->field18 = 0;
    node->field1C = 0;
}

/* Arms the CP0 timer interrupt: with interrupts disabled through func_802BCF30_de, reads the Count
   register through func_802BCF00_de into D_8014FE30, sets the Compare register through
   func_802BD150_de to that count plus the requested interval, then restores interrupts. */
extern u32 D_80149BA0;
extern u32 func_802BCF30_de(void);
extern u32 func_802BCF00_de(void);
extern void func_802BD150_de(u32);
extern void func_802BCF50_de(u32);

void func_802BBA4C_de(u64 interval) {
    u64 compare;
    u32 saved = func_802BCF30_de();

    D_80149BA0 = func_802BCF00_de();
    compare = D_80149BA0 + interval;
    func_802BD150_de(compare);
    func_802BCF50_de(saved);
}
