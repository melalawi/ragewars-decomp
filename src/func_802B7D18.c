#include "basetypes.h"

extern s32 func_802C2260(s32);
extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void *arg1);

typedef struct func_802B7D18_S1 func_802B7D18_S1;
typedef struct func_802B7D18_S2 func_802B7D18_S2;
typedef struct func_802B7D18_S3 func_802B7D18_S3;
struct func_802B7D18_S1 {
    char pad0[0x8];
    char* unk8;
};
struct func_802B7D18_S2 {
    char* unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    s32 unk10;
};
struct func_802B7D18_S3 {
    char pad0[0x8];
    s32 unk8;
};

void func_802B7D18(void *arg0, s32 arg1) {
    s32 saved;
    char *cur;
    char *next;

    saved = func_802C2260(1);
    cur = ((func_802B7D18_S1 *)(arg0))->unk8;
    if (cur != 0) {
        do {
            next = ((func_802B7D18_S2 *)(cur))->unk0;
            if (((func_802B7D18_S2 *)(cur))->unk10 == arg1) {
                if (next != 0) {
                    ((func_802B7D18_S3 *)(next))->unk8 = ((func_802B7D18_S3 *)(next))->unk8 + ((func_802B7D18_S2 *)(cur))->unk8;
                }
                func_802B7520(cur);
                func_802B7550(cur, arg0);
            }
            cur = next;
        } while (cur != 0);
    }
    func_802C2260(saved);
}
