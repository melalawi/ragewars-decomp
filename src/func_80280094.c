/* Spawns the effects that template block 2 of the system lists for a kind: for each template in the kind's range it filters by player mask, existing owner effects, anchor distance, mode, team flags and a percent chance, builds a spawn matrix (source matrix, mirror, translation or rotation), then for a random count allocates effects, fills their timing, spread, colour, render and direction fields from the template's packed floats, links them into their group, aims shots at the held target for kinds 0x2D and 0x4F, and plays their sound. Returns the number spawned. */
#include "basetypes.h"
#include "rw_effect_spawn.h"
#include "shared/globalruntimestate.h"

extern Shared_GlobalRuntimeState D_80145060;
extern EffectTarget *D_80103FCC;
extern EffectTarget D_801041F0;
extern EffectRender D_80104090;
extern EffectVec3 D_801042C8;
extern EffectVec3 D_801042E0;
extern void *D_801450A8;
extern s32 D_801450B8;
extern u8 D_801462E3;
extern u8 D_801462E5;
extern s32 D_800D297C;
extern EffectModelInfo D_800D1384[];
extern f32 D_800D2900;
extern f32 D_800D2904;
extern char D_8013BA80;
extern char D_8013B1A8;

extern EffectBlock *func_8028FD94(s32, s32);
extern s32 func_80265570(EffectEntry *, s32, s32, s32 *, s32 *);
extern void func_80271FD8(EffectVec3 *, EffectVec3 *, EffectVec3 *);
extern void func_80271FA4(EffectVec3 *, EffectVec3 *, EffectVec3 *);
extern void func_8027200C(EffectVec3 *, EffectVec3 *, f32);
extern void func_802720EC(EffectVec3 *);
extern void func_80272908(EffectMtx *, EffectVec3 *, EffectVec3 *);
extern void func_80272BA8(EffectMtx *, EffectVec3 *, EffectVec3 *);
extern void func_80272D20(EffectMtx *, f32, f32, f32);
extern void func_80272CD0(EffectMtx *, f32, f32, f32);
extern void func_80272848(EffectMtx *);
extern void func_802742B4(EffectQuat *, EffectMtx *);
extern void func_8024D49C(EffectQuat *, EffectActor *, EffectVec3);
extern void func_80273208(EffectMtx *, EffectVec3 *);
extern void func_80270980(EffectMtx *, EffectMtx *);
extern void func_8026EFC8(EffectMtx *, EffectMtx *);
extern void func_802734EC(EffectMtx *, f32, f32, f32);
extern void func_802734B8(EffectMtx *, f32, f32, f32);
extern void func_8027DD1C(EffectActor *, EffectMtx *, void *, f32);
extern s32 func_80274544(void);
extern void func_80284544(EffectSystem *, Effect *);
extern void func_80255E78(EffectList *, Effect *);
extern void func_80255C58(EffectList *, Effect *);
extern void func_80255CB4(EffectList *, Effect *);
extern void func_80255D10(EffectList *, Effect *, Effect *);
extern void func_80296DDC(u32 *, s32);
extern void func_80246174(Effect *);
extern f32 func_80285600(PackedF);
extern f32 func_802B2350(u16);
extern void func_8022B030(s32, Effect *);
extern void func_8027DAA4(Effect *, s32, s32);
extern void func_802A5588(void *, Effect *, s32);
extern s32 func_80268BE0(void *, s32);
extern void func_8028438C(Effect *, s32);
extern void func_8025DE74(s32, f32, f32, f32, s32, s32);
extern void func_80276620(s8, u8, u8, u8, u8 *, u8 *, u8 *);
extern void func_802769D8(u8, u8, u8, u8, u8 *, u8 *, u8 *);
extern void func_80276BB4(u8, u8, u8, u8, u8 *, u8 *, u8 *);

/* FAKEMATCH: the original unit shared one constant section with func_8027ED40, whose 2^31 literal sits at
 * 0x800C9EF0 just before this function's literals. Built alone, this unit's jump table alignment would pad
 * the gap, so the neighbour's word is restated here to keep the section on its original 8-byte grid. */
const u32 func_80280094_neighbourLiteral = 0x4F000000;

static inline s32 func_80280094_rand(s32 range) {
    return range != 0 ? func_80274544() % (range + 1) : 0;
}

static inline Effect *func_80280094_find(EffectList *list, void *ownerId, EffectEntry *entry) {
    Effect *effect;

    effect = list->head;
    if (entry != NULL) {
        for (; effect != NULL; effect = effect->next) {
            if (effect->ownerId == ownerId && effect->entry == entry) {
                return effect;
            }
        }
    } else {
        for (; effect != NULL; effect = effect->next) {
            if (effect->ownerId == ownerId) {
                return effect;
            }
        }
    }
    return NULL;
}

static inline Effect *func_80280094_alloc(EffectSystem *sys, u8 index) {
    Effect *effect;
    EffectList *list;
    s32 i;

    if (sys->free.head == NULL) {
        for (i = 0; i <= index; i++) {
            if ((&sys->lists[i])->tail != NULL) {
                func_80284544(sys, (&sys->lists[i])->tail);
                break;
            }
        }
    }
    effect = sys->free.head;
    if (effect == NULL) {
        return NULL;
    }
    func_80255E78(&sys->free, effect);
    list = &sys->lists[index];
    func_80255C58(list, effect);
    effect->list = list;
    effect->groupNext = NULL;
    effect->unk1F0 = 0;
    effect->flags = 0x100;
    return effect;
}

static inline void func_80280094_aim(Effect *effect, EffectTarget *aimTarget, EffectVec3 *vel, s32 sourceType) {
    EffectMtx targetMtx;
    EffectMtx targetInv;
    EffectVec3 up;
    EffectActor *targetActor;
    s32 targetTeam;

    if (aimTarget->matrixIndex != -1) {
        effect->mode = -4;
        targetActor = D_801041F0.actor;
        targetTeam = aimTarget->unk7E;
        func_80270980(&targetMtx, &targetActor->u60.link.matrixArray[D_801041F0.matrixIndex]);
        func_8026EFC8(&targetInv, &targetMtx);
        func_80272908(&targetInv, &aimTarget->pos, &effect->unk50);
        up = D_801042C8;
        func_802720EC(&up);
        func_80272BA8(&targetInv, &up, vel);
        effect->unk134 = (s32) targetActor;
        effect->flags |= 0x10000;
        effect->unk1D1 = D_801041F0.matrixIndex;
        if (effect->kind == 0x56 && targetTeam == sourceType) {
            effect->flags |= 0x4000000;
        }
    }
}

s32 func_80280094(EffectSystem *sys, EffectActor *source, EffectActor *owner, s32 *refCount, s32 arg4, s32 kind,
                  EffectVec3 arg6, EffectQuat rotation, EffectVec3 pos, EffectVec3 *aim, s32 arg10, s32 arg11) {
    EffectMtx mtx;
    EffectVec3 dir;
    EffectVec3 dirOut;
    EffectVec3 offset;
    EffectVec3 offsetOut;
    EffectVec3 delta;
    EffectQuat quat;
    EffectTarget target;
    EffectVec3 aimDelta;
    s32 first;
    s32 last;
    u8 h, sv, v;
    u8 r, g, b;
    u8 r0, g0, b0;
    u8 r1, g1, b1;
    s32 count;
    s32 j;
    s32 n;
    s32 mode;
    s32 i;
    EffectActor *anchor;
    void *ownerId;
    s32 extra;
    s32 life;
    s32 layer;
    s32 ok;
    s32 hue;
    u8 sat;
    u8 val;
    s32 spread;
    u32 *bits;
    u8 mask;
    s32 resource;
    EffectBlock *block;
    s32 numEntries;
    EffectEntry *entries;
    EffectEntry *entry;
    Effect *effect;
    EffectRender *render;
    EffectVec3 *vel;
    EffectTarget *aimTarget;
    void *camera;
    f32 distSq;
    f32 scale;
    f32 depth;
    s32 sourceType;
    s32 sound;

    if (D_80145060.frozen != 0) {
        return 0;
    }
    count = 0;
    resource = sys->resource;
    D_80103FCC = &target;
    sys->last = NULL;
    block = func_8028FD94(resource, 1);
    numEntries = block->count;
    if (func_80265570(block->entries, numEntries, kind, &first, &last) != 0) {
        entries = func_8028FD94(resource, 2)->entries;
        anchor = NULL;
        if (D_80145060.actorList != NULL) {
            anchor = D_80145060.actorList;
        }
        ownerId = NULL;
        if (owner != NULL) {
            switch (owner->type) {
                case 1:
                case 2:
                    ownerId = owner;
                    break;
                case 0:
                    ownerId = owner->u60.link.owner;
                    owner = NULL;
                    break;
            }
        }
        mask = 1;
        if (D_801462E5 != 0) {
            mask = 2;
        }
        for (i = first; i <= last; i++) {
            entry = &entries[i];
            ok = (entry->playerMask & mask) != 0;
            if ((entry->flags & 0x80) && ownerId != NULL) {
                if (func_80280094_find(&sys->lists[entry->params->listIndex], ownerId, entry) != NULL) {
                    ok = 0;
                }
            }
            if (anchor != NULL) {
                func_80271FD8(&delta, &pos, &anchor->pos);
            } else {
                delta.x = delta.y = delta.z = 0.0f;
            }
            distSq = delta.x * delta.x + delta.y * delta.y + delta.z * delta.z;
            if (entry->flags & 0x400000) {
                if (262144.0f <= distSq) {
                    ok = 0;
                }
            } else if (entry->flags & 0x200000) {
                if (distSq <= 262144.0f) {
                    ok = 0;
                }
            }
            switch (entry->params->unkE) {
                case 6:
                    mode = -7;
                    break;
                case 5:
                    mode = -6;
                    break;
                case 0:
                    mode = -4;
                    break;
                case 1:
                    mode = -5;
                    break;
                default:
                    switch (arg10) {
                        case -5:
                        case -3:
                        case -2:
                            mode = arg10;
                            break;
                        default:
                            mode = -3;
                            break;
                    }
                    break;
                case 3:
                    if (0.0f <= (f32) arg10) {
                        mode = arg10;
                    } else {
                        ok = 0;
                        mode = 0;
                    }
                    break;
                case 4:
                    if (source->type == 2 && source->unk1D0 == -8) {
                        arg10 = -8;
                        D_801042E0 = source->unk174;
                    }
                    mode = arg10;
                    break;
            }
            if (entry->flags & 0x2000000) {
                if (D_801462E3 == 0 || !(arg11 & 1)) {
                    ok = 0;
                }
            }
            if (entry->flags & 0x4000000) {
                if (D_801462E3 != 0) {
                    ok = 0;
                }
            }
            if (entry->params->chance != 100) {
                if (func_80274544() % 1000 + 1 > entry->params->chance * 10) {
                    ok = 0;
                }
            }
            if (!ok) {
                continue;
            }
            extra = 0;
            if (entry->flags & 0x8000) {
                switch (source->type) {
                    case 2:
                        if (!(source->flags & 0x100000)) {
                            if (D_801450B8 == 1) {
                                camera = D_801450A8;
                                func_80272908((EffectMtx *) ((u8 *) camera + 0x220), &source->pos, &aimDelta);
                                depth = aimDelta.z;
                                if (depth < 0.0f) {
                                    depth = -depth;
                                }
                                func_8027DD1C(source, &source->u60.matrices[D_800D297C], camera, depth);
                            } else {
                                func_8027DD1C(source, &source->u60.matrices[D_800D297C], NULL, 0.0f);
                            }
                            source->flags |= 0x100000;
                        }
                        func_80270980(&mtx, &source->u60.matrices[D_800D297C]);
                        scale = 0.09765625f;
                        if (source->model->unk14 != 0) {
                            scale = 2.857143f;
                        }
                        func_802734EC(&mtx, scale, scale, scale);
                        if (source->model->flags & 8) {
                            func_802734B8(&mtx, 0.0f, -source->unk154 * source->unk158, 0.0f);
                        }
                        break;
                    case 1:
                        extra = 0x400000;
                        func_80272D20(&mtx, -1.0f, 1.0f, -1.0f);
                        break;
                    default:
                        func_80272CD0(&mtx, source->pos.x, source->pos.y, source->pos.z);
                        break;
                }
            } else if (entry->flags & 0x1000000) {
                func_80272848(&mtx);
            } else {
                if (entry->flags & 0x40000) {
                    func_8024D49C(&quat, owner, pos);
                } else {
                    quat = rotation;
                }
                func_802742B4(&quat, &mtx);
            }
            n = entry->params->countBase + func_80280094_rand(entry->params->countRange);
            for (j = 0; j < n; j++) {
                life = entry->params->lifeBase + func_80280094_rand(entry->params->lifeRange);
                if (life == 0) {
                    continue;
                }
                effect = func_80280094_alloc(sys, entry->params->listIndex);
                if (effect == NULL) {
                    break;
                }
                count++;
                func_80296DDC(&effect->unk11C, entry->unk4);
                func_80246174(effect);
                effect->unk110 = 0;
                effect->unk114 = 0;
                effect->kind = kind;
                effect->entry = entry;
                effect->mode = mode;
                if (source->type == 2) {
                    effect->source = source;
                } else {
                    effect->source = NULL;
                }
                effect->ownerId = ownerId;
                effect->owner = owner;
                effect->refCount = refCount;
                if (refCount != NULL) {
                    (*refCount)++;
                }
                effect->unk134 = arg4;
                effect->unk13C = 0;
                effect->flags = (effect->flags & ~0xE600) | (arg11 | extra);
                bits = &effect->unk11C;
                layer = 0;
                if (effect->entry->flags & 0x2000000) {
                    if (effect->flags & 2) {
                        layer = 2;
                    } else if (D_801462E3 == 2) {
                        layer = 1;
                    }
                }
                *bits |= layer << 30;
                effect->unk1D9 = 0;
                spread = entry->params->unkD;
                if (spread < 0) {
                    effect->unk140 = spread;
                } else {
                    effect->unk140 = -(f32) func_80280094_rand(spread);
                }
                effect->unk19C[0] = func_80285600(entry->unk2C[2]) * 6.2831855f;
                effect->unk19C[2] = func_80285600(entry->unk2C[1]) * 0.41887906f;
                effect->unk19C[4] = func_80285600(entry->unk2C[0]);
                effect->unk19C[1] = func_80285600(entry->unk2C[5]) * 6.2831855f;
                effect->unk19C[3] = func_80285600(entry->unk2C[4]) * 0.41887906f;
                effect->unk19C[5] = func_80285600(entry->unk2C[3]);
                if (entry->flags & 2) {
                    effect->unk144 = func_80280094_rand(life);
                } else {
                    effect->unk144 = 0.0f;
                }
                effect->unk148 = entry->params->unkB;
                effect->life = life;
                effect->unk14E = 0;
                effect->unk14F = -1;
                if (aim == NULL) {
                    dir.x = func_80285600(entry->direction[0]);
                    dir.y = func_80285600(entry->direction[1]);
                    dir.z = func_80285600(entry->direction[2]);
                    func_802720EC(&dir);
                    if (dir.x != 0.0f || dir.y != 0.0f || dir.z != 0.0f) {
                        func_80272908(&mtx, &dir, &dirOut);
                    } else {
                        dirOut = dir;
                    }
                    if (mode == -8) {
                        effect->direction = D_801042E0;
                        func_802720EC(&effect->direction);
                    } else {
                        effect->direction = dirOut;
                    }
                }
                effect->unk150[0] = func_80285600(entry->unk24[0]);
                effect->unk150[1] = func_80285600(entry->unk24[2]);
                effect->unk150[2] = func_80285600(entry->unk24[4]);
                effect->unk150[3] = func_80285600(entry->unk24[1]);
                effect->unk150[4] = func_80285600(entry->unk24[3]);
                effect->unk150[5] = func_80285600(entry->unk24[5]);
                if (entry->unk14 != 0) {
                    effect->unk180[0] = func_80285600(entry->unk20[0]);
                    effect->unk180[1] = func_80285600(entry->unk20[2]);
                    effect->unk180[2] = func_80285600(entry->unk20[4]);
                    effect->unk180[3] = func_80285600(entry->unk20[1]);
                    effect->unk180[4] = func_80285600(entry->unk20[3]);
                    effect->unk180[5] = func_80285600(entry->unk20[5]);
                } else {
                    effect->unk180[0] = func_80285600(entry->unk20[0]);
                    effect->unk180[1] = func_80285600(entry->unk20[2]);
                    effect->unk180[2] = func_80285600(entry->unk20[4]);
                    effect->unk180[3] = func_80285600(entry->unk20[1]);
                    effect->unk180[4] = func_80285600(entry->unk20[3]);
                    effect->unk180[5] = func_80285600(entry->unk20[5]);
                }
                if ((entry->flags & 0x80000) && entry->unk8 == 1) {
                    effect->unk1D8 = 0;
                    effect->alpha = 0.0f;
                } else {
                    effect->unk1D8 = 0xFF;
                    effect->alpha = 255.0f;
                }
                effect->unk14 = 0;
                effect->pos = pos;
                offset.x = func_80285600(entry->offset[0]);
                offset.y = func_80285600(entry->offset[1]);
                offset.z = func_80285600(entry->offset[2]);
                if (offset.x != 0.0f || offset.y != 0.0f || offset.z != 0.0f) {
                    func_80272908(&mtx, &offset, &offsetOut);
                    if (!(entry->flags & 0x8000)) {
                        func_80271FA4(&offsetOut, &pos, &offsetOut);
                    }
                    effect->pos = offsetOut;
                }
                if (aim != NULL) {
                    func_80271FD8(&aimDelta, aim, &effect->pos);
                    func_802720EC(&aimDelta);
                    func_80273208(&mtx, &aimDelta);
                    if (mode == -8) {
                        effect->direction = D_801042E0;
                        func_802720EC(&effect->direction);
                    } else {
                        dir.x = func_80285600(entry->direction[0]);
                        dir.y = func_80285600(entry->direction[1]);
                        dir.z = func_80285600(entry->direction[2]);
                        func_802720EC(&dir);
                        if (dir.x != 0.0f || dir.y != 0.0f || dir.z != 0.0f) {
                            func_80272908(&mtx, &dir, &dirOut);
                        } else {
                            dirOut = dir;
                        }
                        effect->direction = dirOut;
                    }
                }
                effect->unk168 = effect->pos;
                effect->unk50 = effect->pos;
                func_8027200C(&effect->velocity, &dirOut, func_80285600(entry->motion->speed));
                if (entry->flags & 0x20) {
                    func_80271FA4(&effect->velocity, &effect->velocity, &arg6);
                }
                hue = 0;
                if (entry->color->hueRange != 0) {
                    hue = func_80274544() % (entry->color->hueRange * 2) - (u8) entry->color->hueRange;
                }
                sat = entry->color->unkD != 0 ? func_80274544() % entry->color->unkD : 0;
                val = entry->color->unkE != 0 ? func_80274544() % entry->color->unkE : 0;
                r = entry->color->rgb0[0];
                g = entry->color->rgb0[1];
                b = entry->color->rgb0[2];
                func_80276620(hue, r, g, b, &h, &sv, &v);
                func_802769D8(sat, h, sv, v, &r, &g, &b);
                func_80276BB4(val, r, g, b, &r0, &g0, &b0);
                r = entry->color->rgb1[0];
                g = entry->color->rgb1[1];
                b = entry->color->rgb1[2];
                func_80276620(hue, r, g, b, &h, &sv, &v);
                func_802769D8(sat, h, sv, v, &r, &g, &b);
                func_80276BB4(val, r, g, b, &r1, &g1, &b1);
                effect->rgb0[0] = r0;
                effect->rgb0[1] = g0;
                effect->rgb0[2] = b0;
                effect->rgb1[0] = r1;
                effect->rgb1[1] = g1;
                effect->rgb1[2] = b1;
                render = &effect->render;
                *render = D_80104090;
                render->unk5 = entry->unkA;
                render->unk4 = entry->unk9;
                render->unk6 = entry->unkB;
                render->unk8 = func_80285600(entry->motion->unk0);
                render->unkC = func_802B2350(entry->motion->unk8);
                render->unk10 = func_802B2350(entry->motion->unkA);
                render->unk14 = func_802B2350(entry->motion->unkC);
                render->unk18 = func_802B2350(entry->motion->unkE);
                if (render->unk5 == 8 || render->unk6 == 8 || render->unk4 == 8) {
                    if (effect->owner != NULL && effect->owner->type == 1 && (effect->owner->unk100 & 0x300000)) {
                        func_8022B030(effect->owner->unk1D8, effect);
                    }
                }
                if (kind == 0x101 || kind == 0x128) {
                    render->flags |= 4;
                }
                if (entry->flags & 0x100000) {
                    render->flags |= 0x40000;
                }
                if (entry->flags & 0x800) {
                    render->flags |= 0x2000;
                }
                if (entry->flags & 0x40000000) {
                    render->flags |= 0x4000;
                }
                if (entry->params->unk5 != 3) {
                    Effect *other;

                    for (other = sys->groups.head; other != NULL; other = other->groupNext) {
                        if (other->entry == effect->entry) {
                            break;
                        }
                    }
                    if (other != NULL) {
                        func_80255D10(&sys->groups, other, effect);
                    } else if (effect->entry->flags & 0x2000) {
                        func_80255C58(&sys->groups, effect);
                    } else {
                        func_80255CB4(&sys->groups, effect);
                    }
                    effect->flags |= 0x1000000;
                }
                if ((D_800D1384[entry->model->unk94].flags & 1) || kind == 0x68) {
                    render->flags |= 0x20000;
                }
                vel = &effect->velocity;
                func_8027200C(vel, vel, D_800D2900);
                if ((kind == 0x2D || kind == 0x4F) && (sourceType = source->type) == 2) {
                    aimTarget = &D_801041F0;
                    if (aimTarget->actor != NULL) {
                        func_80280094_aim(effect, aimTarget, vel, sourceType);
                    }
                }
                effect->unk1E0 = D_800D2904;
                func_8027DAA4(effect, 0, 0);
                if (entry->unk6 != -1) {
                    func_802A5588(&D_8013BA80, effect, entry->unk6);
                }
                if (entry->unk7 != -1) {
                    effect->unk138 = func_80268BE0(&D_8013B1A8, entry->unk7);
                } else {
                    effect->unk138 = 0;
                }
                if (!(effect->flags & 0x200000) && (sound = entry->sound) != 0) {
                    switch (effect->kind) {
                        case 0x22:
                        case 0x5F:
                        case 0x60:
                            func_8028438C(effect, sound);
                            break;
                        default:
                            func_8025DE74(sound, effect->pos.x, effect->pos.y, effect->pos.z, 0, -1);
                            break;
                    }
                }
                sys->last = effect;
            }
        }
    }
    D_80103FCC = &D_801041F0;
    return count;
}
