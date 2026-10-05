#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80294C64.h"
#include "types.h"

extern s32 D_8014AECC;
void func_80295890_us_rev1(void) {
    if ((((struct Shape_typemap_6 *) ((s8 *) (&D_8014AECC)))->field_0) != 0) {
        func_80253754_de(0, (((struct Shape_typemap_6 *) ((s8 *) (&D_8014AECC)))->field_0));
    }
    (((struct Shape_typemap_6 *) ((s8 *) (&D_8014AECC)))->field_0) = 0;
    (((struct Shape_typemap_6 *) ((s8 *) (&D_8014AECC)))->field_8) = 0;
    (((struct Shape_typemap_6 *) ((s8 *) (&D_8014AECC)))->field_C) = 0;
    (((struct Shape_typemap_6 *) ((s8 *) (&D_8014AECC)))->field_4) = 0;
}

extern char D_8014AEB0;




/** Reset the record's fields, marking slot 1 active. */
void func_802958D8_us_rev1(void) {
    char *object = &D_8014AEB0;

    ((func_802958D8_S1 *)(object))->unk0 = 0;
    ((func_802958D8_S1 *)(object))->unk1 = 0;
    ((func_802958D8_S1 *)(object))->unkC = 0;
    ((func_802958D8_S1 *)(object))->unk10 = 0;
    ((func_802958D8_S1 *)(object))->unk8 = 1;
    ((func_802958D8_S1 *)(object))->unk4 = 0;
    ((func_802958D8_S1 *)(object))->unk14 = 0;
    ((func_802958D8_S1 *)(object))->unk1C = 0;
    ((func_802958D8_S1 *)(object))->unk24 = 0;
    ((func_802958D8_S1 *)(object))->unk28 = 0;
    ((func_802958D8_S1 *)(object))->unk20 = 0;
    ((func_802958D8_S1 *)(object))->unk212C = 0;
    ((func_802958D8_S1 *)(object))->unk2130 = 0;
    ((func_802958D8_S1 *)(object))->unk2134 = 0;
    ((func_802958D8_S1 *)(object))->unk21B8 = 0;
}

extern s32 D_800D2AEC;
extern ResourceManagerState D_8014AEC0;

void func_80295924_us_rev1(void) {
    s32 *ptr;
    s32 old;
    s32 count;

    ptr = &D_800D2AEC;
    old = (*ptr)++;
    if (old >= 3) {
        count = D_8014AEC0.active;
        D_8014AEC0.count = 1;
        D_800D2AEC = 0;
        D_8014AEC0.active = count - 1;
    }
}

extern s32 D_800D2AF0;
extern ResourceManagerState D_8014AEC0;

void func_80295970_us_rev1(void) {
    s32 *ptr;
    s32 old;
    s32 count;

    ptr = &D_800D2AF0;
    old = (*ptr)++;
    if (old >= 3) {
        count = D_8014AEC0.active;
        D_8014AEC0.count = 1;
        D_800D2AF0 = 0;
        D_8014AEC0.active = count + 1;
    }
}
