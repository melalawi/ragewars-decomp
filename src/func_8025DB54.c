typedef struct func_8025DB54_S1 func_8025DB54_S1;
struct func_8025DB54_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0x40 - 0x38 - sizeof(int)];
    int unk40;
};

void func_8025DB54(void *arg0) {
    ((func_8025DB54_S1 *)(arg0))->unk38 = 1;
    ((func_8025DB54_S1 *)(arg0))->unk40 = 0;
}
