#include "basetypes.h"

typedef struct Block80255ACC Block80255ACC;

struct Block80255ACC {
    Block80255ACC *prev;
    Block80255ACC *next;
    Block80255ACC *prev_phys;
    Block80255ACC *next_phys;
    s32 offset;
    s32 size;
};

typedef struct {
    s32 unk0;
    s32 unk4;
    Block80255ACC *head;
    Block80255ACC *tail;
} Pool80255ACC;

s32 func_80255ACC(Pool80255ACC *arg0, char *arg1) {
    Block80255ACC *block;
    Block80255ACC *header;
    Block80255ACC *other;
    Block80255ACC *scan;
    u32 next;

    header = (Block80255ACC *)(arg1 - 0x20);
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
        next = (u32)other->next;
        block->next = (Block80255ACC *)next;
        if (other->next != 0) {
            *(Block80255ACC **)next = block;
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
    return block->size - 0x20;
}
