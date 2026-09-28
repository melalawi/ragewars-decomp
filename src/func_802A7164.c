#include "basetypes.h"

extern s32 D_800D297C;
extern f32 D_800CB048;
extern f32 D_800CB04C;

extern void func_80270980(f32 *, s32);
extern void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272898(f32 *arg0);
extern void func_80273340(char *object, float *output);
extern void func_8027335C(void *arg0, f32 *arg1);
extern void func_802702EC(void *arg0, s32 arg1);

typedef struct {
    s32 words[16];
} Block64;

void func_802A7164(void *arg0, void *arg1) {
    f32 local[16];
    f32 scale;
    void *entry;
    Block64 *dst;
    Block64 *src;

    entry = *(void **)((char *)arg1 + 0xB0);
    if (entry != 0) {
        if (entry == (void *)-1) {
            dst = (Block64 *)((char *)arg1 + (D_800D297C << 6) + 0x28);
            src = (Block64 *)((char *)arg1 + ((D_800D297C ^ 1) << 6) + 0x28);
            *dst = *src;
            *(void **)((char *)arg1 + 0xB0) = 0;
        } else {
            func_80270980(local, entry + ((D_800D297C << 6) + 0x60));
            scale = D_800CB048;
            if (*(s32 *)((char *)*(void **)((char *)entry + 0x118) + 0x14) != 0) {
                scale = D_800CB04C;
            }
            func_802734EC(local, scale, scale, scale);
            func_80272898(local);
            func_80273340((char *)local, (f32 *)((char *)arg1 + 0x10));
            if (*(u32 *)((char *)arg0 + 0x3C) & 4) {
                func_8027335C(local, (f32 *)((char *)arg1 + 0x1C));
            } else {
                func_802702EC(local, arg1 + ((D_800D297C << 6) + 0x28));
            }
        }
        *(f32 *)((char *)arg1 + 8) = *(f32 *)((char *)*(void **)((char *)arg0 + 8) + 8);
    }
}
