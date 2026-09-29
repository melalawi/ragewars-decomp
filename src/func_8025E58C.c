typedef struct func_8025E58C_S1 func_8025E58C_S1;
struct func_8025E58C_S1 {
    char pad0[0x10];
    short unk10;
};

/** Return the signed halfword stored at offset 0x10. */
int func_8025E58C(void *object) {
    return ((func_8025E58C_S1 *)(object))->unk10;
}
