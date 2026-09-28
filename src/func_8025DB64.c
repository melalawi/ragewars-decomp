
extern float D_800C9108;
/** Clear offset 0x38 and initialize offset 0x40 from D_800C9108. */
void func_8025DB64(void *arg0) {
    *(float *)((char *)arg0 + 0x40) = D_800C9108;
    *(int *)((char *)arg0 + 0x38) = 0;
}
