#include "span_1000/code_8024E6C8.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_8011BDC8;
extern s32 D_80142208_de;
extern s32 func_8028B25C_de(void *arg0, s32 arg1);






s32 func_8024F858_de(void *arg0) {
    void *obj;
    s32 value;
    s32 index;

    obj = ((func_8024F848_S1 *)(arg0))->unk18;
    if (*(s32 *)obj == 0xC) {
        return 0;
    }

    value = ((func_80250DBC_S2 *)(obj))->unkE;
    index = func_8028B25C_de(&D_8011BDC8, ((func_8024F848_S1 *)(arg0))->unk4);
    if (index < 0x6AB) {
        if (index < 0x6A9) {
            return value;
        }
        if (D_80142208_de & 0x800) {
            value = 1;
        }
        if (D_80142208_de & 0x1000) {
            value = 2;
        }
    }
    return value;
}
