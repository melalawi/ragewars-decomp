#include "common/types.h"
#include "span_16E000/code_8042ACB0.h"
extern struct MenuSettings D_80142208_de;
#include "types.h"

/* Refreshes the name label of screen D_800E0F10: with no entry at 0x438 it uses the default text
   D_800D34D4_de; otherwise it formats the entry's name from func_8042B1B8_de on the list func_8042B294_de
   returns for 0x434 into a 0x40-byte buffer through D_8011BDC8 and takes the text func_802A0494_de
   makes of it. Either text is copied into the screen's label at 0x3F4 through func_802A025C_de, and the
   widget at 0x3EC is pointed at that label. */




extern struct Screen_func_8042AFE0_de *D_800E0F10;
extern char *D_800D34D4_de[];
extern char D_8011BDC8[];
extern s32 func_8042B294_de(s32);
extern char *func_8042B1B8_de(s32, s32);
extern void func_8028D380_de(void *, char *, char *, s32);
extern char *func_802A0494_de(char *);
extern void func_802A025C_de(char *, char *);

void func_8042AFE0_de(void) {
    char buffer[0x40];

    if (D_800E0F10->entry == 0) {
        func_802A025C_de(D_800E0F10->label,
#if defined(VERSION_EU) || defined(VERSION_EU_X)
D_800D34D4_de[D_80142208_de.language]
#else
D_800D34D4_de[0]
#endif
);
    } else {
        func_8028D380_de(D_8011BDC8, func_8042B1B8_de(func_8042B294_de(D_800E0F10->list), D_800E0F10->entry),
                      buffer, 0x3F);
        func_802A025C_de(D_800E0F10->label, func_802A0494_de(buffer));
    }
    D_800E0F10->widget->text = D_800E0F10->label;
}
