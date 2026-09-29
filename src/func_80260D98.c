typedef struct {
    int b;
    int c;
    int d;
} Triple;

typedef struct func_80260D98_S1 func_80260D98_S1;
struct func_80260D98_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    Triple unk4;
    char pad4[0x10 - 0x4 - sizeof(Triple)];
    int unk10;
};

/** Store a scalar word, a three-word record by value, and a trailing scalar. */
void func_80260D98(void *arg0, int arg1, Triple t, int arg5) {
    ((func_80260D98_S1 *)(arg0))->unk0 = arg1;
    ((func_80260D98_S1 *)(arg0))->unk4 = t;
    ((func_80260D98_S1 *)(arg0))->unk10 = arg5;
}
