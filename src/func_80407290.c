/* Saves the loaded profile record to the Controller Pak from the pak menu: when the pak is
   ready it checks the free space against the record's size and that a note slot is free (showing
   prompt D_44F5EC and returning 0 when either fails), picks an unused extension through
   func_80405454 and writes the record through func_80404958; it then releases the temporary
   blocks D_800E28B0 and D_800E28B4 and, after a write attempt, shows the saved or failed prompt
   with the controller port's label, returning 1. */
#include "basetypes.h"

typedef struct {
    char pad0[0x698];
    char *title;
} Player;

typedef struct {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct {
    char pad0[0x14];
    char *text;
    char pad18[4];
    Player *player;
    Slot *slot;
} Menu;

extern s32 D_8015375C;
extern s32 D_80153750;
extern s32 D_800E28C8;
extern void *D_800E28B0;
extern void *D_800E28B4;
extern void *D_800E28B8;
extern void *D_800E28BC;
extern u8 D_80153738[];
extern char *D_800D7700[];
extern char *D_800D770C;
extern char D_8014561C[];
extern char D_44F5EC[];
extern char D_44F778[];
extern char D_44F808[];
extern char D_451820[];
extern char D_451844[];
extern char D_451868[];
extern char D_45188C[];

extern u32 func_804057EC(u32 bytes);
extern s32 func_80405160(s32 ch, s32 *freeSpace);
extern s32 func_804050CC(s32 ch, s32 *noteCount);
extern s32 func_80405454(s32 ch, u8 *ext);
extern s32 func_80404958(s32 ch, s32 size, void *data, char *name, u8 *ext, char *code);
extern void func_802538A8(s32);
extern void func_802537D8(s32, void *);
extern void func_804426E4(char *, char *, Player *, char *, char *);

static inline Player *func_80407290_channel(Menu *menu, s32 *ch) {
    Player *player;

    if (D_8015375C != 0) {
        *ch = D_800E28C8;
        player = 0;
    } else {
        *ch = menu->slot->channel;
        player = menu->player;
    }
    return player;
}

static inline char *func_80407290_port(s32 port) {
    char *label;

    switch (port) {
        case 0:
        default:
            label = D_451820;
            break;
        case 1:
            label = D_451844;
            break;
        case 2:
            label = D_451868;
            break;
        case 3:
            label = D_45188C;
            break;
    }
    return label;
}

s32 func_80407290(void *unused, Menu *menu) {
    s32 result;
    s32 prompt;
    s32 written;
    Player *player;
    s32 ch;
    u32 needed;
    s32 freeSpace;
    s32 noteCount;
    u8 ext[8];
    char **titles;

    result = 0;
    prompt = 1;
    written = 0;
    titles = D_800D7700;
    player = func_80407290_channel(menu, &ch);
    if (D_80153750 != 0) {
        needed = func_804057EC(0x18);
        result = func_80405160(ch, &freeSpace);
        if (result == 0) {
            if (freeSpace >= (s32)needed) {
                result = func_804050CC(ch, &noteCount);
                if (result == 0 && noteCount != 0) {
                    prompt = 0;
                    result = func_80405454(ch, ext);
                    if (result == 0) {
                        written = 1;
                        result = func_80404958(ch, 0x18, D_80153738, titles[0], ext, D_800D770C);
                    }
                }
            }
            if (prompt) {
                func_804426E4(D_8014561C, D_44F5EC, player, player->title, menu->text);
                return 0;
            }
        }
    }
    if (D_800E28B0 != 0 || D_800E28B4 != 0) {
        func_802538A8(0);
    }
    if (D_800E28B0 != 0) {
        func_802537D8(0, D_800E28B0);
    }
    if (D_800E28B4 != 0) {
        func_802537D8(0, D_800E28B4);
    }
    D_800E28B0 = 0;
    D_800E28B4 = 0;
    D_800E28B8 = 0;
    D_800E28BC = 0;
    if (written) {
        if (result == 0) {
            func_804426E4(D_8014561C, D_44F778, player, player->title, func_80407290_port(ch));
        } else {
            func_804426E4(D_8014561C, D_44F808, player, player->title, func_80407290_port(ch));
        }
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D238C_4[] = {0x80, 0x0C, 0xFF, 0x74};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D770C_4[] = {0x80, 0x0D, 0x52, 0xF4};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D36E0_4[] = {0x80, 0x0D, 0x19, 0x04};
#endif
