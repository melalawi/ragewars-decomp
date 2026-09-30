#include "../splat/types/shared/heightbonuses.h"
#include "../splat/types/shared/_struct_d_800d34c0_0x18.h"
#include "../splat/types/shared/spawnposition.h"
#include "../splat/types/shared/actorpositionview.h"
#include "../splat/types/shared/floatposition.h"
#include "../splat/types/shared/actorfloatpositionview.h"
#include "../splat/types/shared/controlview.h"
#include "../splat/types/shared/projectileview.h"
#include "../splat/types/shared/playersettingsview.h"
#include "../splat/types/shared/playersettingsrecord.h"
#include "../splat/types/shared/modelview.h"
#include "../splat/types/shared/specialobjectview.h"
#include "../splat/types/shared/actorview.h"
#include "../splat/types/shared/motionvector.h"
#include "../splat/types/shared/motionoutput.h"
#include "../splat/types/shared/globalplayers.h"
#include "../splat/types/shared/globalflowstate.h"
#include "../splat/types/shared/globalruntimestate.h"
/* Update player state, effects, projectiles, and linked actors according to control input and world transitions. */
#define NULL ((void *)0)
typedef Shared_HeightBonuses HeightBonuses;
#if defined(VERSION_US_REV1)
extern HeightBonuses D_800C7458;
extern const float D_800C7460;
extern const float D_800C7464;
#define SPAWN_HEIGHT_BONUS D_800C7458.spawn
#define PROJECTILE_HEIGHT_BONUS D_800C7458.projectile
#define MOTION_CENTER D_800C7460
#define GROUND_THRESHOLD D_800C7464
#elif defined(VERSION_US)
extern HeightBonuses D_800C2298;
extern const float D_800C22A0;
extern const float D_800C22A4;
#define SPAWN_HEIGHT_BONUS D_800C2298.spawn
#define PROJECTILE_HEIGHT_BONUS D_800C2298.projectile
#define MOTION_CENTER D_800C22A0
#define GROUND_THRESHOLD D_800C22A4
#elif defined(VERSION_DE)
extern HeightBonuses D_800C2368;
extern const float D_800C2370;
extern const float D_800C2374;
#define SPAWN_HEIGHT_BONUS D_800C2368.spawn
#define PROJECTILE_HEIGHT_BONUS D_800C2368.projectile
#define MOTION_CENTER D_800C2370
#define GROUND_THRESHOLD D_800C2374
#endif
                                                  /* size = 0x18 */

typedef Shared_SpawnPosition SpawnPosition;
typedef Shared_ActorPositionView ActorPositionView;
typedef Shared_FloatPosition FloatPosition;
typedef Shared_ActorFloatPositionView ActorFloatPositionView;
typedef Shared_ControlView ControlView;
typedef Shared_ProjectileView ProjectileView;
typedef Shared_PlayerSettingsView PlayerSettingsView;
typedef Shared_PlayerSettingsRecord PlayerSettingsRecord;
typedef Shared_ModelView ModelView;
typedef Shared_SpecialObjectView SpecialObjectView;
typedef Shared_ActorView ActorView;


typedef Shared_MotionVector MotionVector;
typedef Shared_MotionOutput MotionOutput;

void *func_8020C994();                /* extern */
s32 func_8020CB3C();               /* extern */
s32 func_80214178(void *, void *, s32); /* extern */
s32 func_8021B1E4(); /* extern */
s32 func_802227D0();        /* extern */
s16 func_80229BE0();                 /* extern */
s32 func_8022B520();                      /* extern */
s32 func_80237E70();         /* extern */
void *func_80239760(void *, void *, void *, f32); /* extern */
s32 func_8024795C();               /* extern */
s32 func_8024BE70();                          /* extern */
s32 func_8024E78C(void *, s32, f32, s32, s32 *, s32 *, s32, s32); /* extern */
s32 func_80255C58();              /* extern */
s32 func_80255E78();              /* extern */
s32 func_8025DE74(s16, s32, f32, s32, void *, s32); /* extern */
s32 func_8025DF54();                     /* extern */
s32 func_80264808();                /* extern */
s32 func_80278DE8();   /* extern */
s32 func_80278E74();        /* extern */
s32 func_80280094(s32 *, void *, void *, s32, s32, s32, MotionVector, MotionOutput, FloatPosition, s32, s32, s32); /* extern */
s32 func_8028324C();           /* extern */
s32 func_8028B1F8();              /* extern */
s32 func_8028B874();  /* extern */
s32 func_8028FFB0(s32 *, s32, s32, FloatPosition, SpawnPosition, s32, s32); /* extern */
s32 func_80290528();              /* extern */
s32 func_802A11E8();                       /* extern */
s32 func_80449B44(void *, s8, s32);         /* extern */
s32 func_8044A37C();                      /* extern */
s32 func_8044ACCC();                      /* extern */
#if defined(VERSION_US_REV1)
extern void *jtbl_800C7438[];
#define PLAYER_MODE_JUMPS jtbl_800C7438
#elif defined(VERSION_US)
extern void *jtbl_800C2278[];
#define PLAYER_MODE_JUMPS jtbl_800C2278
#elif defined(VERSION_DE)
extern void *jtbl_800C2348[];
#define PLAYER_MODE_JUMPS jtbl_800C2348
#endif
extern s32 D_8011FE88;
extern s32 D_80121990;
extern s32 D_80131600;
extern s32 D_8013B364;
typedef Shared_GlobalPlayers GlobalPlayers;
extern GlobalPlayers D_80145040;
extern s32 D_80145088;
extern u8 D_801462E5;
extern s32 D_80146398;
typedef Shared_GlobalFlowState GlobalFlowState;

typedef Shared_GlobalRuntimeState GlobalRuntimeState;
extern GlobalRuntimeState D_80145060;
extern s32 D_8014693C;
extern s32 D_800CE474[2];
#if defined(VERSION_US_REV1)
extern s32 D_800CE478[];
#define PLAYER_MODE_TABLE D_800CE478
#elif defined(VERSION_US)
extern s32 D_800CE478[];
#define PLAYER_MODE_TABLE D_800CE478
#elif defined(VERSION_DE)
extern s32 D_800CE478[];
#define PLAYER_MODE_TABLE D_800CE478
#endif
extern struct Shared__struct_D_800D34C0_0x18 D_800D34C0[0x10]; /* unable to generate initializer: non-zero padding; const */
#if defined(VERSION_US_REV1)
extern s32 D_800D70E0[];
#define TRANSITION_VALUE D_800D70E0
#elif defined(VERSION_US)
extern s32 D_800D1D60[];
#define TRANSITION_VALUE D_800D1D60
#elif defined(VERSION_DE)
extern s32 D_800D30B4[];
#define TRANSITION_VALUE D_800D30B4
#endif
#if defined(VERSION_US_REV1)
extern s32 D_800D71E4;
#define RESET_SOUND D_800D71E4
#elif defined(VERSION_US)
extern s32 D_800D1E64;
#define RESET_SOUND D_800D1E64
#elif defined(VERSION_DE)
extern s32 D_800D31B8;
#define RESET_SOUND D_800D31B8
#endif
#if defined(VERSION_US_REV1)
extern void *D_800F7D08;
#define SPECIAL_OBJECT D_800F7D08
#elif defined(VERSION_US)
extern void *D_800F1D08;
#define SPECIAL_OBJECT D_800F1D08
#elif defined(VERSION_DE)
extern void *D_800F3D08;
#define SPECIAL_OBJECT D_800F3D08
#endif


void func_8021B468(ActorView *arg0, void *arg1, s32 arg2, s32 arg3) {
    SpawnPosition spawnPosition;
    FloatPosition spawnVector;
    MotionVector motionVector;
    GlobalPlayers *playersGlobal;
    GlobalFlowState *flow;
    GlobalFlowState *laterFlow;
    MotionOutput motionOutput;
    s32 sp90;
    /* FAKEMATCH: retain the settings base while walking its records. */
    s8 *settingsBase;
    PlayerSettingsRecord *var_s1;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_s0_4;
    s32 temp_v1_9;
    s16 var_a0_4;
    s16 var_a0_5;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0_6;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a2;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s3;
    /* FAKEMATCH: read the current loop limit before advancing the counter. */
    s32 loopLimit;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    struct Shared__struct_D_800D34C0_0x18 *temp_v0_10;
    struct Shared__struct_D_800D34C0_0x18 *temp_v0_4;
    struct Shared__struct_D_800D34C0_0x18 *temp_v0_7;
    u16 temp_v1_3;
    u16 temp_v1_5;
    u32 temp_v1;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_5;
    void *temp_v0;
    void *temp_v1_2;
    void *var_s0;
    void *var_s0_2;

    func_80264808(((ActorView *)arg0)->controller, 0);
    if (((ActorView *)arg0)->action == 0x27) {
        func_802227D0(arg0, arg1, 2);
    }
    ((ActorView *)arg0)->field1218 = 0;
    func_80278DE8(arg1, 1, arg1);
    func_8044ACCC(arg0);
    func_8022B520(arg0);
    ((ActorView *)arg0)->stun = 0;
    ((ActorView *)arg0)->field11FC = 0;
    func_8028324C(&D_80121990, arg0);
    flow = &D_80145060.flow;
    if ((flow->active != 0)
#if defined(VERSION_DE)
        && (((ActorView *)arg0)->controls->germanActive != 0)
#endif
        && (var_s3 = 0, (((ActorView *)arg0)->controls->mode == 0xE))) {
        flow->count = (s32) (flow->count + 1);
        playersGlobal = &D_80145040;
        if (playersGlobal->count > 0) {
            settingsBase = (s8 *)&D_80146398;
            var_s1 = (PlayerSettingsRecord *)settingsBase;
            var_s4 = 0;
settings_loop:
            do {
                temp_s0 = playersGlobal->players + var_s4;
                if (var_s1->active != 0) {
                    if (((PlayerSettingsView *)settingsBase)->state == 1) {
                    ((ActorView *)temp_s0)->actorState = (s32) ((PlayerSettingsView *)settingsBase)->state;
                    func_80449B44(temp_s0, var_s1->character, 1);
                    temp_v0 = ((ActorView *)temp_s0)->model;
                    ((ModelView *)temp_v0)->flags = (s32) (((ModelView *)temp_v0)->flags & ~4);
                    func_80214178(((ActorView *)temp_s0)->weapon, ((ActorView *)temp_s0)->ammoData, 2);
                    func_8021B1E4(temp_s0, ((PlayerSettingsView *)settingsBase)->effect, 0, 0);
                    func_80255E78(playersGlobal->controller, temp_s0);
                    func_80255C58(&playersGlobal->effects, temp_s0);
                    } else if (((PlayerSettingsView *)settingsBase)->state < 3) {
                        func_8044A37C(temp_s0);
                    }
                }
block_13:
                do {
                    var_s1++;
                } while (0);
                loopLimit = playersGlobal->count;
                do {
                    var_s3 += 1;
                } while (0);
                var_s4 += 0x16E8;
                if (var_s3 < loopLimit) goto settings_loop;
            } while (0);
        }
        if (D_8014693C < 3) {
            ((ActorView *)arg0)->special = 0;
            func_802227D0(arg0, arg1, 0x2E);
            return;
        } else {
            goto block_17;
        }
    } else {
block_17:
        if (D_801462E5 != 0) {
            if ((((ActorView *)arg0)->ammo[0] > 0) || (((ActorView *)arg0)->ammo[1] > 0) || (((ActorView *)arg0)->ammo[2] > 0)) {
                temp_v1 = ((ActorView *)arg0)->mode;
                var_s3_2 = 0;
                {
                    static void *player_mode_labels[0] __attribute__((section(".sdata"))) = {
                        &&player_mode_default, &&player_mode_1, &&player_mode_2, &&player_mode_3,
                        &&player_mode_4, &&player_mode_5, &&player_mode_6,
                        &&player_mode_7
                    };
                    s32 player_mode_index = temp_v1;
                    if ((u32)player_mode_index >= 8U) {
                        goto player_mode_default;
                    }
                    goto *PLAYER_MODE_JUMPS[player_mode_index];
                }
                do {
player_mode_default:
                    var_s1_2 = ((ActorView *)arg0)->projectileIndex + 0xBD9;
                    break;
player_mode_1:
                    var_s1_2 = ((ActorView *)arg0)->projectileIndex + 0xBDB;
                    break;
player_mode_2:
                    var_s1_2 = ((ActorView *)arg0)->projectileIndex + 0xBDD;
                    break;
player_mode_3:
                    var_s1_2 = ((ActorView *)arg0)->projectileIndex + 0xBDF;
                    break;
player_mode_4:
                    var_s1_2 = ((ActorView *)arg0)->projectileIndex + 0xBE1;
                    break;
player_mode_5:
                    var_s1_2 = ((ActorView *)arg0)->projectileIndex + 0xBE3;
                    break;
player_mode_6:
                    var_s1_2 = ((ActorView *)arg0)->projectileIndex + 0xBE5;
                    break;
player_mode_7:
                    var_s1_2 = ((ActorView *)arg0)->projectileIndex + 0xBE7;
                    break;
                } while (0);
                func_8028B1F8(&D_8011FE88, var_s1_2);
                temp_v1_2 = ((ActorView *)arg0)->projectiles[((ActorView *)arg0)->projectileIndex];
                if (temp_v1_2 != NULL) {
                    ((ProjectileView *)temp_v1_2)->flags = (u16) (((ProjectileView *)temp_v1_2)->flags | 1);
                    temp_a1 = ((ActorView *)arg0)->projectiles[((ActorView *)arg0)->projectileIndex];
                    if (((ProjectileView *)temp_a1)->flags & 8) {
                        func_80290528(temp_a1, temp_a1);
                    } else {
                        func_8028B874(&D_8011FE88, temp_a1, 1);
                        func_80278E74(((ProjectileView *)((ActorView *)arg0)->projectiles[((ActorView *)arg0)->projectileIndex])->source, 0x400, arg0);
                    }
                }
                temp_v1_3 = ((ActorView *)arg0)->kind;
                if (temp_v1_3 == D_800CE474[0]) {
                    var_s3_2 = 0;
                } else if (temp_v1_3 == D_800CE474[1]) {
                    var_s3_2 = 0;
                } else {
                    switch (func_802A11E8(&D_800CE474) % 3) {            /* switch 2; irregular */
                    case 0:                         /* switch 2 */
                        temp_s0_2 = ((ActorView *)arg0)->ammo[0];
                        var_a0 = 0;
                        if (temp_s0_2 != 0) {
                            temp_v0_2 = func_802A11E8(NULL);
                            temp_v0_3 = temp_v0_2 / temp_s0_2;
                            if (temp_s0_2 == 0) {

                            }
                            if ((temp_s0_2 == -1) && (temp_v0_3 == 0x80000000)) {

                            }
                            var_a0 = temp_v0_2 % temp_s0_2;
                        }
                        if (var_a0 != 0) {
                            var_s3_2 = 1;
                            temp_v0_4 = &D_800D34C0[((ActorView *)arg0)->projectileBase + ((ActorView *)arg0)->projectileIndex];
                            temp_v0_4->unkC = (s16) var_a0;
                            temp_v0_4->unkE = 0;
                            temp_v0_4->unk10 = 0;
                        }
                        break;
                    case 1:                         /* switch 2 */
                        temp_s0_3 = ((ActorView *)arg0)->ammo[1];
                        var_a0_2 = 0;
                        if (temp_s0_3 != 0) {
                            temp_v0_5 = func_802A11E8(NULL);
                            temp_v0_6 = temp_v0_5 / temp_s0_3;
                            if (temp_s0_3 == 0) {

                            }
                            if ((temp_s0_3 == -1) && (temp_v0_6 == 0x80000000)) {

                            }
                            var_a0_2 = temp_v0_5 % temp_s0_3;
                        }
                        if (var_a0_2 != 0) {
                            var_s3_2 = 1;
                            temp_v0_7 = &D_800D34C0[((ActorView *)arg0)->projectileBase + ((ActorView *)arg0)->projectileIndex];
                            temp_v0_7->unkE = (s16) var_a0_2;
                            temp_v0_7->unkC = 0;
                            temp_v0_7->unk10 = 0;
                        }
                        break;
                    case 2:                         /* switch 2 */
                        temp_s0_4 = ((ActorView *)arg0)->ammo[2];
                        var_a0_3 = 0;
                        if (temp_s0_4 != 0) {
                            temp_v0_8 = func_802A11E8(NULL);
                            temp_v0_9 = temp_v0_8 / temp_s0_4;
                            if (temp_s0_4 == 0) {

                            }
                            if ((temp_s0_4 == -1) && (temp_v0_9 == 0x80000000)) {

                            }
                            var_a0_3 = temp_v0_8 % temp_s0_4;
                        }
                        if (var_a0_3 != 0) {
                            var_s3_2 = 1;
                            temp_v0_10 = &D_800D34C0[((ActorView *)arg0)->projectileBase + ((ActorView *)arg0)->projectileIndex];
                            temp_v0_10->unk10 = (s16) var_a0_3;
                            temp_v0_10->unkC = 0;
                            temp_v0_10->unkE = 0;
                        }
                        break;
                    }
                }
                if (var_s3_2 != 0) {
                    temp_s0_5 = func_8020C994(&D_8013B364, func_8020CB3C(&D_8013B364, &((ActorPositionView *)arg0)->position));
                    func_8024E78C(arg0, ((ActorPositionView *)arg0)->position.x, ((ActorPositionView *)arg0)->position.y, ((ActorPositionView *)arg0)->position.z, &spawnPosition, &sp90, 0, 0);
                    if (temp_s0_5 != NULL) {
                        spawnPosition = *(SpawnPosition *)temp_s0_5;
                    }
                    spawnVector.x = 0;
                    spawnVector.y = 0.0f;
                    spawnVector.z = 0;
                    temp_v0_11 = func_8028FFB0(&D_80131600, 0, var_s1_2, spawnVector, spawnPosition, 0, 0);
                    if (temp_v0_11 != 0) {
                        spawnPosition.y += SPAWN_HEIGHT_BONUS;
                        ((ActorView *)arg0)->projectiles[((ActorView *)arg0)->projectileIndex] = (void *)temp_v0_11;
                    }
                } else {
                    ((ActorView *)arg0)->projectiles[((ActorView *)arg0)->projectileIndex] = 0;
                }
                ((ActorView *)arg0)->projectileIndex = (s32) (((ActorView *)arg0)->projectileIndex == 0);
            }
            if ((((ActorView *)arg0)->controls->transientFlag != 0) && (laterFlow = &D_80145060.flow, laterFlow->transition != 0)) {
                if (SPECIAL_OBJECT != NULL) {
                    func_80214178(SPECIAL_OBJECT, ((SpecialObjectView *)SPECIAL_OBJECT)->segment, 1);
                    ((SpecialObjectView *)SPECIAL_OBJECT)->reset = 0;
                    laterFlow->reset = 0;
                    func_8025DF54(0x2D0);
                    var_s0 = D_80145060.actorList;
                    if (var_s0 != NULL) {
                        do {
                            temp_a1_2 = ((ActorView *)var_s0)->message;
                            if (temp_a1_2 != 0) {
                                func_80237E70(&D_80145088, temp_a1_2, *TRANSITION_VALUE);
                            }
                            var_s0 = ((ActorView *)var_s0)->next;
                        } while (var_s0 != NULL);
                    }
                }
                ((ActorView *)arg0)->controls->transientFlag = 0U;
                ((ActorView *)arg0)->controls->resetFlag = 0;
            }
            var_s0_2 = D_80145060.actorList;
            if (var_s0_2 != NULL) {
                do {
                    if ((var_s0_2 != arg0) && (((ActorView *)var_s0_2)->parent == arg0)) {
                        temp_a1_3 = ((ActorView *)var_s0_2)->message;
                        ((ActorView *)var_s0_2)->pending = 0;
                        ((ActorView *)var_s0_2)->parent = 0;
                        if (temp_a1_3 != 0) {
                            func_80239760(&D_80145088, temp_a1_3, RESET_SOUND, 1.0f);
                        }
                    }
                    var_s0_2 = ((ActorView *)var_s0_2)->next;
                } while (var_s0_2 != NULL);
            }
        }
        ((ActorView *)arg0)->field1238 = -1;
        ((ActorView *)arg0)->field1230 = 0;
        ((ActorView *)arg0)->field1234 = 0;
        ((ActorView *)arg0)->field1240 = 0;
        ((ActorView *)arg0)->field122C = (s32) (((ActorView *)arg0)->field122C & 0xFFFF0000);
        if (arg2 & 0x4000) {
            if ((u32) (((ActorView *)arg0)->state - 0x11) < 2U) {
                ((ActorView *)arg0)->special = 1;
            }
        }
        if (((ActorView *)arg0)->special == 0) {
            var_a0_4 = 0x2BC;
            if (arg3 != 0x1F) {
                var_a0_4 = func_80229BE0(arg0, 0x1397);
            }
            func_8025DE74(var_a0_4, ((ActorPositionView *)arg0)->position.x, ((ActorPositionView *)arg0)->position.y, ((ActorPositionView *)arg0)->position.z, &((ActorPositionView *)arg0)->position, -1);
        } else {
            func_8025DE74(0x9FB, ((ActorPositionView *)arg0)->position.x, ((ActorPositionView *)arg0)->position.y, ((ActorPositionView *)arg0)->position.z, &((ActorPositionView *)arg0)->position, -1);
        }
        func_8025DF54(0x212);
        if ((((ActorView *)arg0)->special != 0) || (temp_v1_5 = ((ActorView *)arg0)->kind, (temp_v1_5 == PLAYER_MODE_TABLE[0])) || (temp_v1_5 == PLAYER_MODE_TABLE[1])) {
            spawnVector.x = ((ActorFloatPositionView *)arg0)->position.x;
            spawnVector.y = ((ActorPositionView *)arg0)->position.y + PROJECTILE_HEIGHT_BONUS;
            var_s1_3 = 1;
            spawnVector.z = ((ActorFloatPositionView *)arg0)->position.z;
            var_v0 = func_802A11E8();
            temp_v1_6 = var_v0;
            if (temp_v1_6 < 0) {
                var_v0 = temp_v1_6 + 0x3FF;
            }
            motionVector.x = (f32) (temp_v1_6 - ((var_v0 >> 0xA) << 0xA)) - MOTION_CENTER;
            var_v0_2 = func_802A11E8();
            temp_v1_7 = var_v0_2;
            if (temp_v1_7 < 0) {
                var_v0_2 = temp_v1_7 + 0x3FF;
            }
            motionVector.y = (f32) (temp_v1_7 - ((var_v0_2 >> 0xA) << 0xA)) - MOTION_CENTER;
            var_v0_3 = func_802A11E8();
            temp_v1_8 = var_v0_3;
            if (temp_v1_8 < 0) {
                var_v0_3 = temp_v1_8 + 0x3FF;
            }
            motionVector.z = (f32) (temp_v1_8 - ((var_v0_3 >> 0xA) << 0xA)) - MOTION_CENTER;
            func_8024795C(&motionOutput, arg0);
            temp_s0_6 = ((ActorView *)arg0)->frameValue;
            if (func_8024BE70(arg0) == 5) {
                var_s1_3 = 3;
            }
            func_80280094(&D_80121990, arg0, arg0, 0, temp_s0_6, 0x64, motionVector, motionOutput, spawnVector, 0, -1, var_s1_3);
        }
        if (arg3 != -1) {
            func_802227D0(arg0, arg1, arg3);
            return;
        }
        if (((ActorView *)arg0)->state != 0x11) {
            if (((ActorView *)arg0)->action == 0xA && (arg2 & 0x4000)) {
                func_802227D0(arg0, arg1, 0x2A);
                return;
            }
            if (arg2 & 0x4000) {
                func_802227D0(arg0, arg1, 0x29);
                return;
            }
        }
        var_v0_4 = 1;
        if (!(((ActorView *)arg0)->speed > GROUND_THRESHOLD)) {
            var_v0_4 = 0;
        }
        if (var_v0_4 != 0) {
            func_802227D0(arg0, arg1, 0x1C);
            return;
        }
        temp_v1_9 = ((ActorView *)arg0)->action;
        if ((temp_v1_9 ^ 0xF) == 0) {
            func_802227D0(arg0, arg1, 0x21);
            return;
        }
        if (temp_v1_9 == 9) {
            func_802227D0(arg0, arg1, 0x1F);
            return;
        }
        if (temp_v1_9 == 10) {
            func_802227D0(arg0, arg1, 0x1F);
            return;
        }
        if (temp_v1_9 == 11) {
            func_802227D0(arg0, arg1, 0x1F);
            return;
        }
        if (temp_v1_9 == 12) {
            func_802227D0(arg0, arg1, 0x1F);
            return;
        }
        if (arg2 & 0x1000) {
            func_802227D0(arg0, arg1, 0x1F);
            return;
        }
        if (arg2 & 0x200) {
            func_802227D0(arg0, arg1, 0x19);
            return;
        }
        if ((((ActorView *)arg0)->state != 0x11) && (((ActorView *)arg0)->specialState == 1)) {
            func_802227D0(arg0, arg1, 0x1E);
            return;
        }
        if (((ActorView *)arg0)->specialState == 2) {
            func_802227D0(arg0, arg1, 0x1D);
            return;
        }
        func_802227D0(arg0, arg1, 0x16);
        return;
    }
}
