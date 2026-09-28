/* Runs func_80411598 for each of the manager D_80153C20's entries unless its mode word at 0x34 is 1. */
typedef struct {
    short count;
    char pad2[0x32];
    int mode;
} Manager;

extern Manager D_80153C20;
extern void func_80411598(int);

void func_80411D98(void) {
    int i;

    if (D_80153C20.mode != 1) {
        for (i = 0; i < D_80153C20.count; i++) {
            func_80411598(i);
        }
    }
}
