/* Starts a copy of a sound table entry when that entry is idle: takes the first node of the free list at
 * 0xD8, copies the 0xCC-byte entry into it, sets its owner value and position, clears its timer and
 * inserts it into the active list at 0x4 ahead of the first node with lower priority; the scene's
 * current selection fields are then reset. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    char pad8[0x14];
    s32 timer;
    char pad20[0x20];
    s16 priority;
    char pad42[6];
    s32 owner;
    Vec3 position;
} Node;

typedef struct {
    char pad0[0xAC];
    s32 busy;
    char padB0[0x1C];
} Entry;

typedef struct {
    char pad0[0x1DBC];
    Entry entries[1];
} Scene;

typedef struct {
    Node *prev;
    Node *next;
} Link;

typedef struct {
    Scene *scene;
    Link active;
    char padC[0xCC];
    Link free;
} Manager;

extern void *func_802C2490(void *destination, const void *source, int count);

typedef struct func_802597A4_S1 func_802597A4_S1;
typedef struct func_802597A4_S2 func_802597A4_S2;
struct func_802597A4_S1 {
    char pad0[0x8];
    char unk8;
};
struct func_802597A4_S2 {
    char pad0[0x2A84];
    s32 unk2A84;
    char pad2A84[0x2A88 - 0x2A84 - sizeof(s32)];
    s32 unk2A88;
    char pad2A88[0x2AB4 - 0x2A88 - sizeof(s32)];
    s16 unk2AB4;
    char pad2AB4[0x2AB6 - 0x2AB4 - sizeof(s16)];
    s16 unk2AB6;
};

void func_802597A4(Manager *manager, s32 index, s32 owner, Vec3 *position) {
    Entry *entry;
    Node *node;
    Node *at;
    Node *first;
    s32 priority;

    entry = &manager->scene->entries[index];
    if (entry->busy != 0) {
        return;
    }
    first = manager->free.next;
    if (first != (Node *)&manager->free) {
        first->prev->next = first->next;
        first->next->prev = first->prev;
        node = first;
        func_802C2490(&((func_802597A4_S1 *)(node))->unk8, entry, 0xCC);
        node->owner = owner;
        node->position.x = position->x;
        node->position.y = position->y;
        node->position.z = position->z;
        node->timer = 0;
        at = manager->active.next;
        priority = node->priority;
        while (at != (Node *)&manager->active) {
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
