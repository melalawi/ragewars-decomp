/** Clear the word at offset 0x100 in the active object. */
extern char *D_800E2830;

typedef struct func_80245A00_S1 func_80245A00_S1;
struct func_80245A00_S1 {
    char pad0[0x100];
    int unk100;
};

void func_80245A00(void) {
    char *base = D_800E2830;
    ((func_80245A00_S1 *)(base))->unk100 = 0;
}
