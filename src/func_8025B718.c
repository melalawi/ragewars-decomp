/* Initialises an object: sets the words at 0x8, 0xC, 0x40 and 0xB4 and the halfword at 0x3A to -1,
   stores the two arguments at 0xB0 and 0x0, clears the halfword at 0x38 and the words at 0x14, 0x58,
   0x5C, 0xA4, 0xAC, 0xBC and 0xC0, sets the word at 0xC4 to 1 and writes D_800C9068 into the floats
   at 0x2C, 0x34 and 0xB8. */
extern float D_800C9068;
void func_8025B718(void *arg0, int arg1, int arg2) {
    float k = D_800C9068;

    *(int *)((char *)arg0 + 0xC) = -1;
    *(int *)((char *)arg0 + 0x8) = -1;
    *(short *)((char *)arg0 + 0x3A) = -1;
    *(int *)((char *)arg0 + 0x40) = -1;
    *(int *)((char *)arg0 + 0xB4) = -1;
    *(int *)((char *)arg0 + 0xB0) = arg1;
    *(int *)((char *)arg0 + 0x0) = arg2;
    *(short *)((char *)arg0 + 0x38) = 0;
    *(int *)((char *)arg0 + 0x14) = 0;
    *(int *)((char *)arg0 + 0x58) = 0;
    *(int *)((char *)arg0 + 0x5C) = 0;
    *(int *)((char *)arg0 + 0xA4) = 0;
    *(int *)((char *)arg0 + 0xAC) = 0;
    *(int *)((char *)arg0 + 0xBC) = 0;
    *(int *)((char *)arg0 + 0xC0) = 0;
    *(int *)((char *)arg0 + 0xC4) = 1;
    *(float *)((char *)arg0 + 0x2C) = k;
    *(float *)((char *)arg0 + 0x34) = k;
    *(float *)((char *)arg0 + 0xB8) = k;
}
