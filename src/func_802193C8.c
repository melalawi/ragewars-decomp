#include "basetypes.h"

typedef struct {
    s8 field0;
    s8 field1;
    s16 field2;
    s16 field4;
} Struct802193C8;

extern s16 func_8028D268(char *arg0);
extern char D_8011FE88;

void func_802193C8(Struct802193C8 *arg0, s8 arg1) {
    arg0->field0 = 1;
    arg0->field1 = arg1;
    arg0->field2 = func_8028D268(&D_8011FE88);
    arg0->field4 = 0;
}
