#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022A274.h"
#include "types.h"

extern void func_80285D30_de(s32 *);






void func_8022A880_de(void *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            func_80285D30_de(((ObjectLinks16E4_4 *)(record))->unk_698 + 0x140);
            ((struct IntegerStateD4 *) ((ObjectLinks16E4_4 *) record)->unk_698)->unk_D0 = 0;
            record = ((ObjectLinks16E4_4 *)(record))->unk_16E0;
        } while (record != 0);
    }
}
