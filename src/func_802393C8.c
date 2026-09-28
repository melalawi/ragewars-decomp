
extern float D_800C8630;
/** Reset the object fields from 0xFC through 0x118. */
void func_802393C8(void *arg0) {
    float value = D_800C8630;
    *(int *)((char *)arg0 + 0xFC) = 0;
    *(int *)((char *)arg0 + 0x100) = 0;
    *(int *)((char *)arg0 + 0x104) = 0;
    *(int *)((char *)arg0 + 0x108) = 0;
    *(int *)((char *)arg0 + 0x10C) = 0;
    *(int *)((char *)arg0 + 0x118) = 0;
    *(float *)((char *)arg0 + 0x110) = value;
    *(float *)((char *)arg0 + 0x114) = value;
}
