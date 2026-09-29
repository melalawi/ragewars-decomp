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

typedef struct func_802A7164_S1 func_802A7164_S1;
typedef struct func_802A7164_S2 func_802A7164_S2;
typedef struct func_802A7164_S3 func_802A7164_S3;
typedef struct func_802A7164_S4 func_802A7164_S4;
typedef struct func_802A7164_S5 func_802A7164_S5;
struct func_802A7164_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x1C - 0x10 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0xB0 - 0x1C - sizeof(f32)];
    void* unkB0;
};
struct func_802A7164_S2 {
    char pad0[0x118];
    void* unk118;
};
struct func_802A7164_S3 {
    char pad0[0x14];
    s32 unk14;
};
struct func_802A7164_S4 {
    char pad0[0x8];
    void* unk8;
    char pad8[0x3C - 0x8 - sizeof(void*)];
    u32 unk3C;
};
struct func_802A7164_S5 {
    char pad0[0x8];
    f32 unk8;
};

void func_802A7164(void *arg0, void *arg1) {
    f32 local[16];
    f32 scale;
    void *entry;
    Block64 *dst;
    Block64 *src;
    u8 *cursor;
    u8 *dst_cursor;
    u8 *src_cursor;

    entry = ((func_802A7164_S1 *)(arg1))->unkB0;
    if (entry != 0) {
        if (entry == (void *)-1) {
            cursor = (u8 *)arg1;
            dst_cursor = cursor + (D_800D297C << 6) + 0x28;
            dst = (Block64 *)dst_cursor;
            src_cursor = cursor + ((D_800D297C ^ 1) << 6) + 0x28;
            src = (Block64 *)src_cursor;
            *dst = *src;
            ((func_802A7164_S1 *)(arg1))->unkB0 = 0;
        } else {
            func_80270980(local, entry + ((D_800D297C << 6) + 0x60));
            scale = D_800CB048;
            if (((func_802A7164_S3 *)(((func_802A7164_S2 *)(entry))->unk118))->unk14 != 0) {
                scale = D_800CB04C;
            }
            func_802734EC(local, scale, scale, scale);
            func_80272898(local);
            func_80273340((char *)local, &((func_802A7164_S1 *)(arg1))->unk10);
            if (((func_802A7164_S4 *)(arg0))->unk3C & 4) {
                func_8027335C(local, &((func_802A7164_S1 *)(arg1))->unk1C);
            } else {
                func_802702EC(local, arg1 + ((D_800D297C << 6) + 0x28));
            }
        }
        ((func_802A7164_S1 *)(arg1))->unk8 = ((func_802A7164_S5 *)(((func_802A7164_S4 *)(arg0))->unk8))->unk8;
    }
}
