/* Chooses an approach position, projects it onto the world and updates the movement plan height and distance. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {f32 x,y,z;} Vec;
typedef struct {Vec pos;s32 unkC;} Location;
typedef struct Actor Actor;
typedef struct {char p0[0x788];s32 unk788;char p78C[8];Actor *unk794;} Runtime;
struct Actor {char p0[8];Vec pos;s32 unk14;s32 *unk18;char p1C[0x50];f32 unk6C;char p70[0x74];u16 unkE4;char pE6[0x1A];s32 unk100;char p104[0xD4];Runtime *unk1D8;char p1DC[0x104];s32 unk2E0;};
typedef struct {char pad[12];s32 unkC;} Settings;
typedef struct {s32 p0,unk4;char p8[0x28];Settings *unk30;char p34[0x34];Actor *unk68;char p6C[0x14];Actor *unk80;s32 unk84,p88;f32 unk8C,unk90;signed char unk94;char p95[0x1B];Vec pos;s32 unkBC;} Plan;
extern s32 D_8013B290;
extern f32 D_800C7250[],D_800C724C;
extern f32 func_80216F44(Actor *,Vec),func_8024D388(Actor *),func_80271B18(Vec *);
extern Location *func_80219408(void *);
extern s32 func_80240650(Actor *,Vec,s32,s32,Vec *),func_80240688(Actor *,s32,Vec,s32,s32,Vec *),func_80275B80(s32,f32,f32);
extern void func_8024E78C(Actor *,Vec,Vec *,s32 *,s32,s32),func_80271FA4(Vec *,Vec *,Vec *),func_80271FD8(Vec *,Vec *,Vec *),func_8027200C(Vec *,Vec *,f32),func_802720EC(Vec *);
static inline void approach(Actor *arg0,Actor *arg2,Actor *temp_a2,Vec *posp,s32 *roomp) {
 Vec delta,offset; f32 temp_f20;
        if (temp_a2 != 0) {
            func_80271FD8(&delta, &arg2->pos, &temp_a2->pos);
            delta.y = 0;
            func_802720EC(&delta);
        } else {
            delta.x = 0;
            delta.y = 0;
            delta.z = 0;
        }
        temp_f20 = func_8024D388(arg2);
        func_8027200C(&delta, &delta, temp_f20 + func_8024D388(arg0) + D_800C724C);
        func_80271FA4(&offset, &arg2->pos, &delta);
        func_8024E78C(arg2, offset, posp, roomp, 0, 0);
}
s32 func_80214624(Actor *arg0, Plan *arg1, Actor *arg2) {
    Vec pos,hit;
    s32 room;
    f32 temp_f20;
    Actor *temp_a2;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_v0;
    Location *temp_v0;
    Runtime *temp_v1;

    if (arg1->unk4 == 0) {
        var_s1 = 6;
    } else if (arg2 == NULL) {
        var_s1 = 3;
        if (arg1->unk94 != 0) {
            var_s1 = 4;
        }
    } else {
        var_s1 = 2;
        if (arg2 != arg1->unk68) {
            if (*arg2->unk18 == 5) var_s1=5;
            else if(arg2->unkE4==0x64F) var_s1=7;
            else {
                var_s1=0;
                if(!D_8013B290) {
                    if((!(arg2->unk100&0x300000) || arg2->unk1D8->unk794!=arg0 || (var_s1=1,arg2->unk1D8->unk788!=2)) && (!(arg0->unk2E0&2) || (var_s1=1,arg0->unkE4==0xCA))) var_s1=0;
                }
            }
        }
    }
    switch (var_s1) {
    case 6:
        pos = arg0->pos;
        room = arg0->unk14;
        break;
    case 4:
        temp_v0 = func_80219408(&arg1->unk94);
        pos = temp_v0->pos;
        room = temp_v0->unkC;
        break;
    case 3:
        pos = arg1->pos;
        room = arg1->unkBC;
        break;
    case 7:
        approach(arg0,arg2,arg1->unk80,&pos,&room);
        break;
    case 1:
        temp_v0_2 = func_80240688(arg0, arg1->unk84, arg2->pos, arg2->unk14, arg1->unk30->unkC, &pos);
        room = temp_v0_2;
        if (temp_v0_2 == 0) {
        default:
            pos = arg2->pos;
            room = arg2->unk14;
        }
        break;
    }
    if (func_80240650(arg0, pos, room, arg1->unk30->unkC, &hit) != 0) {
        if (func_80275B80(arg0->unk14, hit.x, hit.z) != 0) {
            arg1->unk90 = hit.y;
        } else {
            arg1->unk90 = (f32) (hit.y + D_800C7250[0]);
        }
        func_80271FD8(&hit, &hit, &arg0->pos);
        arg1->unk8C = (f32) (func_80271B18(&hit) + D_800C7250[1]);
        return 1;
    }
    if (var_s1 == 1) {
        arg1->unk90 = pos.y;
        arg1->unk8C = (f32) (arg0->unk6C + func_80216F44(arg0, pos));
        return 1;
    }
    return 0;
}
