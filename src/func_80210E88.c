/* Advances an animation player one frame: returns 1 when there is no player or clip, or after wrapping
   past frame 7 back to 0; otherwise prepares and shows the current frame through func_802106E0 and
   func_80210964, advances the frame at 0x1CC and returns 0. */
typedef struct {
    void *clip;
    char pad4[0x1C8];
    int frame;
} Player;

extern void func_802106E0(void *, int);
extern void func_80210964(void *, int);

int func_80210E88(Player *p) {
    if (p == 0) {
        return 1;
    }
    if (p->clip == 0) {
        return 1;
    }
    if (p->frame < 8) {
        func_802106E0(p->clip, p->frame);
        func_80210964(p->clip, p->frame);
        p->frame++;
        return 0;
    }
    p->frame = 0;
    return 1;
}
