typedef struct func_80264408_S1 func_80264408_S1;
struct func_80264408_S1 {
    char pad0[0xB4];
    int unkB4;
};

int func_80264408(void *arg0) {
    int flag = ((func_80264408_S1 *)(arg0))->unkB4 & 0x4000;
    return flag != 0;
}
