typedef struct func_8041374C_S1 func_8041374C_S1;
struct func_8041374C_S1 {
    char pad0[0x10];
    int unk10;
};

int func_8041374C(void *object) {
    return ((func_8041374C_S1 *)(object))->unk10 > 0;
}
