#include "basetypes.h"

extern char D_8011FE88;
extern int func_8028B238(void *arg0, int arg1);

typedef struct func_8024E914_S1 func_8024E914_S1;
struct func_8024E914_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0xE4 - 0x4 - sizeof(u16)];
    u16 unkE4;
};

int func_8024E914(void *arg0) {
    if (*(u8 *)arg0 == 1) {
        return ((func_8024E914_S1 *)(arg0))->unkE4;
    }
    return func_8028B238(&D_8011FE88, ((func_8024E914_S1 *)(arg0))->unk4);
}
