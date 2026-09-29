typedef struct func_80268CC8_S1 func_80268CC8_S1;
struct func_80268CC8_S1 {
    char pad0[0x4];
    int unk4;
};

int func_80268CC8(void *arg0, void *arg1) {
    return ((func_80268CC8_S1 *)(arg1))->unk4;
}
