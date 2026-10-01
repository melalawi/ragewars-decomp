#include "basetypes.h"
#include "../include/shared/particle.h"

/* Draws one particle for a view: fades particles hidden behind geometry in or out, blends its colours towards the
 * descriptor's targets (greyscale for views that ask for it), picks the animation frame, builds its matrix (once per
 * frame for a shared camera, per view otherwise), selects the texture and render mode, works out its alpha from life,
 * fade-in, fade-out and distance from the view, and emits the colour and draw commands. */

extern Gfx *D_80110634;
extern Shared_DisplayFrame *D_8011FE80;
extern u32 D_800E28A4;
extern f32 D_800D2988;
extern s32 D_800D297C;
extern char D_80104030;
extern s32 D_801450B8;
extern Shared_ParticleView *D_801450A8;
extern u8 D_801462E3;
extern s32 D_801462C8;
extern char D_8011FFB0;
extern char D_8011F038;

void *func_80296EC4(s32 *, s32);
void func_80296F7C(void *, Shared_AnimInfo *);
#if defined(VERSION_US_REV1)
void func_80295FB4(s32 *, void *, s32, s32, s32, s32, s32, s32, s32);
#else
void func_80294FF4(s32 *, void *, s32, s32, s32, s32, s32, s32, s32);
#endif
Shared_ParticleInstance *func_802392DC(Shared_ParticleView *);
s32 func_80243A80(Shared_ParticleInstance *, Vec3, void *);
void func_80272908(Matrix *, Vec3 *, Vec3 *);
void func_8027DD1C(Shared_Particle *, void *, void *, f32);
void *func_80279A30(void *, s32);
void func_80268CE0(s32);
void func_8026925C(s32);
void func_802536F4(s32, void *);
s32 func_80274544(void);

static inline s32 func_8027ED40_occluded(Shared_Particle *particle, Shared_ParticleView *view) {
    Shared_ParticleInstance *inst;
    s32 hit;

    inst = func_802392DC(view);
    if (inst != NULL && view->unk24 == 0) {
        Shared_ParticleInstance saved;
        saved = *inst;
        inst->pos = view->unk128;
        hit = func_80243A80(inst, particle->inst.pos, &D_80104030);
        *inst = saved;
    } else {
        Shared_ParticleInstance probe;
        probe = particle->inst;
        probe.pos = view->unk128;
        hit = func_80243A80(&probe, particle->inst.pos, &D_80104030);
    }
    return hit;
}

static inline s32 func_8027ED40_mode(Shared_Particle *particle) {
    s32 mode = 0;

    if (particle->desc->flags & 0x2000000) {
        if (particle->flags & 2) {
            mode = 2;
        } else if (D_801462E3 == 2) {
            mode = 1;
        }
    }
    return mode;
}

static inline s32 func_8027ED40_scale(f32 value, f32 div) {
    return (value < 0.0f) ? 0 : (s32)((s32)value / div);
}

#define SET_ENV_COLOR(r, g, b, a)                                                             \
    {                                                                                         \
        Gfx *_g = D_80110634++;                                                               \
        _g->words.w0 = 0xFB000000;                                                            \
        _g->words.w1 = (((r) & 0xFF) << 24) | (((g) & 0xFF) << 16) | (((b) & 0xFF) << 8) | ((a) & 0xFF); \
    }
#define SET_PRIM_COLOR(r, g, b, a)                                                            \
    {                                                                                         \
        Gfx *_g = D_80110634++;                                                               \
        _g->words.w0 = 0xFA000000;                                                            \
        _g->words.w1 = (((r) & 0xFF) << 24) | (((g) & 0xFF) << 16) | (((b) & 0xFF) << 8) | ((a) & 0xFF); \
    }

#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define MAX(a, b) ((a) < (b) ? (b) : (a))

void func_8027ED40(Shared_Particle *particle, Shared_ParticleView *view) {
    Shared_AnimInfo info;
    u8 env[3];
    u8 prim[3];
    Vec3 viewPos;
    void *model;
    Shared_ParticleDesc *desc;
    void *mtx;
    f32 fade;
    f32 ratio;
    f32 dist;
    f32 lerp;
    s32 hit;
    s32 alpha;
    s32 mode;
    s32 frame;
    s32 time;
    s32 textured;
    s32 shiftS;
    s32 shiftT;
    s32 sum;
    s8 fadeLen;
    s16 gray;
    u8 *envTo;
    u8 *primTo;
    u8 *envFrom;
    u8 *primFrom;

    if (D_800E28A4 - ((u32)D_80110634 - (u32)D_8011FE80->commands) / sizeof(Gfx) < 3000) {
        return;
    }
    if (particle->time < 0.0f) {
        return;
    }
    model = func_80296EC4(&particle->model, -1);
    if (model == NULL) {
        return;
    }
    desc = particle->desc;
    if ((desc->flags & 0x80000) && desc->animMode == 1) {
        if (particle->inst.type != 0x60) {
            particle->time = 0.0f;
        }
        hit = func_8027ED40_occluded(particle, view);
        if (!hit) {
            fade = particle->opacity + D_800D2988 * 128.0f;
            alpha = (fade > 255.0f) ? 255 : (s32)fade;
        } else {
            fade = particle->opacity - D_800D2988 * 128.0f;
            alpha = (fade < 0.0f) ? 0 : (s32)fade;
        }
        particle->opacity = alpha;
        if (alpha == 0.0f) {
            func_802536F4(0, model);
            return;
        }
    }

    particle->flags |= 8 << view->unk8;
    particle->alpha = 255.0f;
    ratio = MIN(particle->time / particle->life, 1.0f);
    primFrom = particle->prim;
    envFrom = particle->env;
    primTo = desc->colors->prim;
    envTo = desc->colors->env;
    env[0] = (u32)MAX(MIN((envTo[0] - envFrom[0]) * ratio + envFrom[0], 255.0f), 0.0f);
    env[1] = (u32)MAX(MIN((envTo[1] - envFrom[1]) * ratio + envFrom[1], 255.0f), 0.0f);
    env[2] = (u32)MAX(MIN((envTo[2] - envFrom[2]) * ratio + envFrom[2], 255.0f), 0.0f);
    prim[0] = (u32)MAX(MIN((primTo[0] - primFrom[0]) * ratio + primFrom[0], 255.0f), 0.0f);
    prim[1] = (u32)MAX(MIN((primTo[1] - primFrom[1]) * ratio + primFrom[1], 255.0f), 0.0f);
    prim[2] = (u32)MAX(MIN((primTo[2] - primFrom[2]) * ratio + primFrom[2], 255.0f), 0.0f);

    if (view->grayscale != 0) {
        gray = env[0] + env[1] + env[2];
        gray /= 12;
        env[0] = gray * 2;
        env[1] = 0;
        env[2] = 0;
        gray = prim[0] + prim[1] + prim[2];
        gray /= 12;
        prim[0] = gray * 2;
        prim[1] = gray * 3;
        prim[2] = 0;
    }

    mode = func_8027ED40_mode(particle);
    func_80296F7C(model, &info);
    frame = particle->frame;
    time = particle->time;
    switch (desc->animMode) {
        case 0:
            if (frame >= info.count - 1) {
                time = particle->life;
                frame = info.count - 1;
                particle->time = time;
            }
            break;
        case 1:
            if (frame >= info.count) {
                frame = info.count - 1;
            }
            break;
        case 2:
            frame %= info.count;
            break;
        case 3:
            if (info.count * 2 - 2 > 0) {
                frame %= info.count * 2 - 2;
            } else {
                frame = 0;
            }
            if (frame >= info.count) {
                frame = (info.count * 2 - 2) - frame;
            }
            break;
        case 4:
            frame = func_80274544() % info.count;
            break;
        case 5:
            if (particle->unk14F == -1) {
                particle->unk14F = func_80274544() % info.count;
            }
            frame = particle->unk14F;
            break;
    }

    if (!(particle->flags & 0x100000)) {
        if (D_801450B8 == 1) {
            Shared_ParticleView *camera = D_801450A8;
            Vec3 local;
            f32 depth;
            func_80272908(&camera->viewMtx, &particle->inst.pos, &local);
            depth = local.z;
            if (depth < 0.0f) {
                depth = -depth;
            }
            func_8027DD1C(particle, &particle->mtx[D_800D297C], camera, depth);
        } else {
            func_8027DD1C(particle, &particle->mtx[D_800D297C], NULL, 0.0f);
        }
        particle->unk14E = frame;
        particle->flags |= 0x100000;
    }
    func_80272908(&view->viewMtx, &particle->inst.pos, &viewPos);
    dist = viewPos.z;
    if (dist < 0.0f) {
        dist = -dist;
    }
    if (D_801450B8 == 1) {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xDA380003;
        cmd->words.w1 = (u32)&particle->mtx[D_800D297C];
    } else {
        mtx = func_80279A30(&D_8011FFB0, 1);
        if (mtx == NULL) {
            func_802536F4(0, model);
            return;
        }
        func_8027DD1C(particle, mtx, view, dist);
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDA380003;
            cmd->words.w1 = (u32)mtx;
        }
    }

    textured = particle->flags & 0x800000;
    shiftS = 1 << (((desc->flags & 0x100) ? 7 : 6) + info.frame->shiftS);
    shiftT = 1 << (((desc->flags & 0x200) ? 7 : 6) + info.frame->shiftT);
#if defined(VERSION_US_REV1)
    func_80295FB4(&particle->model, model, frame, 0, shiftS, shiftT, 1, 1, 0);
#else
    func_80294FF4(&particle->model, model, frame, 0, shiftS, shiftT, 1, 1, 0);
#endif
    switch (info.frame->kind) {
        case 0:
        case 1:
            func_80268CE0(0x18);
            break;
        case 3:
            func_80268CE0(0x1D);
            break;
    }
    if (textured) {
        func_8026925C(0xF);
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xD7FF0002;
            cmd->words.w1 = (shiftS << 16) | (shiftT & 0xFFFF);
        }
    } else if ((desc->flags & 0x400) && desc->fade->unkE != 4) {
        func_8026925C(0xF);
    } else if (desc->flags & 0x4000) {
        func_8026925C(!(D_801462C8 & 0x200) ? 0xD : 0x11);
    } else {
        func_8026925C((D_801462C8 & 0x200) ? 0x12 : 0x13);
    }

    alpha = 0xFF;
    if ((desc->flags & 1) && particle->life > 0) {
        alpha = (particle->life - time) * 255.0f / particle->life;
    }
    if (desc->fade->fadeIn != -1 && time < desc->fade->fadeIn) {
        alpha = alpha * (time + 1.0f) / (desc->fade->fadeIn + 1.0f);
    }
    fadeLen = desc->fade->fadeOut;
    if (fadeLen != -1) {
        f32 left = particle->life - time;
        if ((left < 0.0f ? 0.0f : left) < fadeLen) {
            /* FAKEMATCH: the do/while (0) wrapper (likely a macro in the original) puts the scaling in its own loop
             * scope; without it global-alloc gives fadeOut's raw byte and its sign-extended copy each other's registers
             * (lb a1 / lbu a0 swap). */
            do {
                alpha = func_8027ED40_scale(alpha * (particle->life - time), fadeLen + 1.0f);
            } while (0);
        }
    }
    if (view->fadeRange < -0.0001f || view->fadeRange > 0.0001f) {
        f32 range = view->fadeRange;
        f32 half;
        f32 delta;
        switch (desc->fade->rangeMode) {
            case 2:
                alpha = alpha * MIN((range - dist) * 10.0f / range, 1.0f);
                break;
            case 0:
                alpha = alpha * MIN((range - dist) * 5.0f / range, 1.0f);
                break;
            case 1:
                half = range * 0.5f;
                delta = half - dist;
                alpha = alpha * (delta < 0.0f ? half + delta : half - delta) / half;
                break;
        }
    }

    if (info.frame->kind == 3) {
        switch (mode) {
            case 0:
            default:
                SET_ENV_COLOR(env[0], env[1], env[2], 0xFF);
                break;
            case 2:
                SET_ENV_COLOR(env[0], env[0], env[2], 0xFF);
                break;
            case 1:
                SET_ENV_COLOR(env[1], env[0], env[2], 0xFF);
                break;
        }
    }
    alpha = MAX(MIN(alpha, 255), 0);
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0x01004008;
        cmd->words.w1 = (u32)&D_8011F038;
    }
    if (textured) {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xD7FF0002;
        cmd->words.w1 = (shiftS << 16) | (shiftT & 0xFFFF);
    }
    particle->alpha = (alpha * particle->opacity) >> 8;
    switch (mode) {
        case 0:
        default:
            SET_PRIM_COLOR(prim[0], prim[1], prim[2], (u32)particle->alpha);
            break;
        case 2:
            SET_PRIM_COLOR(prim[0], prim[0], prim[2], (u32)particle->alpha);
            break;
        case 1:
            SET_PRIM_COLOR(prim[1], prim[0], prim[2], (u32)particle->alpha);
            break;
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0x06000204;
        cmd->words.w1 = 0x00040600;
    }
    func_802536F4(0, model);
}
