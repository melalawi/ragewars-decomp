extern double D_800C8FD8;

typedef struct func_80258BB4_S1 func_80258BB4_S1;
struct func_80258BB4_S1 {
    char pad0[0x2BA4];
    float unk2BA4;
};

void func_80258BB4(void *arg0, int arg1) {
    double d = (double)arg1;
    if (arg1 < 0) {
        d = d + D_800C8FD8;
    }
    ((func_80258BB4_S1 *)(arg0))->unk2BA4 = (float)d;
}
