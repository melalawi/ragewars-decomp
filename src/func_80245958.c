/* Returns the globally selected record's word at 0xA8 while its word at 0x38 is non-zero, and 0
   otherwise. */
extern void *D_800E2830;

typedef struct func_80245958_S1 func_80245958_S1;
struct func_80245958_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0xA8 - 0x38 - sizeof(int)];
    int unkA8;
};

int func_80245958(void) {
    void *record = D_800E2830;
    int cond = ((func_80245958_S1 *)(record))->unk38 != 0;
    if (cond) {
        if (record) {
            return ((func_80245958_S1 *)(record))->unkA8;
        } else {
            return ((func_80245958_S1 *)(record))->unkA8;
        }
    }
    return 0;
}
