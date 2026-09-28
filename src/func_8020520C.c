extern char D_800CD670;
extern char D_2052C4;
extern char D_205628;
extern char D_2050A0;

/** Initialize the dest record's vtable-like fields from source's flag byte. */
void func_8020520C(void *source, void *dest) {
    *(void **)((char *)dest + 0x2C) = &D_800CD670;
    *(void **)((char *)dest + 0x108) = &D_2052C4;
    *(void **)((char *)dest + 0x10C) = &D_205628;
    *(void **)((char *)dest + 0x110) = &D_2050A0;
    *(int *)((char *)dest + 0x124) = 0;
    *(int *)((char *)dest + 0x128) = *(signed char *)((char *)source + 0x3);
}
