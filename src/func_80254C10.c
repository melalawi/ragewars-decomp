#include "basetypes.h"

typedef struct Node80254C10 {
    u32 start;
    u32 end;
    s32 unk8;
    volatile u32 flags;
    char pad10[0x14];
    struct Node80254C10 *next;
} Node80254C10;

extern Node80254C10 *D_80104584;
extern s32 func_80255CB4(void *, s32);
extern void func_80255D10(void *, s32, s32);

void func_80254C10(s32 unused, Node80254C10 *node) {
    Node80254C10 *scan;

    scan = D_80104584;
    while (scan != 0) {
        if (scan->start > node->start) {
            func_80255D10(&D_80104584, (s32)scan, (s32)node);
            break;
        }
        scan = scan->next;
    }
    if (scan == 0) {
        func_80255CB4(&D_80104584, (s32)node);
    }
    node->flags |= 0x1000;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ED1EE_14[] = {0x00, 0xEE, 0x00, 0x00, 0x00, 0xEF, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xF1, 0x00, 0x00, 0x00, 0xF2, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_801002A4_4[] = {0xD2, 0x11, 0xFF, 0x10};
#endif
