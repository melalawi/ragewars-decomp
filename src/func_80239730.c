extern void *func_80237E70(void);

void *func_80239730(void) {
    void *temp_v0 = func_80237E70();
    if (temp_v0 != 0) {
        *(int *)((char *)temp_v0 + 0x20) = 1;
    }
    return temp_v0;
}
