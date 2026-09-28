typedef void (*FuncPtr)(void);

extern void *D_800E2830;
extern void func_802537D8(void *, void *);

void func_80245BB0(void) {
    if (*(int *)((char *)D_800E2830 + 0x48) == 0) {
        {
            int temp_a1 = *(int *)D_800E2830;
            if (temp_a1 != 0) {
                func_802537D8(0, temp_a1);
            }
        }
        {
            void *record = D_800E2830;
            FuncPtr fn = *(FuncPtr *)((char *)record + 0xC);

            *(int *)((char *)record + 0x0) = 0;
            *(int *)((char *)record + 0x4) = 0;
            *(int *)((char *)record + 0x38) = 0;
            *(int *)((char *)record + 0x3C) = 0;
            *(int *)((char *)record + 0x60) = 0;
            if (fn != 0) {
                *(FuncPtr *)((char *)record + 0xC) = 0;
                fn();
            }
        }
        *(int *)((char *)D_800E2830 + 0x48) = 1;
    }
}
