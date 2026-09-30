/* Selects adjacent animation frames and interpolation weights for a track. */
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
#define NULL ((void *)0)
#if defined(VERSION_US_REV1)
#define TrackUnit D_800C92E8
#define TrackLastUnit D_800C9318
#elif defined(VERSION_US)
#define TrackUnit D_800C4128
#define TrackLastUnit D_800C4158
#elif defined(VERSION_EU)
#define TrackUnit D_800C44A8
#define TrackLastUnit D_800C44D8
#elif defined(VERSION_EU_MUL)
#define TrackUnit D_800C44E8
#define TrackLastUnit D_800C4518
#elif defined(VERSION_DE)
#define TrackUnit D_800C41F8
#define TrackLastUnit D_800C4228
#endif
extern const f32 TrackUnit[2];
extern const f32 TrackLastUnit;
int func_80253294(void *);
void *func_8028FD94(int *, int);
typedef struct func_80261EB8_S1 func_80261EB8_S1;
typedef struct func_80261EB8_S2 func_80261EB8_S2;
typedef struct func_80261EB8_S3 func_80261EB8_S3;
struct func_80261EB8_S1 {
    f32 unk0;
    char pad0[0x4];
    s16 unk8;
    char pad8[0x2];
    s32 unkC;
    s32** unk10;
};
struct func_80261EB8_S2 {
    s8* unk0;
    s8 *unk4;
    s8* unk8;
    s8* unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    f32 unk20;
};
struct func_80261EB8_S3 {
    char pad0[0x8];
    s8 unk8;
};

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x30, 0x34, 0x38, 0x3c], gap at: 0x28. */
void func_80261EB8(func_80261EB8_S1 *arg0, func_80261EB8_S2 *arg1) {
    f32 unit;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f22;
    f32 var_f0;
    s32 **temp_a0;
    s32 *temp_s0;
    s32 *temp_v0;
    s32 temp_a0_2;
    s32 temp_f3;
    s32 temp_f3_2;
    s32 temp_f3_3;
    s32 temp_f3_4;
    s32 temp_f3_5;
    s32 temp_f3_6;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    func_80261EB8_S3 *temp_s1;

    temp_a0 = arg0->unk10;
    if (temp_a0 == NULL) {
        var_v0 = 0;
    } else {
        var_v0 = func_80253294(temp_a0) != 0;
    }
    if (var_v0 != 0) {
        temp_s0 = *arg0->unk10;
        temp_s1 = func_8028FD94(temp_s0, 1);
        temp_v0 = func_8028FD94(temp_s0, 5);
        func_8028FD94(temp_v0, 0);
        var_s0 = arg0->unkC;
        temp_f20 = arg0->unk0;
        temp_f22 = (f32) arg0->unk8;
        arg1->unk0 = &temp_s1->unk8;
        arg1->unk4 = &((func_80261EB8_S3 *)func_8028FD94(temp_s0, 2))->unk8;
        arg1->unk8 = func_8028FD94(temp_v0, 1);
        /* FAKEMATCH: carry the multiplier across the final lookup to obtain the saved float register. */
        unit = TrackUnit[0];
        {
            /* FAKEMATCH: the final chunk lookup only reads the unchanged input table. */
            extern void *func_8028FD94(int *, int) __attribute__((const));
            arg1->unkC = func_8028FD94(temp_v0, 2);
        }
        if (temp_f20 >= 0.0f) {
            var_v0_2 = (s32) temp_f20;
            goto block_8;
        }
        temp_f3 = (s32) temp_f20;
        var_f0 = (f32) temp_f3;
        if (var_f0 != temp_f20) {
            var_v0_2 = temp_f3 - 1;
block_8:
            var_f0 = (f32) var_v0_2;
        }
        arg1->unk20 = (f32) (temp_f20 - var_f0);
        if (var_s0 == 0xFFFF) {
            var_s0 = 0;
            if (temp_f20 >= 0.0f) {
                var_a1 = (s32) temp_f20;
            } else {
                temp_f3_2 = (s32) temp_f20;
                var_a1 = ((f32) temp_f3_2 == temp_f20) ? 0 : 1;
                var_a1 = temp_f3_2 - var_a1;
            }
            if (temp_f22 <= (f32) var_a1) {
                var_a1 = 0;
            }
            var_v1 = var_a1 + 1;
            if (temp_f22 <= (f32) var_v1) {
                var_v1 = 0;
            }
        } else {
            if (temp_f20 >= 0.0f) {
                var_a1 = (s32) temp_f20;
            } else {
                temp_f3_3 = (s32) temp_f20;
                var_a1 = ((f32) temp_f3_3 == temp_f20) ? 0 : 1;
                var_a1 = temp_f3_3 - var_a1;
            }
            if ((temp_f22 - TrackUnit[1]) <= (f32) var_a1) {
                temp_v1 = arg0->unkC;
                if (((f32) (u32) temp_v1 * unit) <= 0.0f) {
                    var_a1 = (s32) ((f32) (u32) temp_v1 * unit);
                } else {
                    var_a1 = ((f32) (s32) ((f32) (u32) temp_v1 * unit) == ((f32) (u32) temp_v1 * unit)) ? 0 : 1;
                    var_a1 = var_a1 + (s32) ((f32) (u32) temp_v1 * unit);
                }
            }
            var_v1 = var_a1 + 1;
            if ((temp_f22 - 1.0f) <= (f32) var_v1) {
                temp_a0_2 = arg0->unkC;
                if (((f32) (u32) temp_a0_2 * unit) <= 0.0f) {
                    var_v1 = (s32) ((f32) (u32) temp_a0_2 * unit);
                } else {
                    var_v1 = ((f32) (s32) ((f32) (u32) temp_a0_2 * unit) == ((f32) (u32) temp_a0_2 * unit)) ? 0 : 1;
                    var_v1 = var_v1 + (s32) ((f32) (u32) temp_a0_2 * unit);
                }
            }
        }
        arg1->unk10 = (s32) (var_a1 * 4);
        arg1->unk14 = (s32) (var_v1 * 4);
        if (temp_f20 >= 0.0f) {
            var_a1 = (s32) temp_f20;
        } else {
            temp_f3_4 = (s32) temp_f20;
            var_a1 = ((f32) temp_f3_4 == temp_f20) ? 0 : 1;
            var_a1 = temp_f3_4 - var_a1;
        }
        if (temp_f22 <= (f32) var_a1) {
            temp_f1 = (f32) var_s0 * unit;
            if (temp_f1 <= 0.0f) {
                var_a1 = (s32) temp_f1;
                var_v1 = var_a1 + 1;
            } else {
                temp_f3_5 = (s32) temp_f1;
                var_a1 = ((f32) temp_f3_5 == temp_f1) ? 0 : 1;
                var_a1 = var_a1 + temp_f3_5;
                var_v1 = var_a1 + 1;
            }
        } else {
            var_v1 = var_a1 + 1;
        }
        if (temp_f22 <= (f32) var_v1) {
            temp_f1_2 = (f32) var_s0 * unit;
            if (temp_f1_2 <= 0.0f) {
                var_v1 = (s32) temp_f1_2;
                arg1->unk18 = var_a1 * 4;
            } else {
                temp_f3_6 = (s32) temp_f1_2;
                var_v1 = ((f32) temp_f3_6 == temp_f1_2) ? 0 : 1;
                var_v1 = var_v1 + temp_f3_6;
                        goto block_75;
            }
        } else {
block_75:
            arg1->unk18 = var_a1 * 4;
        }
        arg1->unk1C = (s32) (var_v1 * 4);
    }
}
