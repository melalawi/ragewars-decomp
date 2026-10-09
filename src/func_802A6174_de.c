#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802A6AC0.h"
#include "types.h"

extern s32 D_800D297C;



extern void func_80270910_de(f32 *, s32);
extern void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272828_de(f32 *arg0);
extern void func_802732D0_de(char *object, float *output);
extern void func_802732EC_de(void *arg0, f32 *arg1);
extern void func_8027027C_de(void *arg0, s32 arg1);














void func_802A6174_de(void *arg0, void *arg1) {
    f32 local[16];
    f32 scale;
    void *entry;
    UnitMtx *dst;
    UnitMtx *src;
    u8 *cursor;
    u8 *dst_cursor;
    u8 *src_cursor;

    entry = ((func_802A7164_S1 *)(arg1))->unkB0;
    if (entry != 0) {
        if (entry == (void *)-1) {
            cursor = (u8 *)arg1;
            dst_cursor = cursor + (D_800D297C << 6) + 0x28;
            dst = (UnitMtx *)dst_cursor;
            src_cursor = cursor + ((D_800D297C ^ 1) << 6) + 0x28;
            src = (UnitMtx *)src_cursor;
            *dst = *src;
            ((func_802A7164_S1 *)(arg1))->unkB0 = 0;
        } else {
            func_80270910_de(local, entry + ((D_800D297C << 6) + 0x60));
            scale = D_800C5EB8_de;
            if (((func_80204468_S3 *)(((func_802A68A0_S3 *)(entry))->unk118))->unk14 != 0) {
                scale = D_800C5EBC_de;
            }
            func_8027347C_de(local, scale, scale, scale);
            func_80272828_de(local);
            func_802732D0_de((char *)local, &((func_802A7164_S1 *)(arg1))->unk10);
            if (((func_802A7164_S4 *)(arg0))->unk3C & 4) {
                func_802732EC_de(local, &((func_802A7164_S1 *)(arg1))->unk1C);
            } else {
                func_8027027C_de(local, arg1 + ((D_800D297C << 6) + 0x28));
            }
        }
        ((func_802A7164_S1 *)(arg1))->unk8 = ((func_80212828_S7 *)(((func_802A7164_S4 *)(arg0))->unk8))->unk8;
    }
}
