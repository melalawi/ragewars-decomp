#include "span_1000/code_802B7488.h"
#include "span_1000/types.h"
#include "types.h"





void func_802B25D0_de(void *a, s16 b) {
    void *temp_v1;
    temp_v1 = (b * 0x30) + (((struct func_80203DF0_S3 *) ((s8 *) a))->unk40);
    if ((((struct Shared_GameMode *) ((s8 *) temp_v1))->unk28) == 0) {
        (((struct Shared_GameMode *) ((s8 *) temp_v1))->unk1C) = 0;
        if ((((struct func_80203DF0_S3 *) ((s8 *) a))->unk3C) == b) {
            (((struct func_80203DF0_S3 *) ((s8 *) a))->unk3C) = -1;
        }
    }
}
