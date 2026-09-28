extern char D_800CD5D0;
extern char D_204C34;

void func_80204BB4(void *arg0, void *arg1) {
    *(void **)((char *)arg1 + 0x2C) = &D_800CD5D0;
    *(void **)((char *)arg1 + 0x108) = &D_204C34;
}
