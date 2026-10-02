#ifndef RAGEWARS_SHARED_MENUTEXTITEM_H
#define RAGEWARS_SHARED_MENUTEXTITEM_H

#include "basetypes.h"

typedef struct MenuTextItem {
    s32 unused;
    s16 kind;
    char pad6[0x14 - 6];
    u8 **text;
} MenuTextItem;

extern char *func_8043F290(MenuTextItem *);
extern char *func_8043F120(MenuTextItem *);

#endif
