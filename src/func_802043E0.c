/** Run the object's optional update hook, then copy one of two byte pairs into the record header. */
typedef struct Hook {
    char pad[8];
    void (*fn)(void *, void *);
} Hook;

void func_802043E0(char *arg0, char *arg1) {
    char *base = *(char **)(arg0 + 0x18) + 0x14;
    Hook *hook = *(Hook **)(arg1 + 0x30);

    if (hook != 0 && hook->fn != 0) {
        hook->fn(arg0, arg1);
    }
    if (arg1[0x34] == 0) {
        arg0[1] = base[0xE];
        arg0[3] = base[0xF];
    } else {
        arg0[1] = base[0x1A];
        arg0[3] = base[0x1B];
    }
}
