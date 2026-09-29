extern void *func_80237E70(void);

typedef struct func_80239730_S1 func_80239730_S1;
struct func_80239730_S1 {
    char pad0[0x20];
    int unk20;
};

void *func_80239730(void) {
    void *temp_v0 = func_80237E70();
    if (temp_v0 != 0) {
        ((func_80239730_S1 *)(temp_v0))->unk20 = 1;
    }
    return temp_v0;
}
