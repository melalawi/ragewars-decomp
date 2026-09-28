/* Resets an object through func_8024DD00, then clears its words from 0x1C to 0x38 and at 0x40, 0x44
   and 0x4C, sets the word at 0x3C to -1 and stores D_800C8914 in the float at 0x48. */
extern float D_800C8914;
void func_80246174(void *arg0) {
    float k;

    func_8024DD00(arg0);
    k = D_800C8914;
    *(int *)((char *)arg0 + 0x1C) = 0;
    *(int *)((char *)arg0 + 0x20) = 0;
    *(int *)((char *)arg0 + 0x24) = 0;
    *(int *)((char *)arg0 + 0x28) = 0;
    *(int *)((char *)arg0 + 0x2C) = 0;
    *(int *)((char *)arg0 + 0x30) = 0;
    *(int *)((char *)arg0 + 0x34) = 0;
    *(int *)((char *)arg0 + 0x38) = 0;
    *(int *)((char *)arg0 + 0x3C) = -1;
    *(int *)((char *)arg0 + 0x40) = 0;
    *(int *)((char *)arg0 + 0x44) = 0;
    *(int *)((char *)arg0 + 0x4C) = 0;
    *(float *)((char *)arg0 + 0x48) = k;
}
