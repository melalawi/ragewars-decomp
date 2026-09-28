/* Fills the pak menu header by choosing its text from the save, single-pak or other mode and printing the selected pak's free space and the blocks the save needs as three digits at offsets 14 and 31. */
#include "basetypes.h"

typedef struct {
    char c[4];
} Digits;

typedef struct {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct {
    char pad0[0x20];
    Slot *slot;
} Menu;

typedef struct {
    char pad0[0x14];
    u8 **text;
} Entry;

extern s32 D_8015375C;
extern s32 D_80153750;
extern s32 D_80153760;
extern s32 D_8015377C;
extern s32 D_800E28C8;
extern s32 D_8011FECC;
extern Digits D_800E0DA8;
extern char D_800E0DA4[];
extern u8 *D_800D7780;
extern u8 *D_800D7798;
extern u8 *D_800D7E14;

extern s32 func_80405160(s32 ch, s32 *freeSpace);
extern s32 func_804057EC(s32 size);
extern void func_80265904(Digits *dst, char *format, s32 value);

static inline int space_required(int size) {size += 0x610; return func_804057EC(size);}
s32 func_80408118(Entry *entry, Menu *menu) {
    Digits digits;
    s32 freeSpace;
    s32 ch;
    s32 need;
    s32 result;
    u8 *text;
    u8 **header;
    char *format;
    Digits *buffer;

    if (D_8015375C != 0) {
        ch = D_800E28C8;
    } else {
        ch = menu->slot->channel;
    }
    digits = D_800E0DA8;
    buffer = &digits;
    if (D_80153750 != 0) {
        entry->text = &D_800D7780;
        if (func_80405160(ch, &freeSpace) == 0) {
            if (D_8015377C) need=func_804057EC(0x18); else need=space_required(D_8011FECC);
            text = *entry->text;
            func_80265904(&digits, D_800E0DA4, freeSpace);
            text += 14;
            *text++ = digits.c[0];
            *text++ = digits.c[1];
            *text = digits.c[2];
            func_80265904(&digits, D_800E0DA4, need);
            text += 15;
            *text++ = digits.c[0];
            *text = digits.c[1];
            text[1] = digits.c[2];
        }
    } else if (D_8015375C != 0) {
        header = &D_800D7798;
        goto fill;
    } else if (D_80153760 != 0) {
        header = &D_800D7780;
    fill:
        entry->text = header;
        result = func_80405160(ch, &freeSpace);
        need = func_804057EC(D_8011FECC + 0x610);
        text = *entry->text;
        if (result == 0) {
            text += 14;
            format = D_800E0DA4;
            func_80265904(buffer, format, freeSpace);
            *text++ = digits.c[0];
            *text++ = digits.c[1];
            *text = digits.c[2];
            func_80265904(buffer, format, need);
            text += 15;
            *text++ = digits.c[0];
            *text = digits.c[1];
            text[1] = digits.c[2];
        }
    } else {
        entry->text = &D_800D7E14;
    }
    return 0;
}
