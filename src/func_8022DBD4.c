extern float D_800C7EC8;

typedef struct func_8022DBD4_S1 func_8022DBD4_S1;
struct func_8022DBD4_S1 {
    char pad0[0x708];
    float unk708;
    char pad708[0x70C - 0x708 - sizeof(float)];
    float unk70C;
    char pad70C[0x710 - 0x70C - sizeof(float)];
    float unk710;
    char pad710[0x714 - 0x710 - sizeof(float)];
    int unk714;
};

void func_8022DBD4(void *arg0) {
    float temp = ((func_8022DBD4_S1 *)(arg0))->unk708;
    float k = D_800C7EC8;
    ((func_8022DBD4_S1 *)(arg0))->unk714 = 0;
    ((func_8022DBD4_S1 *)(arg0))->unk70C = temp;
    ((func_8022DBD4_S1 *)(arg0))->unk710 = k;
}
