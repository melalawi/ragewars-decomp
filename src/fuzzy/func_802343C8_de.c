#include "types.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80271B18.h"
#include "math_helpers.h"
extern f32 D_800C3160_de;
extern f32 D_800C3164_de;
extern f32 D_800C3168_de;
extern f32 D_800C316C_de;
extern f32 D_800C3170_de;
extern f32 D_800C3174_de;
extern f32 D_800C3178_de;
extern f32 D_800C317C_de;
extern f32 D_800C3198_de;
extern f32 D_800C31D0_de;
extern f32 D_800C31F0_de;
extern f32 D_800C31F4_de;
extern f32 D_800D2988;
extern s32 D_800CD730;
extern char D_8011FE88[];
extern void *D_80145060;
extern void *func_8028FDB4_de(void *, s32);
extern void *func_8028B2F8_de(void *, u16 *);

/* A node in the global list at D_80145060, found by its owner pointer. */
typedef struct ColorNode {
    /* 0x0000 */ char pad0[0x38];
    /* 0x0038 */ u32 flags;
    /* 0x003C */ char pad3C[0x5DC - 0x3C];
    /* 0x05DC */ void *owner;
    /* 0x05E0 */ char pad5E0[0x664 - 0x5E0];
    /* 0x0664 */ u32 flags2;
    /* 0x0668 */ char pad668[0x16E0 - 0x668];
    /* 0x16E0 */ struct ColorNode *next;
} ColorNode;

/* Animated colour and two scalars that blend toward a keyed target. */
typedef struct ColorBlend {
    /* 0x000 */ char pad0[0x58];
    /* 0x058 */ u16 *key;
    /* 0x05C */ f32 unk5C;
    /* 0x060 */ char pad60[0x518 - 0x60];
    /* 0x518 */ s32 lastKey;
    /* 0x51C */ f32 t;
    /* 0x520 */ u8 color[4];
    /* 0x524 */ u8 prevColor[4];
    /* 0x528 */ f32 a;
    /* 0x52C */ f32 prevA;
    /* 0x530 */ f32 b;
    /* 0x534 */ f32 prevB;
    /* 0x538 */ char pad538[4];
    /* 0x53C */ u32 n;
    /* 0x540 */ u32 prevN;
} ColorBlend;

void func_802343C8_de(ColorBlend *self) {
    u8 target[4];
    u8 *rec;
    ColorNode *node;
    u32 hold = 0;
    u32 freeze = 0;
    u32 fadeA = 0;
    u32 fadeB = 0;
    u32 endN;
    f32 endA;
    f32 endB;
    f32 t;
    f32 k;
    f32 v;
    s32 i;
    u16 *key = self->key;

    if (key == 0) {
        if (D_8011FE88 == 0 || *(s32 *)D_8011FE88 == 0) {
            return;
        }
        rec = (u8 *)func_8028FDB4_de(*(void **)(D_8011FE88 + 0x6C), 0) + 8;
    } else {
        rec = func_8028B2F8_de(D_8011FE88, key);
        if (rec == 0) {
            return;
        }
    }

    for (node = D_80145060; node != 0; node = node->next) {
        if (node->owner == self) {
            break;
        }
    }
    if (node != 0) {
        if ((node->flags2 & 0x40) || (node->flags & 0x1000)) {
            hold = 1;
        }
        freeze = node->flags & 0x20000;
        if (node->flags & 0x8000) {
            fadeA = hold > 0;
        }
        if (node->flags & 0x10000) {
            fadeB = hold > 0;
        }
    }

    if (key != 0 && (*key != self->lastKey || hold != 0 || freeze != 0)) {
        if (self->lastKey != -1 && hold == 0 && freeze == 0) {
            self->t = 0.0f;
        } else {
            self->t = D_800C3160_de;
        }
        self->lastKey = *key;
        for (i = 0; i < 4; i++) {
            self->prevColor[i] = self->color[i];
        }
        self->prevA = self->a;
        self->prevN = self->n;
        self->prevB = self->b;
    }

    if (hold == 0 && freeze == 0 && fadeA == 0 && fadeB == 0) {
        for (i = 0; i < 3; i++) {
            target[i] = rec[i];
        }
        target[3] = 0;
        endN = *(u32 *)(rec + 8);
        endA = *(f32 *)(rec + 0x10);
        endB = *(f32 *)(rec + 0x14);
    } else {
        for (i = 0; i < 4; i++) {
            target[i] = rec[4 + i];
        }
        endN = *(u32 *)(rec + 0xC);
        endA = *(f32 *)(rec + 0x18);
        endB = *(f32 *)(rec + 0x1C);
    }

    if (D_800CD730 == 0 || *(f32 *)(rec + 0x24) == 0.0f) {
        self->t = D_800C3164_de;
    } else {
        v = self->t + D_800D2988 / (*(f32 *)(rec + 0x24) * D_800C3168_de);
        if (D_800C316C_de < v) {
            v = D_800C316C_de;
        }
        self->t = v;
    }

    t = self->t;
    k = t * (t * D_800C3170_de) * t + t * (t * D_800C3174_de);

    for (i = 0; i < 4; i++) {
        self->color[i] = (((f32)self->prevColor[i] + k * ((f32)target[i] - (f32)self->prevColor[i])) < 0.0f) ? 0 : (D_800C3178_de < ((f32)self->prevColor[i] + k * ((f32)target[i] - (f32)self->prevColor[i]))) ? 255 : (u32)(((f32)self->prevColor[i] + k * ((f32)target[i] - (f32)self->prevColor[i])));
    }

    self->n = (((f32)self->prevN + k * ((f32)endN - (f32)self->prevN)) < 0.0f) ? 0 : (D_800C3198_de < ((f32)self->prevN + k * ((f32)endN - (f32)self->prevN))) ? 0x3E3 : (u32)(((f32)self->prevN + k * ((f32)endN - (f32)self->prevN)));

    if (self->unk5C > 0.0f) {
        endA += self->unk5C * D_800C31F4_de;
    }
    self->a = self->prevA + k * (endA - self->prevA);
    self->b = self->prevB + k * (endB - self->prevB);
}
