#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8028FC98.h"
#include "types.h"

void *func_8028FEF0_de(int *arg0, int *arg1) {
    *arg1 = arg0[0] * arg0[1];
    return &((func_8020CC0C_S1 *)(arg0))->unk8;
}

/* Transposes the byte matrix after its eight-byte dimensions header and optionally copies the result back. */


extern void func_802BD3A0_de(void *, void *, s32);



void func_8028FF0C_de(void *arg0, void *arg1, s32 arg2)
{
  char *data = &((func_8020CC0C_S1 *)(arg0))->unk8;
  s32 temp_a2;
  int first_column;
  s32 temp_t0;
  s32 var_a0;
  s32 var_a1;
  s32 var_v1;
  u8 *temp_v0;
  u8 *var_a3;
  first_column = 0;
  func_802BD3A0_de(arg1, arg0, 8);
  var_a3 = arg1 + 8;
  temp_a2 = ((struct Shape_func_802764D4_de_2 *) arg0)->field_4;
  temp_t0 = ((struct Shape_func_802764D4_de_2 *) arg0)->field_0;
  var_a1 = first_column;
  if (temp_a2 > first_column)
  {
    do
    {
      var_a0 = 0;
      if (temp_t0 > 0)
      {
        var_v1 = var_a1;
        do
        {
          temp_v0 = data + var_v1;
          var_v1 += temp_a2;
          var_a0 += 1;
          *var_a3 = *temp_v0;
          var_a3 += 1;
        }
        while (var_a0 < temp_t0);
      }
      var_a1 += 1;
    }
    while (var_a1 < temp_a2);
  }
  if (arg2 != 0)
  {
    func_802BD3A0_de(arg0, arg1, (temp_a2 * temp_t0) + 8);
  }
}

/* Spawns a pooled object and registers its bounds and height. */


void func_80246184_de(void *);
f32 func_8024D284_de(void *);
s32 func_8028B21C_de(void *, s32);
s32 func_8028C198_de(void *, s32);
void func_8028C6D4_de(void *, Vec3 *, void *);
void func_80290950_de(void *, void *);
extern char D_8011B200;
extern char D_8011B388;
extern char D_8011BDC8;
extern u8 D_801462E5;
extern s32 D_800CD764_de[];










void *func_8028FFD0_de(char *arg0, s32 *arg1, s32 arg2, Vec3 rotation, Vec3 position, s32 arg9, f32 arg10)
{
  Vec3 center;
  s32 temp_v0;
  f32 far_z;
  s32 temp_v1_2;
  char *temp_s0;
  char *temp_v1;
  if (((*D_800CD764_de) == 0) || ((temp_v0 = func_8028B21C_de(&D_8011BDC8, arg2), temp_v0 == (-1))))
  {
    return 0;
  }
  if ((((func_8028FFB0_S1 *)(arg0))->unk3C00) == 0)
  {
    func_80290950_de(arg0, ((func_8028FFB0_S1 *)(arg0))->unk3C08);
  }
  temp_s0 = ((func_8028FFB0_S1 *)(arg0))->unk3C00;
  temp_v1 = ((func_8028FFB0_S1 *)(arg0))->unk3C04;
  ((func_8028FFB0_S1 *)(arg0))->unk3C00 = (void *) (((func_8028FFB0_S2 *)(temp_s0))->unk1DC);
  if (temp_v1 != 0)
  {
    ((func_8028FFB0_S3 *)(temp_v1))->unk1D8 = temp_s0;
  }
  { char *next = ((func_8028FFB0_S1 *)(arg0))->unk3C04;
  ((func_8028FFB0_S2 *)(temp_s0))->unk1D8 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk1DC = next; }
  ((func_8028FFB0_S1 *)(arg0))->unk3C04 = temp_s0;
  if ((((func_8028FFB0_S1 *)(arg0))->unk3C08) == 0)
  {
    ((func_8028FFB0_S1 *)(arg0))->unk3C08 = temp_s0;
  }
  ((func_8028FFB0_S2 *)(temp_s0))->unk1D0 = (s32) ((((func_8028FFB0_S2 *)(temp_s0))->unk1D0) | 1);
  func_80246184_de(temp_s0);
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C8 = 0;
  temp_v1_2 = func_8028C198_de(&D_8011BDC8, temp_v0);
  ((func_8028FFB0_S2 *)(temp_s0))->unk1D4 = arg1;
  if (arg1 != 0)
  {
    *arg1 += 1;
  }
  if (D_801462E5 != 0)
  {
    ((func_8028FFB0_S2 *)(temp_s0))->unk18 = &D_8011B200;
  }
  else
  {
    ((func_8028FFB0_S2 *)(temp_s0))->unk18 = &D_8011B388;
  }
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C8 = arg10;
  ((func_8028FFB0_S2 *)(temp_s0))->unk1CC = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk4 = temp_v0;
  position.y += 10.24f;
  ((func_8028FFB0_S2 *)(temp_s0))->unk8.v0 = position;
  ((func_8028FFB0_S2 *)(temp_s0))->unk174 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk178 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk168 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk16C = 1.0f;
  ((func_8028FFB0_S2 *)(temp_s0))->unk170 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk17C = (f32) (position.x - 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk180 = (f32) (position.y - 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk184 = (f32) (position.z - 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk188 = (f32) (position.x + 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk18C = (f32) (position.y + 81.92f);
  far_z = position.z;
  ((func_8028FFB0_S2 *)(temp_s0))->unk50 = temp_v1_2;
  ((func_8028FFB0_S2 *)(temp_s0))->unk54 = -1;
  ((func_8028FFB0_S2 *)(temp_s0))->unk58 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk5C = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk14 = arg9;
  ((func_8028FFB0_S2 *)(temp_s0))->unk194 = 0;
  ((func_8028FFB0_S2 *)(temp_s0))->unk19C = 0x1A;
  ((func_8028FFB0_S2 *)(temp_s0))->unk190 = (f32) (far_z + 81.92f);
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C = rotation;
  ((func_8028FFB0_S2 *)(temp_s0))->unk1C4 = 0;
  center.x = ((func_8028FFB0_S2 *)(temp_s0))->unk8.v1;
  center.y = (((func_8028FFB0_S4 *)(temp_s0))->unkC) + (func_8024D284_de(temp_s0) * 0.5f);
  center.z = ((func_8028FFB0_S4 *)(temp_s0))->unk10;
  func_8028C6D4_de(&D_8011BDC8, &center, (char *)temp_s0 + 0x1A8);
  return temp_s0;
}

/* Updates a world's active actors: counts each actor's lifetime down by the frame time and expires it when the lifetime runs out or when its bounds leave the world box D_801031F0 (unless it is flagged 0x200); an expired active actor loses its active bit, decrements its owner's counter and moves from the active list to the free list, and every other actor is updated through func_80290424_de. */






extern f32 D_800FF1F0[];
extern f32 D_800CD738;
extern void func_80290424_de(Actor_func_80290238_de *actor);

void func_80290238_de(World_func_80290238_de *world) {
    Actor_func_80290238_de *actor;
    Actor_func_80290238_de *next;
    s32 expired;
    f32 lifetime;

    next = world->head;
    if (next == 0) {
        return;
    }
    do {
        actor = next;
        next = actor->next;
        expired = 0;
        if (actor->lifetime > 0.0f) {
            lifetime = actor->lifetime - D_800CD738;
            actor->lifetime = lifetime;
            if (lifetime <= 0.0f) {
                expired = 1;
            }
        }
        if (!((D_800FF1F0[3] > actor->minX) && (D_800FF1F0[0] < actor->maxX) &&
              (D_800FF1F0[5] > actor->minZ) && (D_800FF1F0[2] < actor->maxZ) &&
              (D_800FF1F0[4] > actor->minY) && (D_800FF1F0[1] < actor->maxY))) {
            if (!(actor->flags & 0x200)) {
                expired = 1;
            }
        }
        if (expired) {
            if (actor->state & 1) {
                actor->state &= ~1;
                if (actor->counter != 0) {
                    (*actor->counter)--;
                }
                if (actor->prev != 0) {
                    actor->prev->next = actor->next;
                }
                if (actor->next != 0) {
                    actor->next->prev = actor->prev;
                }
                if (world->head == actor) {
                    world->head = actor->next;
                }
                if (world->tail == actor) {
                    world->tail = actor->prev;
                }
                actor->next = world->free;
                actor->prev = 0;
                world->free = actor;
            }
        } else {
            func_80290424_de(actor);
        }
    } while (next != 0);
}

extern char D_8011B388;




void func_80290408_de(void *arg0) {
    ((func_802903E8_S1 *)(arg0))->unk18 = &D_8011B388;
    ((func_802903E8_S1 *)(arg0))->unk0 = 3;
    ((func_802903E8_S1 *)(arg0))->unk1D0 = 0;
}
