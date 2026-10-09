#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80217388.h"
#include "types.h"

extern void func_8025E1C4_de(s32);
extern void *func_8025CC6C_de(void);
extern s32 func_8025CA24_de(void *, void *);






void func_80217388_de(void *arg0, void *arg1) {
    void *owner = 0;
    u8 type = *(u8 *)arg0;

    switch (type) {
    case 1:
    case 2:
        owner = arg0;
        break;
    case 0:
        owner = ((func_80217388_S1 *)(arg0))->unkD0;
        break;
    }

    if (((func_80217388_S2 *)(arg1))->unkFC != 0) {
        func_8025E1C4_de(owner);
        if (((func_80217388_S2 *)(arg1))->unkFC != 0) {
            func_8025CA24_de(func_8025CC6C_de(), ((func_80217388_S2 *)(arg1))->unkFC);
            ((func_80217388_S2 *)(arg1))->unkFC = 0;
        }
    }
}

extern void func_80271F68_de(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_8027207C_de(f32 *vector);
extern f32 func_8024D398_de(void *arg0);
extern void func_80271F9C_de(void *result, void *vector, f32 scale);
extern void func_80271F34_de(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_8024E79C_de(void *arg0, Triple value, void *arg4, s32 *arg5,
                          s32 arg6, s32 arg7);







void func_8021740C_de(void *arg0, s32 unused, void *arg2, void *arg3,
                   void *arg4, s32 *arg5) {
    Vec3 offset;
    Vec3 position;
    f32 distance;

    if (arg3 != 0) {
        func_80271F68_de(&offset, &((Player *)(arg2))->pos,
                       &((Player *)(arg3))->pos);
        offset.y = 0.0f;
        func_8027207C_de(&offset.x);
    } else {
        offset.x = 0.0f;
        offset.y = 0.0f;
        offset.z = 0.0f;
    }

    distance = func_8024D398_de(arg2) + func_8024D398_de(arg0) + D_800C21E8_de;
    func_80271F9C_de(&offset, &offset, distance);
    func_80271F34_de(&position, &((Player *)(arg2))->pos, &offset);
    func_8024E79C_de(arg2, *(Triple *)&position, arg4, arg5, 0, 0);
}

void func_802174E4_de(void *arg0, void *unused1, Output80216D3C *arg2) {
    Triple local1;
    Triple local2;

    local1 = ((func_80204EA8_S1 *)(arg0))->unk8;
    local2.x = 0;
    local2.y = 0;
    local2.z = 0;
    arg2->type = 3;
    arg2->unk4 = 0;
    arg2->unk8 = 0;
    arg2->first = local1;
    arg2->second = local2;
    arg2->unk24 = 0;
    local2.y = 0;
    local1.y = 0;
    arg2->third = local1;
    arg2->fourth = local2;
    arg2->unk40 = 0;
}

extern f32 D_800C21EC_de;


extern void func_8024DBC0_de(void *, s32, s32, s32, s32, f32);




void func_80217594_de(void *arg0, s32 unused1, s32 arg2, s32 *entry) {
    if (entry[0] != 0) {
        do {
            if ((arg2 & entry[0]) != 0) {
                func_8024DBC0_de(arg0,
                              ((func_8020A028_S4 *)(arg0))->unk8,
                              ((func_8020A028_S4 *)(arg0))->unkC,
                              ((func_8020A028_S4 *)(arg0))->unk10,
                              entry[1],
                              func_80274A90_de(D_800C21EC_de, D_800C21F0_de));
            }
            entry += 2;
        } while (entry[0] != 0);
    }
}
