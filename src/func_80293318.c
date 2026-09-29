void func_8044AFC0(void *a);
void func_8044A600(void *a, void *b, void *c);

typedef struct func_80293318_S1 func_80293318_S1;
struct func_80293318_S1 {
    char pad0[0x25580];
    char unk25580;
};

void func_80293318(void *arg0, void *arg1, void *arg2) {
    func_8044AFC0((char *)arg0 + 0x255C8);
    func_8044A600(&((func_80293318_S1 *)(arg0))->unk25580, arg1, arg2);
}
