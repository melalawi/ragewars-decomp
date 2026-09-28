#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_801450B8;
extern s32 D_800D297C;
extern char D_8011FFB0;
extern char D_800C9E28;
extern char D_800C9E40;
extern char D_800C9E58;
extern char D_26D7F4;

extern s32 func_80279A30(void *, s32);
extern void func_80272908(void *, void *, Vec3 *);
extern void func_8027DD1C(void *, s32, s32, f32);
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 func_8028FE08(s32 *, s32, s32);
extern void func_802537D8(s32, void *);
extern s32 func_80254094(s32, void **, s32, void *, s32);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void func_8026DC24(void **, s32, s32, void *, s32, s32);
extern void func_802536F4(s32, void *);

#define AT(t, p, o) (*(t *)((char *)(p) + (o)))

void func_8027EB00(void *arg0, void *arg1) {
    Vec3 delta;
    void *sp38;
    void *lookup;
    void **resource;
    s32 key;
    s32 found;
    s32 index;
    f32 amount;

    index = 0;
    if (D_801450B8 == 1) {
        lookup = (char *)arg0 + ((D_800D297C << 6) + 0x60);
    } else {
        lookup = (void *)func_80279A30(&D_8011FFB0, 1);
        if (lookup == 0) {
            return;
        }
        func_80272908((char *)arg1 + 0x220, (char *)arg0 + 8, &delta);
        amount = delta.z;
        if (amount < 0.0f) {
            amount = -amount;
        }
        func_8027DD1C(arg0, (s32)lookup, (s32)arg1, amount);
    }

    if (AT(s32, arg0, 0x110) == 0) {
        resource = func_802518DC(0, AT(s32, AT(void *, arg0, 0x118), 0x14),
                                AT(s32, AT(void *, arg0, 0x118), 0x14), 0x18,
                                0, 0, 0, &D_800C9E28, 1);
        if (resource != 0) {
            key = func_8028FE08(*resource,
                                AT(s32, AT(void *, arg0, 0x118), 0x14), 1);
            func_802537D8(0, resource);
            found = func_80254094(0, &sp38, key, &D_800C9E40, 1);
            if (found != 0) {
                AT(s32, arg0, 0x110) = func_8028FE1C(
                    (s32)sp38, key, index % *(s32 *)sp38,
                    (s32 *)((char *)arg0 + 0x114));
                func_802537D8(0, (void *)found);
            }
        }
        if (AT(s32, arg0, 0x110) == 0) {
            return;
        }
    }

    resource = func_802518DC(0, AT(s32, arg0, 0x110),
                            AT(s32, arg0, 0x110), AT(s32, arg0, 0x114),
                            0, 0, &D_26D7F4, &D_800C9E58, 1);
    if (resource != 0) {
        func_8026DC24(resource, (s32)lookup, 0,
                      (char *)arg0 + (((D_800D297C * 3) << 3) + 0xE0), 0, -1);
        func_802536F4(0, resource);
    }
}
