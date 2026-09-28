/* Services the pending glyph requests of a text cache: each request still counting down its delay is ticked and, when it reaches zero, stamped with the current frame and the next sequence number; a request older than sixteen frames is moved to the done list, otherwise it reserves a cell for its glyph and a texture for its bitmap, stopping when none is free, copies itself into the cell, uploads the cell through func_80257814 and moves to the done list. The slot address is written as the doubled slot plus the table address because the cartridge adds the scaled index first; array indexing puts the table first (1 word). */
#include "basetypes.h"

typedef struct Entry {
    struct Entry *prev;
    struct Entry *next;
    char body[0x10];
    s32 frame;
    s32 delay;
    char pad20[0x40 - 0x20];
    s16 glyph;
    s16 font;
    s16 style;
    s16 pad46;
    s32 sequence;
    char pad4C[0xA8 - 0x4C];
    s32 fieldA8;
} Entry;

typedef struct Cell {
    s32 index;
    s32 pad4;
    s32 texture;
    s32 sequence;
    s32 frame;
    char pad14[0x44 - 0x14];
    char data[1];
} Cell;

typedef struct Glyphs {
    char pad0[0x10];
    s32 bitmaps[1];
} Glyphs;

typedef struct Font {
    char pad0[0xC];
    Glyphs *glyphs;
} Font;

typedef struct Context {
    char pad0[0x7C];
    Font *font;
    char pad80[4];
    char textures[0xDC - 0x84];
    s16 slots[16];
    char padFC[0x104 - 0xFC];
    s32 frame;
    s32 sequence;
    char pad10C[0x1DB8 - 0x10C];
    char cells[1];
} Context;

typedef struct ListHead {
    struct Entry *prev;
    struct Entry *next;
} ListHead;

typedef struct Cache {
    Context *context;
    ListHead pending;
    char padC[0xD8 - 0xC];
    ListHead done;
} Cache;

extern void func_80258760(Context *);
extern void func_802587C4(Context *);
extern s16 func_8025B054(char *, s32, s32, s32, s32);
extern s16 func_802B75E0(char *, s32);
extern void func_802C2490(void *, void *, s32);
extern void func_80257814(Context *, s32, s32, char *);

static inline void append(ListHead *head, Entry *entry) {
    entry->prev = head->prev;
    entry->next = (Entry *)head;
    head->prev->next = entry;
    head->prev = entry;
}

void func_80259460(Cache *cache) {
    s16 *slots;
    char *textures;
    Glyphs *glyphs;
    Entry *entry;
    Entry *next;
    s32 slot;
    s16 *cursor;
    s32 free;
    Cell *cell;

    func_80258760(cache->context);
    slots = cache->context->slots;
    textures = cache->context->textures;
    glyphs = cache->context->font->glyphs;
    for (entry = cache->pending.next; entry != (Entry *)&cache->pending; entry = next) {
        next = entry->next;
        if (entry->delay != 0) {
            if (--entry->delay == 0) {
                entry->frame = cache->context->frame;
                entry->sequence = cache->context->sequence++;
                entry->fieldA8 = 0;
            }
            continue;
        }
        if (cache->context->frame - entry->frame >= 16) {
            entry->prev->next = next;
            entry->next->prev = entry->prev;
            append(&cache->done, entry);
            continue;
        }
        slot = func_8025B054(cache->context->cells, entry->style, entry->font, entry->glyph, 0);
        if (slot == -1 || slot == 16) {
            break;
        }
        cursor = (s16 *)((slot << 1) + (u32)slots);
        free = *cursor;
        if (free != -1) {
            break;
        }
        *cursor = func_802B75E0(textures, glyphs->bitmaps[entry->font]);
        if (*cursor == free) {
            break;
        }
        cell = (Cell *)(cache->context->cells + 4 + slot * 0xCC);
        func_802C2490(cell, entry->body, 0xCC);
        cell->sequence = entry->sequence;
        cell->texture = *cursor;
        cell->frame = cache->context->frame;
        cell->index = slot;
        func_80257814(cache->context, cell->sequence, 0, cell->data);
        entry->sequence = free;
        entry->glyph = free;
        entry->prev->next = entry->next;
        entry->next->prev = entry->prev;
        append(&cache->done, entry);
    }
    func_802587C4(cache->context);
}
