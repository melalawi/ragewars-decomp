#include "common/types.h"
#include "span_1000/code_80222E80.h"
#include "types.h"



extern s32 D_800C9FE4;
extern s32 D_800CD6E0_de;
extern void *D_800FE9F0;
extern u8 D_800FEAD8[];
extern s32 D_8011BDC8;
extern s32 D_801371D0;

extern char D_0022ECCC;

extern void *func_8028B2F8_de(void *, u16 *);
extern s32 func_80245618_de(s32 arg0, void *arg1, VoidCallback arg2);
extern void *func_8028CFA0_de(void *arg0, s32 arg1, s32 arg2);






void func_80225B98_de(void *arg0, void *arg1, s32 arg2)
{
    s32 enabled;
    u32 resource_flags;
    void *resource;
    s32 i;

    enabled = 1;
    resource_flags = 0;

    if (((ObjectLinks854 *)(arg0))->unk_14 != 0) {
        resource = func_8028B2F8_de(&D_8011BDC8, ((ObjectLinks854 *)(arg0))->unk_14);
        if (resource != 0) {
            resource_flags = ((ObjectState108 *)(resource))->unk_44;
        }
    }

    if (D_801371D0 != 0) {
        enabled = 0;
    }
    if (((ObjectLinks854 *)(arg0))->unk_664 & 0x8000) {
        enabled = 0;
    }
    if (D_801371D0 != 0) {
        enabled = 0;
    }
    if (D_80140F88 >= 2) {
        enabled = 0;
    }
    if (arg2 == 12) {
        enabled = 0;
    }
    if (((ObjectLinks854 *)(arg0))->unk_664 & 0x8000) {
        enabled = 0;
    }
    if (resource_flags & 0x1000000) {
        enabled = 0;
    }
    if ((resource_flags & 0x80000) &&
        (arg2 != 20) && (arg2 != 40) && (arg2 != 30)) {
        enabled = 0;
    }

    ((ObjectLinks854 *)(arg0))->unk_850 = enabled;
    if (enabled != 0) {
        if (arg2 == 50) {
            void *data;

            data = ((ObjectLinks854 *)(arg0))->unk_5DC;
            D_800C9FE4 = 1;
            if (data != 0) {
                for (i = 0; i < 4; i++) {
                    D_800FEAD8[i] = ((struct ObjectState521 *) (((u8 *) ((ObjectLinks854 *) arg0)->unk_5DC) + i))->unk_520;
                }
            }
        }
        D_800CD6E0_de = 0;
        D_800FE9F0 = arg0;
        func_80245618_de(arg2, 0, (VoidCallback)&D_0022ECCC);
    }

    resource = func_8028CFA0_de(&D_8011BDC8, -1, 0xC45);
    if (resource != 0) {
        ((ObjectLinks854 *)(arg0))->unk_50 = ((ObjectState108 *)(resource))->unk_FC;
        ((ObjectLinks854 *)(arg0))->unk_54 = ((ObjectState108 *)(resource))->unk_100;
        ((ObjectLinks854 *)(arg0))->unk_58 = ((ObjectState108 *)(resource))->unk_104;
    }
}
