#include "basetypes.h"

extern void func_802A453C(void *arg0);
extern void func_802A438C(void *, void *);
extern void func_802A4708(s32, void *, s32);
extern void func_802A4DC4(s32, void *, s32);

void func_802A7480(void *arg0, void *arg1) {
    char *node;

    node = *(char **)((char *)arg0 + 0x7528);
    while (node != 0) {
        if (*(s32 *)(node + 0x34) < 0) {
            if (*(s32 *)(node + 0x3C) & 8) {
                func_802A453C(node);
            }
            if (*(s32 *)(node + 0x3C) & 4) {
                func_802A438C(node, arg1);
            }
            if (*(s32 *)(node + 0x48) >= 2) {
                if (*(s32 *)(node + 0x34) >= 0) {
                    func_802A4708(arg0, node, arg1);
                } else {
                    func_802A4DC4(arg0, node, arg1);
                }
            }
        }
        node = *(char **)(node + 4);
    }

    node = *(char **)((char *)arg0 + 0x7528);
    while (node != 0) {
        if (*(s32 *)(node + 0x34) > 0) {
            if (*(s32 *)(node + 0x3C) & 8) {
                func_802A453C(node);
            }
            if (*(s32 *)(node + 0x3C) & 4) {
                func_802A438C(node, arg1);
            }
            if (*(s32 *)(node + 0x48) >= 2) {
                if (*(s32 *)(node + 0x34) >= 0) {
                    func_802A4708(arg0, node, arg1);
                } else {
                    func_802A4DC4(arg0, node, arg1);
                }
            }
        }
        node = *(char **)(node + 4);
    }
}
