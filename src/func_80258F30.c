extern int func_8025CEF0(void *arg0, int arg1, float arg2, int arg3);
extern float D_800C8FE8;

int func_80258F30(void *arg0, int arg1) {
    float var_f0 = D_800C8FE8;
    float temp_f1 = *(float *)((char *)arg0 + 0x2BA8);
    if (!(var_f0 < temp_f1)) {
        var_f0 = temp_f1;
    }
    return func_8025CEF0((char *)arg0 + 0x2BC0, arg1, var_f0, 0x40);
}
