extern int func_8025CEF0(void *arg0, int arg1, float arg2, int arg3);
extern float D_800C8FE8;

typedef struct func_80258F30_S1 func_80258F30_S1;
struct func_80258F30_S1 {
    char pad0[0x2BA8];
    float unk2BA8;
    char pad2BA8[0x2BC0 - 0x2BA8 - sizeof(float)];
    char unk2BC0;
};

int func_80258F30(void *arg0, int arg1) {
    float var_f0 = D_800C8FE8;
    float temp_f1 = ((func_80258F30_S1 *)(arg0))->unk2BA8;
    if (!(var_f0 < temp_f1)) {
        var_f0 = temp_f1;
    }
    return func_8025CEF0(&((func_80258F30_S1 *)(arg0))->unk2BC0, arg1, var_f0, 0x40);
}
