typedef struct func_8022F304_S1 func_8022F304_S1;
struct func_8022F304_S1 {
    char pad0[0x14];
    unsigned char unk14;
};

void func_8022F304(void *arg0, unsigned char arg1) {
    ((func_8022F304_S1 *)(arg0))->unk14 = arg1;
}
