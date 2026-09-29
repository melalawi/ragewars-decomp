typedef struct func_8026438C_S1 func_8026438C_S1;
struct func_8026438C_S1 {
    char pad0[0xB4];
    int unkB4;
};

int func_8026438C(void *arg0) {
    int flag = ((func_8026438C_S1 *)(arg0))->unkB4 & 0x1000;
    return flag != 0;
}
