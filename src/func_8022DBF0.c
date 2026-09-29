typedef struct func_8022DBF0_S1 func_8022DBF0_S1;
struct func_8022DBF0_S1 {
    char pad0[0x708];
    float unk708;
    char pad708[0x70C - 0x708 - sizeof(float)];
    float unk70C;
    char pad70C[0x710 - 0x70C - sizeof(float)];
    int unk710;
    char pad710[0x714 - 0x710 - sizeof(int)];
    int unk714;
};

void func_8022DBF0(void *arg0) {
    float temp = ((func_8022DBF0_S1 *)(arg0))->unk708;
    ((func_8022DBF0_S1 *)(arg0))->unk710 = 0;
    ((func_8022DBF0_S1 *)(arg0))->unk714 = 0;
    ((func_8022DBF0_S1 *)(arg0))->unk70C = temp;
}
