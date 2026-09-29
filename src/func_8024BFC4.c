#include "basetypes.h"

typedef struct { char pad[0xCC]; s32 field; } Access_s32_CC;
typedef struct { char pad[0xD4]; s32 field; } Access_s32_D4;
typedef struct { char pad[0xD8]; s32 field; } Access_s32_D8;
typedef struct { char pad[0xDC]; s32 field; } Access_s32_DC;
typedef struct { char pad[0xE0]; s32 field; } Access_s32_E0;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void func_802536F4(s32, void *);

extern char D_26D814;
extern char D_800C8C18;
extern char D_800C8C2C;

typedef struct func_8024BFC4_S1 func_8024BFC4_S1;
struct func_8024BFC4_S1 {
    char pad0[0xE0];
    s32 unkE0;
};


void **func_8024BFC4(void *arg0, s32 arg1) {
    void **resource;

    if (arg1 < 0) {
        return 0;
    }
    if (arg1 != ((Access_s32_D8 *)(arg0))->field) {
        resource = func_802518DC(0, ((Access_s32_CC *)(arg0))->field,
                                 ((Access_s32_CC *)(arg0))->field, ((Access_s32_D4 *)(arg0))->field,
                                 0, 0, 0, &D_800C8C18, 1);
        if (resource != 0) {
            ((Access_s32_DC *)(arg0))->field = func_8028FE1C((s32)*resource,
                                                ((Access_s32_CC *)(arg0))->field,
                                                arg1 % *(s32 *)*resource,
                                                &((func_8024BFC4_S1 *)(arg0))->unkE0);
            ((Access_s32_D8 *)(arg0))->field = arg1;
            func_802536F4(0, resource);
        }
    }
    if (((Access_s32_DC *)(arg0))->field != 0) {
        return func_802518DC(0, ((Access_s32_DC *)(arg0))->field,
                             ((Access_s32_DC *)(arg0))->field, ((Access_s32_E0 *)(arg0))->field,
                             0, 0, &D_26D814, &D_800C8C2C, 0);
    }
    return 0;
}
