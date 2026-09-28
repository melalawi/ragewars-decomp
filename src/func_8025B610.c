/* Releases occupied nonlocal slots unless their value equals the exclusion. */

#include "basetypes.h"
typedef struct 
{
  char pad[0x102];
  s16 local;
} Header;
typedef struct 
{
  char pad[0x84];
  char sound[0x58];
  s16 samples[20];
  char pad2[(0x104 - 0xDC) - 40];
  s32 key;
} Owner;
typedef struct 
{
  s32 index;
  s32 state;
  s32 used;
  char pad0[4];
  s32 key;
  char pad1[0x3C];
  s32 flag;
  char pad2[0x54];
  s32 value;
  s32 active;
  Owner *owner;
  char pad3[0x18];
} Slot;
typedef struct 
{
  Header *header;
  Slot slots[17];
} Record;
extern void func_802B7FD0(void *sound, s16 sample);
extern s32 func_802B76F0(void *sound);
extern void func_802B8030(void *sound);
void func_8025B610(Record *record, s32 value)
{
  s32 i;
  s32 active;
  s32 absent;
  Slot *slot = record->slots;
  i = 0;
  absent = -1;
  active = 1;
  for (; i < 16; slot++, i++)
  {
    if (((slot->used != absent) && (record->header->local != i)) && ((value == absent) || (slot->value != value)))
    {
      Owner *owner = slot->owner;
      void *sound;
      slot->active = active;
      slot->flag = 0;
      if (slot->key != owner->key)
      {
        sound = owner->sound;
        func_802B7FD0(sound, owner->samples[slot->index]);
        if (func_802B76F0(sound) != 0)
        {
          if (active)
          {
            func_802B8030(sound);
          }
          else
          {
            func_802B8030(sound);
          }
        }
        slot->state = absent;
      }
    }
  }

}
