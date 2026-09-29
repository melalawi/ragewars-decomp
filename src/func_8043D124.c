/* Points arg0's unk14 field at the entry of D_44FB94 that D_80154030 selects when it is below 12, else at D_800D7E14, and returns 0. */
#include "basetypes.h"

typedef struct {
    void *ptr;
    s32 pad[3];
} Entry;

typedef struct {
    char pad[0x14];
    void *unk14;
} Obj;

extern u32 D_80154030;
extern Entry D_44FB94[];
extern char D_800D7E14;

s32 func_8043D124(Obj *arg0) {
    if (D_80154030 < 12) {
        arg0->unk14 = D_44FB94[D_80154030].ptr;
    } else {
        arg0->unk14 = &D_800D7E14;
    }
    return 0;
}
