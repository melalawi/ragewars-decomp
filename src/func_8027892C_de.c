#include "span_1000/code_80276544.h"
#include "span_1000/types.h"
#include "types.h"

extern s8 D_800CD604[];
extern s32 D_800CD728;






void func_8027892C_de(Object_func_8027892C_de *object, u8 *colors) {
    s32 state;
    s32 i;
    u8 *record;
    u8 *end;

    state = D_800CD728;
    i = 0;
    if (!(state & 1)) {
        record = object->records;
        end = record + object->count * 0x10;
        if (record != end) {
            do {
                u16 flags = ((func_8020676C_S1 *)(record))->unk6;
                s32 amount;
                s32 value;
                u8 *color;

                if (flags & 0x70) {
                    amount = D_800CD604[(state + ((flags & 0x70) >> 2)) & 0x3F];
                    amount >>= (flags & 0xC) >> 2;
                    color = colors + i * 4;

                    value = amount + color[0];
                    if (value >= 0x100) value = 0xFF;
                    if (value < 0) value = 0;
                    record[0xC] = value;

                    value = amount + color[1];
                    if (value >= 0x100) value = 0xFF;
                    if (value < 0) value = 0;
                    record[0xD] = value;

                    value = amount + color[2];
                    if (value >= 0x100) value = 0xFF;
                    if (value < 0) value = 0;
                    record[0xE] = value;
                }
                record += 0x10;
                i++;
            } while (record != end);
        }
    }
}
