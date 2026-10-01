#ifdef NON_MATCHING
/* Packs the effect actor attachment, orientation, scale and collision offsets into its transform. */
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
/* The values func_8027DD1C loads by address:
 * 0x800C9D58 = 16.0 (float, D_800C9D58 in this cartridge's tables)
 * 0x800C9D5C = 0.000492126 (float, D_800C9D5C in this cartridge's tables)
 * 0x800C9D60 = 1.0 (float, D_800C9D60 in this cartridge's tables)
 * 0x800C9D64 = 0.000492126 (float, D_800C9D64 in this cartridge's tables)
 * 0x800C9D68 = 0.001 (float, D_800C9D68 in this cartridge's tables)
 * 0x800C9D6C = 1.0 (float, D_800C9D6C in this cartridge's tables)
 * 0x800C9D70 = 47.5 (float, D_800C9D70 in this cartridge's tables)
 * 0x800C9D74 = 0.25 (float, unnamed in this cartridge's tables)
 * 0x800C9D78 = 0.021052632 (float, D_800C9D78 in this cartridge's tables)
 * 0x800C9D7C = 1.0 (float, unnamed in this cartridge's tables)
 * 0x800C9D80 = 1.0 (float, D_800C9D80 in this cartridge's tables)
 * 0x800C9D84 = 1.0 (float, unnamed in this cartridge's tables)
 * 0x800C9D88 = 1.0 (float, D_800C9D88 in this cartridge's tables)
 * 0x800C9D8C = 1.5707965 (float, unnamed in this cartridge's tables)
 * 0x800C9D90 = 1.0 (float, D_800C9D90 in this cartridge's tables)
 * 0x800C9D94 = 3.141593 (float, D_800C9D94 in this cartridge's tables)
 * 0x800C9DC4 = 5.12 (float, D_800C9DC4 in this cartridge's tables)
 * 0x800C9DC8 = 5.12 (float, D_800C9DC8 in this cartridge's tables)
 * 0x800C9DCC = 1.024 (float, D_800C9DCC in this cartridge's tables)
 * 0x800C9DD0 = 5.12 (float, D_800C9DD0 in this cartridge's tables)
 * 0x800C9DD4 = 5.12 (float, D_800C9DD4 in this cartridge's tables)
 * 0x800C9DD8 = 0.003921569 (float, D_800C9DD8 in this cartridge's tables)
 * 0x800C9DDC = 0.034179688 (float, unnamed in this cartridge's tables)
 * 0x800C9DE0 = -1.0 (float, D_800C9DE0 in this cartridge's tables)
 * 0x800C9DE4 = 10.24 (float, D_800C9DE4 in this cartridge's tables)
 * 0x800C9DE8 = 10.24 (float, D_800C9DE8 in this cartridge's tables)
 * 0x800C9DEC = 0.007874016 (float, D_800C9DEC in this cartridge's tables)
 * 0x800C9DF0 = 0.087266475 (float, D_800C9DF0 in this cartridge's tables)
 * 0x800C9DF4 = 18.849558 (float, unnamed in this cartridge's tables)
 * 0x800C9DF8 = 0.25 (float, D_800C9DF8 in this cartridge's tables)
 * 0x800C9DFC = 43.9823 (float, unnamed in this cartridge's tables)
 */
void func_8026F690(f32 *, f32 *, f32 *);
void func_802702EC(f32 *, void *);
void func_80271FA4(void *, void *, void *);
void func_8027200C(void *, void *, f32);
void func_80272088(void *, void *, void *);
void func_802720EC(f32 *);
s32 func_802725BC(f32 *, f32);
void func_80272848(void *);
void func_80272898(f32 *);
void func_80272CD0(void *, f32, f32, f32);
void func_80272EAC(f32 *, f32, f32, f32);
void func_8027302C(float *, float *);
void func_80273424(void *, f32, f32, f32);
void func_802734B8(char *, float, float, float);
void func_802734EC(void *, f32, f32, f32);
void func_802737D0(void *, f32);
void func_80273930(void *, f32);
void func_80273B08(void *, f32);
void func_80273DDC(void *);
f32 func_802752CC(void *, f32, f32);
f32 func_80275E44(void *, f32, f32);
void * func_8027D950(void *, void *);
void func_8027DAA4(void *, void *, void *);
void func_8028C6B0(void *, s32, void *);
float func_802BC200(float);
extern s32 D_8011FE88;
extern s32 D_800D297C;
#if defined(VERSION_US)
#define D_800C9D58 D_800C4B98
#define D_800C9D5C D_800C4B9C
#define D_800C9D60 D_800C4BA0
#define D_800C9D64 D_800C4BA4
#define D_800C9D68 D_800C4BA8
#define D_800C9D6C D_800C4BAC
#define D_800C9D70 D_800C4BB0
#define D_800C9D74 D_800C4BB4
#define D_800C9D78 D_800C4BB8
#define D_800C9D7C D_800C4BBC
#define D_800C9D80 D_800C4BC0
#define D_800C9D84 D_800C4BC4
#define D_800C9D88 D_800C4BC8
#define D_800C9D8C D_800C4BCC
#define D_800C9D90 D_800C4BD0
#define D_800C9D94 D_800C4BD4
#define D_800C9DC4 D_800C4C04
#define D_800C9DC8 D_800C4C08
#define D_800C9DCC D_800C4C0C
#define D_800C9DD0 D_800C4C10
#define D_800C9DD4 D_800C4C14
#define D_800C9DD8 D_800C4C18
#define D_800C9DDC D_800C4C1C
#define D_800C9DE0 D_800C4C20
#define D_800C9DE4 D_800C4C24
#define D_800C9DE8 D_800C4C28
#define D_800C9DEC D_800C4C2C
#define D_800C9DF0 D_800C4C30
#define D_800C9DF4 D_800C4C34
#define D_800C9DF8 D_800C4C38
#define D_800C9DFC D_800C4C3C
#elif defined(VERSION_EU)
#define D_800C9D58 D_800C4F18
#define D_800C9D5C D_800C4F1C
#define D_800C9D60 D_800C4F20
#define D_800C9D64 D_800C4F24
#define D_800C9D68 D_800C4F28
#define D_800C9D6C D_800C4F2C
#define D_800C9D70 D_800C4F30
#define D_800C9D74 D_800C4F34
#define D_800C9D78 D_800C4F38
#define D_800C9D7C D_800C4F3C
#define D_800C9D80 D_800C4F40
#define D_800C9D84 D_800C4F44
#define D_800C9D88 D_800C4F48
#define D_800C9D8C D_800C4F4C
#define D_800C9D90 D_800C4F50
#define D_800C9D94 D_800C4F54
#define D_800C9DC4 D_800C4F84
#define D_800C9DC8 D_800C4F88
#define D_800C9DCC D_800C4F8C
#define D_800C9DD0 D_800C4F90
#define D_800C9DD4 D_800C4F94
#define D_800C9DD8 D_800C4F98
#define D_800C9DDC D_800C4F9C
#define D_800C9DE0 D_800C4FA0
#define D_800C9DE4 D_800C4FA4
#define D_800C9DE8 D_800C4FA8
#define D_800C9DEC D_800C4FAC
#define D_800C9DF0 D_800C4FB0
#define D_800C9DF4 D_800C4FB4
#define D_800C9DF8 D_800C4FB8
#define D_800C9DFC D_800C4FBC
#elif defined(VERSION_EU_X)
#define D_800C9D58 D_800C4F58
#define D_800C9D5C D_800C4F5C
#define D_800C9D60 D_800C4F60
#define D_800C9D64 D_800C4F64
#define D_800C9D68 D_800C4F68
#define D_800C9D6C D_800C4F6C
#define D_800C9D70 D_800C4F70
#define D_800C9D74 D_800C4F74
#define D_800C9D78 D_800C4F78
#define D_800C9D7C D_800C4F7C
#define D_800C9D80 D_800C4F80
#define D_800C9D84 D_800C4F84
#define D_800C9D88 D_800C4F88
#define D_800C9D8C D_800C4F8C
#define D_800C9D90 D_800C4F90
#define D_800C9D94 D_800C4F94
#define D_800C9DC4 D_800C4FC4
#define D_800C9DC8 D_800C4FC8
#define D_800C9DCC D_800C4FCC
#define D_800C9DD0 D_800C4FD0
#define D_800C9DD4 D_800C4FD4
#define D_800C9DD8 D_800C4FD8
#define D_800C9DDC D_800C4FDC
#define D_800C9DE0 D_800C4FE0
#define D_800C9DE4 D_800C4FE4
#define D_800C9DE8 D_800C4FE8
#define D_800C9DEC D_800C4FEC
#define D_800C9DF0 D_800C4FF0
#define D_800C9DF4 D_800C4FF4
#define D_800C9DF8 D_800C4FF8
#define D_800C9DFC D_800C4FFC
#elif defined(VERSION_DE)
#define D_800C9D58 D_800C4C68
#define D_800C9D5C D_800C4C6C
#define D_800C9D60 D_800C4C70
#define D_800C9D64 D_800C4C74
#define D_800C9D68 D_800C4C78
#define D_800C9D6C D_800C4C7C
#define D_800C9D70 D_800C4C80
#define D_800C9D74 D_800C4C84
#define D_800C9D78 D_800C4C88
#define D_800C9D7C D_800C4C8C
#define D_800C9D80 D_800C4C90
#define D_800C9D84 D_800C4C94
#define D_800C9D88 D_800C4C98
#define D_800C9D8C D_800C4C9C
#define D_800C9D90 D_800C4CA0
#define D_800C9D94 D_800C4CA4
#define D_800C9DC4 D_800C4CD4
#define D_800C9DC8 D_800C4CD8
#define D_800C9DCC D_800C4CDC
#define D_800C9DD0 D_800C4CE0
#define D_800C9DD4 D_800C4CE4
#define D_800C9DD8 D_800C4CE8
#define D_800C9DDC D_800C4CEC
#define D_800C9DE0 D_800C4CF0
#define D_800C9DE4 D_800C4CF4
#define D_800C9DE8 D_800C4CF8
#define D_800C9DEC D_800C4CFC
#define D_800C9DF0 D_800C4D00
#define D_800C9DF4 D_800C4D04
#define D_800C9DF8 D_800C4D08
#define D_800C9DFC D_800C4D0C
#endif
#if defined(VERSION_US)
#define jtbl_800C9D98 jtbl_800C4BD8
#elif defined(VERSION_EU)
#define jtbl_800C9D98 jtbl_800C4F58
#elif defined(VERSION_EU_X)
#define jtbl_800C9D98 jtbl_800C4F98
#elif defined(VERSION_DE)
#define jtbl_800C9D98 jtbl_800C4CA8
#endif
extern void *jtbl_800C9D98[];
extern f32 D_800C9D58;
extern f32 D_800C9D5C;
extern f32 D_800C9D60;
extern f32 D_800C9D64;
extern f32 D_800C9D68;
extern f32 D_800C9D6C;
extern f32 D_800C9D70;
extern f32 D_800C9D74;
extern f32 D_800C9D78;
extern f32 D_800C9D7C;
extern f32 D_800C9D80;
#if defined(VERSION_EU_X)
/* FAKEMATCH: retain these cartridge constants in read-only data to avoid cross-cartridge symbol collisions. */
volatile f32 D_800C4F84 __attribute__((section(".rdata"))) = 1.0f;
volatile f32 attachment_up_padding __attribute__((section(".rdata"))) = 1.0f;
volatile f32 D_800C4F8C __attribute__((section(".rdata"))) = 1.5707965f;
#else
extern f32 D_800C9D84;
#endif
extern f32 D_800C9D88;
#if !defined(VERSION_EU_X)
extern f32 D_800C9D8C;
#endif
extern f32 D_800C9D90;
extern f32 D_800C9D94;
extern f32 D_800C9DC4;
extern f32 D_800C9DC8;
extern f32 D_800C9DCC;
extern f32 D_800C9DD0;
extern f32 D_800C9DD4;
extern f32 D_800C9DD8;
extern f32 D_800C9DDC;
extern f32 D_800C9DE0;
extern f32 D_800C9DE4;
extern f32 D_800C9DE8;
extern f32 D_800C9DEC;
extern f32 D_800C9DF0;
extern f32 D_800C9DF4;
extern f32 D_800C9DF8;
extern f32 D_800C9DFC;

typedef struct func_8027DD1C_S1 func_8027DD1C_S1;
typedef struct func_8027DD1C_S2 func_8027DD1C_S2;
typedef struct func_8027DD1C_S3 func_8027DD1C_S3;
typedef struct func_8027DD1C_S4 func_8027DD1C_S4;
typedef struct func_8027DD1C_S5 func_8027DD1C_S5;
typedef struct func_8027DD1C_S6 func_8027DD1C_S6;
typedef struct { f32 x, y, z; } Vec3;
struct func_8027DD1C_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad6[0x2];
    char unk8[0x54];
    s32 unk5C;
    char pad60[0x80];
    struct { char bytes[0x18]; } unkE0[2];
    char pad110[0x8];
    func_8027DD1C_S2 * unk118;
    char pad118[0x24];
    f32 unk140;
    char pad140[0xC];
    f32 unk150;
    f32 unk154;
    f32 unk158;
    char pad158[0x18];
    Vec3 unk174;
    f32 unk180;
    f32 unk184;
    f32 unk188;
    char pad188[0x10];
    f32 unk19C;
    f32 unk1A0;
    char pad1A0[0x8];
    f32 unk1AC;
    f32 unk1B0;
    char pad1B0[0x1C];
    s8 unk1D0;
    s8 unk1D1;
    char pad1D1[0x6];
    u8 unk1D8;
};
struct func_8027DD1C_S2 {
    s32 unk0;
    char pad0[0x4];
    s8 unk8;
    char pad8[0x1];
    s8 unkA;
    char padB[0x9];
    s32 unk14;
    char pad18[0xC];
    func_8027DD1C_S3 * unk24;
    char pad24[0x4];
    func_8027DD1C_S5 * unk2C;
};
struct func_8027DD1C_S3 {
    char pad0[0x1C];
    f32 unk1C;
    f32 unk20;
};
struct func_8027DD1C_S4 {
    char pad0[0x6C];
    f32 unk6C;
};
struct func_8027DD1C_S5 {
    char pad0[0x18];
    s8 unk18;
};
struct func_8027DD1C_S6 {
    char pad0[0x14];
    s32 unk14;
};

typedef struct { f32 v[16]; } Mat4;
typedef struct { f32 x, y, z, w; } Vec4;

/* Packs the effect actor's attachment, orientation, scale and collision offsets into its transform. */
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x1f0, 0x1f4, 0x1f8, 0x1fc, 0x200, 0x204, 0x208, 0x20c, 0x210, 0x220, 0x224, 0x230, 0x234], gap at: 0x214. */
void func_8027DD1C(func_8027DD1C_S1 *arg0, void *arg1, func_8027DD1C_S4 *arg2, f32 arg3) {
    Mat4 m10, m50, m90, mD0, m110;
    Vec4 v150;
    Vec4 v160;
    Vec3 v170;
    Vec4 v180;
    Vec4 v190;
    Vec3 v1A0;
    Vec4 v1B0;
    Vec4 v1C0;
    Vec3 v1D0;
    Vec4 v1E0;
    f32 *temp_v0_3;
    f32 *var_a0;
    f32 temp_f0;
    f32 blend_start; /* FAKEMATCH: share the clamp zero and interpolation base pseudo. */
    f32 case3_step; /* FAKEMATCH: keep the terrain offset live across height calls. */
    f32 case6_step; /* FAKEMATCH: keep the ceiling offset live across height calls. */
    f32 temp_f0_2;
    f32 temp_f1; /* FAKEMATCH: reuse the later scalar conversion to raise this pseudo priority. */
    f32 temp_f20;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    f32 var_f1;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f21;
    f32 var_f22;
    f32 var_f23;
    f32 var_f4;
    s32 temp_v0_2;
    s8 temp_a0;
    s8 temp_v0;
    s32 temp_v1;
    u16 temp_v1_2;
    func_8027DD1C_S2 *temp_s5;
    func_8027DD1C_S2 *interpolation;

    /* FAKEMATCH: reuse the input scale pseudo for temp_f1_2 to match allocator priority. */
    temp_s5 = arg0->unk118;
    /* FAKEMATCH: Carry the attachment pointer into the interpolation path. */
    if (arg2 != NULL) {
        interpolation = temp_s5;
        if (temp_s5->unk0 & 4) {
            var_f4 = arg3; /* FAKEMATCH: keep input and output scale in one live range. */
            temp_f1 = var_f4 - D_800C9D58;
            blend_start = 0.0f;
            var_f0 = 0.0f;
            if (!(temp_f1 < var_f0)) {
                var_f0 = temp_f1 * D_800C9D5C;
                temp_f2_2 = D_800C9D60; /* FAKEMATCH: distinct upper-limit live range. */
                if (var_f0 > temp_f2_2) {
                    var_f0 = temp_f2_2;
                } else {
                    if (temp_f1 < blend_start) {
                        var_f0 = 0.0f;
                    } else {
                        var_f0 = temp_f1 * D_800C9D64;
                    }
                }
            }
            temp_f2_2 = interpolation->unk24->unk20; /* FAKEMATCH: reuse the upper-limit pseudo for the interpolation delta. */
            blend_start = interpolation->unk24->unk1C;
            temp_f2_2 -= blend_start;
            temp_f2_2 *= var_f0;
            blend_start += temp_f2_2;
            var_f4 *= blend_start;
            var_f4 *= D_800C9D68;
        } else {
            var_f4 = D_800C9D6C;
        }
        temp_f2 = arg2->unk6C;
        var_f23 = var_f4 * D_800C9D78 * (temp_f2 + ((D_800C9D70 - temp_f2) * D_800C9D74));
    } else {
        var_f23 = D_800C9D7C;
    }
    if (temp_s5->unk0 & 8) {
        var_f22 = arg0->unk154 * arg0->unk158 * var_f23;
    } else {
        var_f22 = 0.0f;
    }
    func_8027DAA4(arg0, &v150, &v170);
    if (!(arg0->unk5C & 0x30000)) {
        arg3 = arg0->unk140;
        if (arg3 > 0.0f) {
            temp_v0 = temp_s5->unk2C->unk18;
            var_f21 = D_800C9D80;
            if (temp_v0 != 0) {
                temp_f0 = (f32) temp_v0;
                if (arg3 < temp_f0) {
                    var_f21 = arg3 / temp_f0;
                }
            }
            v1D0 = arg0->unk174;
            if (arg0->unk1AC < 0.0f) {
                v160.x = 0;
                v160.z = 0;
                v160.y = D_800C9D84;
                func_80272088(&v1C0, &v160, &v1D0);
                func_8027200C(&v1E0, &v1C0, func_802BC200(arg0->unk19C) * -arg0->unk1AC * var_f21);
                func_80271FA4(&v150, &v150, &v1E0);
            }
            if (arg0->unk1B0 < 0.0f) {
                v160.x = 0;
                v160.z = 0;
                v160.y = D_800C9D88;
                func_80272088(&v1B0, &v160, &v1D0);
                func_80272088(&v1C0, &v1B0, &v1D0);
                func_8027200C(&v1E0, &v1C0, func_802BC200(arg0->unk1A0) * -arg0->unk1B0 * var_f21);
                func_80271FA4(&v150, &v150, &v1E0);
            }
        }
    }
    if (arg0->unk118->unk14 != 0) {
        if (arg0->unk1D0 == -7) {
            func_80272EAC(&m10, arg0->unk180 + D_800C9D8C, arg0->unk184, arg0->unk188);
            if ((v170.x == 0.0f) && (v170.y == 0.0f) && (v170.z == 0.0f)) {
                v1A0 = arg0->unk174;
            } else {
                v1A0 = v170;
            }
            func_802720EC(&v1A0);
            v160.x = 0;
            v160.z = 0;
            v160.y = D_800C9D90;
            func_80272088(&v180, &v160, &v1A0);
            func_80272088(&v190, &v180, &v1A0);
            func_80272848(&m50);
            func_802720EC(&v180);
            func_802720EC(&v190);
            func_802720EC(&v1A0);
            m50.v[0] = v180.x;
            m50.v[1] = v180.y;
            m50.v[2] = v180.z;
            m50.v[4] = v190.x;
            m50.v[5] = v190.y;
            m50.v[6] = v190.z;
            m50.v[8] = v1A0.x;
            m50.v[9] = v1A0.y;
            m50.v[10] = v1A0.z;
            func_8026F690(&m90, &m10, &m50);
        } else {
            func_80272EAC(&m90, arg0->unk180, arg0->unk184 + D_800C9D94, arg0->unk188);
        }
        func_8028C6B0(&D_8011FE88, (s32) arg0->unk8, &arg0->unkE0[D_800D297C]);
    } else if ((arg0->unk180 == 0.0f) && (arg0->unk184 == 0.0f)) {
        func_802737D0(&m90, arg0->unk188);
    } else {
        func_802737D0(&m90, arg0->unk188);
        temp_v0_2 = arg0->unk118->unk14;
        var_f0_2 = 0.0f;
        if (temp_v0_2 == 0) {
            var_f0_2 = arg0->unk180;
        }
        var_f0_2 = -var_f0_2;
        var_f1 = 0.0f;
        if (temp_v0_2 == 0) {
            var_f1 = arg0->unk184;
        }
        func_80273424(&m90, var_f0_2, -var_f1, 0.0f);
    }
    if (var_f22 != 0.0f) {
        func_80273424(&m90, 0.0f, var_f22, 0.0f);
        func_802734B8((s8 *) &m90, 0.0f, -var_f22, 0.0f);
    }
    temp_v1 = (s8) ((u8) arg0->unk1D0 + 8);
    arg0->unk5C = (s32) (arg0->unk5C & 0xFF7FFFFF);
    {
        /* FAKEMATCH: expose cartridge dispatch destinations without emitting a duplicate table. */
        static void *sw_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_0, &&sw_done, &&sw_2, &&sw_3, &&sw_2, &&sw_5,
            &&sw_6, &&sw_2, &&sw_done, &&sw_done, &&sw_done
        };
        if ((u32)temp_v1 > 10) {
            goto sw_done;
        }
        goto *jtbl_800C9D98[temp_v1];
    }
    do {
    sw_0:
        v150.x += arg0->unk174.x * D_800C9DC4;
        v150.y += arg0->unk174.y * D_800C9DC4;
        v150.z += arg0->unk174.z * D_800C9DC4;
        goto sw_done;
    sw_3:
        if (temp_s5->unkA != 0) {
            case3_step = D_800C9DC8;
            v150.y = (func_80275E44(NULL, v150.x, v150.z) + case3_step) < v150.y
                ? v150.y : func_80275E44(NULL, v150.x, v150.z) + case3_step;
        }
        goto sw_done;
    sw_5:
        temp_f2_2 = func_80275E44(NULL, v150.x, v150.z);
        if (temp_s5->unk0 & 0x400) {
            if (v150.y < (temp_f2_2 + D_800C9DCC)) {
                v150.y = temp_f2_2;
                arg0->unk5C = (s32) (arg0->unk5C | 0x800000);
            }
        } else {
            temp_f0_2 = temp_f2_2 + D_800C9DD0;
            temp_f1 = v150.y; /* FAKEMATCH: share the comparison Y pseudo rather than its f0 bound. */
            if (!(temp_f1 <= temp_f0_2)) {
                var_f0_3 = temp_f1; /* FAKEMATCH: carry the old Y into the shared store. */
                goto sw_store;
            }
            v150.y = temp_f0_2;
        }
        goto sw_done;
    sw_6:
        if (temp_s5->unkA != 0) {
            case6_step = D_800C9DD4;
            v150.y = v150.y < (func_802752CC(NULL, v150.x, v150.z) - case6_step)
                ? v150.y : func_802752CC(NULL, v150.x, v150.z) - case6_step;
        }
        goto sw_done;
    sw_2:
    sw_4:
    sw_7:
        v150.y += var_f22;
        goto sw_done;
    } while (0);
    goto sw_done;
sw_store:
    v150.y = var_f0_3;
sw_done:
    func_802725BC(&v150, 20000.0f);
    if ((temp_s5->unk0 & 0x80000) && (temp_s5->unk8 == 1)) {
        var_f23 = var_f23 * D_800C9DD8 * (f32) arg0->unk1D8;
    }
    if (arg0->unk118->unk14 != 0) {
        temp_v1_2 = arg0->unk4;
        temp_f20 = var_f23 * arg0->unk158 * D_800C9DDC;
        if ((temp_v1_2 == 0x40B) || (temp_v1_2 == 0x40F) || (temp_v1_2 == 0x41E) || (temp_v1_2 == 0x40B) || (temp_v1_2 == 0x436)) {
            func_802734EC(&m90, D_800C9DE0, D_800C9DE0, D_800C9DE0);
        }
        func_802734EC(&m90, arg0->unk150 * temp_f20, arg0->unk154 * temp_f20, temp_f20 * D_800C9DE4);
        func_80273DDC(&m90);
    } else {
        temp_f20 = var_f23 * arg0->unk158;
        func_802734EC(&m90, arg0->unk150 * temp_f20, arg0->unk154 * temp_f20, temp_f20 * D_800C9DE8);
    }
    temp_v0_3 = func_8027D950(arg0, arg2);
    if (temp_v0_3 != NULL) {
        func_8026F690(&mD0, &m90, temp_v0_3);
    } else {
        func_8027302C(&mD0, &m90);
    }
    func_802734B8((s8 *) &mD0, v150.x, v150.y, v150.z);
    if (arg0->unk5C & 0x20000) {
        temp_a0 = arg0->unk1D1;
        if (temp_a0 != 0) {
            temp_f20_3 = (f32) temp_a0 * D_800C9DEC;
            temp_f20_4 = temp_f20_3 * temp_f20_3;
            temp_f21 = temp_f20_4 * D_800C9DF0;
            func_80272CD0(&m110, 0.0f, 0.0f, -66.56f);
            func_80273B08(&m110, temp_f21 * (func_802BC200(temp_f20_4 * D_800C9DF4) * D_800C9DF8));
            func_80273930(&m110, temp_f21 * func_802BC200(temp_f20_4 * D_800C9DFC));
            func_802734B8(&m110, 0.0f, 0.0f, 66.56f);
            func_8026F690(&m10, (f32 *) &m110, (f32 *) (s8 *) &mD0);
            func_80272898(&m10);
            var_a0 = &m10;
        } else {
            goto block_81;
        }
    } else {
block_81:
        func_80272898(&mD0);
        var_a0 = &mD0;
    }
    func_802702EC(var_a0, arg1);
}

#endif
