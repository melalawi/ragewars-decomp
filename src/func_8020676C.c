extern void func_802065C0(void *a, void *b, unsigned short c);
extern void func_802472E0(void *arg0);
extern char D_8011FE88[];
extern void func_80285D80(char *a, void *b, int c);

void func_8020676C(void *arg0, void *arg1, void *arg2) {
    func_802065C0(arg0, arg1, *(unsigned short *)((char *)arg2 + 6));
    *(int *)((char *)arg0 + 0x100) = *(int *)((char *)arg0 + 0x100) | 0x2100;
    func_802472E0(arg0);
    func_80285D80(D_8011FE88, arg0, 0);
}
