typedef struct func_8029F2BC_S1 func_8029F2BC_S1;
struct func_8029F2BC_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0x8 - 0x4 - sizeof(int)];
    int unk8;
};

void func_8029F2BC(void *arg0, int arg1, int arg2, int arg3) {
    ((func_8029F2BC_S1 *)(arg0))->unk0 = arg1;
    ((func_8029F2BC_S1 *)(arg0))->unk4 = arg2;
    ((func_8029F2BC_S1 *)(arg0))->unk8 = arg3;
}
