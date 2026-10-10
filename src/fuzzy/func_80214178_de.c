#include "types.h"
#include "shared/func_804220A8_de_closed.h"
#include "span_1000/code_80204E78.h"
#include "common/unused.h"
typedef void (*Callback)(void *, void *);

typedef struct { void * field; } Access_void_0;
typedef struct { char pad[0x1C]; s32 field; } Access_s32_1C;
typedef struct { char pad[0x20]; s32 field; } Access_s32_20;
typedef struct { char pad[0x24]; s32 field; } Access_s32_24;
typedef struct { char pad[0x2C]; void * field; } Access_void_2C;
typedef struct { char pad[0x34]; u8 field; } Access_u8_34;
typedef struct { char pad[0x34]; s8 field; } Access_s8_34;
typedef struct { char pad[0x3C]; s32 field; } Access_s32_3C;
typedef struct { char pad[0xFC]; s32 field; } Access_s32_FC;
typedef struct { char pad[0x100]; u32 field; } Access_u32_100;
typedef struct { char pad[0x2E0]; u32 field; } Access_u32_2E0;


extern void func_80217388_de(void *, void *);

typedef struct func_80214178_S1 func_80214178_S1;
typedef struct func_80214178_S2 func_80214178_S2;
struct func_80214178_S1 {
    char pad0[0x20];
    s32 unk20;
};
struct func_80214178_S2 {
    char pad0[0x20];
    s32 unk20;
};

s32 func_80214178_de(void *arg0, void *arg1, s32 arg2) {
    void *node;
    s32 *entry;
    s32 *scan;
    s32 flags;

    if (D_8011FE88 == 2) {
        return 1;
    }
    if (D_8011FE88 == 4) {
        ((Access_u32_100 *)(arg0))->field |= 0x100;
    }

    ((Access_u8_36 *)(arg1))->field = ((Access_u8_34 *)(arg1))->field;
    ((Access_u8_10F *)(arg0))->field = 1;
    ((Access_u8_123 *)(arg0))->field = 1;
    if ((((Access_void_30 *)(arg1))->field != 0) && (((Access_s8_34 *)(arg1))->field == arg2)) {
        return 1;
    }

    node = ((Access_void_2C *)(arg1))->field;
    entry = 0;
    ((Access_s8_34 *)(arg1))->field = arg2;
    ((Access_s32_40 *)(arg1))->field = 0;
    while (node != 0) {
        scan = &((func_80214178_S1 *)(node))->unk20;
        if (*scan != -1) {
            while (*scan != -1) {
                if (*scan == arg2) {
                    entry = scan;
                    node = 0;
                    break;
                }
                scan = &((func_80214178_S2 *)(scan))->unk20;
            }
        }
        if (node != 0) {
            node = ((Access_void_0 *)(node))->field;
        }
    }

    if (entry == 0) {
        return 0;
    }

    ((Access_s32_30 *)(arg1))->field = entry;
    ((Access_u32_2E0 *)(arg0))->field &= 0x1F80007F;
    if ((((Access_u32_100 *)(arg0))->field & 0x08000000) == 0) {
        ((Access_u8_CB *)(arg1))->field = 0;
        ((Access_u32_0 *)(arg1))->field &= ~1U;
    }
    if (((Access_s32_FC *)(arg1))->field != 0) {
        func_80217388_de(arg0, arg1);
    }
    if (((Access_Callback_4 *)(entry))->field != 0) {
        ((Access_Callback_4 *)(entry))->field(arg0, arg1);
    }
    flags = entry[7];
    ((Access_s32_3C *)(arg1))->field = flags;
    if (flags & 4) {
        ((Access_s32_1C *)(arg0))->field = 0;
        ((Access_s32_20 *)(arg0))->field = 0;
        ((Access_s32_24 *)(arg0))->field = 0;
    }
    return ((Access_s8_34 *)(arg1))->field == arg2;
}

