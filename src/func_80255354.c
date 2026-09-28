/* Inserts or replaces a keyed value in the address hash table, probing odd overflow slots when its home chain is occupied. The new slot address is written as the scaled index plus the table address because the cartridge adds the index first; array indexing reorders the add and its registers (15 words). */
#include "basetypes.h"
typedef struct Entry { u32 key; s32 value; s32 index; struct Entry *next; } Entry;
extern s32 D_80105190,D_80105198;
extern Entry *D_80105194;
void func_80255354(u32 key,s32 value) {
 Entry *entry = D_80105194 + (((key<<5)^(key>>1)^(key>>9)^(key>>17)) & D_80105190);
 Entry *tail;
 Entry *slot;
 s32 index;
 if (entry->value == 0) {entry->key=key;entry->value=value;return;}
 tail=entry;
 for (;;) {
  if (entry->key==key) {entry->value=value;return;}
  entry=tail->next;
  if (!entry) break;
  tail=entry;
 }
 index=tail->index|1;
 while (D_80105194[index].value != 0) {index+=2; index &= D_80105198;}
 slot=(Entry *)((index << 4) + (u32)D_80105194);
 slot->key=key;slot->value=value;tail->next=slot;
}
