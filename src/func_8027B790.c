#include "basetypes.h"
#include "../include/shared/player.h"
#include "../include/shared/particle.h"

/* Updates a particle for one frame: halves the frame step for particles owned by a slowed object, measures its bounding
 * box, kills it or bounces it off its target when its type's rule says so (the German cartridge has a gentler rule
 * table), advances its spin and size (growing towards a capped target size, or dying when a size goes negative), lets
 * nearby players react to it, and when it moves or falls probes the ground through func_80243A80, orients itself to the
 * surface it hit and runs the collision responses its descriptor allows. D_800D2988 (the frame step) is restored on
 * every exit after the early time check. */

#define MIN(a, b) ((a) > (b) ? (b) : (a))

extern f32 D_800D2988;
extern f32 D_800D2990;
extern Shared_CollisionResult *D_80103FCC;
extern Shared_CollisionResult D_801041F0;
extern char D_80121990;
extern SharedPlayer *D_80145060;

s32 func_80243A80(Shared_Particle *particle, Vec3 pos, s32 *flags);
f32 func_8024D274(SharedPlayer *player);
void func_80271FD8(Vec3 *normal, Vec3 *pos, void *surface);
void func_802720EC(Vec3 *v);
f32 func_8027272C(Vec3 *a, Vec3 *b);
s32 func_80274544(void);
void func_8027ADBC(Shared_Particle *particle);
void func_8027B498(Shared_Particle *particle);
void func_8027C324(Shared_Particle *particle);
void func_8027C5A0(Shared_Particle *particle);
void func_8027C808(Shared_Particle *particle);
void func_8027CA7C(Shared_Particle *particle);
#if defined(VERSION_DE)
void func_8027CC20(Shared_Particle *particle);
#else
void func_8027CCD0(Shared_Particle *particle);
#endif
void func_8027D47C(Shared_Particle *particle);
void func_80282E6C(Shared_Particle *particle, SharedPlayer *player);
void func_80283E2C(Shared_Particle *particle);
void func_80283F34(Shared_Particle *particle);
void func_80284200(Shared_Particle *particle);
void func_80284408(Shared_Particle *particle);
void func_80284544(void *list, Shared_Particle *particle);

/* Squared distance from the particle to a player's position, raised by half the player's height unless the particle
 * is type 0x40F. */
static inline f32 func_8027B790_distance(Shared_Particle *particle, SharedPlayer *player) {
    Vec3 pos;

    pos = player->views0.view8_3.pos;
    if (particle->inst.type != 0x40F) {
        pos.y += func_8024D274(player) * 0.5f;
    }
    return func_8027272C(&particle->inst.pos, &pos);
}

void func_8027B790(Shared_Particle *particle) {
    Shared_Bounds bounds;
    Shared_ParticleOwner *owner;
    Shared_ParticleTarget *target;
    SharedPlayer *player;
    f32 savedStep;
    f32 extent;
    f32 scaled; /* FAKEMATCH: one temporary holds the larger scaled size and then the box height; separate locals let local-alloc tie the constants to the products and pick other FPRs. */
    f32 half; /* FAKEMATCH: the box half-size temporary is reused for the fade below for the same reason. */
    f32 step;
    f32 grow;
    f32 range;
    s32 die;
    s32 bounce;
    s32 done;
    s8 fade;

    owner = particle->owner;
    savedStep = D_800D2988;
    if (particle->time < 0.0f) {
        return;
    }
    if (owner != NULL && owner->kind == 1 && (owner->flags & 0x300000) && owner->state != NULL &&
        (owner->state->flags & 0x2000)) {
        D_800D2988 = savedStep * 0.25f;
    }

    extent = particle->size.z;
    scaled = particle->size.y * extent;
    if (!(particle->size.x * extent <= scaled)) {
        scaled = particle->size.x * extent;
    }
    if (!(scaled <= extent)) {
        extent = scaled;
    }
    scaled = extent * 1.4142135f;
    half = scaled * 0.5f;
    bounds.min.x = particle->inst.pos.x - half;
    bounds.max.x = particle->inst.pos.x + half;
    bounds.min.y = particle->inst.pos.y - half;
    bounds.max.y = particle->inst.pos.y + scaled;
    bounds.min.z = particle->inst.pos.z - half;
    bounds.max.z = particle->inst.pos.z + half;

    if (particle->flags & 0x20000) {
        particle->time = 0.0f;
        particle->life = particle->unk148 * 32.0f;
        half = particle->unk1D1 - D_800D2988 * 6.0f;
        fade = (half < 0.0f) ? 0 : (s32)half;
        particle->unk1D1 = fade;
    }

    if (particle->flags & 0x10000) {
        target = particle->target;
        switch (particle->inst.type) {
            default:
                particle->time = 0.0f;
                particle->life = particle->unk148 * 32.0f;
            case 0x2D:
            case 0x4F:
                die = 0;
                break;
            case 0xB:
            case 0x41E:
                die = 0;
                break;
        }
        bounce = die;
        switch (particle->inst.type) {
#if defined(VERSION_DE)
            case 0x12A:
            case 0x132:
                die = 0;
                bounce = 1;
                break;
            case 2:
            case 0x111:
            case 0x3F5:
                bounce = 1;
            case 0x41E:
                die = 0;
                break;
            case 0xF:
            case 0x56:
            case 0x126:
                die = 1;
                bounce = 0;
                break;
#else
            case 0x12A:
            case 0x132:
                die = 0;
                if (target->unk174 == 0) {
                    bounce = 1;
                }
                break;
            case 2:
            case 0xF:
            case 0x56:
            case 0x111:
            case 0x126:
            case 0x3F5:
                if (particle->flags & 0x4000000) {
                    die = 1;
                } else if (!(target->flags & 0x100)) {
                    die = 1;
                } else if (target->flags & 0x300000) {
                    die = (f32)target->unk174 <= 0.0f;
                } else {
                    die = target->unk170 & 0x20;
                }
                bounce = 0;
                break;
#endif
            case 0xB:
                die = 0;
                if (target->unk1A4 != 0x21 || !(target->flags & 0x100)) {
                    bounce = 1;
                }
                break;
            case 4:
                die = 0;
                if (target->unk1A4 != 0x20 || !(target->flags & 0x100)) {
                    bounce = 1;
                }
                break;
            case 0x2D:
            case 0x4F:
                bounce = !(target->flags & 0x100);
                break;
#if !defined(VERSION_DE)
            case 0x41E:
                die = 0;
                break;
#endif
            default:
                bounce = die = 0;
                particle->flags &= ~0x10000;
                break;
        }
        if (die || bounce) {
            particle->time = 0.0f;
            particle->unk1D0 = -7;
            particle->flags = (particle->flags & ~0x30000) | 0x40000;
            particle->rot.z = (f32)(func_80274544() % 360) * 0.017453294f;
            particle->inst.velocity.y = 0.0f;
            if (particle->flags & 0x4000000) {
                particle->inst.velocity.x = -particle->unk174.x;
                particle->inst.velocity.z = -particle->unk174.z;
            } else {
                particle->inst.velocity.x = 0.0f;
                particle->inst.velocity.z = 0.0f;
            }
            particle->inst.unk14 = 0;
            particle->unk1B4 &= ~0x4000;
            if (bounce) {
                particle->life = 1;
            }
        }
    }

    if (particle->flags & 0x40000) {
        if (func_80243A80(particle, particle->inst.pos, &particle->unk1B4) && D_801041F0.unkB4 != 0) {
            particle->unk1D0 = -3;
        }
        if (particle->inst.unk38 & 0x1000) {
            particle->flags |= 4;
        } else {
            particle->flags &= ~4;
        }
    }

    particle->prevPos = particle->inst.pos;
    particle->frame += D_800D2988 * particle->unk148 * (D_800D2990 * 0.06666667f);

    if (particle->desc->flags & 0x1000) {
        step = D_800D2988 * 10.24f;
        particle->size.x += step * particle->growth.x;
        particle->size.y += step * particle->growth.y;
        particle->size.z += D_800D2988 * particle->growth.z;
        particle->size.x = (particle->size.x > 4096.0f) ? 4096.0f : particle->size.x;
        particle->size.y = (particle->size.y > 4096.0f) ? 4096.0f : particle->size.y;
        particle->size.z = (particle->size.z > 400.0f) ? 400.0f : particle->size.z;
    } else {
        grow = MIN(particle->size.x * particle->growth.x, 4096.0f);
        particle->size.x += (grow - particle->size.x) * D_800D2988;
        grow = MIN(particle->size.y * particle->growth.y, 4096.0f);
        particle->size.y += (grow - particle->size.y) * D_800D2988;
        grow = MIN(particle->size.z * particle->growth.z, 400.0f);
        particle->size.z += (grow - particle->size.z) * D_800D2988;
        if (particle->size.x < 0.0f || particle->size.y < 0.0f || particle->size.z < 0.0f) {
            func_80283F34(particle);
            func_80284544(&D_80121990, particle);
            func_80284408(particle);
            D_800D2988 = savedStep;
            return;
        }
    }

    particle->rot.x += particle->rotSpeed.x * D_800D2988;
    particle->rot.y += particle->rotSpeed.y * D_800D2988;
    particle->rot.z += particle->rotSpeed.z * D_800D2988;
    D_80103FCC->unkD8 = particle->inst.velocity;
    func_80283E2C(particle);

    range = particle->desc->unk10;
    if (!(range <= 0.0f)) {
        range *= 10.24f;
        range *= range;
        for (player = D_80145060; player != NULL;) {
            done = 0;
            if (func_8027B790_distance(particle, player) < range) {
                func_80282E6C(particle, player);
                if (particle->inst.type == 0x40F) {
                    done = 1;
                }
            }
            if (done) {
                player = NULL;
            } else {
                player = player->views16E0.view16E0_1.next;
            }
        }
    }

    func_8027ADBC(particle);

    if ((particle->unk1BC == 0.0f || (particle->inst.pos.y == 0.0f && particle->unk1BC < 0.0f)) &&
        particle->inst.velocity.x * particle->inst.velocity.x + particle->inst.velocity.y * particle->inst.velocity.y +
                particle->inst.velocity.z * particle->inst.velocity.z <
            0.001f) {
        D_800D2988 = savedStep;
        return;
    }

    if (!(particle->flags & 0x72000)) {
        die = func_80243A80(particle, particle->inst.pos, &particle->unk1B4);
        if (particle->inst.unk38 & 0x1000) {
            particle->flags |= 4;
        } else {
            particle->flags &= ~4;
        }
        if (particle->inst.type == 0x68 && D_801041F0.unk0 != NULL) {
            particle->target = (Shared_ParticleTarget *)D_801041F0.unk0;
        }
        if (die) {
            if (D_801041F0.unk0 != NULL) {
                func_80271FD8(&particle->unk174, &particle->inst.pos, D_801041F0.unk8);
            } else if (D_801041F0.unk88 != 0) {
                func_80271FD8(&particle->unk174, &particle->inst.pos, D_801041F0.unk90);
            } else if (D_801041F0.unk9C != 0) {
                func_80271FD8(&particle->unk174, &particle->inst.pos, D_801041F0.unkA0);
            } else if (D_801041F0.unkB4 != 0) {
                func_80271FD8(&particle->unk174, &particle->inst.pos, D_801041F0.unkB8);
                if (particle->unk1D0 == -7) {
                    particle->unk1D0 = -3;
                }
            } else if (D_801041F0.unkC4 != 0) {
                func_80271FD8(&particle->unk174, &particle->inst.pos, D_801041F0.unkC8);
            }
            func_802720EC(&particle->unk174);
        }
        func_8027B498(particle);
        if (D_801041F0.unkC4 != 0) {
            func_8027C5A0(particle);
        }
        if (particle->flags & 0x100) {
            if (D_801041F0.unk9C != 0) {
                if (!(particle->desc->flags & 0x10000000)) {
                    func_8027C324(particle);
                }
                if (particle->desc->flags & 0x800) {
                    particle->unk1B9 = 1;
                }
            }
            if (particle->flags & 0x100) {
                if (D_801041F0.unk0 != NULL) {
                    if ((particle->unk1B4 & 0x4000) && *D_801041F0.unk0 == 0) {
                        func_8027D47C(particle);
                    } else {
#if defined(VERSION_DE)
                        func_8027CC20(particle);
#else
                        func_8027CCD0(particle);
#endif
                    }
                    if (particle->desc->flags & 0x800) {
                        particle->unk1B9 = 1;
                    }
                }
                if ((particle->flags & 0x100) && D_801041F0.unkB0 != 0 && !(particle->desc->flags & 0x20000000)) {
                    if (D_801041F0.unkB0 == 1) {
                        func_8027C808(particle);
                    } else {
                        func_8027CA7C(particle);
                    }
                }
            }
        }
    }
    if ((particle->flags & 0x8100) == 0x100) {
        func_80284200(particle);
    }
    D_800D2988 = savedStep;
}
