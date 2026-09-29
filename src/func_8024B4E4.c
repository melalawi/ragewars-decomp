typedef void (*FuncPtr)(void *, void *);

extern void func_8026EE90(void *arg0, int arg1, void *arg2);

typedef struct func_8024B4E4_S1 func_8024B4E4_S1;
struct func_8024B4E4_S1 {
    char pad0[0x74];
    char unk74;
    char pad74[0x28C - 0x74 - sizeof(char)];
    FuncPtr unk28C;
};

void func_8024B4E4(void *arg0, int arg1) {
    FuncPtr fn = ((func_8024B4E4_S1 *)(arg0))->unk28C;
    fn(arg0, (char *)arg0 + 0x170);
    func_8026EE90(&((func_8024B4E4_S1 *)(arg0))->unk74, arg1, (char *)arg0 + 0xE8);
}
