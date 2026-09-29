#include "basetypes.h"

/* Reports whether the two-character code arg0 and the four-character name arg1 are the pair D_800D7708 and D_800D770C, measuring them with func_802A1238 and comparing them with func_802A137C; returns one on a match and zero otherwise. */
extern char *D_800D7708;
extern char *D_800D770C;

extern s32 func_802A1238(char *);
extern s32 func_802A137C(char *, char *);

s32 func_80409824(char *code, char *name) {
    if (func_802A1238(name) == 4 && func_802A1238(code) == 2 &&
        func_802A137C(name, D_800D770C) == 0 && func_802A137C(code, D_800D7708) == 0) {
        return 1;
    }
    return 0;
}
