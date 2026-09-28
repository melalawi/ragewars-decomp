#include "basetypes.h"

/* Copies an eight-byte preset into offset 0x84 of a record, choosing the preset table by the record's kind byte at 0x7F: kinds 1 to 3 use their own tables, kinds 4 to 7 leave the record unchanged, and any other kind uses the default table. */
extern u8 *D_800D7C70;
extern u8 *D_800D7C74;
extern u8 *D_800D7C78;
extern u8 *D_800D7C7C;

void func_80444260(u8 *record) {
    s32 i;

    switch ((signed char)record[0x7F]) {
    case 0:
    default:
        for (i = 0; i < 8; i++) {
            (record + i)[0x84] = D_800D7C70[i];
        }
        return;
    case 1:
        for (i = 0; i < 8; i++) {
            (record + i)[0x84] = D_800D7C74[i];
        }
        return;
    case 2:
        for (i = 0; i < 8; i++) {
            (record + i)[0x84] = D_800D7C78[i];
        }
        return;
    case 3:
        for (i = 0; i < 8; i++) {
            (record + i)[0x84] = D_800D7C7C[i];
        }
        return;
    case 4:
    case 5:
    case 6:
    case 7:
        return;
    }
}
