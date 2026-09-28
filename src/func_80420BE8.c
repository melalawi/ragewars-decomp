/* Handles a packed message whose high half is type 3 with no extra argument: when the entry named by
   its low half in the 0x4C8-byte table D_800E42D0 is active and has a target, runs func_80420214 on it
   and plays sound 0xE7C; always returns 0. */
typedef struct {
    char pad[0x10];
    int target;
    int active;
    char pad18[0x4C8 - 0x18];
} Entry;

extern Entry *D_800E42D0;
extern void func_80420214(int, Entry *);
extern void func_8025DF54(int);

int func_80420BE8(int unused0, int unused1, unsigned int message, int extra) {
    int index = message & 0xFFFF;
    Entry *e;

    if ((message >> 16) == 3 && extra == 0) {
        e = &D_800E42D0[index];
        if (e->active == 1 && e->target != -1) {
            func_80420214(index, e);
            func_8025DF54(0xE7C);
        }
    }
    return 0;
}
