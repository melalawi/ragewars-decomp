#include "basetypes.h"

typedef struct {
    char pad0[4];
    char *objects;
    s32 count;
} ObjectList;

extern char D_800CFB04[];
extern void *D_800D0680[];
extern ObjectList D_80145040;

typedef struct func_8024C654_S1 func_8024C654_S1;
struct func_8024C654_S1 {
    char pad0[0x18];
    s32* unk18;
};

void *func_8024C654(char *arg0)
{
    s32 type;
    s32 i;
    s32 count;
    s32 limit;
    char *object;
    ObjectList *list;

    type = *((func_8024C654_S1 *)(arg0))->unk18;
    if ((unsigned int)type >= 15) {
        return 0;
    }
    if (type == 11) {
        list = &D_80145040;
        count = list->count;
        i = 0;
        if (count > 0) {
            limit = count;
            object = list->objects;
            do {
                if (object == arg0) {
                    return 0;
                }
                if (object + 0x2E8 == arg0) {
                    return D_800CFB04;
                }
                i++;
                object += 0x16E8;
            } while (i < limit);
        }
    }
    return D_800D0680[type];
}
