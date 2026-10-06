#include "span_16E000/code_8044E2B8.h"
#include "span_C76B0/data.h"
#include "types.h"
#include "common/unused.h"


extern s32 func_80285180_de(void ***, s32);
extern void *func_8028FDB4_de(void *, s32);

void func_8044D934_de(s32 arg0, void ***arg1) {
    f32 scale;
    void *obj;
    Ent *ent;
    s32 count;
    s32 i;

    scale = D_800C5304_de;
    if (func_80285180_de(arg1, 0) != 0) {
        obj = **arg1;
        count = *(s32 *) obj;
        for (i = 0; i < count; i++) {
            ent = func_8028FDB4_de(obj, i);
            switch (ent->kind) {
            case 1:
                ent->unk28 = ent->unk28 * scale;
                ent->unk30 = ent->unk30 * scale;
                ent->unk34 = ent->unk34 * scale;
                ent->unk50 = ent->unk50 * scale;
                ent->unk54 = ent->unk54 * scale;
                ent->unk58 = ent->unk58 * scale;
                break;
            case 11:
                ent->unkEC = ent->unkEC * scale;
                ent->unkF0 = ent->unkF0 * scale;
                break;
            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                break;
            }
        }
    }
}

