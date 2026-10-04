#include "common/types.h"
#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"
/* Spawns effect kind at an actor's position through func_8028FFD0_de in D_80131600's list: kind 0xBD7
   is skipped while both of D_801468A0's flags at 0x78 and 0x80 are set, and kind 0x1388 is offset by
   the variant byte at D_800E4680 when option D_801462D5 is 1 (skipped for variant 0); a spawned node
   has its word at 0x1A0 cleared, takes one charge from the owner and starts effect 0x11D at its own
   position through func_80216288_de. */







extern char D_8012D540;


extern Settings D_801427E0;
extern u8 D_80142215;
extern u8 *D_800E0630;
extern func_80204EA8_S1 *func_8028FFD0_de(char *, void *, s32, Triple, Triple, s32, s32);
extern void func_80216288_de(func_80204EA8_S1 *, s32, Triple, s32);








void func_802062E0_de(void *actor, void *owner, Params params, s32 kind) {
    func_80204EA8_S1 *node;
    Settings *settings;

    if (kind == 0xBD7) {
        settings = &D_801427E0;
        if (settings->flag78 != 0 && settings->flag80 != 0) {
            return;
        }
    }
    if (kind == 0x1388 && D_80142215 == 1) {
        kind = *D_800E0630 + 0x1388;
        if (kind == 0x1388) {
            return;
        }
    }
    node = func_8028FFD0_de(&D_8012D540, &((func_802062E0_S1 *)(owner))->unk124, kind,
                         ((func_802062E0_S2 *)(actor))->unk1C, params.v, params.w, 0);
    if (node != 0) {
        ((func_802062E0_S3 *)(node))->unk1A0 = 0;
        ((func_802062E0_S1 *)(owner))->unk128 -= 1;
        func_80216288_de(node, 0x11D, node->unk8, 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C252C_3[] = {0x25, 0x73, 0x00};
const float unbake_rodata_800C2530_4 = 1.5f;
const float unbake_rodata_800C2534_4 = 1.0f;
const float unbake_rodata_800C2538_4 = 3.0f;
const float unbake_rodata_800C253C_4 = 4.0f;
const float unbake_rodata_800C2540_4 = 255.0f;
const float unbake_rodata_800C2544_4 = 50.0f;
const float unbake_rodata_800C2548_4 = 255.0f;
const float unbake_rodata_800C254C_4 = 12.0f;
const float unbake_rodata_800C2550_4 = 0.512000024f;
const float unbake_rodata_800C2554_4 = 0.791999996f;
const float unbake_rodata_800C2558_4 = 0.136000007f;
const float unbake_rodata_800C255C_4 = 128.0f;
const float unbake_rodata_800C2560_4 = 198.0f;
const float unbake_rodata_800C2564_4 = 34.0f;
const float unbake_rodata_800C2568_4 = 253.0f;
const float unbake_rodata_800C256C_4 = 1.01199996f;
const float unbake_rodata_800C2570_4 = 0.419999987f;
const float unbake_rodata_800C2574_4 = 0.716000021f;
const float unbake_rodata_800C2578_4 = 105.0f;
const float unbake_rodata_800C257C_4 = 179.0f;
const float unbake_rodata_800C2580_4 = 0.5f;
const float unbake_rodata_800C2584_4 = 1.5f;
const float unbake_rodata_800C2588_4 = 12.0f;
const float unbake_rodata_800C258C_4 = 0.5f;
const float unbake_rodata_800C2590_4 = 2.14748365e+09f;
const float unbake_rodata_800C2594_4 = 1.5f;
const float unbake_rodata_800C2598_4 = 1.0f;
const float unbake_rodata_800C259C_4 = 0.75f;
const float unbake_rodata_800C25A0_4 = 18.0f;
const float unbake_rodata_800C25A4_4 = 28.0f;
const float unbake_rodata_800C25A8_4 = 30.0f;
const float unbake_rodata_800C25AC_4 = 24.0f;
const float unbake_rodata_800C25B0_4 = 22.0f;
const float unbake_rodata_800C25B4_4 = 20.0f;
const float unbake_rodata_800C25B8_4 = 16.0f;
const float unbake_rodata_800C25BC_4 = 1.5f;
const float unbake_rodata_800C25C0_4 = 40.0f;
const float unbake_rodata_800C25C4_4 = 11.0f;
const float unbake_rodata_800C25C8_4 = 255.0f;
const float unbake_rodata_800C25CC_4 = 200.0f;
const float unbake_rodata_800C25D0_4 = 12.0f;
const float unbake_rodata_800C25D4_4 = 48.0f;
const float unbake_rodata_800C25D8_4 = 22.0f;
const float unbake_rodata_800C25DC_4 = 11.0f;
const float unbake_rodata_800C25E0_4 = 1.5f;
const float unbake_rodata_800C25E4_4 = 8.0f;
const float unbake_rodata_800C25E8_4 = 16.0f;
const float unbake_rodata_800C25EC_4 = 1.5f;
const float unbake_rodata_800C25F0_4 = 8.0f;
const float unbake_rodata_800C25F4_4 = 16.0f;
const float unbake_rodata_800C25F8_4 = 1.5f;
const float unbake_rodata_800C25FC_4 = 11.0f;
const float unbake_rodata_800C2600_4 = 1.5f;
const float unbake_rodata_800C2604_4 = 8.0f;
const float unbake_rodata_800C2608_4 = 16.0f;
const float unbake_rodata_800C260C_4 = 1.5f;
const float unbake_rodata_800C2610_4 = 8.0f;
const float unbake_rodata_800C2614_4 = 16.0f;
const float unbake_rodata_800C2618_4 = 1.5f;
const float unbake_rodata_800C261C_4 = 1.0f;
const float unbake_rodata_800C2620_4 = 0.5f;
const float unbake_rodata_800C2624_4 = 16.0f;
const float unbake_rodata_800C2628_4 = 0.75f;
const float unbake_rodata_800C262C_4 = 1.0f;
const float unbake_rodata_800C2630_4 = 12.0f;
const float unbake_rodata_800C2634_4 = 4.0f;
const float unbake_rodata_800C2638_4 = 200.0f;
const float unbake_rodata_800C263C_4 = 12.0f;
const float unbake_rodata_800C2640_4 = 48.0f;
const float unbake_rodata_800C2644_4 = 20.0f;
const float unbake_rodata_800C2648_4 = 8.0f;
const float unbake_rodata_800C264C_4 = 16.0f;
const float unbake_rodata_800C2650_4 = 8.0f;
const float unbake_rodata_800C2654_4 = 16.0f;
const float unbake_rodata_800C2658_4 = 200.0f;
const float unbake_rodata_800C265C_4 = 12.0f;
const float unbake_rodata_800C2660_4 = 48.0f;
const float unbake_rodata_800C2664_4 = 20.0f;
const float unbake_rodata_800C2668_4 = 8.0f;
const float unbake_rodata_800C266C_4 = 16.0f;
const float unbake_rodata_800C2670_4 = 1.5f;
const float unbake_rodata_800C2674_4 = 8.0f;
const float unbake_rodata_800C2678_4 = 16.0f;
const float unbake_rodata_800C267C_4 = 1.5f;
const float unbake_rodata_800C2680_4 = 5.0f;
const float unbake_rodata_800C2684_4 = 255.0f;
const float unbake_rodata_800C2688_4 = 0.5f;
const float unbake_rodata_800C268C_4 = 31.0f;
const float unbake_rodata_800C2690_4 = 32.0f;
const float unbake_rodata_800C2694_4 = 1.70000005f;
const float unbake_rodata_800C2698_4 = 255.0f;
const float unbake_rodata_800C269C_4 = 5.0f;
const float unbake_rodata_800C26A0_4 = 255.0f;
const float unbake_rodata_800C26A4_4 = 255.0f;
const float unbake_rodata_800C26A8_4 = 70.0f;
const float unbake_rodata_800C26AC_4 = 140.0f;
const float unbake_rodata_800C26B0_4 = 1.0f;
const float unbake_rodata_800C26B4_4 = 0.25f;
const float unbake_rodata_800C26B8_4 = 10.0f;
const float unbake_rodata_800C26BC_4 = 140.0f;
const float unbake_rodata_800C26C0_4 = 0.25f;
const float unbake_rodata_800C26C4_4 = 10.0f;
const float unbake_rodata_800C26C8_4 = 140.0f;
const float unbake_rodata_800C26CC_4 = 0.5f;
const float unbake_rodata_800C26D0_4 = 64.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C74C4_4 = 0.5f;
const float unbake_rodata_800C74C8_4 = (-64.0f);
const float unbake_rodata_800C74CC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2628_4 = 1.0f;
const float unbake_rodata_800C262C_4 = 0.5f;
const float unbake_rodata_800C2630_4 = 1.0f;
const float unbake_rodata_800C2634_4 = 0.75f;
const float unbake_rodata_800C2638_4 = 0.75f;
const float unbake_rodata_800C263C_4 = 0.5f;
const float unbake_rodata_800C2640_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2658_4 = 0.0666666701f;
const float unbake_rodata_800C265C_4 = 1.0f;
const float unbake_rodata_800C2660_4 = 51.1999969f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C23E0_4 = 1.0f;
const float unbake_rodata_800C23E4_4 = 8.0f;
const float unbake_rodata_800C23E8_4 = 32.0f;
const float unbake_rodata_800C23EC_4 = 16.0f;
const float unbake_rodata_800C23F0_4 = 1.0f;
#endif
