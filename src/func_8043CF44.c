/* Checks whether the input matches the indexed, XOR-masked reference string. */
typedef unsigned char u8;
typedef signed int s32;
s32 func_802C24F0(u8 *);
extern u8 D_800E5CAC[0x64];

s32 func_8043CF44(u8 *arg0) {
    /* FAKEMATCH: retain the input pointer across length and byte-check calls. */
    u8 *input = arg0;
    s32 index = 0;

    if (func_802C24F0(input) != func_802C24F0(D_800E5CAC)) {
        return 0;
    }
    for (; index < func_802C24F0(input); index++) {
        if ((input[index] ^ index) != D_800E5CAC[index]) {
            return 0;
        }
    }
    return 1;
}
