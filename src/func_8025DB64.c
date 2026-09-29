
extern float D_800C9108;
typedef struct func_8025DB64_S1 func_8025DB64_S1;
struct func_8025DB64_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0x40 - 0x38 - sizeof(int)];
    float unk40;
};

/** Clear offset 0x38 and initialize offset 0x40 from D_800C9108. */
void func_8025DB64(void *arg0) {
    ((func_8025DB64_S1 *)(arg0))->unk40 = D_800C9108;
    ((func_8025DB64_S1 *)(arg0))->unk38 = 0;
}
