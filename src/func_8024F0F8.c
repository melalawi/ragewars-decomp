#include "basetypes.h"

typedef struct { char pad[0x1]; s8 field; } Access_s8_1;
typedef struct { char pad[0x50]; s32 field; } Access_s32_50;
typedef struct { char pad[0x54]; s32 field; } Access_s32_54;
typedef struct { char pad[0x58]; s32 field; } Access_s32_58;
typedef struct { char pad[0x5C]; s32 field; } Access_s32_5C;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_802537D8(s32, void *);
extern s32 func_80254094(s32, void **, s32, void *, s32);
extern s32 func_8028FE08(s32 *, s32, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void func_8026E1F8(void **);
extern void func_802536F4(s32, void *);

extern char D_26D7F4;
extern char D_800C8E98;
extern char D_800C8EB0;
extern char D_800C8EC4;

typedef struct func_8024F0F8_S1 func_8024F0F8_S1;
struct func_8024F0F8_S1 {
    char pad0[0x5C];
    s32 unk5C;
};


void func_8024F0F8(void *arg0) {
    void *sp28;
    void **resource;
    s32 key;
    s32 found;
    s32 index;

    index = ((Access_s8_1 *)(arg0))->field;
    if (index != ((Access_s32_54 *)(arg0))->field) {
        resource = func_802518DC(0, ((Access_s32_50 *)(arg0))->field,
                                ((Access_s32_50 *)(arg0))->field, 0x18,
                                0, 0, 0, &D_800C8E98 + 4, 1);
        if (resource != 0) {
            key = func_8028FE08(*resource, ((Access_s32_50 *)(arg0))->field, 1);
            func_802537D8(0, resource);
            found = func_80254094(0, &sp28, key, &D_800C8EB0, 1);
            if (found != 0) {
                ((Access_s32_58 *)(arg0))->field = func_8028FE1C((s32)sp28, key,
                                                    index % *(s32 *)sp28,
                                                    &((func_8024F0F8_S1 *)(arg0))->unk5C);
                ((Access_s32_54 *)(arg0))->field = index;
                func_802537D8(0, (void *)found);
            }
        }
    }
    if (((Access_s32_58 *)(arg0))->field != 0) {
        resource = func_802518DC(0, ((Access_s32_58 *)(arg0))->field,
                                ((Access_s32_58 *)(arg0))->field, ((Access_s32_5C *)(arg0))->field,
                                0, 0, &D_26D7F4, &D_800C8EC4, 0);
    } else {
        resource = 0;
    }
    if (resource != 0) {
        func_8026E1F8(resource);
        func_802536F4(0, resource);
    }
}
