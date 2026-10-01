#include "basetypes.h"

/* Formats a player's status line into a menu field's text through func_802C2410 (sprintf): one message when the player is its own partner, otherwise a message chosen by the player's mode at 0x12F0 (0 to 6), naming the partner's character from 0x84 of its record at 0x5D8 when there is a partner. Dispatched through the cartridge's jump tables jtbl_800E2738 and jtbl_800E2758. */
typedef struct Player {
    char pad0[0x5D8];
    char *record;
    char pad5DC[0x12EC - 0x5DC];
    struct Player *partner;
    unsigned int mode;
} Player;

typedef struct {
    char pad0[0x10];
    char **text;
} Field;

typedef struct {
    char pad0[0x18];
    Field *field;
} Item;

typedef struct {
    char pad0[0x1C];
    Player *player;
} Owner;

extern char *D_800D71A4;
extern char *D_800D71A8;
extern char *D_800D71AC;
extern char *D_800D71B0;
extern char *D_800D71B4;
extern char *D_800D71B8;
extern char *D_800D71BC;
extern char *D_800D71C0;
extern char *D_800D71C4;
extern char *D_800D71C8;
extern char *D_800D71CC;
extern char *D_800D71D0;
extern char *D_800D71D4;
extern char *D_800D71D8;
extern char *D_800D71DC;
extern void *jtbl_800E2738[];
extern void *jtbl_800E2758[];
extern void func_802C2410(char *, char *, ...);

s32 func_80443650(Item *item, Owner *owner) {
    Player *player = owner->player;
    char *text = *item->field->text;

    {
        static void *keep_labels[0] __attribute__((section(".sdata"))) = {
            &&a0, &&a1, &&a2, &&a3, &&a4, &&a5, &&a6,
            &&b0, &&b1, &&b2, &&b3, &&b4, &&b5, &&b6
        };
    }
    if (player->partner == player) {
        func_802C2410(text, D_800D71A4);
    } else if (player->partner != 0) {
        if (player->mode >= 7) {
            goto done;
        }
        goto *jtbl_800E2738[player->mode];
    a0:
        func_802C2410(text, D_800D71A8, player->partner->record + 0x84);
        goto done;
    a1:
        func_802C2410(text, D_800D71AC, player->partner->record + 0x84);
        goto done;
    a2:
        func_802C2410(text, D_800D71B0, player->partner->record + 0x84);
        goto done;
    a3:
        func_802C2410(text, D_800D71B4, player->partner->record + 0x84);
        goto done;
    a4:
        func_802C2410(text, D_800D71B8, player->partner->record + 0x84);
        goto done;
    a5:
        func_802C2410(text, D_800D71BC, player->partner->record + 0x84);
        goto done;
    a6:
        func_802C2410(text, D_800D71C0, player->partner->record + 0x84);
    } else {
        player = (Player *)player->mode;
        if ((unsigned int)player >= 7) {
            goto done;
        }
        goto *jtbl_800E2758[(unsigned int)player];
    b0:
        func_802C2410(text, D_800D71C4);
        goto done;
    b1:
        func_802C2410(text, D_800D71C8);
        goto done;
    b2:
        func_802C2410(text, D_800D71CC);
        goto done;
    b3:
        func_802C2410(text, D_800D71D0);
        goto done;
    b4:
        func_802C2410(text, D_800D71D4);
        goto done;
    b5:
        func_802C2410(text, D_800D71D8);
        goto done;
    b6:
        func_802C2410(text, D_800D71DC);
    }
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D1E24_4[] = {0x80, 0x0C, 0xE6, 0xBC};
const unsigned char unbake_rodata_800D1E28_4[] = {0x80, 0x0C, 0xE6, 0xD4};
const unsigned char unbake_rodata_800D1E2C_4[] = {0x80, 0x0C, 0xE6, 0xE4};
const unsigned char unbake_rodata_800D1E30_4[] = {0x80, 0x0C, 0xE6, 0xF4};
const unsigned char unbake_rodata_800D1E34_4[] = {0x80, 0x0C, 0xE7, 0x04};
const unsigned char unbake_rodata_800D1E38_4[] = {0x80, 0x0C, 0xE7, 0x18};
const unsigned char unbake_rodata_800D1E3C_4[] = {0x80, 0x0C, 0xE7, 0x2C};
const unsigned char unbake_rodata_800D1E40_4[] = {0x80, 0x0C, 0xE7, 0x3C};
const unsigned char unbake_rodata_800D1E44_4[] = {0x80, 0x0C, 0xE7, 0x4C};
const unsigned char unbake_rodata_800D1E48_4[] = {0x80, 0x0C, 0xE7, 0x60};
const unsigned char unbake_rodata_800D1E4C_4[] = {0x80, 0x0C, 0xE7, 0x68};
const unsigned char unbake_rodata_800D1E50_4[] = {0x80, 0x0C, 0xE7, 0x74};
const unsigned char unbake_rodata_800D1E54_4[] = {0x80, 0x0C, 0xE7, 0xA8};
const unsigned char unbake_rodata_800D1E58_4[] = {0x80, 0x0C, 0xE7, 0x8C};
const unsigned char unbake_rodata_800D1E5C_4[] = {0x80, 0x0C, 0xE7, 0x94};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D71A4_4[] = {0x80, 0x0D, 0x3A, 0x3C};
const unsigned char unbake_rodata_800D71A8_4[] = {0x80, 0x0D, 0x3A, 0x54};
const unsigned char unbake_rodata_800D71AC_4[] = {0x80, 0x0D, 0x3A, 0x64};
const unsigned char unbake_rodata_800D71B0_4[] = {0x80, 0x0D, 0x3A, 0x74};
const unsigned char unbake_rodata_800D71B4_4[] = {0x80, 0x0D, 0x3A, 0x84};
const unsigned char unbake_rodata_800D71B8_4[] = {0x80, 0x0D, 0x3A, 0x98};
const unsigned char unbake_rodata_800D71BC_4[] = {0x80, 0x0D, 0x3A, 0xAC};
const unsigned char unbake_rodata_800D71C0_4[] = {0x80, 0x0D, 0x3A, 0xBC};
const unsigned char unbake_rodata_800D71C4_4[] = {0x80, 0x0D, 0x3A, 0xCC};
const unsigned char unbake_rodata_800D71C8_4[] = {0x80, 0x0D, 0x3A, 0xE0};
const unsigned char unbake_rodata_800D71CC_4[] = {0x80, 0x0D, 0x3A, 0xE8};
const unsigned char unbake_rodata_800D71D0_4[] = {0x80, 0x0D, 0x3A, 0xF4};
const unsigned char unbake_rodata_800D71D4_4[] = {0x80, 0x0D, 0x3B, 0x28};
const unsigned char unbake_rodata_800D71D8_4[] = {0x80, 0x0D, 0x3B, 0x0C};
const unsigned char unbake_rodata_800D71DC_4[] = {0x80, 0x0D, 0x3B, 0x14};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D3178_4[] = {0x80, 0x0C, 0xF3, 0x1C};
const unsigned char unbake_rodata_800D317C_4[] = {0x80, 0x0C, 0xF3, 0x38};
const unsigned char unbake_rodata_800D3180_4[] = {0x80, 0x0C, 0xF3, 0x48};
const unsigned char unbake_rodata_800D3184_4[] = {0x80, 0x0C, 0xF3, 0x5C};
const unsigned char unbake_rodata_800D3188_4[] = {0x80, 0x0C, 0xF3, 0x70};
const unsigned char unbake_rodata_800D318C_4[] = {0x80, 0x0C, 0xF3, 0x8C};
const unsigned char unbake_rodata_800D3190_4[] = {0x80, 0x0C, 0xF3, 0xA4};
const unsigned char unbake_rodata_800D3194_4[] = {0x80, 0x0C, 0xF3, 0xBC};
const unsigned char unbake_rodata_800D3198_4[] = {0x80, 0x0C, 0xF3, 0xD0};
const unsigned char unbake_rodata_800D319C_4[] = {0x80, 0x0C, 0xF3, 0xEC};
const unsigned char unbake_rodata_800D31A0_4[] = {0x80, 0x0C, 0xF4, 0x08};
const unsigned char unbake_rodata_800D31A4_4[] = {0x80, 0x0C, 0xF4, 0x1C};
const unsigned char unbake_rodata_800D31A8_4[] = {0x80, 0x0C, 0xF4, 0x30};
const unsigned char unbake_rodata_800D31AC_4[] = {0x80, 0x0C, 0xF4, 0x3C};
const unsigned char unbake_rodata_800D31B0_4[] = {0x80, 0x0C, 0xF4, 0x48};
#endif
