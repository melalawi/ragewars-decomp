/* Starts the round once: unless already started, optionally resets the lead player (func_8022E280 and its
 * three counters) and the player group, then when a new target id is pending selects it through
 * func_8044E038 and func_80286A78, records the start time from func_8040332C, marks the round started with
 * no pending target and copies the viewport rectangle into the active camera as floats. */
#include "basetypes.h"

typedef struct {
    s32 w[3];
} Vec3Words;

extern void *D_800E2830;
typedef struct {
    void *lead;
    char pad4[0x24];
    char members[1];
} Group;

extern Group D_80145060;
extern void *D_801450A8;
extern char D_8010EC90;
extern char D_8011FE88;
extern s32 D_8013B294;
extern s32 D_8013B2A4;
extern char D_8013B2A8;
extern s32 D_8013B2BC;
extern void func_8022E280(void *);
extern void func_80239B54(void *);
extern void func_80285D00(void *);
extern s32 func_8044E038(void *, Vec3Words *, s32, void *);
extern void func_80286A78(void *, s32, s32);
extern s32 func_8040332C(void);

void func_80244E48(void) {
    Vec3Words origin;
    void *player;
    Group *group;
    s32 target;
    s32 found;
    char *table;

    target = *(s32 *)((char *)D_800E2830 + 0xD8);
    if (*(s32 *)((char *)D_800E2830 + 0x40) != 0) {
        return;
    }
    if (*(s32 *)((char *)D_800E2830 + 0x54) != 0) {
        group = &D_80145060;
        player = group->lead;
        if (player != 0) {
            func_8022E280(player);
            *(s32 *)((char *)player + 0x57C) = 0;
            *(s32 *)((char *)player + 0x580) = 0;
            *(s32 *)((char *)player + 0x590) = 0;
        }
        func_80239B54(group->members);
        func_80285D00(&D_8010EC90);
    }
    if (target != -1) {
        table = &D_8011FE88;
        if (D_8013B294 != target) {
            origin.w[0] = 0;
            origin.w[1] = 0;
            origin.w[2] = 0;
            found = func_8044E038(table, &origin, target, &D_8013B2A8);
            D_8013B2BC = found;
            D_8013B2A4 = found != 0;
            func_80286A78(table, target, found != 0);
        }
    }
    *(s32 *)((char *)D_800E2830 + 0x5C) = func_8040332C();
    *(s32 *)((char *)D_800E2830 + 0x50) = 1;
    *(s32 *)((char *)D_800E2830 + 0xD8) = -1;
    *(s32 *)((char *)D_800E2830 + 0x40) = 1;
    if (D_801450A8 != 0) {
        *(f32 *)((char *)D_801450A8 + 0x29C) = *(s32 *)((char *)D_800E2830 + 0x108);
        *(f32 *)((char *)D_801450A8 + 0x2A0) = *(s32 *)((char *)D_800E2830 + 0x10C);
        *(f32 *)((char *)D_801450A8 + 0x2A4) = *(s32 *)((char *)D_800E2830 + 0x110);
        *(f32 *)((char *)D_801450A8 + 0x2A8) = *(s32 *)((char *)D_800E2830 + 0x114);
    }
}
