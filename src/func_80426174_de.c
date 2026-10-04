#include "span_16E000/code_80425BC0.h"
/* Copies a player's enabled options into its option list: unless the player's info (at 0x5D8) is
   locked (byte 0x91 is 1) or absent (byte 0x78 is 0), each of the 22 option flags at 0x4C that is 1
   is recorded as the pair (1, value from 0x62) at 0x602 plus twice its index. */




void func_80426174_de(Player_func_80426174_de *p) {
    int i;

    if (p->info->locked != 1 && p->info->present != 0) {
        for (i = 0; i < 22; i++) {
            if (p->info->enabled[i] == 1) {
                p->options[i].flag = p->info->enabled[i];
                p->options[i].value = p->info->values[i];
            }
        }
    }
}
