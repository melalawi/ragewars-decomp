#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802536F4.h"
#include "types.h"



extern Pool D_8010513C;
extern void **D_80100564;

extern s32 func_80255CB8_de(void *arg0, s32 arg1);




void *func_80254A28_de(s32 unused0, s32 arg1) {
    void *temp_s0;

    if (D_8010513C.count == 0) {
        return 0;
    }
    D_8010513C.count -= 1;
    temp_s0 = D_80100564[D_8010513C.count];
    ((func_80251448_S1 *)(temp_s0))->unkC = 0x800;
    ((func_80251448_S1 *)(temp_s0))->unk8 = 0;
    ((func_80251448_S1 *)(temp_s0))->unk0 = 0;
    ((func_80251448_S1 *)(temp_s0))->unk24 = 0;
    ((func_80251448_S1 *)(temp_s0))->unk20 = 0;
    ((func_80251448_S1 *)(temp_s0))->unk14 = 0;
    ((func_80251448_S1 *)(temp_s0))->unk10 = D_8010513C.field44;
    func_80255CB8_de((char *)&D_8010513C - 0xBCC, (s32)temp_s0);
    ((func_80251448_S1 *)(temp_s0))->unkC |= (arg1 & 0xC);
    return temp_s0;
}
