typedef struct func_8020999C_S1 func_8020999C_S1;
struct func_8020999C_S1 {
    char pad0[0x300];
    int unk300;
    char pad300[0x304 - 0x300 - sizeof(int)];
    int unk304;
    char pad304[0x308 - 0x304 - sizeof(int)];
    int unk308;
    char pad308[0x30C - 0x308 - sizeof(int)];
    int unk30C;
    char pad30C[0x310 - 0x30C - sizeof(int)];
    int unk310;
};

/** Clear five consecutive object words beginning at offset 0x300. */
void func_8020999C(void *arg0) {
    ((func_8020999C_S1 *)(arg0))->unk300 = 0;
    ((func_8020999C_S1 *)(arg0))->unk304 = 0;
    ((func_8020999C_S1 *)(arg0))->unk308 = 0;
    ((func_8020999C_S1 *)(arg0))->unk30C = 0;
    ((func_8020999C_S1 *)(arg0))->unk310 = 0;
}
