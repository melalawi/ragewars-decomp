/* Starts the effects attached to an object's model: loads the model resource named by the object's id,
 * finds its attachment table (group 3) and loads it, then for each 0x1C-byte attachment (all of them, or
 * only type 8 when all is clear) transforms its offset by the object's matrix at 0x68 and starts the
 * attachment's effect at that point through func_80265E30, releasing both resources afterwards. */
#include "basetypes.h"

typedef struct { s32 x, y; } Pair;
typedef struct { s32 x, y, z; } Triple;

typedef struct {
    char pad0[2];
    u16 type;
    char pad4[4];
    Triple offset;
    char pad14[0];
    Pair params;
} Attachment;

extern char D_800C8F4C;
extern char D_800C8F60;
extern s32 **func_802518DC(s32, s32, s32, s32, s32, s32, s32, char *, s32);
extern s32 func_8028FE1C(s32 *, s32, s32, s32 *);
extern void func_80272908(void *, Triple *, Triple *);
extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_802536F4(s32, s32 **);

typedef struct func_802505CC_S1 func_802505CC_S1;
struct func_802505CC_S1 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x68 - 0x1C - sizeof(s32)];
    char unk68;
};

void func_802505CC(void *object, s32 all) {
    s32 **model;
    s32 **table;
    s32 *header;
    Attachment *attachment;
    Attachment *entries;
    Triple position;
    s32 name;
    s32 size;
    s32 count;
    s32 i;

    model = func_802518DC(0, ((func_802505CC_S1 *)(object))->unk1C, ((func_802505CC_S1 *)(object))->unk1C, 0x18, 4, 0, 0,
                          &D_800C8F4C, 0);
    if (model == 0) {
        return;
    }
    name = func_8028FE1C(*model, ((func_802505CC_S1 *)(object))->unk1C, 3, &size);
    table = func_802518DC(0, name, name, size, 0, 0, 0, &D_800C8F60, 0);
    if (table != 0) {
        header = *table;
        count = header[1];
        entries = (Attachment *)(header + 2);
        for (i = 0; i < count; i++) {
            attachment = &entries[i];
            if (all != 0 || attachment->type == 8) {
                func_80272908(&((func_802505CC_S1 *)(object))->unk68, &attachment->offset, &position);
                func_80265E30(object, object, attachment->type, -1, position, attachment->params);
            }
        }
        func_802536F4(0, table);
    }
    func_802536F4(0, model);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FF1B0_8[] = {0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0A, 0x62};
#elif defined(VERSION_EU)
const float unbake_rodata_800F008C_4 = 160.0f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EA1F0_4[] = {0x00, 0x00, 0x00, 0x01};
const unsigned char unbake_rodata_800EA1F4_4[] = {0x00, 0x00, 0x00, 0x01};
const unsigned char unbake_rodata_800EA1F8_4[] = {0x00, 0x00, 0x00, 0x01};
const unsigned char unbake_rodata_800EA1FC_4[] = {0x00, 0x00, 0x00, 0x01};
const unsigned char unbake_rodata_800EA200_2E[] = {0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E190C_54[] = {0x00, 0x43, 0x96, 0x28, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, 0x43, 0x94, 0xE0, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x18, 0x00, 0x43, 0x95, 0xF8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x43, 0x97, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x43, 0x97, 0x30, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x18, 0x00, 0x43, 0x96, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x9C, 0xF0, 0x00, 0x00, 0x00, 0x02};
#endif
