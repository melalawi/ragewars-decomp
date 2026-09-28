#include "basetypes.h"

/* Configures a three-channel record: copies a by-value three-word block to offset 8 and a value to
   0x14, and gives each of the channels at 0x18, 0x2C and 0x40 the same mode word and a level scaled
   by the pooled constant D_800C8664. */
typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

struct Channel {
    s32 mode;
    f32 level;
    char pad[0x14 - 8];
};

struct Record {
    char pad[8];
    Triple triple;
    f32 value;
    struct Channel channels[3];
};

extern f32 D_800C8664;

void func_80239DD8(struct Record *record, f32 first, f32 second, f32 third, f32 value, s32 mode,
                   Triple triple) {
    record->triple = triple;
    record->value = value;
    record->channels[0].mode = mode;
    record->channels[1].mode = mode;
    record->channels[2].mode = mode;
    record->channels[0].level = first * D_800C8664;
    record->channels[1].level = second * D_800C8664;
    record->channels[2].level = third * D_800C8664;
}
