/* Loads every still-empty cell of the level's tile grid: for each row and column whose cell
   record has no resource, fetches the cell's block through func_8028FE1C and func_802518DC,
   binds and spawns each object of its two object lists (0xE8- and 0x1C8-byte records) and
   releases the spawned handles and the block. */
#include "basetypes.h"

typedef struct Cell {
    char pad0[0x10];
    s32 resource;
} Cell;

typedef struct List {
    s32 kind;
    s32 count;
} List;

typedef struct ObjA {
    s8 pad0;
    s8 type;
    char pad2[0x20 - 2];
    void **block;
    char pad24[0xE8 - 0x24];
} ObjA;

typedef struct ObjB {
    s8 pad0;
    s8 type;
    char pad2[0x60 - 2];
    void **block;
    char pad64[0x1C8 - 0x64];
} ObjB;

typedef struct Level {
    char pad0[0x30];
    s32 key;
    char pad34[0x64 - 0x34];
    s32 file;
    void *grid;
} Level;

extern char D_28795C[];
extern char D_800CA300[];

extern void func_8024F284(ObjB *obj, s32 arg1);
extern void *func_8024F6DC(ObjB *obj, s32 type);
extern void func_80250950(ObjA *obj, s32 arg1);
extern void *func_80250754(ObjA *obj, s32 type);
extern void **func_802518DC(s32, s32, s32, s32, s32, Level *, void *, void *, s32);
extern void func_802536F4(s32, void *);
extern void func_8026E158(void *handle);
extern void *func_8028FD94(void *node, s32 index);
extern s32 func_8028FE1C(s32, s32, s32, s32 *);

void func_8044D9DC(Level *level) {
    s32 size;
    s32 width;
    s32 row;
    s32 lastCol;
    s32 lastRow;
    s32 rows;
    Cell *cells;
    Cell *cell;
    s32 col;
    s32 first;
    s32 key;
    void **block;
    void *node;
    List *list;
    s32 i;
    s32 n;
    s32 m;
    ObjA *a;
    ObjA *objsA;
    ObjB *objsB;
    ObjB *b;
    void *handle;

    width = ((List *) func_8028FD94(level->grid, 0))->count;
    row = 0;
    rows = ((List *) func_8028FD94(level->grid, 2))->count;
    cells = (Cell *) ((char *) func_8028FD94(level->grid, 4) + 8);
    lastRow = rows - 1;
    lastCol = width - 1;
    /* FAKEMATCH: constant-holding local first keeps the column loop's entry test as slt */
    first = 0;
    for (; row <= lastRow; row++) {
        for (col = first; col <= lastCol; col++) {
            cell = &cells[col + row * width];
            if (cell->resource != 0) {
                continue;
            }
            key = func_8028FE1C(level->file, level->key, col + row * width, &size);
            block = func_802518DC(0, key, key, size, 4, level, D_28795C, D_800CA300, 1);
            if (block == 0) {
                continue;
            }
            node = *block;
            if (*(s32 *) node != 0) {
                list = func_8028FD94(node, 0);
                n = list->count;
                objsA = (ObjA *) (list + 1);
                for (i = 0; i < n; i++) {
                    a = &objsA[i];
                    a->block = block;
                    func_80250950(a, 0);
                    handle = func_80250754(a, a->type);
                    if (handle != 0) {
                        func_8026E158(handle);
                        func_802536F4(0, handle);
                    }
                }
                list = func_8028FD94(node, 1);
                m = list->count;
                objsB = (ObjB *) (list + 1);
                for (i = 0; i < m; i++) {
                    b = &objsB[i];
                    b->block = block;
                    func_8024F284(b, 0);
                    handle = func_8024F6DC(b, b->type);
                    if (handle != 0) {
                        func_8026E158(handle);
                        func_802536F4(0, handle);
                    }
                }
            }
            func_802536F4(0, block);
        }
    }
}
