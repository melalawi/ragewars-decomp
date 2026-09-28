#include "basetypes.h"
typedef void (*FuncPtr)(void *, s32, void *);

extern void *func_802B8CC8(void);

void func_802B8610(void *arg0, void *arg1, s32 arg2) {
    s32 new_var;
    void *v0;
    void *temp_a0;
    FuncPtr fn;

    if ((*((void **) (((char *) arg1) + 8))) != 0) {
        v0 = func_802B8CC8();
        if (v0 != 0) {
            new_var = (*((s32 *) (((char *) arg0) + 0x1C))) + (*((s32 *) ((*((char **) (((char *) arg1) + 8))) + 0xD8)));
            *((s16 *) (((char *) v0) + 8)) = 0xE;
            *((s32 *) (((char *) v0) + 0xC)) = arg2;
            *((s32 *) (((char *) v0) + 0)) = 0;
            *((s32 *) (((char *) v0) + 4)) = new_var;
            *((u16 *) (((char *) v0) + 0xA)) = *((u16 *) (((char *) arg1) + 0x1A));
            temp_a0 = *((void **) ((*((char **) (((char *) arg1) + 8))) + 0xC));
            fn = *((FuncPtr *) (((char *) temp_a0) + 8));
            fn(temp_a0, 3, v0);
        }
    }
}
