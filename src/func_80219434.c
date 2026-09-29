extern void *func_8028D220(char *a, unsigned char b, short c);
extern char D_8011FE88;

typedef struct func_80219434_S1 func_80219434_S1;
struct func_80219434_S1 {
    char pad0[0x1];
    char unk1;
    char pad1[0x4 - 0x1 - sizeof(char)];
    short unk4;
};

void func_80219434(void *arg0) {
    func_8028D220(&D_8011FE88, ((func_80219434_S1 *)(arg0))->unk1, ((func_80219434_S1 *)(arg0))->unk4);
}
