#include "basetypes.h"
typedef void (*FuncPtr)(void *, s32, void *);

extern void *func_802B8CC8(void);
extern void func_802B8D0C(s32 arg0, void *arg1);

void func_802B82D0(void *arg0, void *arg1) {
    void *v0;
    void *temp_a0;
    FuncPtr fn;
    s32 new_var;

    if ((*((void **) (((char *) arg1) + 8))) != 0) {
        if ((*((s32 *) ((*((char **) (((char *) arg1) + 8))) + 0xD8))) != 0) {
            v0 = func_802B8CC8();
            if (v0 != 0) {
                new_var = (*((s32 *) (((char *) arg0) + 0x1C))) + (*((s32 *) ((*((char **) (((char *) arg1) + 8))) + 0xD8)));
                *((s16 *) (((char *) v0) + 8)) = 0;
                *((s32 *) (((char *) v0) + 4)) = new_var;
                *((void **) (((char *) v0) + 0xC)) = *((void **) (((char *) arg1) + 8));
                temp_a0 = *((void **) ((*((char **) (((char *) arg1) + 8))) + 0xC));
                fn = *((FuncPtr *) (((char *) temp_a0) + 8));
                fn(temp_a0, 3, v0);
                *((void **) (((char *) arg1) + 8)) = 0;
            }
        } else {
            func_802B8D0C((s32) arg0, *((void **) (((char *) arg1) + 8)));
            *((void **) (((char *) arg1) + 8)) = 0;
        }
    }
}
