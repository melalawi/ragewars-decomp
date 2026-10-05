#include "span_1000/code_802A6AC0.h"
#include "types.h"

extern void func_802A354C_de(void *arg0);
extern void func_802A339C_de(void *, void *);
extern void func_802A3718_de(s32, void *, s32);
extern void func_802A3DD4_de(s32, void *, s32);






void func_802A6490_de(void *arg0, void *arg1) {
    char *node;

    node = ((func_802A7480_S1 *)(arg0))->unk7528;
    while (node != 0) {
        if (((func_802A7480_S2 *)(node))->unk34 < 0) {
            if (((func_802A7480_S2 *)(node))->unk3C & 8) {
                func_802A354C_de(node);
            }
            if (((func_802A7480_S2 *)(node))->unk3C & 4) {
                func_802A339C_de(node, arg1);
            }
            if (((func_802A7480_S2 *)(node))->unk48 >= 2) {
                if (((func_802A7480_S2 *)(node))->unk34 >= 0) {
                    func_802A3718_de(arg0, node, arg1);
                } else {
                    func_802A3DD4_de(arg0, node, arg1);
                }
            }
        }
        node = ((func_802A7480_S2 *)(node))->unk4;
    }

    node = ((func_802A7480_S1 *)(arg0))->unk7528;
    while (node != 0) {
        if (((func_802A7480_S2 *)(node))->unk34 > 0) {
            if (((func_802A7480_S2 *)(node))->unk3C & 8) {
                func_802A354C_de(node);
            }
            if (((func_802A7480_S2 *)(node))->unk3C & 4) {
                func_802A339C_de(node, arg1);
            }
            if (((func_802A7480_S2 *)(node))->unk48 >= 2) {
                if (((func_802A7480_S2 *)(node))->unk34 >= 0) {
                    func_802A3718_de(arg0, node, arg1);
                } else {
                    func_802A3DD4_de(arg0, node, arg1);
                }
            }
        }
        node = ((func_802A7480_S2 *)(node))->unk4;
    }
}
