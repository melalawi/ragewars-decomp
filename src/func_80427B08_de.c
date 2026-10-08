#include "span_C76B0/data.h"

#include "common/unused.h"
#include "types.h"
/* Writes the heading of the results screen D_800E0640_de into item 0x153: in one-player mode the
   label 0x69 followed by the name of the character in the player's status record; in three-player
   mode the label 0x3D with the stage's best time as minutes and seconds in item 0x156 (the record's
   time when set, else the stage default from func_80425C70_de) and the heading D_800D34DC; in
   four-player mode the heading D_800D34D8. */

extern struct ResultsHeadingScreen *D_800E0640_de;
extern struct ResultsHeadingSettings D_80142208_de;
extern struct ResultsHeadingRecord D_800FEB00[];
extern struct ResultsHeadingCharacter D_800DFA6C[];
extern char D_800DD9BC[];
extern char D_800DD9C8[];
extern char D_800DD9D0_de[];

extern struct Label *func_8040EC30_de(void *, s32);
extern void func_8040E8D8_de(struct Label *, s32);
extern char *func_80411D78_de(s32);
extern void func_802A025C_de(char *, char *);
extern s32 func_8041F140_de(s32);
extern void func_8042E9B4_de(char *, char *, char *);
extern void func_802A0C08_de(char *, char *, ...);
extern struct ResultsHeadingStage *func_80425C70_de(s32, s32, s32);

void func_80427B08_de(void) {
    struct ResultsHeadingSettings *settings;
    struct Label *item;
    s32 time;
    u8 best;
    char buffer[32];

    func_8040EC30_de(D_800E0640_de->window, 0x153)->text = D_800E0640_de->heading;
    settings = &D_80142208_de;
    switch (settings->players) {
    case 1:
        func_802A025C_de(D_800E0640_de->heading, func_80411D78_de(0x69));
        func_8042E9B4_de(D_800E0640_de->heading, D_800DD9BC,
                      D_800DFA6C[func_8041F140_de(settings->status[D_800E0640_de->record].kind)].name->text);
        break;
    case 3:
        func_802A025C_de(D_800E0640_de->time, func_80411D78_de(0x3D));
        item = func_8040EC30_de(D_800E0640_de->window, 0x156);
        func_8040E8D8_de(item, 1);
        item->text = D_800E0640_de->time;
        time = D_800FEB00[D_800E0640_de->record].times[D_800E0640_de->stage];
        if (time > 0) {
            func_802A0C08_de(buffer, D_800DD9C8, time / 60, time % 60);
        } else {
            best = func_80425C70_de(D_800E0640_de->stage, 3, 0)->time;
            func_802A0C08_de(buffer, D_800DD9C8, (u8)(best / 60), (u8)(best % 60));
        }
        func_8042E9B4_de(D_800E0640_de->time, D_800DD9D0_de, buffer);
        func_802A025C_de(D_800E0640_de->heading, D_800D34DC);
        break;
    case 4:
        func_802A025C_de(D_800E0640_de->heading, D_800D34D8);
        break;
    }
}
