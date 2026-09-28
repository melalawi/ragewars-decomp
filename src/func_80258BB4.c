extern double D_800C8FD8;

void func_80258BB4(void *arg0, int arg1) {
    double d = (double)arg1;
    if (arg1 < 0) {
        d = d + D_800C8FD8;
    }
    *(float *)((char *)arg0 + 0x2BA4) = (float)d;
}
