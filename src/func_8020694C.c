/** For each of the object's child slots, attach the child to the record and spawn its effect. */
extern int D_800D297C;
extern void *func_8024BFC4(void *, int);
extern void func_8024AA08(void *, void *, void *);
extern void func_8026DA4C(void *, int, int, void *, int, int);

typedef struct Slot {
    char data[24];
} Slot;

typedef struct Rec {
    char pad0[0xC];
    void *a;
    void *b;
} Rec;

typedef struct func_8020694C_S1 func_8020694C_S1;
struct func_8020694C_S1 {
    char pad0[0xB4];
    int unkB4;
    char padB4[0x140 - 0xB4 - sizeof(int)];
    Slot unk140;
};

void func_8020694C(char *arg0, void *arg1, Rec *arg2) {
    int i;
    int n;
    void *child;

    n = arg0[0xE7];
    for (i = 0; i < n; i++) {
        child = func_8024BFC4(arg0, i);
        if (child != 0) {
            arg2->a = child;
            arg2->b = child;
            func_8024AA08(arg0, arg1, arg2);
            func_8026DA4C(child, ((func_8020694C_S1 *)(arg0))->unkB4, 1, &(&((func_8020694C_S1 *)(arg0))->unk140)[D_800D297C], 0, arg0[3]);
        }
    }
}
