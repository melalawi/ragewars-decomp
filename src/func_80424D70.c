#include "basetypes.h"

typedef struct {
    char pad0[2];
    s16 unk2;
    s16 unk4;
    char pad6[0x96 - 6];
} Rec;

extern s8 D_80102B0D[][400];
extern s32 D_80102B6C[][100];
extern s32 D_80102B74[][100];
extern Rec D_80146398[];

/* Adds the current record's deltas to both running totals of each player still in play, capping each at 99999. */
void func_80424D70(void) {
    s32 i;
    s32 v;
    Rec *rec;

    for (i = 0; i < 4; i++) {
        if (D_80102B0D[i][0] >= 0) {
            rec = &D_80146398[i];
            v = D_80102B6C[i][0] + rec->unk4;
            if (v > 99999) {
                D_80102B6C[i][0] = 99999;
            } else {
                D_80102B6C[i][0] = v;
            }
            v = D_80102B74[i][0] + rec->unk2;
            if (v > 99999) {
                D_80102B74[i][0] = 99999;
            } else {
                D_80102B74[i][0] = v;
            }
        }
    }
}
