typedef void (*FuncPtr)(void);

typedef struct func_80245BB0_S1 func_80245BB0_S1;
typedef struct func_80245BB0_S2 func_80245BB0_S2;
struct func_80245BB0_S1 {
    char pad0[0x48];
    int unk48;
};
struct func_80245BB0_S2 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0xC - 0x4 - sizeof(int)];
    FuncPtr unkC;
    char padC[0x38 - 0xC - sizeof(FuncPtr)];
    int unk38;
    char pad38[0x3C - 0x38 - sizeof(int)];
    int unk3C;
    char pad3C[0x60 - 0x3C - sizeof(int)];
    int unk60;
};

extern func_80245BB0_S1 *D_800E2830;
extern void func_802537D8(void *, void *);

void func_80245BB0(void) {
    if (D_800E2830->unk48 == 0) {
        {
            int temp_a1 = *(int *)D_800E2830;
            if (temp_a1 != 0) {
                func_802537D8(0, temp_a1);
            }
        }
        {
            void *record = D_800E2830;
            FuncPtr fn = ((func_80245BB0_S2 *)(record))->unkC;

            ((func_80245BB0_S2 *)(record))->unk0 = 0;
            ((func_80245BB0_S2 *)(record))->unk4 = 0;
            ((func_80245BB0_S2 *)(record))->unk38 = 0;
            ((func_80245BB0_S2 *)(record))->unk3C = 0;
            ((func_80245BB0_S2 *)(record))->unk60 = 0;
            if (fn != 0) {
                ((func_80245BB0_S2 *)(record))->unkC = 0;
                fn();
            }
        }
        D_800E2830->unk48 = 1;
    }
}
