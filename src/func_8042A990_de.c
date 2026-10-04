#include "common/types.h"
#include "span_16E000/code_804288E0.h"
#include "types.h"

/* Refreshes the selection on the screen D_800E4F60: for category 0 to 3 at 0x434 it takes the item
   the selection at 0x438 names in the 4-byte table D_800E5240, D_800E5214, D_800E51F8 or
   D_800E51E4 from the window into 0x43C, copies the selection's name into the text at 0x3F4 (the
   default label for selection 0, otherwise the resource name func_8028D380_de reads from
   D_8011FE88 for the entry func_8042B1B8_de finds in the category's list func_8042B294_de), points the
   label at 0x3EC to that text and calls func_80245B28_de. */







extern struct Screen_func_8042A990_de *D_800E0F10;
extern struct StateFlags D_800E1194[];
extern struct StateFlags D_800E11A8_de[];
extern struct StateFlags D_800E11C4[];
extern struct StateFlags D_800E11F0_de[];
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
extern char *D_800E1DA4[];
#define DEFAULT_LABEL D_800E1DA4[D_80152789]
#else
extern char *D_800D34D4;
#define DEFAULT_LABEL D_800D34D4
#endif
extern char D_8011BDC8[];
extern void *func_8040EC30_de(void *, s32);
extern void *func_8042B294_de(s32);
extern s32 func_8042B1B8_de(void *, s32);
extern void func_8028D380_de(char *, s32, char *, s32);
extern char *func_802A0494_de(char *);
extern void func_802A025C_de(char *, char *);
extern void func_80245B28_de();

void func_8042A990_de(void) {
    struct StateFlags *table;
    char buffer[0x40];

    switch (D_800E0F10->category) {
    case 3:
        table = D_800E1194;
        break;
    case 2:
        table = D_800E11A8_de;
        break;
    case 1:
        table = D_800E11C4;
        break;
    case 0:
        table = D_800E11F0_de;
        break;
    default:
        return;
    }
    D_800E0F10->item = func_8040EC30_de(D_800E0F10->window, table[D_800E0F10->selection].flags);
    if (D_800E0F10->selection == 0) {
        func_802A025C_de(D_800E0F10->text, DEFAULT_LABEL);
    } else {
        func_8028D380_de(D_8011BDC8,
                      func_8042B1B8_de(func_8042B294_de(D_800E0F10->category), D_800E0F10->selection),
                      buffer, 0x3F);
        func_802A025C_de(D_800E0F10->text, func_802A0494_de(buffer));
    }
    D_800E0F10->label->text = D_800E0F10->text;
    func_80245B28_de();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2180_4[] = {0x80, 0x0C, 0xF5, 0x10};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7500_4[] = {0x80, 0x0D, 0x48, 0x90};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E1DA4_10[] = {0x80, 0x0D, 0x01, 0xE0, 0x80, 0x0D, 0x4A, 0x40, 0x80, 0x0D, 0xA3, 0x24, 0x80, 0x0D, 0xE0, 0xFC};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DD8B0_C[] = {0x80, 0x0D, 0x0B, 0xB0, 0x80, 0x0D, 0x54, 0x48, 0x80, 0x0D, 0xA0, 0x94};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D34D4_4[] = {0x80, 0x0D, 0x04, 0x50};
#endif
