extern void func_80255C40(void *, int, int);

typedef struct func_804426B4_S1 func_804426B4_S1;
struct func_804426B4_S1 {
    char pad0[0x14];
    short unk14;
};

void func_804426B4(void *object) {
    func_80255C40(object, 0x1D0, 0x1D4);
    ((func_804426B4_S1 *)(object))->unk14 = 0;
}
