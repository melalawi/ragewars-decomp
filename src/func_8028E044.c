#include "basetypes.h"

typedef struct func_8028E044_S1 func_8028E044_S1;
typedef struct func_8028E044_S2 func_8028E044_S2;
typedef struct func_8028E044_S3 func_8028E044_S3;
typedef struct func_8028E044_S4 func_8028E044_S4;
struct func_8028E044_S1 {
    char pad0[0x3C];
    char unk3C;
    char pad3C[0x138 - 0x3C - sizeof(char)];
    char* unk138;
    char pad138[0x140 - 0x138 - sizeof(char*)];
    s32 unk140;
    char pad140[0x1B6A4 - 0x140 - sizeof(s32)];
    s32 unk1B6A4;
};
struct func_8028E044_S2 {
    char pad0[0x1B664];
    char* unk1B664;
};
struct func_8028E044_S3 {
    char pad0[0x18];
    s32* unk18;
};
struct func_8028E044_S4 {
    char pad0[0x1B664];
    char* unk1B664;
};

void func_8028E044(void *arg0) {
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
            if (*((func_8028E044_S3 *)(record))->unk18 == wanted_type) {
                ((func_8028E044_S4 *)(out))->unk1B664 = record;
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
