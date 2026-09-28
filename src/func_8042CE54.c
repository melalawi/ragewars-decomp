#include "basetypes.h"

extern u8 *D_800E53C0;
extern u16 D_800E5322[];

extern void *func_8040ECB0(void *arg0, u16 arg1);
extern void func_8040E958(void *arg0, s32 arg1);
extern void func_8042D5F8(s32 arg0);

/** Load four banks of ten resources, then activate the two resources used by the set. */
void func_8042CE54(void)
{
    s32 bank;
    s32 offset;
    void *resource;

    bank = 0;
    offset = 0;
    do {
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x00));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x04));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x08));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x0C));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x10));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x14));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x18));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x1C));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x20));
        func_8040E958(resource, 0);
        resource = func_8040ECB0(*(void **)(D_800E53C0 + 0xE0), *(u16 *)((u8 *)D_800E5322 + offset + 0x24));
        func_8040E958(resource, 0);
        offset += 0x28;
        bank++;
    } while (bank < 4);

    func_8042D5F8(0x269);
    func_8042D5F8(0x26E);
}
