extern int func_8028B2D4(char *arg0, int arg1);
extern char D_8011FE88;

typedef struct func_8024E7CC_S1 func_8024E7CC_S1;
struct func_8024E7CC_S1 {
    char pad0[0x14];
    int unk14;
};

int func_8024E7CC(void *arg0) {
    int temp_a1 = ((func_8024E7CC_S1 *)(arg0))->unk14;
    int var_v0 = 0;
    if (temp_a1 != 0) {
        var_v0 = func_8028B2D4(&D_8011FE88, temp_a1);
    }
    return var_v0;
}
