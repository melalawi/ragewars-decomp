#include "span_1000/code_80260D98.h"



/** Initialize the compact record fields written by the VRAM 0x802624A0 leaf. */
void func_80262480_de(void *record) {
    ((func_802624A0_S1 *)(record))->unk4 = -1;
    ((func_802624A0_S1 *)(record))->unk6 = 0;
    *(int *)record = 0;
    ((func_802624A0_S1 *)(record))->unk8 = 0;
    ((func_802624A0_S1 *)(record))->unkA = 0;
    ((func_802624A0_S1 *)(record))->unkB = 1;
    ((func_802624A0_S1 *)(record))->unk10 = 0;
}
