#include "basetypes.h"

/* Initialises a world's object pools: sets up two fixed-size node stores through func_80279620, puts all 96 0xB8-byte actor slots on the actor free list through func_80279520 and func_80279578, initialises the sound list and its ten channel lists through func_80255C40 and adds all 100 0x50-byte sound slots to it through func_80255CB4, then clears the world's two counters and resets it through func_802A6670. */
extern void func_80279620(char *, char *, s32, s32);
extern void func_80279520(char *);
extern void func_80279578(char *, char *);
extern void func_80255C40(char *, s32, s32);
extern void func_80255CB4(char *, char *);
extern void func_802A6670(char *);

typedef struct func_8044EBB0_S1 func_8044EBB0_S1;
struct func_8044EBB0_S1 {
    char pad0[0x2588];
    s32 unk2588;
};

void func_8044EBB0(char *w) {
    s32 i;

    func_80279620(w + 0x751C, w + 0x6A9C, 0x54, 0x20);
    func_80279620(w + 0x7588, w + 0x7534, 0x1C, 3);
    func_80279520((char *)w + 0x6A90);
    for (i = 0; i < 96; i++) {
        func_80279578(w + 0x6A90, w + 0x2590 + i * 0xB8);
    }
    func_80255C40(w + 0x95A8, 0, 4);
    for (i = 0; i < 10; i++) {
        func_80255C40(w + 0x94E0 + i * 0x14, 0, 4);
    }
    for (i = 0; i < 100; i++) {
        func_80255CB4(w + 0x95A8, w + 0x75A0 + i * 0x50);
    }
    *(s32 *)w = 0;
    ((func_8044EBB0_S1 *)(w))->unk2588 = 0;
    func_802A6670(w);
}
