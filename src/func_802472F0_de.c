#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "span_1000/code_80260D98.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"




extern void **func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_80261670_de(void *, s32, s32, s32, s32 *, void *);
extern s32 func_802624D8_de(void *);
extern void func_8026193C_de(void *, Vec3 *, f32 *, void *);
extern void *func_80262564_de(void *);
extern void func_80271FC8_de(Vec3 *, f32, Vec3 *, Vec3 *);
extern f32 func_80273EE4_de(f32, f32, f32);

extern void func_80274020_de(f32 *);
extern void func_802736D4_de(Matrix_func_80213CF8_de *, f32);
extern void func_80272898_de(Matrix_func_80213CF8_de *, Vec3 *, Vec3 *);
extern void func_80253754_de(s32, s32);


extern struct Shape_func_8021A2D4_de_2 D_8011BDC8;

extern f32 D_800CD738;


extern char D_800C3930_de;









void func_802472F0_de(void *arg0) {
    Vec3 first;
    Vec3 second;
    Vec3 saved;
    Vec3 moved;
    Matrix_func_80213CF8_de matrix;
    s32 active;
    f32 first_value;
    f32 second_value;
    void **resource;
    void *track0;
    void *track1;
    f32 value;

    if (D_8011BDC8.field_0 == 4) {
        if (((func_802472E0_S1 *)arg0)->unk10F == 0)
            ((func_802472E0_S1 *)arg0)->unk10E = 1;
        if (((func_802472E0_S1 *)arg0)->unk123 == 0)
            ((func_802472E0_S1 *)arg0)->unk122 = 1;
        if (((func_802472E0_S1 *)arg0)->unk10F == 0 && !(((func_802472E0_S1 *)arg0)->unk100 & 0x400))
            return;
        if (!(((func_802472E0_S1 *)arg0)->unk100 & 0x2000))
            return;
    }

    resource = func_8025193C_de(0, ((func_802472E0_S1 *)arg0)->unkC8, ((func_802472E0_S1 *)arg0)->unkC8,
        ((((func_802472E0_S1 *)arg0)->unkE6 * 4) + 0xF) & ~7, 4, 0, 0,
        &D_800C3930_de + 4, 0);
    if (resource == 0)
        return;

    track0 = &((func_802472E0_S1 *)(arg0))->unk104;
    track1 = &((func_802472E0_S1 *)(arg0))->unk118;
    func_80261670_de(track0, (s32)*resource, ((func_802472E0_S1 *)arg0)->unkC8, 1, &active, track1);
    if (func_802624D8_de(track0) != 0) {
        void *entry;
        func_8026193C_de(track0, &first, &first_value, arg0);
        value = first_value;
        saved = first;
        if (active != 0 && ((func_8022E3B4_S3 *)track1)->unk4 != -1) {
            u16 count;
            entry = func_80262564_de(track0);
            if (((func_802472E0_Entry *)entry)->unk0 != 0) {
                ((func_802472E0_S1 *)arg0)->unk100 |= 0x400;
                count = ((func_802472E0_Entry *)entry)->unk0;
                ((func_802472E0_S1 *)arg0)->unk134 = 0.0f;
                ((func_802472E0_S1 *)arg0)->unk12C.unsignedValue = count;
                ((func_802472E0_S1 *)arg0)->unk138 = ((func_802472E0_Entry *)entry)->unk5;
                ((func_802472E0_S1 *)arg0)->unk139 = ((func_802472E0_Entry *)entry)->unk7;
            } else {
                ((func_802472E0_S1 *)arg0)->unk100 &= ~0x400;
            }
        }
        if (((func_802472E0_S1 *)arg0)->unk100 & 0x400) {
            func_80261670_de(track1, (s32)*resource, ((func_802472E0_S1 *)arg0)->unkC8, 0, 0, 0);
            if (func_802624D8_de(track1) != 0) {
                f32 time;
                f32 end;
                time = ((func_802472E0_S1 *)arg0)->unk134 + D_800CD738;
                end = (f32)((func_802472E0_S1 *)arg0)->unk12C.signedValue;
                ((func_802472E0_S1 *)arg0)->unk134 = time;
                if (end < time) {
                    ((func_802472E0_S1 *)arg0)->unk100 &= ~0x400;
                } else {
                    f32 a = (f32)((func_802472E0_S1 *)arg0)->unk139;
                    f32 b = (f32)((func_802472E0_S1 *)arg0)->unk138;
                    f32 t = time / (end + D_800CD738);
                    ((func_802472E0_S1 *)arg0)->unk130 = (((a + D_800C3948_de + b) * t * t * t) +
                        ((((&D_800C3948_de)[1] - a) - (2.0f * b)) * t * t) + (b * t));
                    func_8026193C_de(&((func_802472E0_S1 *)(arg0))->unk118, &second, &second_value, arg0);
                    func_80271FC8_de(&saved, ((func_802472E0_S1 *)arg0)->unk130, &second, &first);
                    value = func_80273EE4_de(((func_802472E0_S1 *)arg0)->unk130, second_value, first_value);
                }
                func_802624A8_de(track1);
            } else {
                ((func_802472E0_S1 *)arg0)->unk100 &= ~0x400;
            }
        }
        func_802624A8_de(track0);
        if (((func_802472E0_S1 *)arg0)->unk100 & 0x20000) {
            ((func_802472E0_S1 *)arg0)->unk6C -= value;
            func_80274020_de(&((func_802472E0_S1 *)(arg0))->unk6C);
            saved.z = saved.y;
            saved.y = 0.0f;
            func_802736D4_de(&matrix, ((func_802472E0_S1 *)arg0)->unk6C);
            func_80272898_de(&matrix, &saved, &moved);
            ((func_802472E0_S1 *)arg0)->unk8 += moved.x * ((func_802472E0_S1 *)arg0)->unk50;
            ((func_802472E0_S1 *)arg0)->unk10 += moved.z * ((func_802472E0_S1 *)arg0)->unk58;
        } else if (!(((func_802472E0_S1 *)arg0)->unk100 & 0x300000) && ((func_802472E0_S1 *)arg0)->unkE4 == 0x137) {
            ((func_802472E0_S1 *)arg0)->unk6C -= value;
            func_80274020_de(&((func_802472E0_S1 *)(arg0))->unk6C);
        }
    }
    func_80253754_de(0, (s32)resource);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3878_4 = (-2.0f);
const float unbake_rodata_800C387C_4 = 3.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8A38_4 = (-2.0f);
const float unbake_rodata_800C8A3C_4 = 3.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3BF8_4 = (-2.0f);
const float unbake_rodata_800C3BFC_4 = 3.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3C38_4 = (-2.0f);
const float unbake_rodata_800C3C3C_4 = 3.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3948_4 = (-2.0f);
const float unbake_rodata_800C394C_4 = 3.0f;
#endif
