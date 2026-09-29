extern float D_800C6D78;

typedef struct func_80209910_S1 func_80209910_S1;
struct func_80209910_S1 {
    char pad0[0x6A0];
    float unk6A0;
};

void func_80209910(void **arg0, float arg1) {
    float result = arg1 * D_800C6D78;
    if (arg0 != 0) {
        ((func_80209910_S1 *)((*arg0)))->unk6A0 = -result;
    }
}
