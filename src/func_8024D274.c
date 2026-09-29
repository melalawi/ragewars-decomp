/* Returns the height extent used for an actor: a player actor with no health left defers to
 * func_8024E3B4, otherwise the value is selected by the actor's state type from its descriptor fields
 * or constant heights, with 0 for unknown types. Plain switch; its jump table and the two float
 * literals are the function's own rodata at 0x800C8CE8, which needs a RESIDENT_TABLES entry. */
#include "basetypes.h"

extern f32 func_8024E3B4(void *);

typedef struct func_8024D274_S1 func_8024D274_S1;
typedef struct func_8024D274_S2 func_8024D274_S2;
typedef struct func_8024D274_S3 func_8024D274_S3;
typedef struct func_8024D274_S4 func_8024D274_S4;
struct func_8024D274_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
    char pad100[0x174 - 0x100 - sizeof(s32)];
    s32 unk174;
    char pad174[0x1D8 - 0x174 - sizeof(s32)];
    void* unk1D8;
};
struct func_8024D274_S2 {
    char pad0[0x6F4];
    f32 unk6F4;
};
struct func_8024D274_S3 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x30 - 0x20 - sizeof(f32)];
    f32 unk30;
    char pad30[0xF4 - 0x30 - sizeof(f32)];
    f32 unkF4;
};
struct func_8024D274_S4 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x1C - 0x14 - sizeof(s32)];
    f32 unk1C;
};

f32 func_8024D274(void *arg0) {
    void *state;

    if (*(u8 *)arg0 == 1 && ((func_8024D274_S1 *)(arg0))->unk174 <= 0) {
        return func_8024E3B4(arg0);
    }
    switch (*(s32 *)((func_8024D274_S1 *)(arg0))->unk18) {
    case 11:
        if (*(u8 *)arg0 == 1 && (((func_8024D274_S1 *)(arg0))->unk100 & 0x300000) != 0) {
            return ((func_8024D274_S2 *)(((func_8024D274_S1 *)(arg0))->unk1D8))->unk6F4;
        }
        return ((func_8024D274_S3 *)(((func_8024D274_S1 *)(arg0))->unk18))->unkF4;
    case 1:
    case 4:
        return ((func_8024D274_S3 *)(((func_8024D274_S1 *)(arg0))->unk18))->unk30;
    case 8:
        state = ((func_8024D274_S1 *)(arg0))->unk18;
        if (((func_8024D274_S4 *)(state))->unk14 & 1) {
            return 122.88f;
        }
        return ((func_8024D274_S4 *)(state))->unk1C;
    case 7:
        return ((func_8024D274_S3 *)(((func_8024D274_S1 *)(arg0))->unk18))->unk20;
    case 6:
        return 102.399994f;
    case 0:
    case 5:
    case 10:
    case 12:
    case 13:
    case 14:
        return ((func_8024D274_S3 *)(((func_8024D274_S1 *)(arg0))->unk18))->unk1C;
    }
    return 0.0f;
}
