/* Reports whether the globally selected record is active (its word at 0x38 is non-zero) and its
   value at 0x1C lies between the bounds at 0x30 and 0x34. */
extern void *D_800E2830;
int func_80245788(void) {
    void *record = D_800E2830;
    float temp_f1;
    int var_a0 = 0;

    if (*(int *)((char *)record + 0x38) != 0) {
        temp_f1 = *(float *)((char *)record + 0x1C);
        if (*(float *)((char *)record + 0x30) <= temp_f1 && temp_f1 <= *(float *)((char *)record + 0x34)) {
            var_a0 = 1;
        }
    }
    return var_a0;
}
