/* Initialises an object: clears the words at 0x8, 0x9C, 0xA4, 0xA8, 0xB4 and 0xB8, sets the words at
   0x0 and 0x4 to -1, writes the two constants at D_800C7E38 into the floats at 0xAC and 0xB0, the two
   at D_800C7E40 into the floats at 0x90, 0x94 and 0x98 (the first of them twice) and D_800C7E48 into
   the float at 0xA0. */
extern float D_800C7E38;
extern float D_800C7E40;
extern float D_800C7E48;
void func_8022C66C(void *arg0) {
    float f1 = D_800C7E38;
    float f2 = *(float *)((char *)&D_800C7E38 + 4);
    float f0 = D_800C7E40;
    float f3 = *(float *)((char *)&D_800C7E40 + 4);
    float f4 = D_800C7E48;

    *(int *)((char *)arg0 + 0xB4) = 0;
    *(int *)((char *)arg0 + 0x8) = 0;
    *(int *)((char *)arg0 + 0xB8) = 0;
    *(int *)((char *)arg0 + 0x4) = -1;
    *(int *)((char *)arg0 + 0x0) = -1;
    *(int *)((char *)arg0 + 0xA8) = 0;
    *(int *)((char *)arg0 + 0x9C) = 0;
    *(int *)((char *)arg0 + 0xA4) = 0;
    *(float *)((char *)arg0 + 0xAC) = f1;
    *(float *)((char *)arg0 + 0xB0) = f2;
    *(float *)((char *)arg0 + 0x90) = f0;
    *(float *)((char *)arg0 + 0x94) = f3;
    *(float *)((char *)arg0 + 0x98) = f0;
    *(float *)((char *)arg0 + 0xA0) = f4;
}
