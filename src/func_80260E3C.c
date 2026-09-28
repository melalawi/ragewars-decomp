typedef struct {
    int b;
    int c;
    int d;
} Triple;

/** Store a scalar word, a three-word record by value, and a trailing scalar. */
void func_80260E3C(void *arg0, int arg1, Triple t, int arg5) {
    *(int *)((char *)arg0 + 0) = arg1;
    *(Triple *)((char *)arg0 + 4) = t;
    *(int *)((char *)arg0 + 0x10) = arg5;
}
