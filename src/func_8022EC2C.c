/** Update the object's state code from identity, mode, and height bounds. */
extern int D_800CE47C;
extern float D_800C7F78;
extern float D_800C7F7C;

void func_8022EC2C(void *object) {
    int suppress = 0;
    float value;

    if (*(int *)((char *)object + 0x86C) == 0x1144) {
        suppress = *(signed char *)((char *)object + 0x10E) == 0;
    }
    if (*(unsigned short *)((char *)object + 0xE4) == D_800CE47C) {
        *(int *)((char *)object + 0x86C) = 0x8A2;
        return;
    }
    if (!suppress) {
        value = *(float *)((char *)object + 0x6C0);
        if (D_800C7F78 <= value) {
            *(int *)((char *)object + 0x86C) = 0x8A2;
            return;
        }
        if (value <= D_800C7F7C) {
            *(int *)((char *)object + 0x86C) = 0x8A7;
            return;
        }
        *(int *)((char *)object + 0x86C) = 0x14;
    }
}

/** Empty adjacent entry point included in func_8022EC2C's Splat span. */
void func_8022ECB4(void) {
}
