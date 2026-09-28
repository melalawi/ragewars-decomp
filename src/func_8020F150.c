/* Selects the nodes of D_8013B364's list whose flagged record matches one of thirty ids: every match
   whose owner at 0x34 is active at 0x294 is selected through func_8020D220, and when none was, every
   matching node is selected regardless of owner. Returns the number of selections. Written from its
   own assembly in the style of func_8020EEA4. */
#include "basetypes.h"

typedef struct Node {
    s32 id;
    char pad4[0xC];
    struct Node *next;
    char pad14[0x20];
    char *owner;
} Node;

extern s32 D_8013B364;
extern void *func_8020C994(s32 *, s32);
extern void func_8020D220(s32 *, s32);

s32 func_8020F150(s32 *ids) {
    s32 *base;
    Node *node;
    void *record;
    s32 count;
    s32 i;

    base = &D_8013B364;
    count = 0;
    for (node = *(Node **) ((char *) base + 0x24); node != 0; node = node->next) {
        record = func_8020C994(base, node->id);
        if (*(u16 *) ((char *) record + 0xC) & 1) {
            for (i = 0; i < 30; i++) {
                if (*(u16 *) ((char *) record + 0xE) == ids[i] && node->owner != 0
                    && *(s32 *) (node->owner + 0x294) != 0) {
                    func_8020D220(base, node->id);
                    count++;
                }
            }
        }
    }
    if (count == 0) {
        for (node = *(Node **) ((char *) base + 0x24); node != 0; node = node->next) {
            record = func_8020C994(base, node->id);
            if (*(u16 *) ((char *) record + 0xC) & 1) {
                for (i = 0; i < 30; i++) {
                    if (*(u16 *) ((char *) record + 0xE) == ids[i]) {
                        func_8020D220(base, node->id);
                        count++;
                    }
                }
            }
        }
    }
    return count;
}
