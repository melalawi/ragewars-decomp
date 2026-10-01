/* Advances a committed selection's stage against the node list D_8013B364: finishes through
   func_8020DB14 when there are no stages at 0x1BC, counts once into 0x1C8 the list's kind-6 nodes whose
   id matches the selection id at 0x1C0, then runs func_8020D4AC while the stage is within that count,
   func_8020D6E4 on the stage right after it and func_8020D9C0 on the one after that. */
#include "basetypes.h"

typedef struct {
    u16 id;
    u8 pad2[2];
    u8 kind;
} Node;

typedef struct {
    u8 pad0[0xC];
    s32 count;
} NodeList;

typedef struct {
    u8 pad0[0x1BC];
    s32 stage;
    s32 selection;
    u8 pad1C4[4];
    s32 matches;
} Selection;

extern NodeList D_8013B364;

extern Node *func_8020C9B0(NodeList *list, s32 index);
extern s32 func_8020D4AC(Selection *sel);
extern s32 func_8020D6E4(Selection *sel);
extern s32 func_8020D9C0(Selection *sel);
extern s32 func_8020DB14(Selection *sel);

s32 func_8020D370(Selection *sel)
{
    NodeList *list = &D_8013B364;
    Node *node;
    s32 i;

    if (list == 0) {
        return 1;
    }
    if (sel->stage == 0) {
        return func_8020DB14(sel);
    }
    if (sel->selection != -1 && sel->matches == 0) {
        for (i = 0; i < list->count; i++) {
            node = func_8020C9B0(list, i);
            if (node->id == sel->selection && node->kind == 6) {
                sel->matches++;
            }
        }
    }
    if (sel->stage > 0 && sel->stage < sel->matches + 1) {
        return func_8020D4AC(sel);
    }
    if (sel->stage == sel->matches + 1) {
        return func_8020D6E4(sel);
    }
    if (sel->stage == sel->matches + 2) {
        return func_8020D9C0(sel);
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800C88A4_4 = 0.0666666701f;
const float unbake_rodata_800C88A8_4 = 0.0666666701f;
const float unbake_rodata_800C88AC_4 = (-0.5f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C38D0_4 = 0.0666666701f;
const float unbake_rodata_800C38D4_4 = 15.0f;
const float unbake_rodata_800C38D8_4 = 1.0f;
const float unbake_rodata_800C38DC_4 = 0.5f;
#endif
