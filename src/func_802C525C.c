extern void func_802C4478(void *arg0);
extern void func_802C4B9C(void *arg0, void *arg1);
extern unsigned short D_800D94F2;
extern char D_80151CC8;
extern char D_80151F80;

void *func_802C525C(void) {
    char *base = &D_80151CC8;
    unsigned short *counter;
    char *slots;
    unsigned short temp;

    if (*(int *)(base + 0x10) == 0) {
        return 0;
    }
    func_802C4478(base);
    counter = &D_800D94F2;
    temp = *counter + 1;
    *counter = temp;
    if ((unsigned int)(temp & 0xFFFF) >= 6) {
        *counter = 0;
    }
    slots = &D_80151F80;
    func_802C4B9C(slots + (*counter << 9), base);
    *(int *)(base + 0x10) = *(int *)(base + 0x10) - 1;
    return slots + (*counter << 9);
}
