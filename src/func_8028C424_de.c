#include "span_1000/code_8028B64C.h"
#include "types.h"






s32 func_8028C424_de(char *object, s32 type) {
    s32 index;
    char *record;

    index = ((func_8028C400_S1 *)(object))->unk11C0;
    record = ((func_8028C400_S1 *)(object))->unk11D0;
    index--;
    if (index != -1) {
        record += 0xE;
        do {
            if (((func_8028C400_S2 *)(record))->unk1 == type &&
                (*(u8 *)record & 0x40) == 0) {
                return 0;
            }
            index--;
            record += 0x14;
        } while (index != -1);
    }

    index = ((func_8028C400_S1 *)(object))->unk11C4;
    record = ((func_8028C400_S1 *)(object))->unk11D4;
    index--;
    if (index != -1) {
        do {
            if (((func_8028C400_S2 *)(record))->unkF == type &&
                (((func_8028C400_S2 *)(record))->unkE & 0x40) == 0) {
                return 0;
            }
            index--;
            record += 0x14;
        } while (index != -1);
    }

    return 1;
}
