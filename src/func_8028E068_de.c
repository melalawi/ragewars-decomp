#include "span_1000/code_8028DF6C.h"
#include "span_1000/types.h"
#include "types.h"










void func_8028E068_de(void *arg0) {
    s32 found;
    s32 clear_index;
    char *record;
    char *clear_ptr;
    char *out;
    s32 wanted_type;

    found = 0;
    clear_index = 15;
    record = ((func_8028E044_S1 *)(arg0))->unk138;
    clear_ptr = &((func_8028E044_S1 *)(arg0))->unk3C;
    ((func_8028E044_S1 *)(arg0))->unk1B6A4 = 0;
    do {
        ((func_8028E044_S2 *)(clear_ptr))->unk1B664 = 0;
        clear_index--;
        clear_ptr -= 4;
    } while (clear_index >= 0);

    if (((func_8028E044_S1 *)(arg0))->unk140 > 0) {
        clear_index = 0;
        wanted_type = 14;
        out = (char *)((found * 4) + (s32)arg0);
        do {
            if (*((func_8024C654_S1 *)(record))->unk18 == wanted_type) {
                ((func_8028E044_S2 *)(out))->unk1B664 = record;
                out += 4;
                found++;
            }
            if (found >= 16) {
                break;
            }
            clear_index++;
            if (clear_index >= ((func_8028E044_S1 *)(arg0))->unk140) {
                break;
            }
            record += 0x2E8;
        } while (1);
    }
    ((func_8028E044_S1 *)(arg0))->unk1B6A4 = found;
}
