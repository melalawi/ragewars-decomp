#include "basetypes.h"

typedef struct func_8028C400_S1 func_8028C400_S1;
typedef struct func_8028C400_S2 func_8028C400_S2;
struct func_8028C400_S1 {
    char pad0[0x11C0];
    s32 unk11C0;
    char pad11C0[0x11C4 - 0x11C0 - sizeof(s32)];
    s32 unk11C4;
    char pad11C4[0x11D0 - 0x11C4 - sizeof(s32)];
    char* unk11D0;
    char pad11D0[0x11D4 - 0x11D0 - sizeof(char*)];
    char* unk11D4;
};
struct func_8028C400_S2 {
    char pad0[0x1];
    u8 unk1;
    char pad1[0xE - 0x1 - sizeof(u8)];
    u8 unkE;
    char padE[0xF - 0xE - sizeof(u8)];
    u8 unkF;
};

s32 func_8028C400(char *object, s32 type) {
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
