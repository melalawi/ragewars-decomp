/* Animates selection panels, tracks each player's focused character and updates the preview and pulsing highlight. */
#include "basetypes.h"
#define CLAMP(v,l,h) ((v)<(l)?(l):(v)>(h)?(h):(v))
typedef struct {float x,y,z;} Vec3;
typedef struct {char p[12];short unkC;char pe[2];u8 unk10;char p11[3];short unk14,unk16;} Node;
typedef struct {int unk0,unk4;Node *unk8;int unkC,unk10,unk14;char p18[0x1310];Node *unk1328;u16 unk132C,unk132E;Node *unk1330;u16 unk1334,unk1336;int unk1338,unk133C,unk1340;Node *unk1344,*unk1348;char p134c[3];u8 unk134F;int unk1350,unk1354;} State;
extern State *D_800E42D0;
typedef struct {int pad;float scale[4],distance[4];Vec3 position[4];int light[4];char tail[12];} Row;
extern Row D_800E3A58[];
extern float D_800E1598[];
extern void func_8025DF54(),func_80299368(int),func_8029A73C(),func_802A3358(void),func_8040E958(Node *,int),func_80419FA4(int),func_80419FD8(int,int),func_804204A8(int),func_804208C0(int);
extern float func_802BB630(float);
extern int func_8040EC50(Node *),func_80419FB8(int),func_8041F1FC(int),func_8041F248(short);
extern Node *func_8041B87C(int,int);
extern void func_8041CB48(void *,int,int,int,int,Vec3,Vec3,float,int);
s32 func_8041F738(s32 arg0,s32 arg1,s32 arg2) {
    Vec3 scale;
    f32 temp_f0_2;
    f32 temp_f0;
    s16 temp_a0_4;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 empty_slot;
    s32 var_v0;
    State *temp_a0;
    Node *temp_a0_2;
    Node *temp_a0_3;
    Node *temp_a0_5;
    Node *temp_a0_6;
    Node *temp_a0_7;
    Node *temp_a1;
    Node *temp_a1_2;
    Node *temp_v0_3;
    State *temp_v1_3;

    temp_v0 = D_800E42D0->unk1338;
    switch (temp_v0) {
    case 1:
        temp_a1 = D_800E42D0->unk1328;
        temp_a1->unk14 = (u16) (temp_a1->unk14 + D_800E42D0->unk132E);
        temp_a1_2 = D_800E42D0->unk1330;
        temp_a1_2->unk14 = (u16) (temp_a1_2->unk14 - D_800E42D0->unk1336);
        temp_v0_2 = D_800E42D0->unk133C - 1;
        D_800E42D0->unk133C = temp_v0_2;
        if (temp_v0_2 <= 0) {
            func_8025DF54(0xE79, temp_a1_2);
            func_8040E958(D_800E42D0->unk1344, 1);
            func_80419FD8(D_800E42D0->unk1340, 4);
            D_800E42D0->unk1338 = 4;
            D_800E42D0->unk133C = 4;
        }
        break;
    case 2:
        temp_a0_5 = D_800E42D0->unk1328;
        temp_a0_5->unk14 = (u16) (temp_a0_5->unk14 - D_800E42D0->unk132E);
        temp_a0_6 = D_800E42D0->unk1330;
        temp_a0_6->unk14 = (u16) (temp_a0_6->unk14 + D_800E42D0->unk1336);
        temp_v0_4 = D_800E42D0->unk133C - 1;
        D_800E42D0->unk133C = temp_v0_4;
        if (temp_v0_4 <= 0) {
            D_800E42D0->unk1338 = 3;
            func_8029A73C(temp_a0_6, D_800E42D0);
            func_80299368(D_800E42D0->unk1354);
            return 0;
        }
        break;
    case 3:
        func_802A3358();
        break;
    case 4:
        D_800E42D0->unk133C=CLAMP(D_800E42D0->unk133C-1,0,D_800E42D0->unk133C);
        if ((D_800E42D0->unk133C <= 0) && (func_80419FB8(D_800E42D0->unk1340) != 0)) {
            func_80419FA4(D_800E42D0->unk1340);
            D_800E42D0->unk1338 = 6;
            D_800E42D0->unk133C = 4;
            func_8040E958(D_800E42D0->unk1348, 1);
        }
        break;
    case 5:
        func_8025DF54(0xE78);
        D_800E42D0->unk1338 = 2;
        D_800E42D0->unk133C = 4;
        func_8040E958(D_800E42D0->unk1344, 0);
        func_8040E958(D_800E42D0->unk1348, 0);
        break;
    case 7: break;
    case 6:
        temp_a0_7 = D_800E42D0->unk1348;
        temp_a0_7->unk10 = (u8) (temp_a0_7->unk10 + D_800E42D0->unk134F);
        temp_v0_6 = D_800E42D0->unk133C - 1;
        D_800E42D0->unk133C = temp_v0_6;
        if (temp_v0_6 <= 0) {
            D_800E42D0->unk1348->unk10 = 0xC8;
            D_800E42D0->unk1338 = 3;
        }
        break;
    }
        if (D_800E42D0->unk1338 == 3) {
            var_s3 = 0;
            empty_slot=0x81;
            var_s2 = 0;
            var_s4 = 0;
            D_800E42D0->unk1350 = (s32) (D_800E42D0->unk1350 + arg2);
            do {
                temp_a0 = (State *)((char *)D_800E42D0 + var_s2);
                if (temp_a0->unk14 == 1) {
                    if (temp_a0->unk8 != 0) {
                        temp_f0 = (func_802BB630((f32) var_s3 + ((f32) D_800E42D0->unk1350 * 0.0033333334f)) * 70.0f) + 170.0f;
                        temp_a0_2 = ((State *)((char *)D_800E42D0 + var_s2))->unk8;
                        temp_a0_2->unk10=(unsigned int)temp_f0;
                    }
                    temp_v0_3 = func_8041B87C(D_800E42D0->unk4, var_s3);
                    temp_a0_3 = ((State *)((char *)D_800E42D0 + var_s2))->unk8;
                    if ((temp_a0_3->unk14 != (temp_v0_3->unk14 - 2)) || (temp_a0_3->unk16 != (temp_v0_3->unk16 - 2))) {
                        func_8025DF54(0xE7F);
                        if (func_8040EC50(temp_v0_3) == 0) {
                            temp_a0_4 = temp_v0_3->unkC;
                            if (temp_a0_4 != empty_slot) {
                                ((State *)((char *)D_800E42D0 + var_s2))->unk10 = (s32) temp_a0_4;
                                temp_s0 = func_8041F248(temp_a0_4);
                                temp_v1 = func_8041F1FC(((State *)((char *)D_800E42D0 + var_s2))->unk10);
                                temp_a2 = (var_s3 * 4) + temp_v1;
                                temp_v1_2 = var_s4 + temp_v1;
                                scale.x = D_800E3A58[temp_v1].scale[var_s3];
                                scale.y = D_800E3A58[temp_v1].scale[var_s3];
                                scale.z = D_800E3A58[temp_v1].scale[var_s3];
                                func_8041CB48((void *)(var_s2 + (unsigned int)D_800E42D0 + 0x20), 9, temp_s0 + 0x38F, 0x4B, 0x5DC0, scale, D_800E3A58[temp_v1].position[var_s3], D_800E3A58[temp_v1].distance[var_s3], D_800E3A58[temp_v1].light[var_s3]);
                            } else {
                                func_804208C0(var_s3);
                            }
                        } else {
                            ((State *)((char *)D_800E42D0 + var_s2))->unk10 = -1;
                        }
                        func_804204A8(var_s3);
                    } else if (temp_v0_3->unkC == empty_slot) {
                        func_804208C0(var_s3);
                    }
                    temp_v1_3 = (State *)((char *)D_800E42D0 + var_s2);
                    temp_v1_3->unk8->unk14 = (s16) ((u16) temp_v0_3->unk14 - 2);
                    temp_v1_3->unk8->unk16 = (s16) ((u16) temp_v0_3->unk16 - 2);
                }
                var_s2 += 0x4C8;
                var_s3 += 1;
                var_s4 += 0xC;
            } while (var_s3 < 4);
        }
        return 0;
}
