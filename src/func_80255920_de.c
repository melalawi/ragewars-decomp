#include "common/types.h"
#include "span_1000/code_802555C8.h"
#include "types.h"
/* Allocates from a heap with a first-fit search of its free list: the request plus the 0x20-byte header is
 * rounded up to 16 bytes, a block after the found block's used part takes that size and inherits the
 * remaining free space in the free list (replacing the found block), the found block leaves the free list,
 * the new block is linked after it in address order, and its data pointer is returned (0 when nothing
 * fits). */








void *func_80255920_de(Heap_func_80255920_de *heap, s32 request) {
    Block_func_80255920_de *block;
    Block_func_80255920_de *split;
    u32 size;

    size = (request + 0x2F) & ~0xF;
    for (block = heap->head; block != 0; block = block->nextFree) {
        if (block->free >= size) {
            { u8 *cursor = (u8 *)block; cursor += block->size; split = (Block_func_80255920_de *)cursor; }
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
            return &((func_802558C0_S1 *)(split))->unk20;
        }
    }
    return 0;
}
