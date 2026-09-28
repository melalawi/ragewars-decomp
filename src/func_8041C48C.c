/* In one- or no-player mode, counts a tick on the state D_800E3518 and, while it is not paused, once
   more than five ticks have passed runs func_802A3358 and func_8041C2C4; always returns 0. */
typedef struct {
    char pad[0x14];
    int ticks;
    int paused;
} State;

extern int D_800E28E0;
extern State *D_800E3518;
extern void func_802A3358(void);
extern void func_8041C2C4(void);

int func_8041C48C(void) {
    if (D_800E28E0 < 2) {
        D_800E3518->ticks++;
        if (D_800E3518->paused == 0) {
            if (D_800E3518->ticks < 6) {
                return 0;
            }
            func_802A3358();
            func_8041C2C4();
        }
    }
    return 0;
}
