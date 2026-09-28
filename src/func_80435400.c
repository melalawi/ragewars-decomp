/* Returns the index of the first of the four twelve-byte slots at offset 0x2DF8 of D_800E54A4 whose
   id and value words match the arguments, or -1 when none does. */
typedef struct {
    int id;
    int value;
    int unk8;
} Slot;
typedef struct {
    char pad[0x2DF8];
    Slot slots[4];
} Base;

extern Base *D_800E54A4;

int func_80435400(int id, int value) {
    int result;
    int i;

    result = -1;
    for (i = 0; i < 4 && result == -1; i++) {
        if (D_800E54A4->slots[i].id == id && D_800E54A4->slots[i].value == value) {
            result = i;
        }
    }
    return result;
}
