#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8028469C.h"
#include "types.h"

extern func_80284AF4_G2 D_80140FA0;

extern f32 func_8024D284_de(void *arg0);
extern f32 func_802726BC_de(f32 *arg0, f32 *arg1);
extern void func_80282E98_de(void *arg0, void *arg1);








void func_80284B20_de(void *arg0) {
    Vec3 point;
    void *node;
    void *point_ptr;
    int actor_id;
    s16 amount;
    int stop;
    f32 radius_sq;
    f32 height_scale;

    amount = ((func_8025E58C_S1 *)(((func_80284AF4_S1 *)(arg0))->unk118))->unk10;
    radius_sq = (f32)amount;
    if (radius_sq <= 0.0f) {
        return;
    }
    radius_sq *= D_800C4E90_de;
    node = D_80140FA0.unk0;
    radius_sq *= radius_sq;
    if (node == 0) {
        return;
    }

    point_ptr = &point;
    actor_id = 0x40F;
    height_scale = (&D_800C4E90_de)[1];
    do {
        point = ((func_80284AF4_S3 *)(node))->unk8;
        stop = 0;
        if (((func_80284AF4_S1 *)(arg0))->unk4 != actor_id) {
            point.y += func_8024D284_de(node) * height_scale;
        }
        if (func_802726BC_de(&((func_80284AF4_S1 *)(arg0))->unk8, point_ptr) < radius_sq) {
            func_80282E98_de(arg0, node);
            if (((func_80284AF4_S1 *)(arg0))->unk4 == actor_id) {
                stop = 1;
            }
        }
        if (stop != 0) {
            node = 0;
        } else {
            node = ((func_80284AF4_S3 *)(node))->unk16E0;
        }
    } while (node != 0);
}

typedef struct CollisionInfo CollisionInfo;









extern CollisionInfo D_80100030;
extern Instance8020CD74 *func_802392EC_de(Arg1 *arg0);
extern s32 func_80243A90_de(Instance8020CD74 *, Vec3, CollisionInfo *);

s32 func_80284C48_de(Instance8020CD74 *arg0, Arg1 *arg1) {
    Instance8020CD74 saved;
    Instance8020CD74 *instance;
    s32 collisions;

    instance = func_802392EC_de(arg1);
    if (instance != 0 && arg1->field24 == 0) {
        saved = *instance;
        *(Vec3 *)&instance->w[2] = arg1->position128;
        collisions = func_80243A90_de(instance, *(Vec3 *)&arg0->w[2], &D_80100030);
        *instance = saved;
    } else {
        saved = *arg0;
        *(Vec3 *)&saved.w[2] = arg1->position128;
        collisions = func_80243A90_de(&saved, *(Vec3 *)&arg0->w[2], &D_80100030);
    }
    return collisions == 0;
}

/* Marks nearby objects other than type 87 as active. */

extern void func_80271F68_de(f32 *, f32 *, f32 *);
void func_80284DC4_de(s32 unused, Obj_func_80284DC4_de *center, Obj_func_80284DC4_de **objects, s32 count) {
 f32 d[3]; s32 i; Obj_func_80284DC4_de *o;
 for(i=0;i<count;i++) {
  o=objects[i];
  if(o->unk4 != 0x57) {
   func_80271F68_de(d,o->pos,center->pos);
   if(d[0]*d[0]+d[1]*d[1]+d[2]*d[2]<=65536.0f) o->unk14C=1;
  }
 }
}

/* Checks object proximity through type-specific handlers and marks nearby objects active. */

extern void func_80271F68_de(f32 *, f32 *, f32 *);
static inline void nearby(s32 unused, Obj_func_80284DC4_de *center, Obj_func_80284DC4_de **objects, s32 count) {
 f32 d[3]; s32 i; Obj_func_80284DC4_de *o;
 for(i=0;i<count;i++) {
  o=objects[i];
  if(o->unk4 != 0x57) {
   func_80271F68_de(d,o->pos,center->pos);
   if(d[0]*d[0]+d[1]*d[1]+d[2]*d[2]<=65536.0f) o->unk14C=1;
  }
 }
}
extern void func_80281A9C_de(int,Obj_func_80284DC4_de *,Obj_func_80284DC4_de **,int);
void func_80284E9C_de(int context,Obj_func_80284DC4_de **objects,int count) {
 int i; Obj_func_80284DC4_de *obj;
 for(i=0;i<count;i++) {
  obj=objects[i];
  switch(obj->unk4) {
   case 0xC: break;
   case 0x22: func_80281A9C_de(context,obj,objects,count); break;
   case 0x57: nearby(context,obj,objects,count); break;
  }
 }
}

void func_80284FF4_de(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f2;
    s32 count;
    u16 v;
    s8 *record;

    ((func_8024C864_S1 *)(arg2))->unk0 = 0.0f;
    ((func_8024C864_S1 *)(arg2))->unk4 = 0.0f;
    ((func_8024C864_S1 *)(arg2))->unk8 = 0.0f;
    record = ((func_802831FC_S1 *)(arg0))->unkFC3C;
    count = 0;
    if (record != 0) {
        do {
            v = ((func_80284FC8_S3 *)(record))->unk4;
            if (((v == 0x41E) || (v == 0x3EF)) &&
                (((func_80284FC8_S3 *)(record))->unk12C == arg1) &&
                (((func_80284FC8_S3 *)(record))->unk5C & 0x100)) {
                ((func_8024C864_S1 *)(arg2))->unk0 += ((func_80284FC8_S3 *)(record))->unk8;
                ((func_8024C864_S1 *)(arg2))->unk4 += ((func_80284FC8_S3 *)(record))->unkC;
                count += 1;
                ((func_8024C864_S1 *)(arg2))->unk8 += ((func_80284FC8_S3 *)(record))->unk10;
            }
            record = ((func_80284FC8_S3 *)(record))->unk1EC;
        } while (record != 0);
    }
    if (count != 0) {
        temp_f2 = (f32)count;
        ((func_8024C864_S1 *)(arg2))->unk0 = (f32)(((func_8024C864_S1 *)(arg2))->unk0 / temp_f2);
        ((func_8024C864_S1 *)(arg2))->unk4 = (f32)(((func_8024C864_S1 *)(arg2))->unk4 / temp_f2);
        ((func_8024C864_S1 *)(arg2))->unk8 = (f32)(((func_8024C864_S1 *)(arg2))->unk8 / temp_f2);
    }
}

extern f32 func_802726BC_de(f32 *a, f32 *b);









void func_802850C8_de(void *arg0, void *arg1, f32 *arg2) {
    f32 temp;
    void *node;

    *arg2 = D_800C4EA0_de;
    node = ((func_8028509C_S1 *)(arg0))->unkFC14;
    if (node != 0) {
        do {
            if (((func_8028509C_S2 *)(node))->unk12C != arg1 && (((func_8028509C_S2 *)(node))->unk5C & 0x100)) {
                temp = func_802726BC_de(&((func_8028509C_S2 *)(node))->unk8, &((func_80212828_S7 *)(arg1))->unk8);
                if (temp < *arg2) {
                    *arg2 = temp;
                }
            }
            node = ((func_8028509C_S2 *)(node))->unk1F4;
        } while (node != 0);
    }
}
