#include "basetypes.h"

/* Sets the byte at offset 0x10 of the two objects at offsets 0x454 and 0x450 of the structure D_800E4F60
   points to to 0xFF, shows both through func_8040E958 and clears the word at 0x46C. */
struct Item {
    char pad[0x10];
    u8 alpha;
};

typedef struct func_8042B4C4_S1 func_8042B4C4_S1;
struct func_8042B4C4_S1 {
    char pad0[0x450];
    struct Item* unk450;
    char pad450[0x454 - 0x450 - sizeof(struct Item*)];
    struct Item* unk454;
    char pad454[0x46C - 0x454 - sizeof(struct Item*)];
    s32 unk46C;
};

extern func_8042B4C4_S1 *D_800E4F60;
extern void func_8040E958(struct Item *, s32);

void func_8042B4C4(void) {
    (D_800E4F60->unk454)->alpha = 0xFF;
    (D_800E4F60->unk450)->alpha = 0xFF;
    func_8040E958(D_800E4F60->unk450, 1);
    func_8040E958(D_800E4F60->unk454, 1);
    D_800E4F60->unk46C = 0;
}
