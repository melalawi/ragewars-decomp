/* Returns whether a player may act on a target: never on its own linked object or an inactive
   target, always when the team rule D_801468C4 is off, otherwise only across different teams. */
typedef struct {
    char pad[0x92];
    unsigned char team;
} Info;

typedef struct Actor {
    char pad[0x1D8];
    struct Actor *linked;
    char pad1DC[0x5D8 - 0x1DC];
    Info *info;
    char pad5DC[0x5E4 - 0x5DC];
    int active;
} Actor;

extern int D_801468C4;
int func_80203EB0(Actor *self, int unused, Actor *target) {
    Actor *linked = self->linked;
    if (linked == target || target->active == 0) {
        return 0;
    }
    if (D_801468C4 != 0) { if (linked->info->team == target->info->team) { return 0; } } return 1;
}
