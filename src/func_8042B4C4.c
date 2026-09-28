#include "basetypes.h"

/* Sets the byte at offset 0x10 of the two objects at offsets 0x454 and 0x450 of the structure D_800E4F60
   points to to 0xFF, shows both through func_8040E958 and clears the word at 0x46C. */
struct Item {
    char pad[0x10];
    u8 alpha;
};

extern char *D_800E4F60;
extern void func_8040E958(struct Item *, s32);

void func_8042B4C4(void) {
    (*(struct Item **) (D_800E4F60 + 0x454))->alpha = 0xFF;
    (*(struct Item **) (D_800E4F60 + 0x450))->alpha = 0xFF;
    func_8040E958(*(struct Item **) (D_800E4F60 + 0x450), 1);
    func_8040E958(*(struct Item **) (D_800E4F60 + 0x454), 1);
    *(s32 *) (D_800E4F60 + 0x46C) = 0;
}
