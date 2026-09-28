/* Clamps a list's two cursor coordinates into their [min, max] ranges and scrolls each view offset so the cursor stays inside the visible window. */
#include "basetypes.h"

typedef struct {
    char pad0[0x48];
    u8 visibleX;
    u8 visibleY;
    u8 maxX;
    u8 maxY;
    u8 cursorX;
    u8 cursorY;
    u8 scrollX;
    u8 scrollY;
    u8 minX;
    u8 minY;
} List;

void func_80412270(List *list) {
    if (list->maxY < list->cursorY) {
        list->cursorY = list->maxY;
    }
    if (list->maxX < list->cursorX) {
        list->cursorX = list->maxX;
    }
    if (list->cursorY < list->minY) {
        list->cursorY = list->minY;
    }
    if (list->cursorX < list->minX) {
        list->cursorX = list->minX;
    }
    if (list->cursorY - list->scrollY >= list->visibleY - list->minY) {
        list->scrollY = list->cursorY - (list->visibleY - list->minY) + 1;
    }
    if (list->cursorX - list->scrollX >= list->visibleX - list->minX) {
        list->scrollX = list->cursorX - (list->visibleX - list->minX) + 1;
    }
    if (list->cursorY < list->scrollY) {
        list->scrollY = list->cursorY;
    }
    if (list->cursorX < list->scrollX) {
        list->scrollX = list->cursorX;
    }
}
