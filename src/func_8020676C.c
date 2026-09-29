extern void func_802065C0(void *a, void *b, unsigned short c);
extern void func_802472E0(void *arg0);
extern char D_8011FE88[];
extern void func_80285D80(char *a, void *b, int c);

typedef struct func_8020676C_S1 func_8020676C_S1;
typedef struct func_8020676C_S2 func_8020676C_S2;
struct func_8020676C_S1 {
    char pad0[0x6];
    unsigned short unk6;
};
struct func_8020676C_S2 {
    char pad0[0x100];
    int unk100;
};

void func_8020676C(void *arg0, void *arg1, void *arg2) {
    func_802065C0(arg0, arg1, ((func_8020676C_S1 *)(arg2))->unk6);
    ((func_8020676C_S2 *)(arg0))->unk100 = ((func_8020676C_S2 *)(arg0))->unk100 | 0x2100;
    func_802472E0(arg0);
    func_80285D80(D_8011FE88, arg0, 0);
}
