#include "basetypes.h"

extern void *func_8022A82C(char *);
extern s32 func_80209874(void *, s32);
extern void func_80211020(void *);
extern void func_80209948(s32 *, s32);
extern void func_80208410(void *);
extern void func_80208EB0(s32 *);
extern char D_80145040;

typedef struct func_80212CC4_S1 func_80212CC4_S1;
typedef struct func_80212CC4_S2 func_80212CC4_S2;
struct func_80212CC4_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212CC4_S2 {
    char pad0[0x1454];
    s32* unk1454;
};

void func_80212CC4(void *arg0) {
    s32 *rec;
    void *v0;

    rec = ((func_80212CC4_S2 *)(((func_80212CC4_S1 *)(arg0))->unk1D8))->unk1454;
    v0 = func_8022A82C(&D_80145040);
    if (v0 == 0 || v0 != (void *) *rec) {
        func_80209874(rec, 2);
        return;
    }
    rec = ((func_80212CC4_S2 *)(((func_80212CC4_S1 *)(arg0))->unk1D8))->unk1454;
    func_80211020(rec);
    func_80209948(rec, rec[3]);
    func_80208410(rec);
    func_80208EB0(rec);
}
