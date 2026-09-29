typedef struct func_80250A0C_S1 func_80250A0C_S1;
struct func_80250A0C_S1 {
    char pad0[0x18];
    char* unk18;
    char pad18[0xD8 - 0x18 - sizeof(char*)];
    unsigned short unkD8;
};

/** Return the nested signed byte unless flag 0x40 suppresses it. */
int func_80250A0C(char *object) {
    if (((func_80250A0C_S1 *)(object))->unkD8 & 0x40) {
        return 0;
    }
    return *(signed char *)(((func_80250A0C_S1 *)(object))->unk18 + 0x12);
}
