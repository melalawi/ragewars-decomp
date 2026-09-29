#include "basetypes.h"

/* Sets the byte at offset 0x10 of the two objects at offsets 0xA64 and 0xA60 of the structure D_800E4690
   points to to 0xFF, shows both through func_8040E958 and clears the word at 0xA68. */
struct Item {
    char pad[0x10];
    u8 alpha;
};

typedef struct func_80428388_S1 func_80428388_S1;
struct func_80428388_S1 {
    char pad0[0xA60];
    struct Item* unkA60;
    char padA60[0xA64 - 0xA60 - sizeof(struct Item*)];
    struct Item* unkA64;
    char padA64[0xA68 - 0xA64 - sizeof(struct Item*)];
    s32 unkA68;
};

extern func_80428388_S1 *D_800E4690;
extern void func_8040E958(struct Item *, s32);

void func_80428388(void) {
    (D_800E4690->unkA64)->alpha = 0xFF;
    (D_800E4690->unkA60)->alpha = 0xFF;
    func_8040E958(D_800E4690->unkA60, 1);
    func_8040E958(D_800E4690->unkA64, 1);
    D_800E4690->unkA68 = 0;
}
