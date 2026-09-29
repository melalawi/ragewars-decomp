#include "basetypes.h"

extern void func_802A453C(void *arg0);
extern void func_802A438C(void *, void *);
extern void func_802A4708(s32, void *, s32);
extern void func_802A4DC4(s32, void *, s32);

typedef struct func_802A7480_S1 func_802A7480_S1;
typedef struct func_802A7480_S2 func_802A7480_S2;
struct func_802A7480_S1 {
    char pad0[0x7528];
    char* unk7528;
};
struct func_802A7480_S2 {
    char pad0[0x4];
    char* unk4;
    char pad4[0x34 - 0x4 - sizeof(char*)];
    s32 unk34;
    char pad34[0x3C - 0x34 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x48 - 0x3C - sizeof(s32)];
    s32 unk48;
};

void func_802A7480(void *arg0, void *arg1) {
    char *node;

    node = ((func_802A7480_S1 *)(arg0))->unk7528;
    while (node != 0) {
        if (((func_802A7480_S2 *)(node))->unk34 < 0) {
            if (((func_802A7480_S2 *)(node))->unk3C & 8) {
                func_802A453C(node);
            }
            if (((func_802A7480_S2 *)(node))->unk3C & 4) {
                func_802A438C(node, arg1);
            }
            if (((func_802A7480_S2 *)(node))->unk48 >= 2) {
                if (((func_802A7480_S2 *)(node))->unk34 >= 0) {
                    func_802A4708(arg0, node, arg1);
                } else {
                    func_802A4DC4(arg0, node, arg1);
                }
            }
        }
        node = ((func_802A7480_S2 *)(node))->unk4;
    }

    node = ((func_802A7480_S1 *)(arg0))->unk7528;
    while (node != 0) {
        if (((func_802A7480_S2 *)(node))->unk34 > 0) {
            if (((func_802A7480_S2 *)(node))->unk3C & 8) {
                func_802A453C(node);
            }
            if (((func_802A7480_S2 *)(node))->unk3C & 4) {
                func_802A438C(node, arg1);
            }
            if (((func_802A7480_S2 *)(node))->unk48 >= 2) {
                if (((func_802A7480_S2 *)(node))->unk34 >= 0) {
                    func_802A4708(arg0, node, arg1);
                } else {
                    func_802A4DC4(arg0, node, arg1);
                }
            }
        }
        node = ((func_802A7480_S2 *)(node))->unk4;
    }
}
