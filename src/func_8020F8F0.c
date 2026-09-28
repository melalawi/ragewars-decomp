/* Returns 1 when one of the object's ten entries at 0x3C matches its current value at 0x28C and the
   paired flag at 0x6C is set, and 0 otherwise or when the current value is zero. */
typedef struct {
    char pad[0x3C];
    int keys[10];
    char pad64[0x6C - 0x64];
    int flags[10];
    char pad94[0x28C - 0x94];
    int current;
} Obj;

int func_8020F8F0(Obj *obj) {
    int i;

    if (obj->current == 0) {
        return 0;
    }
    for (i = 0; i < 10; i++) {
        if (obj->keys[i] == obj->current && obj->flags[i] != 0) {
            return 1;
        }
    }
    return 0;
}
