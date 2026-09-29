typedef struct func_8024E108_S1 func_8024E108_S1;
typedef struct func_8024E108_S2 func_8024E108_S2;
struct func_8024E108_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024E108_S2 {
    char pad0[0x4C];
    int unk4C;
};

int func_8024E108(void *arg0) {
    void *temp_a0 = ((func_8024E108_S1 *)(arg0))->unk18;
    unsigned int new_var = 0;
    if (*(int *)temp_a0 != 1) {
        return new_var;
    }
    if (new_var) {
        return ((func_8024E108_S2 *)(temp_a0))->unk4C & 0x4000;
    } else {
        return ((func_8024E108_S2 *)(temp_a0))->unk4C & 0x4000;
    }
}
