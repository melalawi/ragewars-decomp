/** Report whether the actor on the given cell is within the scaled trigger distance. */
typedef struct Actor {
    char pad0[0xE6];
    signed char always;
    char padE7[0x100 - 0xE7];
    int flags;
    float range;
    short x;
    short y;
    short level;
    char pad10E[0x12C - 0x10E];
    short altLevel;
    char pad12E[0x134 - 0x12E];
    float altRange;
} Actor;

typedef struct Cell {
    char pad0[0xCA];
    unsigned char pos;
    signed char open;
} Cell;

int func_80204FC4(Actor *actor, Cell *cell, float scale) {
    if (actor->always == 1) {
        return 1;
    }
    if (actor->x == (signed char)cell->pos && actor->y == (signed char)cell->pos) {
        if (cell->open != 0 && !(actor->flags & 0x400)) {
            return 1;
        }
        if (actor->level < 3 && (actor->flags & 0x400)) {
            if (actor->altLevel * scale <= actor->altRange) {
                return 1;
            }
            return 0;
        }
        if (actor->level * scale <= actor->range) {
            return 1;
        }
    }
    return 0;
}
