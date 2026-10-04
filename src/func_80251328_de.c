#include "span_1000/code_8024F944.h"
#include "types.h"
/* Reclaims one pool node: finds the first unlocked node (none of flags 0x702) in the D_80104574 list that
 * was last used five or more frames ago, falling back unless keep_recent is set to the first unlocked node
 * even if recent; the node's resource is released through func_80254DD0_de and func_80255B2C_de, it is unlinked
 * from its lists, cleared, and pushed back on the free stack, returning func_80255B2C_de's result (0 when no
 * node could be reclaimed). */



extern Node_func_80251328_de *D_80100574;
extern Node_func_80251328_de *D_80100568;
extern Node_func_80251328_de **D_80100564;
extern s32 D_8010113C;
extern s32 D_80101180;
extern char D_801011A0;
extern char D_80100570;
extern char D_80100584;
extern void func_80254DD0_de(void *, Node_func_80251328_de *);
extern s32 func_80255B2C_de(void *, s32);
extern void func_80255ED8_de(void *, Node_func_80251328_de *);

static inline Node_func_80251328_de *find_stale(Node_func_80251328_de **recent) {
    Node_func_80251328_de *node;

    for (node = D_80100574; node != 0; node = node->next) {
        if (!(node->flags & 0x702)) {
            if ((u32)(D_80101180 - node->lastUsed) >= 5) {
                return node;
            }
            *recent = node;
            break;
        }
    }
    for (; node != 0; node = node->next) {
        if (!(node->flags & 0x702) && (u32)(D_80101180 - node->lastUsed) >= 5) {
            return node;
        }
    }
    return 0;
}

s32 func_80251328_de(s32 unused0, s32 unused1, s32 keep_recent) {
    Node_func_80251328_de *recent;
    Node_func_80251328_de *node;
    s32 result;

    recent = 0;
    node = find_stale(&recent);
    if (node == 0) {
        if (keep_recent == 0) {
            node = recent;
        }
    }
    if (node != 0) {
        func_80254DD0_de(0, node);
        result = func_80255B2C_de(&D_801011A0, node->resource);
        func_80255ED8_de(&D_80100570, node);
        if (node->flags & 0x1000) {
            func_80255ED8_de(&D_80100584, node);
        }
        if (D_80100568 == node) {
            D_80100568 = 0;
            node->flags = 0;
        } else {
            node->flags = 0;
        }
        *(Node_func_80251328_de **)(D_8010113C * 4 + (char *)D_80100564) = node;
        D_8010113C++;
        return result;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE564_4[] = {0x00, 0x43, 0x10, 0x21};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F0CC8_4[] = {0x00, 0x00, 0x00, 0x02};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EB194_C[] = {0x80, 0x0D, 0xD7, 0x60, 0x80, 0x0D, 0xD7, 0x6C, 0x80, 0x0D, 0xD7, 0x78};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800F1C84_C[] = {0xFF, 0xFF, 0xFF, 0xEC, 0xFF, 0xFF, 0xFF, 0xEC, 0x80, 0x0D, 0x33, 0x10};
#endif
