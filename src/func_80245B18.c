extern void *D_800E2830;
extern void func_802537D8(void *, void *);

typedef struct func_80245B18_S1 func_80245B18_S1;
struct func_80245B18_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0x38 - 0x4 - sizeof(int)];
    int unk38;
    char pad38[0x3C - 0x38 - sizeof(int)];
    int unk3C;
    char pad3C[0x60 - 0x3C - sizeof(int)];
    int unk60;
};

void func_80245B18(void) {
    int temp_a1 = *(int *)D_800E2830;
    void *record;
    if (temp_a1 != 0) {
        func_802537D8(0, temp_a1);
    }
    record = D_800E2830;
    ((func_80245B18_S1 *)(record))->unk0 = 0;
    ((func_80245B18_S1 *)(record))->unk4 = 0;
    ((func_80245B18_S1 *)(record))->unk38 = 0;
    ((func_80245B18_S1 *)(record))->unk3C = 0;
    ((func_80245B18_S1 *)(record))->unk60 = 0;
}
