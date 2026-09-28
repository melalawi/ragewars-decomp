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
            func_8026DA4C(child, *(int *)(arg0 + 0xB4), 1, &((Slot *)(arg0 + 0x140))[D_800D297C], 0, arg0[3]);
        }
    }
}
