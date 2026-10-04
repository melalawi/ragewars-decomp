#include "common/types.h"
#include "span_1000/code_8023940C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Produces a random shake offset for an object: looks up the object's model entry in D_8011FE88 and
 * zeroes the offset when there is none; otherwise eases the horizontal and vertical shake amplitudes
 * at 0xF4 and 0xF8 toward the pair D_800C8668 when the entry is flagged 0x10000 (toward zero when not)
 * and draws each offset component at random within the scaled amplitudes. */



extern char D_8011BDC8;



extern func_8020CA10_G1 D_800C3580_de;

extern func_8020CA10_G1 D_800C3584_de;

extern func_8020CA10_G1 D_800C3588_de;

extern func_8020CA10_G1 D_800C358C_de;
extern void *func_8028B2F8_de(char *, s32);
extern f32 func_80274A90_de(f32, f32);








void func_80239EA4_de(void *arg0, Vec3 *out) {
    char *o = (char *)arg0;
    f32 value;
    void *entry;
    f32 targetX;
    f32 targetY;
    f32 scale;

    targetY = 0.0f;
    targetX = targetY;
    entry = func_8028B2F8_de(&D_8011BDC8, ((func_80239E94_S1 *)(o))->unk58);
    if (entry == 0) {
        out->x = targetY;
        out->y = targetY;
        out->z = targetY;
        return;
    }
    if (((func_8022E694_S1 *)(entry))->unk44 & 0x10000) {
        targetX = D_800C3578_de;
        targetY = ((D_800C7470_Pair *)&D_800C3578_de)->second;
    }
    value = ((func_80239E94_S1 *)(o))->unkF4 + (targetX - ((func_80239E94_S1 *)(o))->unkF4) * D_800C3580_de.unk0;
    scale = D_800C3584_de.unk0;
    ((func_80239E94_S1 *)(o))->unkF4 = value;
    ((func_80239E94_S1 *)(o))->unkF8 += (targetY - ((func_80239E94_S1 *)(o))->unkF8) * D_800C3588_de.unk0;
    out->x = func_80274A90_de(-((func_80239E94_S1 *)(o))->unkF4 * scale, ((func_80239E94_S1 *)(o))->unkF4 * scale);
    out->y = func_80274A90_de(0.0f, ((func_80239E94_S1 *)(o))->unkF8 * D_800C358C_de.unk0);
    value = -((func_80239E94_S1 *)(o))->unkF4 * scale;
    out->z = func_80274A90_de(value, ((func_80239E94_S1 *)(o))->unkF4 * scale);
}
