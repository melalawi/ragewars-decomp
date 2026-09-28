/* Releases the first of the four twelve-byte slots at 0x2DF8 of D_800E54A4 whose id and value match
   the arguments, marking its id -1 and its state 2, and returns whether one was found. */
typedef struct {
    int id;
    int value;
    int state;
} Slot;
typedef struct {
    char pad[0x2DF8];
    Slot slots[4];
} Base;

extern Base *D_800E54A4;

int func_8043544C(int id, int value) {
    int found;
    int i;

    found = 0;
    for (i = 0; i < 4 && found == 0; i++) {
        if (D_800E54A4->slots[i].id == id && D_800E54A4->slots[i].value == value) {
            found = 1;
            D_800E54A4->slots[i].id = -1;
            D_800E54A4->slots[i].state = 2;
        }
    }
    return found;
}
