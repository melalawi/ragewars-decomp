/* Fills a pak menu entry's text with its note: unless the menu is busy (D_80153784) it reads note
   id - 3 of the selected channel through func_8040458C; a present note shows its decoded name
   (replaced by D_800D7784 when func_804057BC rejects it) and extension, otherwise both show
   D_800D7788 with size 0. The name and extension are written from offset 3 of the text, cut at
   their terminator and padded with spaces, then the size is printed after them with the format
   D_800E0DA4 through func_80265904. Returns 0. */
#include "basetypes.h"

typedef struct {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct {
    char pad0[0x20];
    Slot *slot;
} Menu;

typedef struct {
    s32 id;
    char pad4[0x10];
    u8 **text;
} Entry;

extern s32 D_80153784;
extern s32 D_8015375C;
extern s32 D_800E28C8;
extern char *D_800D7784;
extern char *D_800D7788;
extern char D_800E0DA4[];

extern s32 func_8040458C(s32 ch, s32 index, s32 *exists, u8 *name, u8 *ext, s32 *size,
                         char *companyCode, char *gameCode);
extern s32 func_804057BC(u8 *name, s32 size);
extern void func_802A125C(u8 *dst, char *src);
extern void func_80265904(u8 *dst, char *format, s32 value);

s32 func_80407F6C(Entry *entry, Menu *menu) {
    u8 name[16];
    u8 ext[8];
    char companyCode[8];
    char gameCode[8];
    s32 exists;
    s32 size;
    s32 ch;
    s32 result;
    s32 more;
    s32 i;
    u8 *dst;
    u8 c;
    s32 index;
    char **placeholder;

    c = ' ';
    index = entry->id - 3;
    if (D_80153784 != 0) {
        return 0;
    }
    if (D_8015375C != 0) {
        ch = D_800E28C8;
    } else {
        ch = menu->slot->channel;
    }
    result = func_8040458C(ch, index, &exists, name, ext, &size, companyCode, gameCode);
    if (exists != 0 && result == 0) {
        if (func_804057BC(name, 16) != 0) {
            func_802A125C(name, D_800D7784);
        }
    } else {
        placeholder = &D_800D7788;
        func_802A125C(name, *placeholder);
        func_802A125C(ext, *placeholder);
        size = 0;
    }
    more = 1;
    dst = *entry->text;
    dst += 3;
    for (i = 0; i < 16; i++) {
        if (more) {
            c = name[i];
        }
        if (c == 0) {
            more = 0;
            c = ' ';
        }
        *dst++ = c;
    }
    more = 1;
    dst++;
    for (i = 0; i < 4; i++) {
        if (more) {
            c = ext[i];
        }
        if (c == 0) {
            more = 0;
            c = ' ';
        }
        *dst++ = c;
    }
    *dst += 2;
    func_80265904(dst, D_800E0DA4, size);
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2404_4[] = {0x80, 0x0C, 0xFF, 0xF4};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7784_4[] = {0x80, 0x0D, 0x53, 0x74};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D3758_4[] = {0x80, 0x0D, 0x19, 0x80};
#endif
