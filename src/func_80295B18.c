typedef struct func_80295B18_S1 func_80295B18_S1;
struct func_80295B18_S1 {
    char pad0[0x3];
    char unk3;
};

extern func_80295B18_S1 *D_8014AED0;
int func_80295B18(void) {
    unsigned char shift = D_8014AED0->unk3;
    return 1 << shift;
}
