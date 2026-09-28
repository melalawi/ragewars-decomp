/* After func_8029A73C, forwards an event for a channel to func_8029A5D4 with the channel's handler id
   (short at 0xC of the handler at 0x4C) when the channel is not muted (word at 0x5C) and has a handler;
   returns 0. */
typedef struct {
    char pad[0xC];
    short id;
} Handler;

typedef struct {
    char pad[0x4C];
    Handler *handlers[4];
    int muted[4];
} Mixer;

extern void func_8029A73C(void);
extern void func_8029A5D4(int, int, int, int, int);

int func_8041BE0C(Mixer *mixer, int unused, int channel, int value, int extra) {
    Handler *h;

    func_8029A73C();
    if (mixer->muted[(unsigned short)channel] != 0) {
        return 0;
    }
    h = mixer->handlers[(unsigned short)channel];
    if (h == 0) {
        return 0;
    }
    func_8029A5D4(h->id, 1, channel, value, extra);
    return 0;
}
