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

    model = func_802518DC(0, *(s32 *)((char *)object + 0x1C), *(s32 *)((char *)object + 0x1C), 0x18, 4, 0, 0,
                          &D_800C8F4C, 0);
    if (model == 0) {
        return;
    }
    name = func_8028FE1C(*model, *(s32 *)((char *)object + 0x1C), 3, &size);
    table = func_802518DC(0, name, name, size, 0, 0, 0, &D_800C8F60, 0);
    if (table != 0) {
        header = *table;
        count = header[1];
        entries = (Attachment *)(header + 2);
        for (i = 0; i < count; i++) {
            attachment = &entries[i];
            if (all != 0 || attachment->type == 8) {
                func_80272908((char *)object + 0x68, &attachment->offset, &position);
                func_80265E30(object, object, attachment->type, -1, position, attachment->params);
            }
        }
        func_802536F4(0, table);
    }
    func_802536F4(0, model);
}
