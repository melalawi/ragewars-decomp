extern void func_80273424(void *arg0, float arg1, int arg2, float arg3);

typedef struct func_8023377C_S1 func_8023377C_S1;
typedef struct func_8023377C_S2 func_8023377C_S2;
struct func_8023377C_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0x8 - 0x4 - sizeof(int)];
    void* unk8;
};
struct func_8023377C_S2 {
    char pad0[0x294];
    int unk294;
};

void func_8023377C(void *arg0, void *arg1) {
    if (((func_8023377C_S1 *)(arg1))->unk4 == 6) {
        void *inner = ((func_8023377C_S1 *)(arg1))->unk8;
        func_80273424(arg0, 0.0f, ((func_8023377C_S2 *)(inner))->unk294, 0.0f);
    }
}
