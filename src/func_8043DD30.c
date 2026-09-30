/* Selects a field's text according to its type and option byte. */
#include "basetypes.h"

extern u8 D_801462F5;
extern u8 D_801462F6;
extern u8 D_801462F7;
extern u8 D_801462F8;
extern u8 D_801462F9;
extern u8 D_801462FA;
extern u8 D_801462FB;
extern u8 D_801462FD;
extern char *D_800D7D40;
extern char *D_800D7D44;
extern char *D_800D7D48;
extern char *D_800D7D4C;
extern char *D_800D7D50;
extern char *D_800D7D54;
extern char *D_800D7D58;
extern char *D_800D7D5C;
extern char *D_800D7D60;
extern char *D_800D7D64;
extern char *D_800D7D68;
extern char *D_800D7D6C;
extern char *D_800D7D70;
extern char *D_800D7D74;
extern char *D_800D7D78;
extern char *D_800D7D7C;
typedef struct func_8043DD30_S1 func_8043DD30_S1;
struct func_8043DD30_S1 {
    s32 unk0;
    char pad0[0x10];
    char **unk14;
};

s32 func_8043DD30(func_8043DD30_S1 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk0;
    switch (temp_v0) {
    case 2:
    default:
        if (D_801462F5 != 0) {
            arg0->unk14 = &D_800D7D40;
        } else {
            arg0->unk14 = &D_800D7D44;
        }
        break;
    case 3:
        if (D_801462F6 != 0) {
            arg0->unk14 = &D_800D7D48;
        } else {
            arg0->unk14 = &D_800D7D4C;
        }
        break;
    case 4:
        if (D_801462F7 != 0) {
            arg0->unk14 = &D_800D7D50;
        } else {
            arg0->unk14 = &D_800D7D54;
        }
        break;
    case 5:
        if (D_801462F8 != 0) {
            arg0->unk14 = &D_800D7D58;
        } else {
            arg0->unk14 = &D_800D7D5C;
        }
        break;
    case 6:
        if (D_801462F9 != 0) {
            arg0->unk14 = &D_800D7D60;
        } else {
            arg0->unk14 = &D_800D7D64;
        }
        break;
    case 7:
        if (D_801462FA != 0) {
            arg0->unk14 = &D_800D7D68;
        } else {
            arg0->unk14 = &D_800D7D6C;
        }
        break;
    case 8:
        if (D_801462FB != 0) {
            arg0->unk14 = &D_800D7D70;
        } else {
            arg0->unk14 = &D_800D7D74;
        }
        break;
    case 9:
        if (D_801462FD != 0) {
            arg0->unk14 = &D_800D7D78;
        } else {
            arg0->unk14 = &D_800D7D7C;
        }
        break;
    }
    return 0;
}
