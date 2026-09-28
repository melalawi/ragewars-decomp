#include "basetypes.h"

typedef struct CallbackHolder CallbackHolder;
typedef struct Event Event;

struct CallbackHolder {
    char pad0[8];
    void (*callback)(void *arg0, Event *arg1);
};

struct Event {
    char pad0[0x30];
    CallbackHolder *holder;
};

extern s32 func_80285F28(void *, void *);
extern s32 D_8011FE88;

void func_80206018(void *arg0, Event *arg1) {
    CallbackHolder *holder;
    s32 different;

    different = func_80285F28(&D_8011FE88, arg0) != 1;
    if (different == 0) {
        holder = arg1->holder;
        if ((holder != 0) && (holder->callback != 0)) {
            holder->callback(arg0, arg1);
        }
    }
}
