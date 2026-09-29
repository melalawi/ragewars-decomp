#include "basetypes.h"

extern void func_8044AFC0(void *arg0, s32 arg1);
extern void func_8044A600(void *arg0, void *arg1, void *arg2);
extern s32 func_804030E0(s32);
extern void func_8044E178(void *arg0, s32 arg1, s32 arg2);
extern void func_8044DCA4(void *arg0);
extern void func_8044DD40(void *arg0);
extern s32 D_8011FE88;

typedef struct func_8029397C_S1 func_8029397C_S1;
struct func_8029397C_S1 {
    char pad0[0x25580];
    char unk25580;
    char pad25580[0x255C8 - 0x25580 - sizeof(char)];
    char unk255C8;
};

void func_8029397C(s32 arg0, s32 arg1) {
    func_8044AFC0(&((func_8029397C_S1 *)(arg0))->unk255C8, 1);
    func_8044A600(&((func_8029397C_S1 *)(arg0))->unk25580, (void *)1, 0);
    func_8044E178(&D_8011FE88, ~func_804030E0(arg1), 0);
    func_8044DCA4(&D_8011FE88);
    func_8044DD40(&D_8011FE88);
}
