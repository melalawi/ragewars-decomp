extern float D_800C6B60;

/** Clear two flag groups when the object's 0x1B0 field exceeds a tunable. */
void func_80204738(void *object) {
    if (*(float *)((char *)object + 0x1B0) > D_800C6B60) {
        int flags = *(int *)((char *)object + 0x100);
        flags &= ~0x2000;
        flags &= ~0x100;
        *(int *)((char *)object + 0x100) = flags;
    }
}
