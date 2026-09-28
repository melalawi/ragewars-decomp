extern int func_8028B2D4(char *arg0, int arg1);
extern char D_8011FE88;

int func_8024E7CC(void *arg0) {
    int temp_a1 = *(int *)((char *)arg0 + 0x14);
    int var_v0 = 0;
    if (temp_a1 != 0) {
        var_v0 = func_8028B2D4(&D_8011FE88, temp_a1);
    }
    return var_v0;
}
