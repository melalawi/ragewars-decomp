#include "basetypes.h"

/* Sets the byte at offset 0x10 of the two objects at offsets 0xA64 and 0xA60 of the structure D_800E4690
   points to to 0xFF, shows both through func_8040E958 and clears the word at 0xA68. */
struct Item {
    char pad[0x10];
    u8 alpha;
};

extern char *D_800E4690;
extern void func_8040E958(struct Item *, s32);

void func_80428388(void) {
    (*(struct Item **) (D_800E4690 + 0xA64))->alpha = 0xFF;
    (*(struct Item **) (D_800E4690 + 0xA60))->alpha = 0xFF;
    func_8040E958(*(struct Item **) (D_800E4690 + 0xA60), 1);
    func_8040E958(*(struct Item **) (D_800E4690 + 0xA64), 1);
    *(s32 *) (D_800E4690 + 0xA68) = 0;
}
