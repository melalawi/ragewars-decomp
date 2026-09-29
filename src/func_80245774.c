/** Read the word at offset 0x38 from the globally selected record. */
extern void *D_800E2830;

typedef struct func_80245774_S1 func_80245774_S1;
struct func_80245774_S1 {
    char pad0[0x38];
    int unk38;
};

int func_80245774(void) {
    void *record = D_800E2830;
    return ((func_80245774_S1 *)(record))->unk38;
}
