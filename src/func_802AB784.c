typedef struct func_802AB784_S1 func_802AB784_S1;
struct func_802AB784_S1 {
    char pad0[0x44];
    int unk44;
};

/** Store a value in the field at offset 0x44. */
void func_802AB784(char *object, int value) {
    ((func_802AB784_S1 *)(object))->unk44 = value;
}
