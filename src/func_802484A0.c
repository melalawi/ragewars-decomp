/* Builds and packs the animated part matrices of an actor, then updates the
 * frame timing totals. */
#include "basetypes.h"

#include "../include/shared/pose.h"

extern char D_800C8A20;
extern f32 D_800D06C0[];
extern s32 D_800D2978;
extern s32 D_800D297C;
extern Shared_FrameProfile D_80104530;
extern char D_8011FE88;
extern char D_8011FFB0;
extern char D_8013BA80;
extern s32 D_801462C8;

extern s32 func_80245788(void);
extern void func_80247F08(Shared_PoseActor *, Shared_PosePart *, Shared_MtxF, Vec3f, Vec3f, s32);
extern void func_802480E0(Shared_PoseActor *, s32, Shared_MtxF);
extern f32 func_8024D274(Shared_PoseActor *);
extern s32 *func_802518DC(s32, s32, s32, s32, s32, s32, s32, char *, s32);
extern void func_802536F4(s32, s32 *);
extern void func_80261690(Shared_AnimState *, s32, s32, s32, s32, s32);
extern void func_80261EB8();
extern void func_802624C8(Shared_AnimState *);
extern s32 func_802624F8(Shared_AnimState *);
extern void func_8026E5E0(u8 *, s32, Shared_MtxF *, Shared_PoseActor *, void *);
extern void func_8026F690(Shared_MtxF, Shared_MtxF, Shared_MtxF);
extern void func_80270980(Shared_MtxF, u8 *);
extern void func_80270B1C(Shared_Quat *, f32, f32 *, f32 *);
extern void func_8027200C(Vec3f *, Vec3f *, f32);
extern void func_80272D70(Shared_MtxF, f32, f32, f32, f32);
extern void func_8027302C(Shared_MtxF, Shared_MtxF);
extern void func_802734B8(Shared_MtxF, f32, f32, f32);
extern void func_802734EC(Shared_MtxF, f32, f32, f32);
extern s32 func_80274544(void);
extern f32 func_802752CC(Shared_PoseSurface *, f32, f32);
extern s32 func_80279A30(void *, s32);
extern void func_8028C6B0(void *, Vec3f *, u8 *);
extern void *func_8028FD94(void *, s32);
extern void func_802A67D0(void *, Shared_PoseActor *, Shared_MtxF *);
extern u32 func_802C1FF0(void);

static inline Vec3f randVec(void) {
    Vec3f v;

    v.x = func_80274544() % 100;
    v.y = func_80274544() % 100;
    v.z = func_80274544() % 100;
    return v;
}

static inline void twistPart(Shared_PosePart *part, Shared_MtxF cur, s32 n, s32 i) {
    Vec3f turn;
    Vec3f axis;
    Shared_MtxF rotm;
    Shared_MtxF inv;
    f32 angle;

    if (i != 0) {
        turn.x = cur[3][0];
        turn.y = cur[3][1];
        turn.z = cur[3][2];
        axis = part->unk18;
        angle = D_800D06C0[0x19 - part->unk12] * 0.5f;
        angle *= 0.3f;
        angle *= (n == 5 ? -2.0f : (f32)n);
        func_8027302C(inv, cur);
        func_8027200C(&turn, &turn, -1.0f);
        func_802734B8(inv, turn.x, turn.y, turn.z);
        func_80272D70(rotm, angle, axis.x, axis.y, axis.z);
        func_8026F690(cur, inv, rotm);
        func_8027200C(&turn, &turn, -1.0f);
        func_802734B8(cur, turn.x, turn.y, turn.z);
        if (part->unk14[0] == i) {
            part->unk12--;
        }
    }
}

static inline void trackPos(Shared_PoseTrack *t, s32 i, Vec3f *out) {
    if (t->joints[i].pos == -1) {
        *out = t->frames[i].pos;
    } else {
        f32 *data = func_8028FD94(t->posTable, t->joints[i].pos);
        f32 *a = &data[t->posFrame0];
        f32 *b = &data[t->posFrame1];

        out->x = a[0] + t->blend * (b[0] - a[0]);
        out->y = a[1] + t->blend * (b[1] - a[1]);
        out->z = a[2] + t->blend * (b[2] - a[2]);
    }
}

static inline void trackRot(Shared_PoseTrack *t, s32 i, Shared_Quat *out, s32 slerp) {
    if (slerp) {
        if (t->joints[i].rot == -1) {
            Shared_PoseDefaultFrame *frame = &t->frames[i];

            out->x = frame->rot[0] * (1.0f / 32767.0f);
            out->y = frame->rot[1] * (1.0f / 32767.0f);
            out->z = frame->rot[2] * (1.0f / 32767.0f);
            out->w = frame->rot[3] * (1.0f / 32767.0f);
        } else {
            f32 *data = func_8028FD94(t->rotTable, t->joints[i].rot);

            func_80270B1C(out, t->blend, &data[t->rotFrame0], &data[t->rotFrame1]);
        }
    } else if (t->joints[i].rot == -1) {
        Shared_PoseDefaultFrame *frame = &t->frames[i];

        out->x = frame->rot[0] * (1.0f / 32767.0f);
        out->y = frame->rot[1] * (1.0f / 32767.0f);
        out->z = frame->rot[2] * (1.0f / 32767.0f);
        out->w = frame->rot[3] * (1.0f / 32767.0f);
    } else {
        f32 *data = func_8028FD94(t->rotTable, t->joints[i].rot);
        f32 *a = &data[t->rotFrame0];
        f32 *b = &data[t->rotFrame1];

        out->x = a[0] + t->blend * (b[0] - a[0]);
        out->y = a[1] + t->blend * (b[1] - a[1]);
        out->z = a[2] + t->blend * (b[2] - a[2]);
        out->w = a[3] + t->blend * (b[3] - a[3]);
    }
}

static inline void quatToMtx(Shared_MtxF m, Shared_Quat *q, Vec3f *t) {
    f32 xx = q->x * q->x;
    f32 yy = q->y * q->y;
    f32 zz = q->z * q->z;
    f32 ww = q->w * q->w;
    f32 xy = 2.0f * q->x * q->y;
    f32 wz = 2.0f * q->w * q->z;
    f32 xz = 2.0f * q->x * q->z;
    f32 wy = 2.0f * q->w * q->y;
    f32 yz = 2.0f * q->y * q->z;
    f32 wx = 2.0f * q->w * q->x;

    m[0][0] = ww + xx - yy - zz;
    m[0][1] = xy + wz;
    m[0][2] = xz - wy;
    m[0][3] = 0.0f;
    m[1][0] = xy - wz;
    m[1][1] = ww - xx + yy - zz;
    m[1][2] = yz + wx;
    m[1][3] = 0.0f;
    m[2][0] = xz + wy;
    m[2][1] = yz - wx;
    m[2][2] = ww - xx - yy + zz;
    m[2][3] = 0.0f;
    m[3][0] = t->x;
    m[3][1] = t->y;
    m[3][2] = t->z;
    m[3][3] = 1.0f;
}

#define PACK(a, b)                                    \
    e1 = (u32)(a);                                    \
    e2 = (u32)(b);                                    \
    *hi++ = (e1 & 0xFFFF0000) | (e2 >> 16);           \
    *lo++ = (e1 << 16) | (e2 & 0xFFFF);

static inline void packMtx(u32 *out, Shared_MtxF m) {
    u32 *hi = out;
    u32 *lo = out + 8;
    u32 e1;
    u32 e2;

    PACK(m[0][0], m[0][1]);
    PACK(m[0][2], 0.0f);
    PACK(m[1][0], m[1][1]);
    PACK(m[1][2], 0.0f);
    PACK(m[2][0], m[2][1]);
    PACK(m[2][2], 0.0f);
    PACK(m[3][0], m[3][1]);
    PACK(m[3][2], 65536.0f);
}

s32 func_802484A0(Shared_PoseActor *actor, void *arg1, s32 arg2) {
    Shared_MtxF mtx[129];
    Vec3f pos;
    Shared_PoseContext ctx;
    Shared_PoseTrack tracks[2];
    Shared_PoseFlags f;
    Shared_MtxF m;
    Vec3f trans;
    Vec3f posA;
    Vec3f posB;
    Shared_Quat rot;
    Shared_Quat rotA;
    Shared_Quat rotB;
    Vec3f scale;
    Shared_PoseWorld *world;
    s32 *mem;
    Shared_AnimState *animA;
    Shared_AnimState *animB;
    s32 id0;
    s32 id1;
    s32 id2;
    s32 id3;
    s32 id4;
    s32 count;
    /* FAKEMATCH: `none` only exists to add one copy insn inside the part loop.
     * Without it the reduced givs for joints[i] (i*4) and frames[i] (i*20)
     * tie in global-alloc priority (17 refs, live 951 vs 950 insns, both 715)
     * and the lower pseudo takes the callee-saved register the cartridge gives
     * the other one. `id3 = none` reads `none` before any store on paths that
     * skip id1; the compiled code stores -1 either way. */
    s32 none;
    s32 kind;
    Shared_MtxF *parent;
    u32 *out;
    s32 scaled;
    s32 ret;
    s32 skip;
    s32 isRoot;
    s32 isKind9;
    s32 i;
    Shared_MtxF *cur;
    s32 flags;
    u32 dt;

    world = NULL;
    ctx.parts = func_8028FD94(arg1, 5);
    count = ctx.parts->count;
    actor->handle = func_80279A30(&D_8011FFB0, count);
    if (actor->handle == 0) {
        return 0;
    }
    ret = 0;
    isRoot = actor->flags & 1;
    isKind9 = actor->model->kind == 9;
    mem = func_802518DC(0, actor->unkC8, actor->unkC8, ((actor->unkE6 * 4) + 0xF) & ~7, 4, 0, 0, &D_800C8A20 + 4, 0);
    skip = ret;
    if (mem != NULL) {
        animA = &actor->animA;
        animB = &actor->animB;
        func_80261690(animA, *mem, actor->unkC8, 0, 0, 0);
        if (func_802624F8(animA)) {
            if (actor->flags & 0x400) {
                func_80261690(animB, *mem, actor->unkC8, 0, 0, 0);
                f.blend = func_802624F8(animB);
            } else {
                f.blend = 0;
            }
            ctx.actor = actor;
            ctx.handle = actor->handle;
            ctx.mtx = &mtx[1];
            ctx.arg2 = arg2;
            ctx.arg1 = arg1;
            ctx.animA = animA;
            ctx.animB = animB;
            f.frame = (!isRoot || isKind9) && !skip;
            func_80261EB8(&actor->animA, &tracks[0], f.frame);
            func_80261EB8(&actor->animB, &tracks[1]);
            kind = actor->model->kind;
            scaled = 0;
            scale.x = 1.0f;
            scale.y = 1.0f;
            scale.z = 1.0f;
            flags = actor->flags;
            if (flags & 0x300000) {
                if (flags & 0x100000) {
                    world = actor->world;
                    if (world->scale != 1.0f) {
                        scaled = 1;
                        if (world->scale > 1.0f) {
                            scale.x = world->scale;
                            scale.y = world->scale * 1.5f;
                        } else {
                            scale.x = world->scale;
                            scale.y = world->scale;
                            scale.z = world->scale;
                        }
                    }
                    f.frame = 1;
                } else {
                    f.frame = 0;
                }
                if (func_80245788()) {
                    f.frame = 0;
                }
            }
            if (!func_80245788() && ((animA->unkB == 0 && animB->unkB == 0) || kind == 1)) {
                f.mode = 0;
            } else {
                f.mode = 1;
            }
            if (!(actor->flags & 0x200000) && (kind == 1 || kind == 11)) {
                if (D_801462C8 & 0x100) {
                    id0 = 0xC3;
                    id1 = 0xC7;
                    id2 = 0xC2;
                    id3 = 0xC6;
                } else {
                    id0 = -1;
                    id1 = -1;
                    id2 = -1;
                    id3 = -1;
                }
                id4 = -1;
                if (D_801462C8 & 0x20) {
                    id4 = 1;
                }
                if (D_801462C8 & 0x80) {
                    scaled = 1;
                    func_8027200C(&scale, &scale, 0.5f);
                }
            } else {
                id0 = -1;
                id1 = -1;
                id2 = -1;
                id3 = -1;
                id4 = -1;
            }
            mtx[0][0][0] = actor->mtx[0][0] * 65536.0f;
            mtx[0][1][0] = actor->mtx[1][0] * 65536.0f;
            mtx[0][2][0] = actor->mtx[2][0] * 65536.0f;
            mtx[0][3][0] = actor->mtx[3][0] * 65536.0f;
            mtx[0][0][1] = actor->mtx[0][1] * 65536.0f;
            mtx[0][1][1] = actor->mtx[1][1] * 65536.0f;
            mtx[0][2][1] = actor->mtx[2][1] * 65536.0f;
            mtx[0][3][1] = actor->mtx[3][1] * 65536.0f;
            mtx[0][0][2] = actor->mtx[0][2] * 65536.0f;
            mtx[0][1][2] = actor->mtx[1][2] * 65536.0f;
            mtx[0][2][2] = actor->mtx[2][2] * 65536.0f;
            mtx[0][3][2] = actor->mtx[3][2] * 65536.0f;
            mtx[0][0][3] = mtx[0][1][3] = mtx[0][2][3] = 0.0f;
            mtx[0][3][3] = 65536.0f;
            out = (u32 *)actor->handle;
            i = 0;
            D_80104530.start = func_802C1FF0();
            cur = &mtx[1];
            for (; i < count; cur++, out += 16, i++) {
                Shared_PosePartEntry *entry;
                s32 partFlags;

                ctx.index = i;
                entry = (Shared_PosePartEntry *)&ctx.parts->data[i * ctx.parts->stride];
                ctx.part = entry;
                parent = &mtx[entry->u.b.parent + 1];
                partFlags = entry->u.b.flags;
                trackPos(&tracks[0], i, &posA);
                trackRot(&tracks[0], i, &rotA, f.mode);
                if (f.blend) {
                    trackPos(&tracks[1], i, &posB);
                    trackRot(&tracks[1], i, &rotB, f.mode);
                    {
                        f32 t = actor->unk130;

                        trans.x = posB.x + t * (posA.x - posB.x);
                        trans.y = posB.y + t * (posA.y - posB.y);
                        trans.z = posB.z + t * (posA.z - posB.z);
                    }
                    func_80270B1C(&rot, actor->unk130, &rotB.x, &rotA.x);
                } else {
                    trans = posA;
                    rot = rotA;
                }
                if (f.frame) {
                    f.frame = 0;
                    trans.x = trans.y = 0.0f;
                }
                quatToMtx(m, &rot, &trans);
                if (actor->callback != NULL) {
                    actor->callback(m, &ctx);
                }
                func_8026F690(*cur, m, *parent);
                if (actor->part.unk12) {
                    s32 n = 0;
                    if (actor->part.unk14[0] == i) {
                        n = 4;
                    }
                    if (actor->part.unk14[1] == i) {
                        n = 3;
                    }
                    if (actor->part.unk14[2] == i) {
                        n = 2;
                    }
                    if (actor->part.unk14[3] == i) {
                        n = 1;
                    }
                    if (n != 0 && actor->callback != NULL) {
                        twistPart(&actor->part, *cur, n, i);
                    }
                } else if (i != 0 && world != NULL && world->unk1218 != 0 && ctx.part != NULL &&
                           ctx.part->u.f.kind == 1 && ctx.part->u.f.sway == 0) {
                    if ((actor->flags & 0x1000000) && actor->unkB8 != NULL) {
                        Shared_MtxF bone;
                        Vec3f r = randVec();

                        func_80270980(bone, actor->unkB8 + i * 64);
                        func_80247F08(actor, &actor->part, bone, actor->pos, r, i);
                    }
                    world->unk1218 = 0;
                }
                if (actor->flags & 0x800000) {
                    func_802480E0(actor, partFlags, *cur);
                }
                if (partFlags == id0) {
                    id0 = -1;
                    func_802734EC(*cur, 2.0f, 2.0f, 2.0f);
                } else if (partFlags == id1) {
                    id1 = none = -1; /* FAKEMATCH: see `none` */
                    func_802734EC(*cur, 2.0f, 2.0f, 2.0f);
                } else if (partFlags == id2) {
                    id2 = -1;
                    func_802734EC(*cur, 2.0f, 2.0f, 2.0f);
                } else if (partFlags == id3) {
                    id3 = none; /* FAKEMATCH: see `none` */
                    func_802734EC(*cur, 2.0f, 2.0f, 2.0f);
                } else if (partFlags == id4) {
                    id4 = -1;
                    func_802734EC(*cur, 3.0f, 3.0f, 3.0f);
                }
                if (scaled) {
                    func_8027302C(m, *cur);
                    func_802734EC(m, scale.x, scale.y, scale.z);
                    packMtx(out, m);
                } else {
                    packMtx(out, *cur);
                }
            }
            dt = func_802C1FF0() - D_80104530.start;
            if (D_800D2978 != D_80104530.frame) {
                f32 last = D_80104530.cur;
                s32 n = D_80104530.count;

                D_80104530.frame = D_800D2978;
                D_80104530.cur = 0.0f;
                D_80104530.count = 0;
                D_80104530.prev = last;
                D_80104530.prevCount = n;
                D_80104530.avg = D_80104530.avg * 0.97f + last * 0.03f;
            }
            D_80104530.cur += (f32)(((u64)dt * 64) / 3000);
            D_80104530.count++;
            if (f.blend) {
                func_802624C8(animB);
            }
            func_802624C8(animA);
            switch (kind) {
                case 4:
                    actor->unk70 = actor->model->unk38;
                    break;
                case 1:
                case 11: {
                    f32 h = func_8024D274(actor);

                    actor->unk70 = mtx[1][3][1] * (1.0f / 65536.0f) - actor->pos.y - h * 0.5f;
                    if (actor->unk70 < 0.0f) {
                        actor->unk70 = 0.0f;
                    }
                    if ((actor->flags & 0x20000000) && actor->surface != NULL && (actor->surface->unk2 & 0x40)) {
                        f32 ground = func_802752CC(actor->surface, actor->pos.x, actor->pos.z);
                        f32 d = actor->pos.y + actor->unk70 + h;

                        d -= ground;

                        if (d > 0.0f) {
                            mtx[1][3][1] -= d * 65536.0f;
                            actor->unk70 -= d;
                        }
                    }
                    break;
                }
                default:
                    actor->unk70 = 0.0f;
                    break;
            }
            if (actor->unk2E0 != 0) {
                s32 bit = 1 << actor->unk1;

                if (actor->part.unkC & bit) {
                    Shared_PosePartTable *table = func_8028FD94(arg1, 3);
                    s32 n = table->count;

                    if (n != 0) {
                        u8 *data = table->data;

                        func_8026E5E0(data, n, &mtx[1], actor, func_8028FD94(arg1, 5));
                    }
                }
            }
            if (actor->unk13B) {
                func_802A67D0(&D_8013BA80, actor, &mtx[1]);
            }
            if (!(actor->flags & 8)) {
                pos = actor->pos;
                pos.y += actor->unk70;
                pos.y += func_8024D274(actor) * 0.5f;
                func_8028C6B0(&D_8011FE88, &pos, actor->unk140[D_800D297C]);
            }
            ret = 1;
            actor->flags |= 0x200;
        }
        func_802536F4(0, mem);
    }
    if (!ret) {
        actor->handle = 0;
    }
    return ret;
}
