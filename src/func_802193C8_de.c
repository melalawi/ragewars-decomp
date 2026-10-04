#include "span_1000/code_8021762C.h"
#include "types.h"



extern s16 func_8028D28C_de(char *arg0);
extern char D_8011BDC8;

void func_802193C8_de(Struct802193C8 *arg0, s8 arg1) {
    arg0->field0 = 1;
    arg0->field1 = arg1;
    arg0->field2 = func_8028D28C_de(&D_8011BDC8);
    arg0->field4 = 0;
}
