#include "basetypes.h"

/* Allocates from the top of a heap's free space with a first-fit search of its free list: the request plus the 0x20-byte header is rounded up to 16 bytes and carved from the end of the found block's free space; the found block leaves the free list once its free space is used up, the new block is linked after it in address order, and its data pointer is returned (0 when nothing fits). */

typedef struct Block {
    struct Block *prevFree;
    struct Block *nextFree;
    struct Block *prev;
    struct Block *next;
    u32 size;
    u32 free;
} Block;

typedef struct {
    char pad0[8];
    Block *head;
    Block *tail;
} Heap;

typedef struct func_802559D4_S1 func_802559D4_S1;
struct func_802559D4_S1 {
    char pad0[0x20];
    char unk20;
};

void *func_802559D4(Heap *heap, s32 request)
{
    Block *block;
    Block *split;
    u32 size;

    size = (request + 0x2F) & ~0xF;
    for (block = heap->tail; block != 0; block = block->prevFree) {
        if (block->free >= size) {
            { u8 *cursor = (u8 *)block; cursor += block->size; cursor += block->free; cursor -= size; split = (Block *)cursor; }
            split->size = size;
            split->free = 0;
            block->free -= size;
            split->nextFree = 0;
            split->prevFree = 0;
            if (block->free == 0) {
                if (block->prevFree != 0) {
                    block->prevFree->nextFree = block->nextFree;
                }
                if (block->nextFree != 0) {
                    block->nextFree->prevFree = block->prevFree;
                }
                if (heap->head == block) {
                    heap->head = block->nextFree;
                }
                if (heap->tail == block) {
                    heap->tail = block->nextFree != 0 ? block->nextFree : block->prevFree;
                }
                block->prevFree = 0;
                block->nextFree = 0;
            }
            split->prev = block;
            split->next = block->next;
            if (block->next != 0) {
                split->next->prev = split;
            }
            block->next = split;
            return &((func_802559D4_S1 *)(split))->unk20;
        }
    }
    return 0;
}
