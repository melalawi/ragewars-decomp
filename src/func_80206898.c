extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_80206898_S1 func_80206898_S1;
struct func_80206898_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_80206898(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_80206898_S1 *)(arg0))->unkA, ((func_80206898_S1 *)(arg0))->unk4, 0);
}
