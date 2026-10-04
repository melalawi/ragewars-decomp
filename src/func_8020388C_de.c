#include "span_1000/code_80201ACC.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Installs a weapon record's handler table and routine pointers and, when its owner's id is 0x40C,
   clears its counters and sets its rate to 200 and its range and speed from D_800C6B2C and D_800C6B30. */





extern char D_800C8170_de[];
extern void D_002039F8();
extern void D_00203E78();
extern void D_00202E4C();
extern void D_00203DF0();

extern f32 D_800C1A40_de;

void func_8020388C_de(struct Owner_func_8020388C_de *owner, struct Record_func_8020388C_de *record)
{
    record->table = D_800C8170_de;
    record->first = D_002039F8;
    record->second = D_00203E78;
    record->third = D_00202E4C;
    record->fourth = D_00203DF0;
    if (owner->id == 0x40C) {
        record->a = 0;
        record->b = 0;
        record->fourth = D_00203DF0;
        record->rate = 0xC8;
        record->c = 0;
        record->range = D_800C1A3C_de;
        record->speed = D_800C1A40_de;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C196C_4 = 1.0f;
const float unbake_rodata_800C1970_4 = (-1.57079649f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B2C_4 = 1.0f;
const float unbake_rodata_800C6B30_4 = (-1.57079649f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C1CDC_4 = 1.0f;
const float unbake_rodata_800C1CE0_4 = (-1.57079649f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D1C_4 = 1.0f;
const float unbake_rodata_800C1D20_4 = (-1.57079649f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A3C_4 = 1.0f;
const float unbake_rodata_800C1A40_4 = (-1.57079649f);
#endif
