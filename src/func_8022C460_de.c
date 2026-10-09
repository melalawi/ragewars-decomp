#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_8022BA90.h"
#include "types.h"
#include "common/types_1dc8418c21db.h"
#include "common/unused.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"

s32 func_8022C460_de(void *arg0) {
    s16 temp_v1;
    temp_v1 = (((struct func_8022C6D4_S1 *) ((s8 *) arg0))->unk650);
    if ((temp_v1 == 0x15) || (temp_v1 == 0x13) || (temp_v1 == 0x14)) {
        return 1;
    }
    return 0;
}

extern const struct D_800C7470_Pair D_800C2D40_de;


extern int D_80140FC0;
extern int D_800D297C;
extern void func_80226DD0_de(Player1680 *, Matrix *);
extern void func_802732D0_de(Matrix *, Vec3 *);
extern void func_802727D8_de(Matrix *);
extern void func_802736D4_de(Matrix *, float);
extern void func_80273448_de(Matrix *, float, float, float);
extern void func_8027027C_de(Matrix *, void *);

static inline void getEye(Player1680 *player, Vec3 *pos) {
    Matrix frame;

    if (player->mount != 0) {
        *pos = player->mount->unk128;
    } else {
        func_80226DD0_de(player, &frame);
        func_802732D0_de(&frame, pos);
    }
}

static inline float getYaw(void) {
    return D_80140FC0 * D_800C2D40_de.first;
}

void func_8022C490_de(Player1680 *player) {
    Matrix mtx;
    Vec3 pos;

    getEye(player, &pos);
    func_802727D8_de(&mtx);
    func_802736D4_de(&mtx, getYaw());
    func_80273448_de(&mtx, pos.x, pos.y + D_800C2D40_de.second, pos.z);
    func_8027027C_de(&mtx, &player->views[D_800D297C]);
}

void *func_8022C55C_de(void *arg0, u32 arg1) {
    void *var_v1;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_80228774_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                if (((func_8022C54C_S3 *)((((SharedPlayer_func_8022A398_de *)(var_v1))->views5D8.view5D8_0.unk5D8)))->unk90 == 0) {
                    if (var_a2 == (s32) arg1) {
                        return var_v1;
                    }
                    var_a2 += 1;
                }
                var_v1 = ((SharedPlayer_func_8022A398_de *)(var_v1))->views16E0.view16E0_0.unk16E0;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}

void func_8022C5AC_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    while (record != 0) {
        char *nested = ((func_80229A54_S2 *)(record))->unk5D8;
        if (((func_8022C54C_S3 *)(nested))->unk90 == 1) {
            ((func_8022C54C_S3 *)(nested))->unk90 = 0;
        }
        record = ((func_80229A54_S2 *)(record))->unk16E0;
    }
}

extern void func_80226708_de(void *arg0);






void func_8022C5DC_de(void *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            ((struct ObjectState90 *) ((func_80229A54_S2 *) record)->unk5D8)->unk_8F = 0;
            func_80226708_de(record);
            record = ((func_80229A54_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
}

s32 func_8022C620_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    s32 count = 0;
    while (record != 0) {
        char *nested = ((func_80229A54_S2 *)(record))->unk5D8;
        if (((func_8022C54C_S3 *)(nested))->unk90 == 0) {
            count += 1;
        }
        record = ((func_80229A54_S2 *)(record))->unk16E0;
    }
    return count;
}

s32 func_8022C650_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    s32 count = 0;
    while (record != 0) {
        if (((func_8022C640_S2 *)(record))->unk5D0 != 0) {
            count += 1;
        }
        record = ((func_8022C640_S2 *)(record))->unk16E0;
    }
    return count;
}
