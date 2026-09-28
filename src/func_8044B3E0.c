/* Calls func_80255E78 on offset 0x20 of an object and func_80255C58 on offset 0xC with the second
   argument. */
extern void func_80255E78(void *);
extern void func_80255C58(void *, void *);

void func_8044B3E0(char *object, void *value) {
    func_80255E78(object + 0x20);
    func_80255C58(object + 0xC, value);
}
