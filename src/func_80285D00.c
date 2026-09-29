#include "basetypes.h"

extern s32 func_802C2020(void);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);
extern void func_802C2040(s32 arg0);

typedef struct func_80285D00_S1 func_80285D00_S1;
typedef struct func_80285D00_S2 func_80285D00_S2;
typedef union func_80285D00_S1_U14 { void* v0; char v1; } func_80285D00_S1_U14;
struct func_80285D00_S1 {
    char pad0[0x14];
    func_80285D00_S1_U14 unk14;
    char pad14[0x28 - 0x14 - sizeof(func_80285D00_S1_U14)];
    s32 unk28;
};
struct func_80285D00_S2 {
    char pad0[0x4];
    void* unk4;
};

void func_80285D00(s32 *arg0) {
    void *node;
    void *next;
    s32 saved;

    saved = func_802C2020();
    node = ((func_80285D00_S1 *)(arg0))->unk14.v0;
    if (node != 0) {
        do {
            next = ((func_80285D00_S2 *)(node))->unk4;
            func_80255E78(&((func_80285D00_S1 *)(arg0))->unk14.v1, node);
            func_80255CB4(arg0, (s32)node);
            node = next;
        } while (node != 0);
    }
    ((func_80285D00_S1 *)(arg0))->unk28 = 0;
    func_802C2040(saved);
}
