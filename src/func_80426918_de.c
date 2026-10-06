#include "span_16E000/code_804264F0.h"
#include "types.h"

#define CLAMP(value, low, high) ((value) < (low) ? (low) : (value) > (high) ? (high) : (value))
extern struct Screen_func_80426918_de *D_800E0640_de;
extern s32 D_8014DD90[];



extern void func_8029973C_de(void);
extern void func_80298368_de(s32);
extern void func_8025DF34_de(s32);
extern void func_8040E8D8_de(void *, s32);
extern void func_80419F58_de(void *, s32);
extern void func_802A2360_de(void);
extern s32 func_80419F38_de(void *);
extern void func_80419F24_de(void *);


extern void func_8042E988_de(s32);

extern f32 func_802B6560_de(f32);

s32 func_80426918_de(void *arg0, void *arg1, s32 delta) {
    s32 clock;

    if (D_8014DD90[1] == 1) {
        D_8014DD90[1] = 0;
        if (D_8014DD90[0] != -1) {
            D_800E0640_de->banner->alpha = 0x5A;
            func_8029973C_de();
            func_80298368_de(D_8014DD90[0]);
            return 0;
        }
        D_800E0640_de->banner->alpha = 0xFF;
        D_800E0640_de->state = 9;
    }
    switch (D_800E0640_de->state) {
    case 1:
        D_800E0640_de->left->x += D_800E0640_de->leftSpeed;
        D_800E0640_de->right->x -= D_800E0640_de->rightSpeed;
        if (--D_800E0640_de->timer > 0) {
            break;
        }
        func_8025DF34_de(0xE79);
        func_8040E8D8_de(D_800E0640_de->button, 1);
        func_80419F58_de(D_800E0640_de->prompt, 4);
        D_800E0640_de->state = 4;
        D_800E0640_de->timer = 4;
        break;
    case 2:
        D_800E0640_de->left->x -= D_800E0640_de->leftSpeed;
        D_800E0640_de->right->x += D_800E0640_de->rightSpeed;
        if (--D_800E0640_de->timer > 0) {
            break;
        }
        D_800E0640_de->state = 3;
        func_8029973C_de();
        if (D_80142215 == 4) {
            func_80298368_de(3);
        } else {
            func_80298368_de(7);
        }
        return 0;
    case 3:
        if (D_800E0640_de->requested == 0) {
            func_802A2360_de();
            D_800E0640_de->requested = 1;
        }
        break;
    case 4:
        D_800E0640_de->timer = CLAMP(D_800E0640_de->timer - 1, 0, D_800E0640_de->timer);
        if (D_800E0640_de->timer <= 0 && func_80419F38_de(D_800E0640_de->prompt) != 0) {
            func_80419F24_de(D_800E0640_de->prompt);
            D_800E0640_de->state = 3;
        }
        break;
    case 5:
        func_8025DF34_de(0xE78);
        func_8040E8D8_de(D_800E0640_de->button, 0);
        switch (D_80142215) {
        case 1:
        case 3:
        case 4:
            func_804281A8_de();
        }
        func_804273D4_de();
        D_800E0640_de->state = 2;
        D_800E0640_de->timer = 4;
        break;
    case 8:
        D_800E0640_de->state = 3;
        func_804273D4_de();
        func_8042E988_de(0xB);
        return 0;
    case 9:
        D_800E0640_de->state = 3;
        func_80427008_de();
        break;
    }
    if (D_800E0640_de->state == 3) {
        clock = D_800E0640_de->clock + delta;
        D_800E0640_de->clock = clock;
        if (D_8014DD90[0] == -1) {
            D_800E0640_de->pulse->alpha = (u32)(func_802B6560_de(clock * 0.005f) * 100.0f + 150.0f);
        }
    }
    return 0;
}
