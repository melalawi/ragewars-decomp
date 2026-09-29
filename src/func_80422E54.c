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
int func_80245788(void);
void func_8025470C(unsigned int);
int func_8025471C(void);
s32 func_8025DF54(s32);
void func_8029A1D4(s32);
void func_8029A73C(void);
void func_802A3358(void);
void func_8040E958(void *, int);
void func_80419FA4(void *);
s32 func_80419FB8(void *);
void func_80419FD8(void *, int);
s32 func_8043C4E8(s32 *);
void func_8044A600(void *, s32, s32);
void func_8044AFC0(void *, s32);
void func_80286A78();
void func_80299368();
extern char D_8011FE88;
struct MenuReply { s32 value; struct { s32 ready; } flag; };
extern struct MenuReply D_80154020;
struct MenuData {
    char objectBefore[0x48];
    char object[0x17F0];
    s32 stage;
    char pad183C[0x18];
    s32 pause;
};
extern struct MenuData D_80145040;
typedef struct func_80422E54_S1 func_80422E54_S1;
typedef struct func_80422E54_S2 func_80422E54_S2;
typedef struct func_80422E54_S3 func_80422E54_S3;
typedef struct func_80422E54_S4 func_80422E54_S4;
typedef struct func_80422E54_S5 func_80422E54_S5;
typedef struct func_80422E54_S6 func_80422E54_S6;
typedef struct func_80422E54_S7 func_80422E54_S7;
typedef struct func_80422E54_S8 func_80422E54_S8;
struct func_80422E54_S1 {
    char pad0[0x20];
    void* unk20;
    char pad20[0x2];
    u16 unk26;
    void* unk28;
    char pad28[0x2];
    u16 unk2E;
    s32 unk30;
    s32 unk34;
    void* unk38;
    void* unk3C;
    void* unk40;
    void* unk44;
    void* unk48;
    void* unk4C;
    char pad4C[0xC];
    s32 unk5C;
    s32 unk60;
    char pad60[0x4];
    void* unk68;
};
struct func_80422E54_S2 {
    char pad0[0x3C];
    s32 unk3C;
};
struct func_80422E54_S3 {
    s32 unk0;
};
struct func_80422E54_S4 {
    char pad0[0x14];
    u16 unk14;
};
struct func_80422E54_S5 {
    char pad0[0x14];
    u16 unk14;
};
struct func_80422E54_S6 {
    char pad0[0x14];
    u16 unk14;
};
struct func_80422E54_S7 {
    char pad0[0x14];
    u16 unk14;
};
struct func_80422E54_S8 {
    s32 unk0;
};

extern func_80422E54_S2 *D_800E2830;
extern s32 D_800E28E0;
extern s32 *D_800E4518;

/* Advances the menu transition and dispatches the selected level once its animations finish. */
s32 func_80422E54(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_v0;
    func_80422E54_S4 *temp_a0;
    func_80422E54_S5 *temp_a0_2;
    func_80422E54_S6 *temp_a0_3;
    func_80422E54_S7 *temp_a0_4;
    func_80422E54_S1 *timer;
    func_80422E54_S1 *finish;
    s32 *ready;

    if (D_800E28E0 <= 0) {
        if ((func_8043C4E8(D_800E4518) != 1) && ((((func_80422E54_S1 *)(D_800E4518))->unk5C) == 0)) {
            (((func_80422E54_S1 *)(D_800E4518))->unk5C) = 1;
            func_802A3358();
            return 0;
        }
        temp_s0 = D_800E2830->unk3C;
        if ((temp_s0 == 1) && (func_80245788() == temp_s0)) {
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk68), 0);
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk44), 0);
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk4C), 0);
            D_800E2830->unk3C = 0;
        }
        ready = &D_80154020.flag.ready;
        if (*ready == 1) {
            *ready = 0;
            if (D_80154020.value != -1) {
                func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk48), 0);
                func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk40), 0);
                func_8029A73C();
                func_80299368(D_80154020.value);
                return 0;
            }
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk48), 1);
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk40), 1);
            func_8029A1D4(0x37D);
            goto block_11;
        }
block_11:
        temp_v0 = (((func_80422E54_S1 *)(D_800E4518))->unk30);
        switch (temp_v0) {
        case 1:
            temp_a0 = (((func_80422E54_S1 *)(D_800E4518))->unk20);
            temp_a0->unk14 = (u16) (temp_a0->unk14 + (((func_80422E54_S1 *)(D_800E4518))->unk26));
            temp_a0_2 = (((func_80422E54_S1 *)(D_800E4518))->unk28);
            temp_a0_2->unk14 = (u16) (temp_a0_2->unk14 - (((func_80422E54_S1 *)(D_800E4518))->unk2E));
            temp_v0_2 = (((func_80422E54_S1 *)(D_800E4518))->unk34) - 1;
            (((func_80422E54_S1 *)(D_800E4518))->unk34) = temp_v0_2;
            if (temp_v0_2 <= 0) {
                func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk3C), 1);
                func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk48), 1);
                func_80419FD8((((func_80422E54_S1 *)(D_800E4518))->unk38), 4);
                finish = (func_80422E54_S1 *)D_800E4518;
                finish->unk30 = 4;
                finish->unk34 = 4;
            }
        case 3:
        default:
            break;
        case 2:
            temp_a0_3 = (((func_80422E54_S1 *)(D_800E4518))->unk20);
            temp_a0_3->unk14 = (u16) (temp_a0_3->unk14 - (((func_80422E54_S1 *)(D_800E4518))->unk26));
            temp_a0_4 = (((func_80422E54_S1 *)(D_800E4518))->unk28);
            temp_a0_4->unk14 = (u16) (temp_a0_4->unk14 + (((func_80422E54_S1 *)(D_800E4518))->unk2E));
            temp_v0_3 = (((func_80422E54_S1 *)(D_800E4518))->unk34) - 1;
            (((func_80422E54_S1 *)(D_800E4518))->unk34) = temp_v0_3;
            if (temp_v0_3 <= 0) {
                D_80145040.pause = 0;
                (((func_80422E54_S1 *)(D_800E4518))->unk30) = 3;
                func_8044AFC0(&D_80145040.object, 0);
                func_8044A600(&D_80145040, 0, 0);
                func_80286A78(&D_8011FE88, 0, 0);
                if (func_8025471C() == 0) {
                    func_8025470C(1U);
                }
                D_80145040.stage = 8;
                func_8029A73C();
                func_80299368((((func_80422E54_S1 *)(D_800E4518))->unk60));
                return 0;
            }
            break;
        case 4:
            timer = (func_80422E54_S1 *)D_800E4518;
            temp_v1 = timer->unk34;
            temp_v0_4 = temp_v1 - 1;
            if (temp_v0_4 >= 0) {
                var_v0 = temp_v1 - (temp_v1 >= temp_v0_4);
            } else {
                var_v0 = 0;
            }
            timer->unk34 = var_v0;
            if (((((volatile func_80422E54_S1 *)(D_800E4518))->unk34) <= 0) && (func_80419FB8((((func_80422E54_S1 *)(D_800E4518))->unk38)) != 0)) {
                func_80419FA4((((func_80422E54_S1 *)(D_800E4518))->unk38));
                (((func_80422E54_S1 *)(D_800E4518))->unk30) = 3;
            }
            break;
        case 5:
            func_8025DF54(0xE78);
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk3C), 0);
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk48), 0);
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk44), 1);
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk4C), 1);
            func_8040E958((((func_80422E54_S1 *)(D_800E4518))->unk68), 1);
            finish = (func_80422E54_S1 *)D_800E4518;
            finish->unk30 = 2;
            finish->unk34 = 4;
            break;
        }
        if ((((func_80422E54_S1 *)(D_800E4518))->unk30) != 3) {
            return 0;
        }
    }
    return 0;
}
