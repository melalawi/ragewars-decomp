#include "basetypes.h"

typedef struct { char pad[0x1C]; s32 field; } Access_s32_1C;
typedef struct { char pad[0xA8]; s32 field; } Access_s32_A8;
typedef struct { char pad[0xAC]; s32 field; } Access_s32_AC;
typedef struct { char pad[0xB0]; s32 field; } Access_s32_B0;
typedef struct { char pad[0xB4]; void * field; } Access_void_B4;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_80253610(s32, void *);
extern void func_802537D8(s32, void *);
extern s32 func_80254094(s32, void **, s32, void *, s32);
extern s32 func_8028FE08(s32 *, s32, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);

extern char D_26D7D4;
extern char D_800C8F4C;
extern char D_800C8F70;
extern char D_800C8F84;

typedef struct func_80250754_S1 func_80250754_S1;
struct func_80250754_S1 {
    char pad0[0xB0];
    s32 unkB0;
};


void *func_80250754(void *arg0, s32 arg1) {
    void *sp28;
    void **resource;
    s32 key;
    s32 found;

    if (((Access_void_B4 *)(arg0))->field != 0) {
        func_80253610(0, ((Access_void_B4 *)(arg0))->field);
        return ((Access_void_B4 *)(arg0))->field;
    }
    if (arg1 != ((Access_s32_A8 *)(arg0))->field) {
        resource = func_802518DC(0, ((Access_s32_1C *)(arg0))->field,
                                ((Access_s32_1C *)(arg0))->field, 0x18,
                                0, 0, 0, &D_800C8F4C, 1);
        if (resource != 0) {
            key = func_8028FE08(*resource, ((Access_s32_1C *)(arg0))->field, 1);
            func_802537D8(0, resource);
            found = func_80254094(0, &sp28, key, &D_800C8F70, 1);
            if (found != 0) {
                ((Access_s32_AC *)(arg0))->field = func_8028FE1C((s32)sp28, key,
                                                    arg1 % *(s32 *)sp28,
                                                    &((func_80250754_S1 *)(arg0))->unkB0);
                ((Access_s32_A8 *)(arg0))->field = arg1;
                func_802537D8(0, (void *)found);
            }
        }
    }
    if (((Access_s32_AC *)(arg0))->field != 0) {
        return func_802518DC(0, ((Access_s32_AC *)(arg0))->field, ((Access_s32_AC *)(arg0))->field,
                             ((Access_s32_B0 *)(arg0))->field, 0, 0,
                             &D_26D7D4, &D_800C8F84, 0);
    }
    return 0;
}
