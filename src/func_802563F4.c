#include "basetypes.h"

typedef struct Queue Queue;

typedef struct Chunk {
    void *source;
    void *destination;
    s32 length;
    Queue *queue;
    s32 value;
} Chunk;

extern Chunk *func_8025663C(void *arg0);
extern s32 func_802C0250(Queue *, void *, s32);
extern s32 func_802C0510(Queue *, s32, s32);

void func_802563F4(void *arg0, void *source, s32 length, void *destination,
                   Queue *queue, s32 value, s32 direct) {
    s32 remaining;
    s32 chunk_length;
    Chunk *chunk;

    if (direct != 0) {
        chunk = func_8025663C(arg0);
        if (chunk != 0) {
            chunk->source = source;
            chunk->destination = destination;
            chunk->length = length;
            chunk->queue = queue;
            chunk->value = value;
            func_802C0250((Queue *)((char *)arg0 + 0x230), chunk, 1);
        }
    } else {
        remaining = length;
        do {
            chunk = func_8025663C(arg0);
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
            func_802C0510((Queue *)((char *)arg0 + 0x230), (s32)chunk, 1);
        } while ((chunk != 0) && (remaining != 0));
    }
}
