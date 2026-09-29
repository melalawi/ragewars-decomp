/* Coalesces every block that physically follows a pool's anchor block at 0x10 into its physical
   predecessor: first puts an empty predecessor on the free list (after the next non-empty block, or
   at the head), then grows it by the block's header and size, unlinks the block from the physical
   chain and, when it was free, from the free list. Written like func_80255ACC, which absorbs one block. */
#include "basetypes.h"

typedef struct Block80255720 Block80255720;

struct Block80255720 {
    Block80255720 *prev;
    Block80255720 *next;
    Block80255720 *prev_phys;
    Block80255720 *next_phys;
    s32 offset;
    s32 size;
};

typedef struct {
    s32 unk0;
    s32 unk4;
    Block80255720 *head;
    Block80255720 *tail;
    Block80255720 *anchor;
} Pool80255720;

void func_80255720(Pool80255720 *arg0)
{
    Block80255720 *block;
    Block80255720 *header;
    Block80255720 *other;
    Block80255720 *scan;
    Block80255720 *next;

    while (arg0->anchor->next_phys != 0) {
        header = arg0->anchor->next_phys;
        block = header->prev_phys;
        if (block->size == 0) {
            other = header->prev;
            if (other != 0) {
                block->prev = other;
            } else {
                scan = block;
                while (scan != 0) {
                    if (scan->size != 0) {
                        break;
                    }
                    scan = scan->prev_phys;
                }
                if (scan != 0) {
                    block->prev = scan;
                } else {
                    goto insert_head;
                }
                other = scan;
            }
            next = other->next;
            block->next = next;
            if (other->next != 0) {
                next->prev = block;
            }
            other->next = block;
            if (arg0->tail == other) {
                arg0->tail = block;
            }
            goto merge;
insert_head:
            block->next = arg0->head;
            if (arg0->head != 0) {
                arg0->head->prev = block;
            } else {
                arg0->tail = block;
            }
            arg0->head = block;
        }

merge:
        block->size += header->offset + header->size;
        if (header->next_phys != 0) {
            header->next_phys->prev_phys = header->prev_phys;
        }
        header->prev_phys->next_phys = header->next_phys;

        if (header->size != 0) {
            if (header->prev != 0) {
                header->prev->next = header->next;
            }
            if (header->next != 0) {
                header->next->prev = header->prev;
            }
            if (arg0->tail == header) {
                arg0->tail = header->prev;
            }
        }
    }
}
