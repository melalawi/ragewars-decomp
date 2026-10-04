#include "span_1000/code_80256234.h"
#include "span_1000/types.h"
#include "types.h"

typedef struct Queue Queue;



extern Chunk_func_80256454_de *func_8025661C_de(void *arg0);
extern s32 func_802BB160_de(Queue *, void *, s32);
extern s32 func_802BB420_de(Queue *, s32, s32);




void func_80256454_de(void *arg0, void *source, s32 length, void *destination,
                   Queue *queue, s32 value, s32 direct) {
    s32 remaining;
    s32 chunk_length;
    Chunk_func_80256454_de *chunk;

    if (direct != 0) {
        chunk = func_8025661C_de(arg0);
        if (chunk != 0) {
            chunk->source = source;
            chunk->destination = destination;
            chunk->length = length;
            chunk->queue = queue;
            chunk->value = value;
            func_802BB160_de(&((func_8025631C_S1 *)(arg0))->unk230, chunk, 1);
        }
    } else {
        remaining = length;
        do {
            chunk = func_8025661C_de(arg0);
            chunk_length = 0x2000;
            if (chunk == 0) {
                break;
            }
            chunk->source = (char *)source + (length - remaining);
            chunk->destination = (char *)destination + (length - remaining);
            if ((u32)remaining < 0x2001U) {
                chunk_length = remaining;
            }
            remaining -= chunk_length;
            chunk->length = chunk_length;
            if (remaining != 0) {
                chunk->queue = 0;
                chunk->value = 0;
            } else {
                chunk->queue = queue;
                chunk->value = value;
            }
            func_802BB420_de(&((func_8025631C_S1 *)(arg0))->unk230, (s32)chunk, 1);
        } while ((chunk != 0) && (remaining != 0));
    }
}
