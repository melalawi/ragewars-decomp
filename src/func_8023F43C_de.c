#include "span_1000/code_8023ECAC.h"
#include "span_1000/types.h"
#include "types.h"
typedef struct Query Query;
/* Queries the registered entities an object may collide with: when the object's shape is enabled and is
 * not the null shape, a query holds the object's radius, its vertical span and that span offset by the
 * shape heights at 0x48 and 0x54, its horizontal bounds widened by the radius and the shape's 0x400 flag;
 * then func_8023EF00_de is run for every entity other than the object itself, except type 1 entities without
 * a body at 0x174 when the shape is flagged 1 and type 3 entities when the shape is not flagged 0x20. */







extern Shape D_80100170;
extern EntityTable D_8011BDC8;
extern void func_8023EF00_de(void *, Query *, u8 *);






void func_8023F43C_de(char *obj) {
    Query query;
    Query *q;
    Shape *shape;
    void *self;
    s32 count;
    s32 i;
    u8 *entity;
    EntityTable *table;
    f32 radius;
    f32 bound;

    shape = ((func_8023F42C_S1 *)(obj))->unk40;
    if (shape->enabled == 0 || shape == &D_80100170) {
        return;
    }
    table = &D_8011BDC8;
    q = &query;
    radius = ((func_8023F42C_S1 *)(obj))->unkC;
    self = *(void **)obj;
    q->radius = radius;
    count = table->count;
    q->flag = shape->flags & 0x400;
    q->bottom = ((func_8023F42C_S1 *)(obj))->unk14;
    q->top = q->bottom + ((func_8023F42C_S1 *)(obj))->unk10;
    q->bottom1 = ((func_8023F42C_S1 *)(obj))->unk48 + q->bottom;
    q->top1 = ((func_8023F42C_S1 *)(obj))->unk48 + q->top;
    q->bottom2 = ((func_8023F42C_S1 *)(obj))->unk54 + q->bottom;
    q->top2 = ((func_8023F42C_S1 *)(obj))->unk54 + q->top;
    bound = ((func_8023F42C_S1 *)(obj))->unk50;
    if (!(bound <= ((func_8023F42C_S1 *)(obj))->unk44)) {
        bound = ((func_8023F42C_S1 *)(obj))->unk44;
    }
    q->minX = bound - radius;
    bound = ((func_8023F42C_S1 *)(obj))->unk50;
    if (!(((func_8023F42C_S1 *)(obj))->unk44 <= bound)) {
        bound = ((func_8023F42C_S1 *)(obj))->unk44;
    }
    q->maxX = bound + radius;
    bound = ((func_8023F42C_S1 *)(obj))->unk58;
    if (!(bound <= ((func_8023F42C_S1 *)(obj))->unk4C)) {
        bound = ((func_8023F42C_S1 *)(obj))->unk4C;
    }
    q->minZ = bound - radius;
    bound = ((func_8023F42C_S1 *)(obj))->unk58;
    if (!(((func_8023F42C_S1 *)(obj))->unk4C <= bound)) {
        bound = ((func_8023F42C_S1 *)(obj))->unk4C;
    }
    q->maxZ = bound + radius;
    for (i = 0; i < count; i++) {
        entity = table->entities[i];
        if (entity == self) {
            continue;
        }
        switch (*entity) {
        case 2:
            break;
        case 1:
            if ((shape->flags & 1) && ((func_8023F42C_S2 *)(entity))->unk174 == 0) {
                continue;
            }
            break;
        case 3:
            if (!(shape->flags & 0x20)) {
                continue;
            }
            break;
        }
        func_8023EF00_de(obj, &query, entity);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCB18_4 = 0.00499999989f;
const float unbake_rodata_800DCB1C_4 = 100.0f;
const float unbake_rodata_800DCB20_4 = 150.0f;
const float unbake_rodata_800DCB24_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1BC8_14[] = {0x0042FB4CU, 0x0042FBD4U, 0x0042FC3CU, 0x0042FC4CU, 0x0042FCC8U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E40C4_10[] = {0x80, 0x0D, 0x23, 0x90, 0x80, 0x0D, 0x87, 0xAC, 0x80, 0x0D, 0xC7, 0x18, 0x80, 0x0E, 0x04, 0xD4};
const unsigned char unbake_rodata_800E40D4_10[] = {0x80, 0x0D, 0x23, 0xA8, 0x80, 0x0D, 0x87, 0xC8, 0x80, 0x0D, 0xC7, 0x30, 0x80, 0x0E, 0x04, 0xEC};
const unsigned char unbake_rodata_800E40E4_10[] = {0x80, 0x0D, 0x23, 0xC0, 0x80, 0x0D, 0x87, 0xE4, 0x80, 0x0D, 0xC7, 0x48, 0x80, 0x0E, 0x05, 0x04};
const unsigned char unbake_rodata_800E40F4_10[] = {0x80, 0x0D, 0x23, 0xD8, 0x80, 0x0D, 0x88, 0x00, 0x80, 0x0D, 0xC7, 0x60, 0x80, 0x0E, 0x05, 0x1C};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DE7D4_48[] = {0x80, 0x0D, 0x1A, 0x24, 0x80, 0x0D, 0x6E, 0x0C, 0x80, 0x0D, 0xB1, 0x4C, 0x80, 0x0D, 0x1A, 0x28, 0x80, 0x0D, 0x6E, 0x10, 0x80, 0x0D, 0xB1, 0x50, 0x80, 0x0D, 0x1A, 0x30, 0x80, 0x0D, 0x6E, 0x20, 0x80, 0x0D, 0xB1, 0x58, 0x80, 0x0D, 0x1A, 0x38, 0x80, 0x0D, 0x6E, 0x30, 0x80, 0x0D, 0xB1, 0x60, 0x80, 0x0D, 0x1A, 0x40, 0x80, 0x0D, 0x6E, 0x40, 0x80, 0x0D, 0xB1, 0x68, 0x80, 0x0D, 0x1A, 0x48, 0x80, 0x0D, 0x6E, 0x50, 0x80, 0x0D, 0xB1, 0x70};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DD1C8_11[] = {0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x00};
const unsigned char unbake_rodata_800DD1DC_11[] = {0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x00};
const unsigned char unbake_rodata_800DD1F0_8[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned int unbake_rodata_800DD1F8_164[] = {0x00414DD4U, 0x00415828U, 0x00415828U, 0x00414DE8U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00414DF0U, 0x00414E18U, 0x00415828U, 0x00414E10U, 0x00414E24U, 0x00415828U, 0x00414EA8U, 0x00414EB0U, 0x00414EB0U, 0x00414EB0U, 0x00414EB0U, 0x00414EB0U, 0x00414EB0U, 0x00414EB0U, 0x00414EB0U, 0x00414EB0U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00414F30U, 0x00415010U, 0x00415828U, 0x00415008U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00414EE4U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x004153E0U, 0x00415828U, 0x00415828U, 0x0041549CU, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00415828U, 0x00414F04U, 0x00414F34U, 0x00415010U, 0x00415010U, 0x00415008U, 0x00414EECU, 0x00414F34U, 0x00415828U, 0x00415828U, 0x00414EF4U, 0x00415828U, 0x004151F8U, 0x00415254U, 0x0041530CU, 0x00414EFCU, 0x00415828U, 0x00415348U, 0x00415828U, 0x004153E4U, 0x00415828U, 0x00415828U, 0x004154ACU};
#endif
