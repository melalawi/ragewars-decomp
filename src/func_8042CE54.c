#include "basetypes.h"

typedef struct func_8042CE54_S1 func_8042CE54_S1;
struct func_8042CE54_S1 {
    char pad0[0xE0];
    void* unkE0;
};

extern func_8042CE54_S1 *D_800E53C0;
typedef struct { u16 ids[20]; } ResourceBank;
extern ResourceBank D_800E5322[];

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
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[0]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[2]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[4]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[6]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[8]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[10]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[12]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[14]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[16]);
        func_8040E958(resource, 0);
        resource = func_8040ECB0(D_800E53C0->unkE0, D_800E5322[bank].ids[18]);
        func_8040E958(resource, 0);
        offset += 0x28;
        bank++;
    } while (bank < 4);

    func_8042D5F8(0x269);
    func_8042D5F8(0x26E);
}
