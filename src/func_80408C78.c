/* Confirms the selected pak menu entry: marks the menu busy and returns when func_80406178 takes
   over the selected channel; with a profile loaded (D_80153730) it creates the player through
   func_8022A5B0, copies the loaded profile (flags, four words and eight name bytes) into the
   player's profile, applies the loaded team through func_8044AD14 and shows the player's message
   through func_80442934; otherwise it deletes the chosen note through func_80404858 and shows the
   D_44F7C0 or D_44F82C result prompt. Returns 1. */
#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

typedef struct Profile {
    u16 words[4];
    char pad8[0x78];
    u8 flags;
    char pad81[3];
    u8 name[8];
} Profile;


typedef struct {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct {
    char pad0[0x1C];
    Player *player;
    Slot *slot;
    char *prompt;
} Menu;

extern s32 D_8015375C;
extern s32 D_800E28C8;
extern s32 D_80153784;
extern s32 D_80153730;
extern u8 D_80153740;
extern struct { u16 value; } D_80153738;
extern struct { u16 value; } D_8015373A;
extern struct { u16 value; } D_8015373C;
extern struct { u16 value; } D_8015373E;
extern u8 D_80153744[];
extern s8 D_80153720;
extern s32 D_8015378C;
extern char D_80145040;
extern char D_450698[];
extern char D_8014561C[];
extern char D_44F7C0[];
extern char D_44F82C[];

extern s32 func_80406178(Menu *menu, s32 ch, s32 mode);
extern Player *func_8022A5B0(char *pool, Slot *slot);
extern void func_8044AD14(Player *player, s32 team);
extern void func_80442934(char *text, Menu *menu, char *format);
extern s32 func_80404858(s32 ch, s32 index);
extern void func_804426E4(char *, char *, Player *, Slot *, char *);

typedef struct func_80408C78_S1 func_80408C78_S1;
struct func_80408C78_S1 {
    u16 unk0;
    char pad0[0x2 - 0x0 - sizeof(u16)];
    u16 unk2;
    char pad2[0x4 - 0x2 - sizeof(u16)];
    u16 unk4;
    char pad4[0x6 - 0x4 - sizeof(u16)];
    u16 unk6;
};

s32 func_80408C78(void *unused, Menu *menu) {
    s32 ch;
    Player *player;
    Profile *profile;
    s32 i;

    if (D_8015375C != 0) {
        ch = D_800E28C8;
    } else {
        ch = menu->slot->channel;
    }
    if (func_80406178(menu, ch, 0) != 0) {
        D_80153784 = 1;
        return 1;
    }
    if (D_80153730 != 0) {
        player = func_8022A5B0(&D_80145040, menu->slot);
        menu->player = player;
        profile = player->views5D8.view5D8_6.profile;
        profile->flags = D_80153740;
        ((func_80408C78_S1 *)(profile))->unk0 = D_80153738.value;
        ((func_80408C78_S1 *)(profile))->unk2 = D_8015373A.value;
        ((func_80408C78_S1 *)(profile))->unk4 = D_8015373C.value;
        ((func_80408C78_S1 *)(profile))->unk6 = D_8015373E.value;
        for (i = 0; i < 8; i++) {
            profile->name[i] = D_80153744[i];
        }
        func_8044AD14(player, D_80153720);
        func_80442934(player->views5DC.view5DC_7.messages + 0x554, menu, D_450698);
        return 1;
    }
    if (func_80404858(ch, D_8015378C) == 0) {
        func_804426E4(D_8014561C, D_44F7C0, menu->player, menu->slot, menu->prompt);
    } else {
        func_804426E4(D_8014561C, D_44F82C, menu->player, menu->slot, menu->prompt);
    }
    return 1;
}
