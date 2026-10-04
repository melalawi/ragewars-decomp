#include "common/types.h"
#include "span_1000/code_802406DC.h"
#include "span_1000/types.h"


extern void func_80271F34_de(Vec3 *, Vec3 *, Vec3 *);






void func_802428EC_de(void *arg0, void *arg1) {
    Vec3 *temp = &((func_8022CA04_S4 *)(arg1))->unk1C;
    ((func_802428DC_S2 *)(arg0))->unk3C |= 8;
    func_80271F34_de(temp, temp, &((func_802428DC_S2 *)(arg0))->unk5C);
}
