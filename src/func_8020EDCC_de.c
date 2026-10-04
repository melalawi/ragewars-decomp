#include "common/types.h"
#include "span_1000/code_8020D328.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
/** Reset the float field of each occupied player slot's table entry to the default value. */
extern char D_801372A4[];

extern char *func_8020CFE0_de(char *, int);






void func_8020EDCC_de(char *arg0) {
    char *table = D_801372A4;
    int i;
    float value;

    if (table != 0) {
        value = D_800C1EDC_de;
        for (i = 0; i < 10; i++) {
            Actor1DC *a = ((struct ObjectLinks40 *) (arg0 + (i * 4)))->unk_3C;
            if (a != 0) {
                ((struct func_80232C78_S4 *) func_8020CFE0_de(table, ((struct func_80203E78_S1 *) ((ObjectLinks1458 *) a->info)->unk_1454)->unk4))->unk18 = value;
            }
        }
    }
}
