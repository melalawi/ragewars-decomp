#include "basetypes.h"

typedef struct Link {
    struct Link *next;
    struct Link *prev;
} Link;

typedef struct {
    u8 data[0xCC];
} Header;

typedef struct {
    Link link;
    Header header;
} Voice;

typedef struct {
    s32 owner;
    Link free;
    Header freeHeader;
    Link active;
    Header activeHeader;
    Voice voices[32];
} ChannelSet;

extern void func_8025B718(Header *header, s32 owner, s32 arg2);

static inline void func_802596D4_linkInit(Link *link) {
    link->prev = link;
    link->next = link;
}

static inline void func_802596D4_insertAfter(Link *at, Link *link) {
    link->next = at->next;
    link->prev = at;
    at->next->prev = link;
    at->next = link;
}

static inline void func_802596D4_voiceInit(Voice *voice, s32 owner) {
    func_802596D4_linkInit(&voice->link);
    func_8025B718(&voice->header, owner, -1);
}

/* Initialises a channel set: records the owner, sets up its free and active lists with headers, and appends 32 initialised voices to the active list. */
void func_802596D4(ChannelSet *set, s32 owner) {
    s32 i;

    set->owner = owner;
    func_802596D4_linkInit(&set->free);
    func_8025B718(&set->freeHeader, owner, -1);
    func_802596D4_linkInit(&set->active);
    func_8025B718(&set->activeHeader, owner, -1);
    for (i = 0; i < 32; i++) {
        func_802596D4_voiceInit(&set->voices[i], owner);
        func_802596D4_insertAfter(set->active.prev, &set->voices[i].link);
    }
}
