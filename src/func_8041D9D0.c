/* Sets the label text for the focused node: the text of its entry in the 50-entry id table when the
   current player's unlock bit for that entry is set, otherwise the default text; the European
   cartridges hold each entry's text per language and pick the current language's. */
#include "basetypes.h"

typedef struct {
    char pad0[0xC];
    s16 id;
} Node;

typedef struct {
    char pad0[0x38];
    char *text;
} Label;

typedef struct {
    char pad0[0xEC];
    Node *focus;
    Label *label;
    char padF4[0x18];
    s32 player;
} Menu;

typedef struct {
    s32 id;
    char **text;
} TextEntry;

typedef struct {
    char data[0x190];
} PlayerRecord;

#if defined(VERSION_EU) || defined(VERSION_EU_MUL)
typedef struct {
    char pad0[0x17C1];
    u8 language;
} Game;

extern Game D_80145088;
#define LANGUAGE D_80145088.language
#else
#define LANGUAGE 0
#endif

extern Menu *D_800E3590;
extern TextEntry D_800E3594[];
extern PlayerRecord D_80102B4A[];
extern char D_800E14F8[];
extern s32 func_80265670(PlayerRecord *bits, s32 bit);

void func_8041D9D0(void) {
    s32 i;

    if (D_800E3590->focus == 0) {
        D_800E3590->label->text = D_800E14F8 + 4;
        return;
    }
    for (i = 0; i < 50; i++) {
        if (D_800E3594[i].id == D_800E3590->focus->id) {
            if (func_80265670(&D_80102B4A[D_800E3590->player], i) == 1) {
                D_800E3590->label->text = D_800E3594[i].text[LANGUAGE];
            } else {
                D_800E3590->label->text = D_800E14F8 + 4;
            }
            return;
        }
    }
}
