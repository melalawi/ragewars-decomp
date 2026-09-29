extern void *D_800D052C[];

typedef struct func_8022BECC_S1 func_8022BECC_S1;
typedef struct func_8022BECC_S2 func_8022BECC_S2;
struct func_8022BECC_S1 {
    char pad0[0x62E];
    short unk62E;
};
struct func_8022BECC_S2 {
    char pad0[0x8];
    short unk8;
};

int func_8022BECC(void *arg0) {
    short index = ((func_8022BECC_S1 *)(arg0))->unk62E;
    return ((func_8022BECC_S2 *)(D_800D052C[index]))->unk8 > 0;
}
