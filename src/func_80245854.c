/* Calls func_80401980 when the globally selected record's word at 0x38 is non-zero. */
extern void *D_800E2830;
extern void func_80401980(void);

typedef struct func_80245854_S1 func_80245854_S1;
struct func_80245854_S1 {
    char pad0[0x38];
    int unk38;
};

void func_80245854(void) {
    void *record = D_800E2830;
    if (((func_80245854_S1 *)(record))->unk38 != 0) {
        func_80401980();
    }
}
