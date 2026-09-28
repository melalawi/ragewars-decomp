#include "basetypes.h"
#define NULL ((void *)0)

/** A queued entry: forward link at 4, the handle released at 8. */
typedef struct Entry {
    char pad0[4];
    struct Entry *next;
    s32 handle;
} Entry;

/** One fixed-size record of the bank indexed by func_8044E6A4. */
typedef struct Item {
    char pad0[0x20];
} Item;

typedef struct Bank {
    s32 unk0;
    s32 count;
    Item items[1];
} Bank;

typedef struct Owner {
    char pad0[0x6C];
    void *unk6C;
    char pad70[0xC];
    void *unk7C;
    char pad80[0x1158];
    Entry *active;
    char pad11DC[0x10];
    Entry *spare;
} Owner;

/** A 0x3C-byte record holding one tag and nine offsets to relocate. */
typedef struct Piece {
    char pad0[0x14];
    s32 tag;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
} Piece;

typedef struct Group {
    s32 unk0;
    s32 count;
    Piece pieces[1];
} Group;

typedef struct Ent {
    u32 kind;
    char pad4[0x24];
    f32 unk28;
    char pad2C[4];
    f32 unk30;
    f32 unk34;
    char pad38[0x18];
    f32 unk50;
    f32 unk54;
    f32 unk58;
    char pad5C[0x90];
    f32 unkEC;
    f32 unkF0;
} Ent;

typedef struct Slot {
    s32 item;
    char pad4[0x34];
} Slot;

typedef struct Frame {
    s32 unk0;
    s32 count;
    char pad8[0xC];
    Slot slots[1];
} Frame;

/** Signed and unsigned unit scale; only the second is read here. */
static const f32 unit_scale[2] = { -1.0f, 1.0f };

void func_80255C58(void *, Entry *);                /* extern */
void func_80255E78(void *, Entry *);                /* extern */
void func_80278C80(s32);                            /* extern */
s32 func_80285150(void ***, s32);                   /* extern */
s32 func_8028C174(s32, s32);                        /* extern */
void *func_8028FD94(void *, s32);                   /* extern */

/** Release every active entry of arg0 and move it onto the spare list. */
void func_8044E3E4(Owner *arg0) {
    Entry *entry;
    Entry *next;

    entry = arg0->active;
    while (entry != NULL) {
        next = entry->next;
        func_80278C80(entry->handle);
        func_80255E78(&arg0->active, entry);
        func_80255C58(&arg0->spare, entry);
        entry = next;
    }
}

/** Rebase the nine offsets of every piece of arg1 onto the loaded block and
 *  translate each piece's tag through func_8028C174. */
void func_8044E454(s32 arg0, void ***arg1) {
    void *obj;
    Group *group;
    Piece *piece;
    s32 base;
    s32 count;
    s32 i;

    if (func_80285150(arg1, 0) != 0) {
        obj = **arg1;
        group = func_8028FD94(obj, 2);
        count = group->count;
        piece = group->pieces;
        i = 0;
        base = (s32) func_8028FD94(obj, i);
        if (count > 0) {
            do {
                if (piece[i].tag == -1) {
                    piece[i].tag = 0;
                } else {
                    piece[i].tag = func_8028C174(arg0, piece[i].tag);
                }
                piece[i].unk18 = base + piece[i].unk18;
                piece[i].unk1C = base + piece[i].unk1C;
                piece[i].unk20 = base + piece[i].unk20;
                piece[i].unk24 = base + piece[i].unk24;
                piece[i].unk28 = base + piece[i].unk28;
                piece[i].unk2C = base + piece[i].unk2C;
                piece[i].unk30 = base + piece[i].unk30;
                piece[i].unk34 = base + piece[i].unk34;
                piece[i].unk38 = base + piece[i].unk38;
                i++;
            } while (i < count);
        }
    }
}

/** Scale the geometry of every entry of arg1 that carries kind 1 or 11. */
void func_8044E584(s32 arg0, void ***arg1) {
    f32 scale;
    void *obj;
    Ent *ent;
    s32 count;
    s32 i;

    scale = unit_scale[1];
    if (func_80285150(arg1, 0) != 0) {
        obj = **arg1;
        count = *(s32 *) obj;
        for (i = 0; i < count; i++) {
            ent = func_8028FD94(obj, i);
            switch (ent->kind) {
            case 1:
                ent->unk28 = ent->unk28 * scale;
                ent->unk30 = ent->unk30 * scale;
                ent->unk34 = ent->unk34 * scale;
                ent->unk50 = ent->unk50 * scale;
                ent->unk54 = ent->unk54 * scale;
                ent->unk58 = ent->unk58 * scale;
                break;
            case 11:
                ent->unkEC = ent->unkEC * scale;
                ent->unkF0 = ent->unkF0 * scale;
                break;
            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                break;
            }
        }
    }
}

/** Turn every slot's item index into a pointer into the owner's bank, then
 *  hand the loaded block to the owner. */
void func_8044E6A4(Owner *arg0, void ***arg1) {
    void *obj;
    Frame *frame;
    Bank *bank;
    Item *items;
    Item *item;
    Slot *slot;
    s32 count;
    s32 inner;
    s32 i;
    s32 j;
    s32 index;

    if (func_80285150(arg1, 0) != 0) {
        obj = **arg1;
        count = *(s32 *) obj;
        for (i = 0; i < count; i++) {
            frame = func_8028FD94(func_8028FD94(obj, i), 1);
            inner = frame->count;
            j = 0;
            if (j < inner) {
                slot = frame->slots;
                do {
                    index = slot->item;
                    if (index != -1) {
                        bank = func_8028FD94(arg0->unk6C, 2);
                        items = bank->items;
                        if ((index < 0) || (index >= bank->count)) {
                            item = NULL;
                        } else {
                            item = &items[index];
                        }
                        slot->item = (s32) item;
                    } else {
                        slot->item = 0;
                    }
                    slot++;
                    j++;
                } while (j < inner);
            }
        }
        arg0->unk7C = obj;
    }
}
