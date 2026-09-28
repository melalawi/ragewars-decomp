#include "basetypes.h"

typedef struct {
    s8 pad603[0x603];
    s8 values[0x2B];
    s16 selected;
} Object;

extern s32 func_8022EAFC(void *arg0, s32 arg1);
extern s32 func_8025DF54(s32);

s32 func_8022FAE8(Object *arg0) {
    s32 value;
    s32 number;
    s32 index;
    s32 result;

    value = arg0->values[arg0->selected * 2];
    if (value < 0) {
        value = 0;
    }
    if (value >= 8) {
        value = 0;
    }
    value++;
    while (value < 8) {
        number = 0;
        while ((number < 22) && (value != arg0->values[number * 2])) {
            number++;
        }
        if ((number < 22) && (func_8022EAFC(arg0, number) != 0)) {
            return number;
        }
        value++;
    }
    value = arg0->values[arg0->selected * 2];
    number = 1;
    while (number < value) {
        index = 0;
        while ((index < 22) && (number != arg0->values[index * 2])) {
            index++;
        }
        if ((index < 22) && (func_8022EAFC(arg0, index) != 0)) {
            return index;
        }
        number++;
    }
    func_8025DF54(0xD4D);
    result = arg0->selected;
    return result;
}
