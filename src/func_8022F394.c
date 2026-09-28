/* Stores a byte into the object's slot table at 0x18: indices 0 to 10 directly, 17 and 18 into
   slots 11 and 12, and other indices are ignored. */
typedef struct {
    char pad[0x18];
    char slots[13];
} Obj;

void func_8022F394(Obj *obj, int index, char value) {
    if (index == 17) {
        goto is17;
    }
    if (index < 18) {
        goto below18;
    }
    if (index == 18) {
        goto is18;
    }
    return;
below18:
    if (index >= 11) {
        return;
    }
    if (index < 0) {
        return;
    }
    goto store;
is18:
    index = 12;
    goto store;
is17:
    index = 11;
store:
    obj->slots[index] = value;
}
