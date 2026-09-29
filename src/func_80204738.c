extern float D_800C6B60;

typedef struct func_80204738_S1 func_80204738_S1;
struct func_80204738_S1 {
    char pad0[0x100];
    int unk100;
    char pad100[0x1B0 - 0x100 - sizeof(int)];
    float unk1B0;
};

/** Clear two flag groups when the object's 0x1B0 field exceeds a tunable. */
void func_80204738(void *object) {
    if (((func_80204738_S1 *)(object))->unk1B0 > D_800C6B60) {
        int flags = ((func_80204738_S1 *)(object))->unk100;
        flags &= ~0x2000;
        flags &= ~0x100;
        ((func_80204738_S1 *)(object))->unk100 = flags;
    }
}
