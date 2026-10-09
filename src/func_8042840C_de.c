#include "span_16E000/code_804264F0.h"
#include "types.h"
/* Rebuilds the weapon menu for the player D_800E0640_de selects: clears it through func_80428700_de, then
   for each of the 0x16 weapon ids (excluding id 0) whose owned flag in D_80142208_de (offset 0x11C,
   player stride 0x96) is set, appends a row through func_8042854C_de. */





extern struct Screen_func_80428300_de *D_800E0640_de;
extern char D_80142208_de[];

extern void func_8042854C_de(s32 arg0, s32 arg1, s32 arg2);

void func_8042840C_de(void) {
    s32 count;
    s32 weapon;
    s32 base;

    func_80428700_de();
    count = 0;
    base = D_800E0640_de->player * 0x96;
    for (weapon = 0; weapon < 0x16; weapon++) {
        if (((Entry_func_8042840C_de *) (weapon + base + D_80142208_de))->owned == 1) {
            if (weapon != 0) {
                func_8042854C_de(count, weapon, 0);
                count += 1;
            }
        }
    }
}
