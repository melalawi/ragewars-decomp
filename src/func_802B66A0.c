#include "basetypes.h"

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void **arg1);

typedef struct func_802B66A0_S1 func_802B66A0_S1;
typedef struct func_802B66A0_S2 func_802B66A0_S2;
typedef struct func_802B66A0_S3 func_802B66A0_S3;
struct func_802B66A0_S1 {
    char pad0[0x48];
    void* unk48;
    char pad48[0x50 - 0x48 - sizeof(void*)];
    char* unk50;
};
struct func_802B66A0_S2 {
    char* unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s16 unkC;
    char padC[0x10 - 0xC - sizeof(s16)];
    s32 unk10;
};
struct func_802B66A0_S3 {
    char pad0[0x8];
    s32 unk8;
};

s32 func_802B66A0(void *arg0, s32 arg1, s32 arg2) {
    s32 amount;
    s32 total;
    s32 result;
    char *next;
    char *cur;

    total = 0;
    cur = ((func_802B66A0_S1 *)(arg0))->unk50;
    result = 1;
    if (cur != 0) {
        do {
            amount = ((func_802B66A0_S2 *)(cur))->unk8;
            next = ((func_802B66A0_S2 *)(cur))->unk0;
            total += amount;
            if (((func_802B66A0_S2 *)(cur))->unkC == 5 && ((func_802B66A0_S2 *)(cur))->unk10 == arg1) {
                if (arg2 < total) {
                    if (next != 0) {
                        ((func_802B66A0_S3 *)(next))->unk8 = ((func_802B66A0_S3 *)(next))->unk8 + amount;
                    }
                    func_802B7520(cur);
                    func_802B7550(cur, &((func_802B66A0_S1 *)(arg0))->unk48);
                    goto done;
                }
                result = 0;
                goto done;
            }
            cur = next;
        } while (cur != 0);
    }
done:
    return result;
}
