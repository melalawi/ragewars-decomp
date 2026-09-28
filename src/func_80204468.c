extern char D_800CD4C4;
extern char D_2043E0;

void func_80204468(void *arg0, void *arg1) {
    *(void **)((char *)arg1 + 0x2C) = &D_800CD4C4;
    *(void **)((char *)arg1 + 0x108) = &D_2043E0;
    *(int *)((char *)arg1 + 0x124) = 0;
    *(int *)((char *)arg1 + 0x128) = 0;
    *(int *)((char *)arg1 + 0x12C) = 0;
    if (*(int *)((char *)(*(void **)((char *)arg0 + 0x18)) + 0x14) & 1) {
        *(int *)((char *)arg0 + 0x100) = *(int *)((char *)arg0 + 0x100) | 0x10000;
        return;
    }
    *(int *)((char *)arg0 + 0x100) = *(int *)((char *)arg0 + 0x100) & 0xFFFEFFFF;
}
