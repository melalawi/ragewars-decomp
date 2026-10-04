#include "span_16E000/code_8040A4BC.h"
/* Draws an item's label at its position into the text layer D_8014561C through func_80442574_de, using
   the fixed label D_44F0B8 instead of the item's own when D_80153730 is set; returns 1. */


extern int D_8014D4A0;
extern char D_8014155C[];
extern char D_0044E468[];
extern void func_80442574_de(char *, char *, int, int, int);

int func_8040AA4C_de(int unused, Item_func_8040AA4C_de *item) {
    if (D_8014D4A0 != 0) {
        func_80442574_de(D_8014155C, D_0044E468, item->x, item->y, 0);
    } else {
        func_80442574_de(D_8014155C, item->label, item->x, item->y, 0);
    }
    return 1;
}
