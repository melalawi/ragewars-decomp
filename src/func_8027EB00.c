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

typedef struct func_8027EB00_S1 func_8027EB00_S1;
typedef struct func_8027EB00_S2 func_8027EB00_S2;
struct func_8027EB00_S1 {
    char pad0[0x220];
    char unk220;
};
struct func_8027EB00_S2 {
    char pad0[0x8];
    char unk8;
    char pad8[0x110 - 0x8 - sizeof(char)];
    s32 unk110;
    s32 unk114;
    void *unk118;
};

typedef struct { char pad[0x14]; s32 unk14; } Resource;

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
        func_80272908(&((func_8027EB00_S1 *)(arg1))->unk220, &((func_8027EB00_S2 *)(arg0))->unk8, &delta);
        amount = delta.z;
        if (amount < 0.0f) {
            amount = -amount;
        }
        func_8027DD1C(arg0, (s32)lookup, (s32)arg1, amount);
    }

    if (((func_8027EB00_S2 *)arg0)->unk110 == 0) {
        resource = func_802518DC(0, ((Resource *)((func_8027EB00_S2 *)arg0)->unk118)->unk14,
                                ((Resource *)((func_8027EB00_S2 *)arg0)->unk118)->unk14, 0x18,
                                0, 0, 0, &D_800C9E28, 1);
        if (resource != 0) {
            key = func_8028FE08(*resource,
                                ((Resource *)((func_8027EB00_S2 *)arg0)->unk118)->unk14, 1);
            func_802537D8(0, resource);
            found = func_80254094(0, &sp38, key, &D_800C9E40, 1);
            if (found != 0) {
                ((func_8027EB00_S2 *)arg0)->unk110 = func_8028FE1C(
                    (s32)sp38, key, index % *(s32 *)sp38,
                    &((func_8027EB00_S2 *)(arg0))->unk114);
                func_802537D8(0, (void *)found);
            }
        }
        if (((func_8027EB00_S2 *)arg0)->unk110 == 0) {
            return;
        }
    }

    resource = func_802518DC(0, ((func_8027EB00_S2 *)arg0)->unk110,
                            ((func_8027EB00_S2 *)arg0)->unk110, ((func_8027EB00_S2 *)arg0)->unk114,
                            0, 0, &D_26D7F4, &D_800C9E58, 1);
    if (resource != 0) {
        func_8026DC24(resource, (s32)lookup, 0,
                      (char *)arg0 + (((D_800D297C * 3) << 3) + 0xE0), 0, -1);
        func_802536F4(0, resource);
    }
}
