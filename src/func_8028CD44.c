#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);

typedef struct func_8028CD44_S1 func_8028CD44_S1;
typedef struct func_8028CD44_S2 func_8028CD44_S2;
struct func_8028CD44_S1 {
    char pad0[0x138];
    s32 unk138;
    char pad138[0x140 - 0x138 - sizeof(s32)];
    s32 unk140;
};
struct func_8028CD44_S2 {
    char pad0[0x18];
    s32* unk18;
};

void func_8028CD44(void *arg0) {
    s32 count;
    s32 i;
    s32 offset;
    void *entry;
    s32 field;
    s32 three;

    count = ((func_8028CD44_S1 *)(arg0))->unk140;
    i = 0;
    if (count > 0) {
        three = 3;
        offset = 0;
        do {
            entry = (char *)(((func_8028CD44_S1 *)(arg0))->unk138) + offset;
            field = *(((func_8028CD44_S2 *)(entry))->unk18);
            if (field != three) {
                i += 1;
            } else {
                func_80285D80(arg0, entry, 1);
                i += 1;
            }
            offset += 0x2E8;
        } while (i < count);
    }
}
