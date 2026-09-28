#include "basetypes.h"

typedef struct Chunk {
    void *source;
    void *destination;
    s32 length;
    void *queue;
} Chunk;

extern void func_802BFD50(void *arg0, s32 arg1, s32 arg2);
extern Chunk *func_8025663C(void *arg0);
extern s32 func_802C0250(void *arg0, void *arg1, s32 arg2);
extern void func_802C0390(s32, s32, s32);

void func_8025631C(void *arg0, void *arg1, s32 arg2, void *arg3) {
    char queue[0x18];
    s32 queue_init;
    s32 completed;
    s32 remaining;
    s32 length;
    Chunk *chunk;

    func_802BFD50(queue, (s32) &queue_init, 1);
    remaining = arg2;
    do {
        chunk = func_8025663C(arg0);
        length = 0x2000;
        if (chunk == 0) {
            break;
        }
        chunk->source = (char *) arg1 + (arg2 - remaining);
        chunk->destination = (char *) arg3 + (arg2 - remaining);
        if ((u32) remaining < 0x2001U) {
            length = remaining;
        }
        chunk->length = length;
        chunk->queue = queue;
        func_802C0250((char *) arg0 + 0x230, chunk, 1);
        func_802C0390(queue, &completed, 1);
        remaining -= length;
    } while (remaining != 0);
}
