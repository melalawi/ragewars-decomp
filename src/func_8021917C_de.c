#include "common/types.h"
#include "span_1000/code_8021762C.h"
#include "span_1000/types.h"
#include "types.h"





s32 func_8021917C_de(void *arg0, void *arg1) {
    if (((((struct func_8021846C_S3 *) ((s8 *) ((struct ObjectLinks69C *) ((s8 *) arg1))->unk_698))->unkB0) & 0x8000) && ((((struct Record *) ((s8 *) ((struct ObjectLinks69C *) ((s8 *) arg1))->unk_5D8))->team) != 0xFF)) {
        (((struct Object6C *) ((s8 *) arg0))->value) = -1;
        return 1;
    }
    return 0;
}
