#include "common/types.h"
#include "span_1000/code_80259014.h"
#include "types.h"
/* Starts a copy of a sound table entry when that entry is idle: takes the first node of the free list at
 * 0xD8, copies the 0xCC-byte entry into it, sets its owner value and position, clears its timer and
 * inserts it into the active list at 0x4 ahead of the first node with lower priority; the scene's
 * current selection fields are then reset. */













extern void *func_802BD3A0_de(void *destination, const void *source, int count);






void func_80259784_de(Manager_func_80259784_de *manager, s32 index, s32 owner, Vec3 *position) {
    Entry_func_80259784_de *entry;
    Node_func_80259784_de *node;
    Node_func_80259784_de *at;
    Node_func_80259784_de *first;
    s32 priority;

    entry = &manager->scene->entries[index];
    if (entry->busy != 0) {
        return;
    }
    first = manager->free.next;
    if (first != (Node_func_80259784_de *)&manager->free) {
        first->prev->next = first->next;
        first->next->prev = first->prev;
        node = first;
        func_802BD3A0_de(&((func_8020CC0C_S1 *)(node))->unk8, entry, 0xCC);
        node->owner = owner;
        node->position.x = position->x;
        node->position.y = position->y;
        node->position.z = position->z;
        node->timer = 0;
        at = manager->active.next;
        priority = node->priority;
        while (at != (Node_func_80259784_de *)&manager->active) {
            if (at->priority < priority) {
                break;
            }
            at = at->next;
        }
        node->prev = at->prev;
        node->next = at;
        at->prev->next = node;
        at->prev = node;
    }
    ((func_802597A4_S2 *)(manager->scene))->unk2AB4 = 0;
    ((func_802597A4_S2 *)(manager->scene))->unk2AB6 = -1;
    ((func_802597A4_S2 *)(manager->scene))->unk2A88 = -1;
    ((func_802597A4_S2 *)(manager->scene))->unk2A84 = -1;
}
