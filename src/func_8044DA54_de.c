#include "span_16E000/code_8044E2B8.h"
#include "shared/func_8044DA54_de_closed.h"

void func_8044DA54_de(Owner_func_8044D794_de *arg0, void ***arg1) {
    void *obj;
    Frame_func_8044D794_de *frame;
    Bank_func_8044D794_de *bank;
    struct Entry_func_80405338_de *items;
    struct Entry_func_80405338_de *item;
    Slot_func_8044D794_de *slot;
    s32 count;
    s32 inner;
    s32 i;
    s32 j;
    s32 index;

    if (func_80285180_de(arg1, 0) != 0) {
        obj = **arg1;
        count = *(s32 *) obj;
        for (i = 0; i < count; i++) {
            frame = func_8028FDB4_de(func_8028FDB4_de(obj, i), 1);
            inner = frame->count;
            j = 0;
            if (j < inner) {
                slot = frame->slots;
                do {
                    index = slot->item;
                    if (index != -1) {
                        bank = func_8028FDB4_de(arg0->unk6C, 2);
                        items = bank->items;
                        if ((index < 0) || (index >= bank->count)) {
                            item = 0;
                        } else {
                            item = &items[index];
                        }
                        slot->item = (s32) item;
                    } else {
                        slot->item = 0;
                    }
                    slot++;
                    j++;
                } while (j < inner);
            }
        }
        arg0->unk7C = obj;
    }
}
