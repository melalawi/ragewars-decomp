#ifndef RAGEWARS_SHARED_MENUEVENTS_H
#define RAGEWARS_SHARED_MENUEVENTS_H

#include "basetypes.h"

typedef s32 (*MenuEventHandler)(void *, s32, s32, s32, s32);

typedef struct MenuEventField {
    s32 value;
    char pad[8];
} MenuEventField;

#endif
