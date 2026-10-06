#include "span_1000/code_80265370.h"
#include "types.h"

/* Returns the s32 at a byte offset into a resource loaded from the cartridge, then releases it.
   The resource's ROM address is each cartridge's own, because the data before it differs in size. */

#if defined(VERSION_DE)
#define RESOURCE_ROM 0x28BB00
#elif defined(VERSION_EU_X)
#define RESOURCE_ROM 0x290384
#else
#define RESOURCE_ROM 0x28B244
#endif

extern char D_800C4388_de;
extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_80253754_de(s32, void *);

s32 func_80265964_de(s32 arg0) {
    void **resource;
    s32 result;

    resource = func_8025193C_de(0, RESOURCE_ROM, RESOURCE_ROM, 0x20, 0x10, 0, 0, &D_800C4388_de, 1);
    result = *(s32 *)((char *)*resource + arg0);
    func_80253754_de(0, resource);
    return result;
}
