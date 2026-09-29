#include "basetypes.h"

/* Refreshes each of 8 configured participants: for each slot, reads the participant id at offset
   0xF0 + slot*4 of D_800E53C0; when it is not -1 and the id's 150-byte record in D_80146398 has
   its byte at 0x91 clear, stores func_80425FDC(id) at offset 0x32C of D_800E53C0, calls
   func_804260C4(id, &D_800E53C0[0x110 + id*8]), and calls func_80425BC0(id). */
extern u8 *D_800E53C0;
extern u8 D_80146398[];

extern s32 func_80425FDC(s32);
extern void func_804260C4(s32, s32 *);
extern void func_80425BC0(s32);

typedef struct func_8042D3A8_S1 func_8042D3A8_S1;
struct func_8042D3A8_S1 {
    char pad0[0x32C];
    s32 unk32C;
};

void func_8042D3A8(void) {
    s32 id;
    s32 i;
    s32 idx;
    u8 *record;

    for (i = 0; i < 8; i += 1) {
        idx = i * 4;
        id = *(s32 *)(D_800E53C0 + idx + 0xF0);
        if (id == -1) {
            continue;
        }
        record = &D_80146398[id * 0x96];
        if (record[0x91] != 0) {
            continue;
        }
        ((func_8042D3A8_S1 *)(D_800E53C0))->unk32C = func_80425FDC(id);
        func_804260C4(id, (s32 *)((id * 8 + 0x110) + D_800E53C0));
        func_80425BC0(id);
    }
}
