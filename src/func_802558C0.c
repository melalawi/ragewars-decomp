/* Allocates from a heap with a first-fit search of its free list: the request plus the 0x20-byte header is
 * rounded up to 16 bytes, a block after the found block's used part takes that size and inherits the
 * remaining free space in the free list (replacing the found block), the found block leaves the free list,
 * the new block is linked after it in address order, and its data pointer is returned (0 when nothing
 * fits). */
#include "basetypes.h"

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

void *func_802558C0(Heap *heap, s32 request) {
    Block *block;
    Block *split;
    u32 size;

    size = (request + 0x2F) & ~0xF;
    for (block = heap->head; block != 0; block = block->nextFree) {
        if (block->free >= size) {
            split = (Block *)((char *)block + block->size);
            split->size = size;
            split->free = block->free - size;
            if (split->free != 0) {
                split->prevFree = block;
                split->nextFree = block->nextFree;
                if (block->nextFree != 0) {
                    split->nextFree->prevFree = split;
                }
                block->nextFree = split;
                if (heap->tail == block) {
                    heap->tail = split;
                }
            } else {
                split->prevFree = 0;
                split->nextFree = 0;
            }
            block->free = 0;
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
            split->prev = block;
            split->next = block->next;
            if (block->next != 0) {
                split->next->prev = split;
            }
            block->next = split;
            return (char *)split + 0x20;
        }
    }
    return 0;
}
