/* Returns 1 when all four twelve-byte slots at offset 0x2DF0 of the object D_800E54A4 hold -1 in
   their id word, stopping at the first that does not. */
typedef struct {
    int unk0;
    int unk4;
    int id;
} Slot;
typedef struct {
    char pad[0x2DF0];
    Slot slots[4];
} Base;

extern Base *D_800E54A4;

int func_8043551C(void) {
    int result;
    int i;

    result = 1;
    for (i = 0; i < 4 && result == 1; i++) {
        if (D_800E54A4->slots[i].id != -1) {
            result = 0;
        }
    }
    return result;
}
