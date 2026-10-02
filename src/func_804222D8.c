#include "basetypes.h"

/* Event callback for screen D_800E44A0: on event 1 while func_8043C4E8 reports the screen in state
   1 it advances the screen through func_8043C260 and func_8043C484, and when that leaves it in
   state 2 it tears the match display down through func_80422050 and func_8042E080 and calls
   func_80264874(1). Returns zero. */
extern void *D_800E44A0;
extern s32 func_8043C4E8(void *);
extern void func_8043C260(void *);
extern void func_8043C484(void *);
extern void func_80422050(void);
extern void func_80422020(void);
extern void func_8042E080(void);
extern void func_80264874(s32);

s32 func_804222D8(s32 arg0, s32 arg1, s32 event) {
    if (event == 1) {
        if (func_8043C4E8(D_800E44A0) != 1) {
            return 0;
        }
        func_8043C260(D_800E44A0);
        func_8043C484(D_800E44A0);
        if (func_8043C4E8(D_800E44A0) != 2) {
            return 0;
        }
#if defined(VERSION_DE)
        func_80422020();
#else
        func_80422050();
#endif
        func_8042E080();
        func_80264874(1);
    }
    return 0;
}
