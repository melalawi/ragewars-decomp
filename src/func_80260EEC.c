typedef struct {
    int b;
    int c;
    int d;
} Triple;

/** Store a scalar word plus a three-word record by value. */
void func_80260EEC(void *arg0, int arg1, Triple t) {
    *(int *)((char *)arg0 + 0) = arg1;
    *(Triple *)((char *)arg0 + 4) = t;
}
