extern float D_800C7EC8;

void func_8022DBD4(void *arg0) {
    float temp = *(float *)((char *)arg0 + 0x708);
    float k = D_800C7EC8;
    *(int *)((char *)arg0 + 0x714) = 0;
    *(float *)((char *)arg0 + 0x70C) = temp;
    *(float *)((char *)arg0 + 0x710) = k;
}
