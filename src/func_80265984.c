#include "basetypes.h"

/* Returns the s32 at a byte offset into a resource loaded from the cartridge, then releases it.
   The resource's ROM address is each cartridge's own, because the data before it differs in size. */

#if defined(VERSION_DE)
#define RESOURCE_ROM 0x28BB00
#elif defined(VERSION_EU_X)
#define RESOURCE_ROM 0x290384
#else
#define RESOURCE_ROM 0x28B244
#endif

extern char D_800C9478;
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_802536F4(s32, void *);

s32 func_80265984(s32 arg0) {
    void **resource;
    s32 result;

    resource = func_802518DC(0, RESOURCE_ROM, RESOURCE_ROM, 0x20, 0x10, 0, 0, &D_800C9478, 1);
    result = *(s32 *)((char *)*resource + arg0);
    func_802536F4(0, resource);
    return result;
}
