#include "basetypes.h"

typedef void (*Callback802B6D04)(void *arg0);

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void **arg1);

typedef struct func_802B6D04_S1 func_802B6D04_S1;
typedef struct func_802B6D04_S2 func_802B6D04_S2;
typedef struct func_802B6D04_S3 func_802B6D04_S3;
typedef struct func_802B6D04_S4 func_802B6D04_S4;
struct func_802B6D04_S1 {
    char pad0[0x48];
    void* unk48;
    char pad48[0x50 - 0x48 - sizeof(void*)];
    char* unk50;
    char pad50[0x78 - 0x50 - sizeof(char*)];
    void* unk78;
};
struct func_802B6D04_S2 {
    char* unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    u16 unkC;
    char padC[0x10 - 0xC - sizeof(u16)];
    void* unk10;
    char pad10[0x14 - 0x10 - sizeof(void*)];
    void* unk14;
};
struct func_802B6D04_S3 {
    char pad0[0x8];
    s32 unk8;
};
struct func_802B6D04_S4 {
    char pad0[0x37];
    u8 unk37;
};

void func_802B6D04(void *arg0, void *arg1) {
    char *cur;
    char *next;
    u16 type;
    s32 type16;

    cur = ((func_802B6D04_S1 *)(arg0))->unk50;
    if (cur != 0) {
        type16 = 0x16;
        do {
            type = ((func_802B6D04_S2 *)(cur))->unkC;
            next = ((func_802B6D04_S2 *)(cur))->unk0;
            if ((type == 0x16 || type == 0x17) &&
                ((func_802B6D04_S2 *)(cur))->unk10 == arg1) {
                ((Callback802B6D04)((func_802B6D04_S1 *)(arg0))->unk78)(
                    ((func_802B6D04_S2 *)(cur))->unk14);
                func_802B7520(cur);
                if (next != 0) {
                    ((func_802B6D04_S3 *)(next))->unk8 = ((func_802B6D04_S3 *)(next))->unk8 +
                                        ((func_802B6D04_S2 *)(cur))->unk8;
                }
                func_802B7550(cur, &((func_802B6D04_S1 *)(arg0))->unk48);
                if ((short)type == type16) {
                    ((func_802B6D04_S4 *)(arg1))->unk37 &= 0xFE;
                } else {
                    ((func_802B6D04_S4 *)(arg1))->unk37 &= 0xFD;
                }
                if (((func_802B6D04_S4 *)(arg1))->unk37 == 0) {
                    break;
                }
            }
            cur = next;
        } while (cur != 0);
    }
}
