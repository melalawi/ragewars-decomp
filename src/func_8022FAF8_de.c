#include "span_1000/code_8022F054.h"
#include "types.h"



extern s32 func_8022EB0C_de(void *arg0, s32 arg1);
extern s32 func_8025DF34_de(s32);

s32 func_8022FAF8_de(Object_func_8022FAF8_de *arg0) {
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
        if ((number < 22) && (func_8022EB0C_de(arg0, number) != 0)) {
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
        if ((index < 22) && (func_8022EB0C_de(arg0, index) != 0)) {
            return index;
        }
        number++;
    }
    func_8025DF34_de(0xD4D);
    result = arg0->selected;
    return result;
}
