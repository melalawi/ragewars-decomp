extern void *D_800E2830;

typedef struct func_80245A4C_S1 func_80245A4C_S1;
struct func_80245A4C_S1 {
    char pad0[0x108];
    int unk108;
    char pad108[0x10C - 0x108 - sizeof(int)];
    int unk10C;
    char pad10C[0x110 - 0x10C - sizeof(int)];
    int unk110;
    char pad110[0x114 - 0x110 - sizeof(int)];
    int unk114;
};

/** Store four incoming words into the global record's tail fields. */
void func_80245A4C(int arg0, int arg1, int arg2, int arg3) {
    char *record = (char *)D_800E2830;
    ((func_80245A4C_S1 *)(record))->unk10C = arg1;
    ((func_80245A4C_S1 *)(record))->unk108 = arg0;
    ((func_80245A4C_S1 *)(record))->unk110 = arg2;
    ((func_80245A4C_S1 *)(record))->unk114 = arg3;
}
