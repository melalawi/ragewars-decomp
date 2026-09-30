
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef struct LevelVec3
{
  f32 x;
  f32 y;
  f32 z;
} LevelVec3;
typedef struct LevelSpawn
{
  LevelVec3 pos;
  f32 angle;
  u16 pad10;
  u16 zone;
} LevelSpawn;
typedef struct LevelRecord
{
  s32 pad0;
  LevelVec3 pos;
  char pad10[0x20 - 0x10];
  u16 zone;
  u16 id;
  s16 angle;
  char pad26[0x28 - 0x26];
} LevelRecord;
typedef struct LevelObject
{
  char pad0[8];
  LevelVec3 pos;
  char pad14[4];
  s32 *kind;
  char pad1C[0x1D8 - 0x1C];
  struct LevelObject *target;
  char pad1DC[0x2E8 - 0x1DC];
} LevelObject;
typedef struct LevelBlock
{
  s32 size;
  s32 count;
  LevelObject objects[1];
} LevelBlock;
typedef struct LevelNode
{
  s32 pad0;
  s32 count;
  LevelRecord records[1];
} LevelNode;
typedef struct LevelPlayer
{
  char pad0[0x1450];
  s32 isBot;
  char pad1454[0x16E8 - 0x1454];
} LevelPlayer;
typedef struct LevelSlot
{
  char pad0[0x80];
  s8 type;
  char pad81[0x96 - 0x81];
} LevelSlot;
typedef struct LevelWorld
{
  char pad0[0x138];
  LevelObject *objects;
  s32 placed;
  s32 count;
  char pad144[0xF58 - 0x144];
  s32 fF58;
  char padF5C[0x1B40C - 0xF5C];
  s32 group;
  char pad1B410[0x1B41C - 0x1B410];
  s32 haveSpawns;
  char spawnBuf[0x1B434 - 0x1B420];
  s32 spawnSet;
  char pad1B438[0x1B614 - 0x1B438];
  s32 f1B614;
  s32 f1B618;
  s32 f1B61C;
} LevelWorld;
extern LevelVec3 D_80145100;
extern f32 D_80145104;
extern s32 D_80145120;
extern LevelPlayer *D_80145044;
extern s32 D_80145048;
extern LevelSlot D_80146398[];
extern f32 func_80217224();
extern void func_8024B398(LevelObject *obj, LevelRecord *rec, s32 mode, s32 index);
extern s32 func_8024DD7C(LevelObject *obj);
extern s32 func_8024DDA4(LevelObject *obj);
extern void func_80253CB0(s32 arg0, void ***handle, LevelBlock **block);
extern LevelBlock **func_80254420(s32 arg0, void ***handle, s32 size);
extern void func_80274090(f32 *angle);
extern s32 func_80285150(void ***handle, s32 arg1);
extern s32 func_802866F8(LevelWorld *world, LevelVec3 *pos);
extern s32 func_8028B370(LevelWorld *world, s32 arg1);
extern s32 *func_8028CF48(LevelWorld *world, s32 id);
extern void func_8028FEEC(void *src, void *dst, s32 arg2);
extern void func_80449970(LevelPlayer *player, LevelRecord *rec, s32 mode, s32 index);
extern s32 func_8044DE70(LevelWorld *world, s32 group, s32 set, LevelSpawn *out, s32 max);
extern s32 func_8044E038(LevelWorld *world, void *data, s32 group, void *buf);
void func_8044D408(LevelWorld *world, void ***handle)
{
  LevelSpawn spawns[8];
  LevelSpawn extra;
  s32 n;
  LevelObject *objects;
  s32 mode;
  LevelBlock **block;
  s32 nspawns;
  LevelNode *node;
  LevelRecord *records;
  LevelBlock *hdr;
  s32 i;
  s32 j;
  s32 playerIndex;
  s32 k;
  LevelRecord *rec;
  LevelSlot *slot;
  s16 value;
  LevelObject *obj;
  LevelObject *other;
  LevelPlayer *player;
  LevelSpawn *spawn;
  f32 angle;
  f32 best;
  f32 dist;
  if (func_80285150(handle, 1) != 0)
  {
    mode = func_8028B370(world, 0);
    node = *(*handle);
    n = node->count;
    block = func_80254420(0, handle, n * (sizeof((LevelObject) (+8))));
    if (block != 0)
    {
      func_8028FEEC(node, *block, 1);
      hdr = *block;
      hdr->size = sizeof(LevelObject);
      hdr->count = n;
      records = node->records;
      objects = hdr->objects;
      if (world->haveSpawns == 0)
      {
        world->spawnSet = func_8044E038(world, &node->records[0].pos, world->group, world->spawnBuf);
        if (world->spawnSet != 0)
        {
          world->haveSpawns = 1;
        }
      }
      k = 0;
      nspawns = 0;
      if (world->haveSpawns != 0)
      {
        nspawns = func_8044DE70(world, world->group, world->spawnSet, spawns, 8);
      }
      world->objects = objects;
      world->count = n;
      i = 0;
      if (n > 0)
      {
        LevelObject *objectCursor = objects;
        LevelRecord *recordCursor = records;
        do
        {
          rec = recordCursor;
          i++;
          obj = objectCursor;
          obj->kind = func_8028CF48(world, rec->id);
          objectCursor = obj + 1;
          recordCursor = rec + 1;
        }
        while (i < n);
      }
      world->placed = 0;
      for (i = 0; i < n; i++)
      {
        rec = &records[i];
        obj = &objects[i];
        func_8024B398(obj, rec, mode, i);
        if (((*func_8028CF48(world, rec->id)) != 0xB) && (i != 0))
        {
          continue;
        }
        world->placed++;
        D_80145100 = rec->pos;
        D_80145100.y += 204.79998779296875f;
        D_80145120 = func_802866F8(world, &rec->pos);
        for (playerIndex = 0, slot = D_80146398; playerIndex < D_80145048; slot++, playerIndex++)
        {
          player = &D_80145044[playerIndex];
          if (nspawns != 0)
          {
            if (((slot->type == 0xC) && (player->isBot != 0)) && (world->group == 9))
            {
              func_8044DE70(world, 9, 0xC1D, &extra, 1);
              spawn = &extra;
            }
            else
            {
              spawn = &spawns[k];
            }
            rec->zone = spawn->zone;
            func_80274090(&spawn->angle);
            angle = spawn->angle;
            if (!(angle > 3.1415927f))
            {
              if (!(angle < (-3.1415927f)))
              {
                if (!(angle > 3.1415927f))
                {
                  value = angle * 10430.06f;
                }
                else
                {
                  value = 0x7FFF;
                }
              }
              else
              {
                value = -0x7FFF;
              }
            }
            else
            {
              value = 0x7FFF;
            }
            rec->angle = value;
            rec->pos = spawn->pos;
            world->f1B614 = 0;
            world->f1B618 = 0;
            world->f1B61C = 0;
            k++;
            if (k >= nspawns)
            {
              k = 0;
            }
          }
          func_80449970(player, rec, mode, i);
        }

      }

      for (i = world->placed; i < n; i++)
      {
        obj = &objects[i];
        best = 3.4028235e38f;
        obj->target = 0;
        if (func_8024DDA4(obj) == 0)
        {
          continue;
        }
        for (j = world->placed; j < n; j++)
        {
          other = &objects[j];
          if ((((*obj->kind) == (*other->kind)) && (func_8024DD7C(other) != 0)) && (obj != other))
          {
            if (obj->target != 0)
            {
              dist = func_80217224(obj, other->pos);
              if (dist < best)
              {
                obj->target = other;
                best = dist;
              }
            }
            else
            {
              obj->target = other;
              best = func_80217224(obj, other->pos);
            }
          }
        }

      }

    }
    func_80253CB0(0, handle, block);
    world->fF58 = 0;
  }
}
