#include "basetypes.h"

typedef struct Entry802B6BE4 {
    s16 type;
    s16 pad;
    void *object;
    s32 unused;
} Entry802B6BE4;

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void **arg1);
extern void func_802B8540(void *arg0, void *arg1, s16 arg2);
extern void func_802B8550(void *arg0, void *arg1, s16 arg2, s32 arg3);
extern s32 func_802B51A4(void *, s16 *, s32);

typedef struct func_802B6BE4_S1 func_802B6BE4_S1;
typedef struct func_802B6BE4_S2 func_802B6BE4_S2;
typedef struct func_802B6BE4_S3 func_802B6BE4_S3;
typedef struct func_802B6BE4_S4 func_802B6BE4_S4;
typedef struct func_802B6BE4_S5 func_802B6BE4_S5;
struct func_802B6BE4_S1 {
    char pad0[0x10];
    char* unk10;
};
struct func_802B6BE4_S2 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x30 - 0x24 - sizeof(s32)];
    u8 unk30;
    char pad30[0x33 - 0x30 - sizeof(u8)];
    u8 unk33;
    char pad33[0x34 - 0x33 - sizeof(u8)];
    u8 unk34;
};
struct func_802B6BE4_S3 {
    char pad0[0x14];
    void* unk14;
    char pad14[0x1C - 0x14 - sizeof(void*)];
    s32 unk1C;
    char pad1C[0x48 - 0x1C - sizeof(s32)];
    void* unk48;
    char pad48[0x50 - 0x48 - sizeof(void*)];
    char* unk50;
};
struct func_802B6BE4_S4 {
    char* unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s16 unkC;
    char padC[0x10 - 0xC - sizeof(s16)];
    void* unk10;
};
struct func_802B6BE4_S5 {
    char pad0[0x8];
    s32 unk8;
};

void func_802B6BE4(void *arg0, void *arg1, s32 arg2) {
    char *cur;
    char *next;
    char *object;
    s32 type6;
    Entry802B6BE4 entry;

    object = ((func_802B6BE4_S1 *)(arg1))->unk10;
    if (((func_802B6BE4_S2 *)(object))->unk34 == 0) {
        cur = ((func_802B6BE4_S3 *)(arg0))->unk50;
        if (cur != 0) {
            type6 = 6;
            do {
                next = ((func_802B6BE4_S4 *)(cur))->unk0;
                if (((func_802B6BE4_S4 *)(cur))->unkC == type6 &&
                    ((func_802B6BE4_S4 *)(cur))->unk10 == arg1) {
                    if (next != 0) {
                        ((func_802B6BE4_S5 *)(next))->unk8 = ((func_802B6BE4_S5 *)(next))->unk8 +
                                            ((func_802B6BE4_S4 *)(cur))->unk8;
                    }
                    func_802B7520(cur);
                    func_802B7550(cur, &((func_802B6BE4_S3 *)(arg0))->unk48);
                }
                cur = next;
            } while (cur != 0);
        }
    }
    ((func_802B6BE4_S2 *)(object))->unk33 = 0;
    ((func_802B6BE4_S2 *)(object))->unk34 = 3;
    ((func_802B6BE4_S2 *)(object))->unk30 = 0;
    ((func_802B6BE4_S2 *)(object))->unk24 = ((func_802B6BE4_S3 *)(arg0))->unk1C + arg2;
    func_802B8540(((func_802B6BE4_S3 *)(arg0))->unk14, arg1, 0);
    func_802B8550(((func_802B6BE4_S3 *)(arg0))->unk14, arg1, 0, arg2);
    entry.type = 5;
    entry.object = arg1;
    func_802B51A4(&((func_802B6BE4_S3 *)(arg0))->unk48, &entry, arg2);
}
