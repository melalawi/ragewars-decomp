#include "span_16E000/code_80423280.h"
#include "types.h"



extern s8 D_800FEB0D[][400];
extern s32 D_800FEB6C[][100];
extern s32 D_800FEB74[][100];
extern Rec_func_80424B90_de D_801422D8[];

/* Adds the current record's deltas to both running totals of each player still in play, capping each at 99999. */
void func_80424B90_de(void) {
    s32 i;
    s32 v;
    Rec_func_80424B90_de *rec;

    for (i = 0; i < 4; i++) {
        if (D_800FEB0D[i][0] >= 0) {
            rec = &D_801422D8[i];
            v = D_800FEB6C[i][0] + rec->unk4;
            if (v > 99999) {
                D_800FEB6C[i][0] = 99999;
            } else {
                D_800FEB6C[i][0] = v;
            }
            v = D_800FEB74[i][0] + rec->unk2;
            if (v > 99999) {
                D_800FEB74[i][0] = 99999;
            } else {
                D_800FEB74[i][0] = v;
            }
        }
    }
}
