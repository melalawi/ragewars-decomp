#include "span_1000/code_8029193C.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Calls cleanup functions on a game state and optionally transitions control state when conditions change. */



extern s32 D_8010B190_de;
extern s32 D_8014288C;

extern void 
#if defined(VERSION_EU)
func_802A2344_eu
#elif defined(VERSION_EU_X)
func_802A2374_eu_x
#elif defined(VERSION_US) || defined(VERSION_US_REV1)
func_802A2164_us
#else
func_802A2224_de
#endif
(void);
extern void func_80298368_de(s32 arg0);
extern void func_8040C428_de(s32 arg0);
extern void func_80293790_de(void *arg0, s32 arg1);
extern void func_80286080_de(void *arg0);
extern void func_802394B4_de(void *arg0);
extern void func_802AA7A4_de(void *arg0);
extern void func_80294F1C_us_rev1(void);
extern void func_80293394_de(void *arg0);





void func_80293B28_de(void *arg0) {
    void *state;
    f32 value;

    state = arg0;
    if (D_8014288C == 1) {
        value = ((func_80293B0C_S1 *)(state))->unk26DB0.v0;
        if (D_800C54A4_de < value) {
            if (D_800C54A8_de < value) {
                D_8014288C = 0;
                
#if defined(VERSION_EU)
func_802A2344_eu
#elif defined(VERSION_EU_X)
func_802A2374_eu_x
#elif defined(VERSION_US) || defined(VERSION_US_REV1)
func_802A2164_us
#else
func_802A2224_de
#endif
();
                func_80298368_de(2);
                func_8040C428_de(0);
                func_80293790_de(state, 1);
                ((func_80293B0C_S1 *)(state))->unk26DB0.v1 = 0;
            } else if (D_8010B190_de != 0) {
                D_8014288C = 0;
                
#if defined(VERSION_EU)
func_802A2344_eu
#elif defined(VERSION_EU_X)
func_802A2374_eu_x
#elif defined(VERSION_US) || defined(VERSION_US_REV1)
func_802A2164_us
#else
func_802A2224_de
#endif
();
                func_80298368_de(2);
                func_80293790_de(state, 8);
                ((func_80293B0C_S1 *)(state))->unk26DB0.v1 = 0;
            }
        }
    }
    func_80286080_de((char *)state + 0x3C8);
    func_802394B4_de((char *)state + 0x255C8);
    func_802AA7A4_de((char *)state + 0x1BCF8);
    /* Only us-rev1 makes this call: us, eu, eu-x and de go straight on to func_80293394_de, two
       instructions shorter, as each cartridge's own bytes show. */
#ifdef VERSION_US_REV1
    func_80294F1C_us_rev1();
#endif
    func_80293394_de(state);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53D0_4 = 30.0f;
const float unbake_rodata_800C53D4_4 = 675.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA590_4 = 30.0f;
const float unbake_rodata_800CA594_4 = 675.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5750_4 = 30.0f;
const float unbake_rodata_800C5754_4 = 675.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5790_4 = 30.0f;
const float unbake_rodata_800C5794_4 = 675.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C54A4_4 = 30.0f;
const float unbake_rodata_800C54A8_4 = 675.0f;
#endif
