extern void *D_800E2830;
extern void func_802537D8(void *, void *);

void func_80245B18(void) {
    int temp_a1 = *(int *)D_800E2830;
    void *record;
    if (temp_a1 != 0) {
        func_802537D8(0, temp_a1);
    }
    record = D_800E2830;
    *(int *)((char *)record + 0x0) = 0;
    *(int *)((char *)record + 0x4) = 0;
    *(int *)((char *)record + 0x38) = 0;
    *(int *)((char *)record + 0x3C) = 0;
    *(int *)((char *)record + 0x60) = 0;
}
