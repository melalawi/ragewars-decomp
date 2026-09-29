extern void *D_800E2830;
extern void func_802A125C(void *arg0, int arg1);

typedef struct func_80245A68_S1 func_80245A68_S1;
struct func_80245A68_S1 {
    char pad0[0x1E0];
    int unk1E0;
};

void func_80245A68(int arg0) {
    void *record = D_800E2830;
    int idx = ((func_80245A68_S1 *)(record))->unk1E0;
    func_802A125C((char *)record + ((idx * 0x28) + 0x118), arg0);
    record = D_800E2830;
    ((func_80245A68_S1 *)(record))->unk1E0 = ((func_80245A68_S1 *)(record))->unk1E0 + 1;
}
