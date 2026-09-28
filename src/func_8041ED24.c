/* Advances the join screen's pulse timer by delta and sets byte 0x10 of node 0x392 under the edited request's root to 150 plus 100 times the sine of the timer over 300; returns zero. */
#include "basetypes.h"

#ifdef VERSION_EU_MUL
#define VV_0392 0x396
#elif defined(VERSION_DE)
#define VV_0392 0x38C
#else
#define VV_0392 0x392
#endif

typedef struct {
    char pad0[0x10];
    u8 alpha;
} Node;

struct Screen {
    char pad0[8];
    void *roots[3];
    s32 request;
    s32 timer;
};

extern struct Screen *D_800E39C0;
extern Node *func_8040ECB0(void *root, s32 id);
extern f32 func_802BB630(f32 angle);

s32 func_8041ED24(void *arg0, void *arg1, s32 delta) {
    Node *node;

    D_800E39C0->timer += delta;
    node = func_8040ECB0(D_800E39C0->roots[D_800E39C0->request], VV_0392);
    node->alpha = (u32)(func_802BB630(D_800E39C0->timer * 0.0033333334f) * 100.0f + 150.0f);
    return 0;
}
