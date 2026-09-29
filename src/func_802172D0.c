#include "basetypes.h"

extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);
extern void *func_8025C97C(void *, s32, void *, void *, s32);

typedef struct func_802172D0_S1 func_802172D0_S1;
typedef struct func_802172D0_S2 func_802172D0_S2;
typedef struct func_802172D0_S3 func_802172D0_S3;
struct func_802172D0_S1 {
    char pad0[0xFC];
    void* unkFC;
};
struct func_802172D0_S2 {
    char pad0[0xC];
    s32 unkC;
};
struct func_802172D0_S3 {
    char pad0[0x8];
    char unk8;
    char pad8[0xD0 - 0x8 - sizeof(char)];
    void* unkD0;
};

void func_802172D0(void *arg0, void *arg1, s32 arg2) {
    void *node;
    void *fallback;
    s32 kind;

    node = ((func_802172D0_S1 *)(arg1))->unkFC;
    fallback = (void *)-1;
    if (node != 0) {
        if (((func_802172D0_S2 *)(node))->unkC == arg2) {
            return;
        }
        func_8025CA44(func_8025CC8C(), ((func_802172D0_S1 *)(arg1))->unkFC);
    }

    kind = *(u8 *)arg0;
    if (kind != 0) {
        if (kind >= 0) {
            if (kind < 3) {
                fallback = arg0;
            }
        }
    } else {
        fallback = ((func_802172D0_S3 *)(arg0))->unkD0;
    }

    ((func_802172D0_S1 *)(arg1))->unkFC =
        func_8025C97C(func_8025CC8C(), arg2, &((func_802172D0_S3 *)(arg0))->unk8,
                      &((func_802172D0_S3 *)(arg0))->unk8, (s32)fallback);
}
