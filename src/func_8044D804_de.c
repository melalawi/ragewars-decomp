#include "span_16E000/code_8044E2B8.h"
#include "types.h"
#include "common/unused.h"
extern s32 func_80285180_de(void ***, s32);
extern s32 func_8028C198_de(s32, s32);
extern void *func_8028FDB4_de(void *, s32);

void func_8044D804_de(s32 arg0, void ***arg1) {
    void *obj;
    Group_func_8044D794_de *group;
    Piece *piece;
    s32 base;
    s32 count;
    s32 i;

    if (func_80285180_de(arg1, 0) != 0) {
        obj = **arg1;
        group = func_8028FDB4_de(obj, 2);
        count = group->count;
        piece = group->pieces;
        i = 0;
        base = (s32) func_8028FDB4_de(obj, i);
        if (count > 0) {
            do {
                if (piece[i].tag == -1) {
                    piece[i].tag = 0;
                } else {
                    piece[i].tag = func_8028C198_de(arg0, piece[i].tag);
                }
                piece[i].unk18 = base + piece[i].unk18;
                piece[i].unk1C = base + piece[i].unk1C;
                piece[i].unk20 = base + piece[i].unk20;
                piece[i].unk24 = base + piece[i].unk24;
                piece[i].unk28 = base + piece[i].unk28;
                piece[i].unk2C = base + piece[i].unk2C;
                piece[i].unk30 = base + piece[i].unk30;
                piece[i].unk34 = base + piece[i].unk34;
                piece[i].unk38 = base + piece[i].unk38;
                i++;
            } while (i < count);
        }
    }
}

