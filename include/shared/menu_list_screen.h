#ifndef RAGEWARS_SHARED_MENU_LIST_SCREEN_H
#define RAGEWARS_SHARED_MENU_LIST_SCREEN_H
#include "basetypes.h"
typedef struct MenuListScreen { void *panels[2]; void *listB, *listA, *listC; s32 selection; void *window; } MenuListScreen;
#endif
