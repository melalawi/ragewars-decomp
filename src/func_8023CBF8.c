#include "basetypes.h"

typedef struct Link {
    struct Link *next;
    struct Link *prev;
    u16 id;
    u16 padA;
    s32 fieldC;
} Link;

typedef struct Node {
    struct Node *next;
    u16 start;
    u16 size;
    char pad8[8];
    u8 *data;
} Node;

extern Link *D_80103E20;
extern Link *D_80103E24;
extern void func_8023C074(void *arg0);
extern Node *func_8023CBB0(u32 arg0);

Link *func_8023CBF8(void) {
    Link *entry;
    Node *node;

    entry = D_80103E20;
    if (entry->prev != 0) {
        entry->prev->next = *(Link * volatile *)&entry->next;
    } else {
        D_80103E20 = entry->next;
        (*(Link * volatile *)&entry->next)->prev = 0;
    }
    if (entry->next != 0) {
        entry->next->prev = *(Link * volatile *)&entry->prev;
    } else {
        D_80103E24 = entry->prev;
        (*(Link * volatile *)&entry->prev)->next = 0;
    }

    func_8023C074(entry);
    if (entry->id != 0xFFFF) {
        node = func_8023CBB0(entry->id);
        node->data[entry->id - node->start] = 0xFF;
        entry->id = 0xFFFF;
    }
    entry->fieldC = 0;
    return entry;
}
