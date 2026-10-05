#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802412C0.h"


extern void func_80271F34_de(Vec3 *, Vec3 *, Vec3 *);






void func_802428EC_de(void *arg0, void *arg1) {
    Vec3 *temp = &((func_8022CA04_S4 *)(arg1))->unk1C;
    ((func_802428DC_S2 *)(arg0))->unk3C |= 8;
    func_80271F34_de(temp, temp, &((func_802428DC_S2 *)(arg0))->unk5C);
}
