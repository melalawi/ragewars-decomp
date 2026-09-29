typedef struct {
    int b;
    int c;
    int d;
} Triple;

typedef struct func_80260EEC_S1 func_80260EEC_S1;
struct func_80260EEC_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    Triple unk4;
};

/** Store a scalar word plus a three-word record by value. */
void func_80260EEC(void *arg0, int arg1, Triple t) {
    ((func_80260EEC_S1 *)(arg0))->unk0 = arg1;
    ((func_80260EEC_S1 *)(arg0))->unk4 = t;
}
