#include "span_1000/code_802555C8.h"
#include "types.h"

/* Initialises a heap over a memory range: records its start and unrounded end, places one free block at the
   first 16-byte boundary covering the rest rounded down to 16 bytes, less a 0x20-byte header, and
   points the free list at that block when it has room. */




void func_802558B4_de(struct Heap *heap, char *start, s32 size) {
    struct Block_func_802558B4_de *block;

    heap->start = start;
    heap->end = start + size;
    block = (struct Block_func_802558B4_de *) (((u32) start + 15) & ~15);
    size -= (char *) block - start;
    size &= ~15;
    block->previous = 0;
    block->next = 0;
    block->b = 0;
    block->a = 0;
    block->header = 0x20;
    block->size = size - 0x20;
    heap->first = block;
    if (block->size != 0) {
        heap->last = block;
        heap->free = block;
    } else {
        heap->last = 0;
        heap->free = 0;
    }
}
