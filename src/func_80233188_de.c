#include "span_1000/code_80232B44.h"
#include "types.h"
/* Pushes an object by the event source's speed at 0x294 through func_802739C4_de according to the event side: in mode 1 side 1 pushes it negated and side 2 doubled, otherwise side 0 pushes it negated and doubled. */





extern s32 D_80140FF8;
extern void func_802739C4_de(void *, f32);

void func_80233188_de(void *object, Event *event) {
    f32 speed;
    s32 mode;

    speed = event->source->speed;
    mode = D_80140FF8;
    if (mode == 1) {
        switch (event->side) {
        case 1:
            func_802739C4_de(object, -speed);
            break;
        case 2:
            func_802739C4_de(object, speed * 2.0f);
            break;
        }
    } else if (event->side == 0) {
        func_802739C4_de(object, -speed * 2.0f);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2A90_4[] = {0x80, 0x0D, 0x18, 0x50};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D77FC_4[] = {0x80, 0x0D, 0x54, 0x88};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CEADC_10[] = {0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xD8, 0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800CEAEC_10[] = {0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xEC, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEC94_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D31B8_4[] = {0x80, 0x0C, 0xF4, 0x70};
#endif
