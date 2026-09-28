void func_8022DBF0(void *arg0) {
    float temp = *(float *)((char *)arg0 + 0x708);
    *(int *)((char *)arg0 + 0x710) = 0;
    *(int *)((char *)arg0 + 0x714) = 0;
    *(float *)((char *)arg0 + 0x70C) = temp;
}
