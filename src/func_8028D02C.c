#include "basetypes.h"

typedef struct {
    s32 unk0;
    char pad4[8];
    s16 unkC;
} Sub18;

typedef struct {
    char pad0[0x18];
    Sub18 *unk18;
    char pad1C[0xC8];
    u16 unkE4;
    char padE6[0x2E8 - 0xE6];
} Record;

typedef struct {
    char pad0[0x138];
    Record *unk138;
    s32 unk13C;
    s32 unk140;
} Container;

/* Collects up to max records of arg0 (indices unk13C to unk140) whose unkE4, unk18->unk0 and unk18->unkC match key0, key1 and key2 (each skipped when -1) into out, returning the count. */
s32 func_8028D02C(Container *arg0, s32 key0, s32 key1, s32 key2, Record **out, s32 max) {
    s32 i = arg0->unk13C;
    s32 end = arg0->unk140;
    Record *base = arg0->unk138;
    s32 count = 0;
    Record *rec;

    for (; i < end; i++) {
        rec = &base[i];
        if (count >= max) {
            return count;
        }
        if ((key0 == -1 || rec->unkE4 == key0) && (key1 == -1 || rec->unk18->unk0 == key1)
            && (key2 == -1 || rec->unk18->unkC == key2)) {
            *out++ = rec;
            count++;
        }
    }
    return count;
}
