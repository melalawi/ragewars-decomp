/* Starts a sound instance from a description: when the scene's free node list is not empty it takes the
 * first node under the audio lock (func_80258760/func_802587C4), unlinks it, gives it the next handle, the
 * volume, sample, priority, pan and pitch fields decoded from the description, full gain, the scene frame
 * and the position, prepares its channel through func_8025BB9C and func_8025BBA4 and inserts it into the
 * active list ahead of the first lower-priority node; returns the handle or -1 when no node is free. */
#include "basetypes.h"

typedef struct {
    s32 w[3];
} Vec3Words;

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    char channel[4];
    s32 volume;
    char pad10[4];
    s32 handle;
    s32 frame;
    s32 sample;
    s32 gainA;
    s32 gainB;
    s16 pitch;
    char pad2A[2];
    s32 time;
    char pad30[0x10];
    s16 priority;
    s16 group;
    s16 volume16;
    char pad46[2];
    s32 voice;
    Vec3Words position;
    s32 pad58;
    u8 pan;
    char pad5D[0x4F];
    s32 flags;
    char padB0[4];
    s32 padB4;
    char padB8[0x10];
    s32 mix;
} Node;

typedef struct {
    Node *prev;
    Node *next;
} Link;

typedef struct {
    s32 *scene;
    Link active;
    char padC[0xCC];
    Link free;
} Manager;

extern void func_80258760(s32 *);
extern void func_802587C4(s32 *);
extern void func_8025BB9C(void *, s32);
extern void func_8025BBA4(void *, void *, s32);
extern s16 func_8025E520(void *);
extern s8 func_8025E538(void *);
extern s16 func_8025E52C(void *);
extern u8 func_8025E568(void *);
extern s16 func_8025E598(void *);
extern s8 func_8025E574(void *);

s32 func_80259280(Manager *manager, void *desc, Vec3Words *position, s32 volume, s32 extra) {
    Node *node;
    Node *first;
    Node *at;
    s32 *scene;
    s32 priority;

    if (manager->free.next != (Node *)&manager->free) {
        func_80258760(manager->scene);
        first = manager->free.next;
        first->prev->next = first->next;
        first->next->prev = first->prev;
        scene = manager->scene;
        node = first;
        node->handle = scene[0x108 / 4];
        scene[0x108 / 4] = node->handle + 1;
        node->volume = volume;
        node->voice = -1;
        node->volume16 = volume;
        node->group = func_8025E520(desc);
        node->priority = func_8025E538(desc);
        node->sample = func_8025E52C(desc);
        node->pan = func_8025E568(desc);
        node->flags = func_8025E598(desc);
        node->pitch = func_8025E574(desc);
        node->gainB = 0x7D00;
        node->gainA = 0x7D00;
        node->time = 0;
        node->frame = manager->scene[0x104 / 4];
        node->position = *position;
        node->pad58 = 0;
        node->padB4 = 0;
        func_8025BB9C(node->channel, *(s16 *)((char *)manager->scene + 0x2B8C));
        node->mix = manager->scene[0x2BAC / 4];
        func_8025BBA4(node->channel, desc, extra);
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
        func_802587C4(manager->scene);
        return node->handle;
    }
    return -1;
}
