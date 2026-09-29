typedef struct func_8025BB9C_S1 func_8025BB9C_S1;
struct func_8025BB9C_S1 {
    char pad0[0xA8];
    int unkA8;
};

void func_8025BB9C(void *arg0, int arg1) {
    ((func_8025BB9C_S1 *)(arg0))->unkA8 = arg1;
}
