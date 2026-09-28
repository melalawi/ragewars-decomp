/** Run the object's update hook, then advance its timer and fire the expiry action when due. */
typedef struct Hook {
    char pad[8];
    void (*fn)(void *, void *);
} Hook;

extern float D_800D2988;
extern float D_800C6B38;
extern void func_80214178(void *, void *, int);

typedef struct Obj {
    char pad0[0x30];
    Hook *hook;
    char pad34[0x12C - 0x34];
    int count;
    char pad130[0x13C - 0x130];
    float timer;
} Obj;

void func_802039F8(char *arg0, Obj *arg1) {
    if (arg1->hook != 0 && arg1->hook->fn != 0) {
        arg1->hook->fn(arg0, arg1);
    }
    if (*(unsigned short *)(arg0 + 0xE4) == 0x40C) {
        arg1->timer += D_800D2988;
        if (D_800C6B38 < arg1->timer || arg1->count <= 0) {
            func_80214178(arg0, arg1, 0x40);
        }
    }
}
