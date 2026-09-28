#include "basetypes.h"

typedef struct ScoreTable {
    u8 pad00[0x3C];
    short value[8];
} ScoreTable;

typedef struct Record {
    u8 pad0000[0x5D8];
    ScoreTable *scores;
    u8 pad05DC[0x16E0 - 0x5DC];
    struct Record *next;
    u8 pad16E4[4];
} Record;

typedef struct Context {
    u8 pad00[4];
    Record *base;
    u8 pad08[0x18];
    Record *head;
} Context;

/** Return the linked record with the greatest eight-slot score excluding itself. */
void *func_8022B9FC(Context *context) {
    Record *node;
    Record *base;
    Record *bestNode = 0;
    int best = -1;

    node = context->head;
    if (node != 0) {
        base = context->base;
        do {
            unsigned int own = (unsigned int)((u8 *)node - (u8 *)base) / sizeof(Record);
            int score = 0;
            int i;
            for (i = 0; i < 8; i++) {
                if (i == own) {
                    continue;
                }
                score += node->scores->value[i];
                if (best < score) {
                    best = score;
                    bestNode = node;
                }
            }
            node = node->next;
        } while (node != 0);
    }
    return bestNode;
}
