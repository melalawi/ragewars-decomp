/* Writes kill and death messages into both players' four-line logs and posts them to their views; integer address casts preserve addition operand ordering. */
#include "basetypes.h"
typedef struct {unsigned char pad[0x1D]; unsigned char enabled;} Settings;
extern Settings D_801462C8[];
extern char *D_800D7A6C,*D_800D7A70,*D_800D7A74[],*D_800D7A84[];
extern struct {char *value;} D_800D7A80;
extern void func_80239760(void *,s32,void *,float),func_802934A4(void *,void *);
typedef struct func_80219688_S1 func_80219688_S1;
typedef struct func_80219688_S2 func_80219688_S2;
typedef struct func_80219688_S3 func_80219688_S3;
typedef struct func_80219688_S4 func_80219688_S4;
typedef struct { char pad[0x8F]; u8 enabled; } func_80219688_Target;
struct func_80219688_S1 {
    char pad0[0x5D8];
    char unk5D8;
};
struct func_80219688_S2 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x5DC - 0x5D8 - sizeof(char*)];
    s32 unk5DC;
    char pad5DC[0x13E8 - 0x5DC - sizeof(s32)];
    s32 unk13E8;
};
struct func_80219688_S3 {
    char pad0[0x54];
    s32 unk54;
    char pad54[0x78 - 0x54 - sizeof(s32)];
    s32 unk78;
};
struct func_80219688_S4 {
    char pad0[0x5DC];
    s32 unk5DC;
    char pad5DC[0x13E8 - 0x5DC - sizeof(s32)];
    s32 unk13E8;
};

void func_80219688(char *arg0, char *arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    char *temp_v1;
    char *var_a0;
    char *var_a1;

    Settings *settings = D_801462C8;
    if (settings->enabled != 0) {
        if (arg0 != arg1) {
            temp_v1 = &((func_80219688_S1 *)(settings))->unk5D8;
            if (((func_80219688_Target *)(((func_80219688_S2 *)(arg0))->unk5D8))->enabled != 0) {
                if (((func_80219688_S3 *)(temp_v1))->unk54 != 0) {
                    func_802934A4(arg0 + ((((func_80219688_S2 *)(arg0))->unk13E8 * 0x19) + 0x13EC), D_800D7A6C);
                    func_802934A4((char *)((((func_80219688_S2 *)(arg0))->unk13E8 * 0x19) + (s32)arg0 + 0x13F6), ((func_80219688_S2 *)arg1)->unk5D8 + 0x84);
                    temp_a1 = ((func_80219688_S2 *)(arg0))->unk5DC;
                    if (temp_a1 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1, arg0 + ((((func_80219688_S2 *)(arg0))->unk13E8 * 0x19) + 0x13EC), 1.5f);
                    }
                    ((func_80219688_S2 *)(arg0))->unk13E8 += 1;
                    ((func_80219688_S2 *)(arg0))->unk13E8 %= 4;
                    func_802934A4(arg1 + ((((func_80219688_S4 *)(arg1))->unk13E8 * 0x19) + 0x13EC), D_800D7A70);
                    var_a0 = (char *)((((func_80219688_S4 *)(arg1))->unk13E8 * 0x19) + (s32)arg1 + 0x13F7);
                    var_a1 = ((func_80219688_S2 *)arg0)->unk5D8 + 0x84;
                    func_802934A4(var_a0, var_a1);
                    goto posted;
                }
                if (((func_80219688_S3 *)(temp_v1))->unk78 != 0) {
                    func_802934A4(arg0 + ((((func_80219688_S2 *)(arg0))->unk13E8 * 0x19) + 0x13EC), *D_800D7A74);
                    func_802934A4((char *)((((func_80219688_S2 *)(arg0))->unk13E8 * 0x19) + (s32)arg0 + 0x13F6), ((func_80219688_S2 *)arg1)->unk5D8 + 0x84);
                    temp_a1_2 = ((func_80219688_S2 *)(arg0))->unk5DC;
                    if (temp_a1_2 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1_2, arg0 + ((((func_80219688_S2 *)(arg0))->unk13E8 * 0x19) + 0x13EC), 1.5f);
                    }
                    ((func_80219688_S2 *)(arg0))->unk13E8 += 1;
                    ((func_80219688_S2 *)(arg0))->unk13E8 %= 4;
                    temp_v0 = ((func_80219688_S2 *)(arg0))->unk13E8;
                    ((func_80219688_S2 *)(arg0))->unk13E8 = temp_v0;
                    func_802934A4(arg0 + ((temp_v0 * 0x19) + 0x13EC), D_800D7A80.value);
                    temp_a1_3 = ((func_80219688_S2 *)(arg0))->unk5DC;
                    if (temp_a1_3 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1_3, arg0 + ((((func_80219688_S2 *)(arg0))->unk13E8 * 0x19) + 0x13EC), 1.5f);
                    }
                    ((func_80219688_S2 *)(arg0))->unk13E8 += 1;
                    ((func_80219688_S2 *)(arg0))->unk13E8 %= 4;
                    func_802934A4(arg1 + ((((func_80219688_S4 *)(arg1))->unk13E8 * 0x19) + 0x13EC), D_800D7A70);
                    func_802934A4((char *)((((func_80219688_S4 *)(arg1))->unk13E8 * 0x19) + (s32)arg1 + 0x13F7), ((func_80219688_S2 *)arg0)->unk5D8 + 0x84);
                    temp_a1_4 = ((func_80219688_S4 *)(arg1))->unk5DC;
                    if (temp_a1_4 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1_4, arg1 + ((((func_80219688_S4 *)(arg1))->unk13E8 * 0x19) + 0x13EC), 1.5f);
                    }
                    ((func_80219688_S4 *)(arg1))->unk13E8 += 1;
                    ((func_80219688_S4 *)(arg1))->unk13E8 %= 4;
                    temp_v0_2 = ((func_80219688_S4 *)(arg1))->unk13E8;
                    ((func_80219688_S4 *)(arg1))->unk13E8 = temp_v0_2;
                    var_a1 = *D_800D7A84;
                    var_a0 = arg1 + ((temp_v0_2 * 0x19) + 0x13EC);
block_23:
                    func_802934A4(var_a0, var_a1);
posted:
                    temp_a1_5 = ((func_80219688_S4 *)(arg1))->unk5DC;
                    if (temp_a1_5 != 0) {
                        func_80239760((char *)settings - 0x1240, temp_a1_5, arg1 + ((((func_80219688_S4 *)(arg1))->unk13E8 * 0x19) + 0x13EC), 1.5f);
                    }
                    goto block_25;
                }
            }
        } else {
block_25:
                    ((func_80219688_S4 *)(arg1))->unk13E8 += 1;
                    ((func_80219688_S4 *)(arg1))->unk13E8 %= 4;
        }
    }
}
