#ifndef SHARED_SHAREDPLAYER_H
#define SHARED_SHAREDPLAYER_H

#include "basetypes.h"
#include "player_types.h"
#include "effect.h"
#include "emitter.h"
#include "input.h"
#include "quad.h"
#include "slot.h"

typedef struct SharedPlayer SharedPlayer;
struct SharedPlayer {
    union {
        struct {
            u8 unk0[24]; /* +0x0: src/func_80220D20.c */
        } view0_0;
        struct {
            u8 pad0[24]; /* +0x0: src/func_80220D20.c */
        } view0_1;
        struct {
            char pad[0x3];
            u8 team; /* +0x3: src/func_80220EB0.c */
        } view3_2;
        struct {
            char pad[0x8];
            Vec3 unk8; /* +0x8: src/func_80203278.c, src/func_80281A70.c */
        } view8_2;
        struct {
            char pad[0x8];
            Vec3 pos; /* +0x8: src/func_80203278.c, src/func_80220EB0.c */
        } view8_3;
        struct {
            char pad[0x8];
            Vec3 position; /* +0x8: src/func_80281A70.c */
        } view8_4;
        struct {
            char pad[0x14];
            struct Shared_Model * model; /* +0x14: src/func_80220EB0.c */
        } view14_6;
        struct { char pad[8]; s32 positionWords[3]; } positionBits;
    } views0;
    union {
        struct {
            char * unk18; /* +0x18: src/func_80203278.c, src/func_8020FDB0.c, src/func_80220D20.c, src/func_80223E10.c, src/func_80229530.c */
        } view18_0;
        struct {
            char * track; /* +0x18: src/func_80203278.c */
        } view18_1;
        struct {
            struct Model * model; /* +0x18: src/func_8020FDB0.c */
        } view18_2;
        struct {
            struct Body * body; /* +0x18: src/func_80220D20.c */
        } view18_3;
        struct {
            struct Character * character; /* +0x18: src/func_80229530.c */
        } view18_4;
        struct {
            struct Shared_Body * body; /* +0x18: src/func_80220EB0.c */
        } view18_5;
    } views18;
    union {
        struct {
            u8 unk1C[344]; /* +0x1C: src/func_80220D20.c */
        } view1C_0;
        struct {
            u8 pad1[344]; /* +0x1C: src/func_80220D20.c */
        } view1C_1;
        struct {
            char pad[0x4];
            f32 velY; /* +0x20: src/func_80220EB0.c */
        } view20_2;
        struct {
            char pad[0x1C];
            s32 unk38; /* +0x38: src/func_80220EB0.c, src/func_80233C78.c */
        } view38_2;
        struct {
            char pad[0x1C];
            s32 flags; /* +0x38: src/func_80233C78.c */
        } view38_3;
        struct {
            char pad[0x24];
            f32 unk40; /* +0x40: src/func_80220EB0.c */
        } view40_5;
        struct {
            char pad[0x40];
            Shared_Quad unk5C; /* +0x5C: src/func_80220EB0.c */
        } view5C_6;
        struct {
            char pad[0x50];
            f32 unk6C; /* +0x6C: src/func_8021D3E4.c */
        } view6C_4;
        struct {
            char pad[0x50];
            f32 heading; /* +0x6C: src/func_8021D3E4.c */
        } view6C_5;
        struct {
            char pad[0x50];
            f32 yaw; /* +0x6C: src/func_80220EB0.c */
        } view6C_9;
        struct {
            char pad[0xC8];
            u16 unkE4; /* +0xE4: src/func_8021E27C.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c */
        } viewE4_6;
        struct {
            char pad[0xC8];
            u16 kind; /* +0xE4: src/func_8021E27C.c */
        } viewE4_7;
        struct {
            char pad[0xE4];
            s32 unk100; /* +0x100: src/func_80220EB0.c, src/func_802227D0.c, src/func_8022631C.c, src/func_802297F0.c */
        } view100_8;
        struct {
            char pad[0xE4];
            s32 flags; /* +0x100: src/func_802227D0.c */
        } view100_9;
        struct {
            char pad[0xE8];
            f32 unk104; /* +0x104: src/func_802243E4.c */
        } view104_10;
        struct {
            char pad[0xE8];
            f32 idleTime; /* +0x104: src/func_802243E4.c */
        } view104_11;
        struct {
            char pad[0xEC];
            s16 anim; /* +0x108: src/func_80220EB0.c */
        } view108_16;
        struct {
            char pad[0xF2];
            s8 unk10E; /* +0x10E: src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c, src/func_8044A4C0.c */
        } view10E_12;
        struct {
            char pad[0xF2];
            s8 idle; /* +0x10E: src/func_802243E4.c */
        } view10E_13;
        struct {
            char pad[0xF2];
            s8 replaying; /* +0x10E: src/func_8044A4C0.c */
        } view10E_14;
        struct {
            char pad[0xF2];
            s8 animPending; /* +0x10E: src/func_80220EB0.c */
        } view10E_20;
        struct {
            char pad[0x154];
            char unk170[100]; /* +0x170: src/func_8022631C.c */
        } view170_15;
        struct {
            char pad[0x154];
            char body[100]; /* +0x170: src/func_8022631C.c */
        } view170_16;
        struct {
            char pad[0x154];
            s32 unk170; /* +0x170: src/func_80220EB0.c */
        } view170_23;
        struct {
            char pad[0x158];
            s32 unk174; /* +0x174: src/func_80220D20.c */
        } view174_17;
        struct {
            char pad[0x15C];
            u8 unk178[740]; /* +0x178: src/func_80220D20.c */
        } view178_18;
        struct {
            char pad[0x15C];
            u8 pad2[740]; /* +0x178: src/func_80220D20.c */
        } view178_19;
        struct {
            char pad[0x1B8];
            f32 unk1D4; /* +0x1D4: src/func_8022631C.c */
        } view1D4_20;
        struct {
            char pad[0x1B8];
            f32 holdTime; /* +0x1D4: src/func_8022631C.c */
        } view1D4_21;
        struct {
            char pad[0x1BC];
            struct SharedPlayer * unk1D8; /* +0x1D8: src/func_80203278.c, src/func_8044AB34.c */
        } view1D8_22;
        struct {
            char pad[0x1BC];
            struct SharedPlayer * self; /* +0x1D8: src/func_80203278.c */
        } view1D8_23;
        struct {
            char pad[0x1BC];
            struct SharedPlayer * f1D8; /* +0x1D8: src/func_8044AB34.c */
        } view1D8_24;
        struct {
            char pad[0x1BC];
            void * unk1D8; /* +0x1D8: src/func_80220EB0.c */
        } view1D8_32;
        struct {
            char pad[0x244];
            Vec3f unk260; /* +0x260: src/func_8021D3E4.c */
        } view260_25;
        struct {
            char pad[0x244];
            Vec3f muzzle; /* +0x260: src/func_8021D3E4.c */
        } view260_26;
        struct {
            char pad[0x2CC];
            char unk2E8[368]; /* +0x2E8: src/func_802297F0.c */
        } view2E8_27;
        struct {
            char pad[0x2CC];
            char weapon[368]; /* +0x2E8: src/func_802297F0.c */
        } view2E8_28;
        struct {
            char pad[0x2CC];
            Shared_Emitter emitter; /* +0x2E8: src/func_80220EB0.c */
        } view2E8_37;
        struct {
            char pad[0x43C];
            char unk458[384]; /* +0x458: src/func_802297F0.c */
        } view458_29;
        struct {
            char pad[0x43C];
            char ammo[384]; /* +0x458: src/func_802297F0.c */
        } view458_30;
        struct {
            char pad[0x43C];
            s32 unk458; /* +0x458: src/func_80220EB0.c */
        } view458_40;
        struct {
            char pad[0x440];
            s32 unk45C; /* +0x45C: src/func_80220D20.c */
        } view45C_31;
        struct {
            char pad[0x444];
            u8 unk460[376]; /* +0x460: src/func_80220D20.c */
        } view460_32;
        struct {
            char pad[0x444];
            u8 pad3[376]; /* +0x460: src/func_80220D20.c */
        } view460_33;
        struct {
            char pad[0x468];
            struct Shared_Voice * voice; /* +0x484: src/func_80220EB0.c */
        } view484_44;
        struct {
            char pad[0x470];
            s8 unk48C; /* +0x48C: src/func_8021E27C.c */
        } view48C_34;
        struct {
            char pad[0x470];
            s8 state; /* +0x48C: src/func_8021E27C.c */
        } view48C_35;
        struct {
            char pad[0x4A4];
            void * unk4C0; /* +0x4C0: src/func_80220EB0.c */
        } view4C0_47;
        struct {
            char pad[0x507];
            s8 unk523; /* +0x523: src/func_8021E27C.c */
        } view523_36;
        struct {
            char pad[0x507];
            s8 busy; /* +0x523: src/func_8021E27C.c */
        } view523_37;
        struct {
            char pad[0x578];
            s32 unk594; /* +0x594: src/func_8020FDB0.c, src/func_8021E27C.c */
        } view594_38;
        struct {
            char pad[0x578];
            s32 gear; /* +0x594: src/func_8020FDB0.c */
        } view594_39;
        struct {
            char pad[0x578];
            s32 mode; /* +0x594: src/func_8021E27C.c */
        } view594_40;
        struct {
            char pad[0x584];
            f32 unk5A0; /* +0x5A0: src/func_8021E27C.c */
        } view5A0_41;
        struct {
            char pad[0x584];
            f32 charge; /* +0x5A0: src/func_8021E27C.c */
        } view5A0_42;
        struct {
            char pad[0x5B4];
            s32 unk5D0; /* +0x5D0: src/func_80220EB0.c, src/func_8044AB34.c */
        } view5D0_43;
        struct {
            char pad[0x5B4];
            s32 f5D0; /* +0x5D0: src/func_8044AB34.c */
        } view5D0_44;
        struct {
            char pad[0x5B8];
            s32 unk5D4; /* +0x5D4: src/func_8022591C.c, src/func_8022804C.c, src/func_80229530.c, src/func_80230390.c, src/func_8044A37C.c, src/func_8044AB34.c */
        } view5D4_45;
        struct {
            char pad[0x5B8];
            s32 slot; /* +0x5D4: src/func_8022591C.c */
        } view5D4_46;
        struct {
            char pad[0x5B8];
            s32 profile; /* +0x5D4: src/func_80229530.c */
        } view5D4_47;
        struct {
            char pad[0x5B8];
            s32 f5D4; /* +0x5D4: src/func_8044AB34.c */
        } view5D4_48;
    } views1C;
    union {
        struct {
            struct Record * unk5D8; /* +0x5D8: src/func_80203278.c, src/func_80208158.c, src/func_80209CD8.c, src/func_8020FDB0.c, src/func_80210230.c, src/func_80218B84.c, src/func_8021E27C.c, src/func_80220D20.c, src/func_8022591C.c, src/func_8022804C.c, src/func_80228394.c, src/func_802297F0.c, src/func_8022A67C.c, src/func_80408C78.c, src/func_8043E65C.c, src/func_8044A37C.c, src/func_8044A4C0.c, src/func_8044AB34.c */
        } view5D8_0;
        struct {
            struct Record * record; /* +0x5D8: src/func_80203278.c */
        } view5D8_1;
        struct {
            struct Controls * controls; /* +0x5D8: src/func_80209CD8.c */
        } view5D8_2;
        struct {
            struct TeamInfo * teamInfo; /* +0x5D8: src/func_80210230.c */
        } view5D8_3;
        struct {
            struct Ctrl * ctrl; /* +0x5D8: src/func_80220D20.c */
        } view5D8_4;
        struct {
            unsigned char * info; /* +0x5D8: src/func_8022A67C.c */
        } view5D8_5;
        struct {
            struct Profile * profile; /* +0x5D8: src/func_80408C78.c */
        } view5D8_6;
        struct {
            struct Settings * settings; /* +0x5D8: src/func_8043E65C.c */
        } view5D8_7;
        struct {
            s32 f5D8; /* +0x5D8: src/func_8044AB34.c */
        } view5D8_8;
        struct {
            struct Shared_Profile * profile; /* +0x5D8: src/func_80220EB0.c */
        } view5D8_9;
    } views5D8;
    union {
        struct {
            void * unk5DC; /* +0x5DC: src/func_80218B84.c, src/func_8021D3E4.c, src/func_80220D20.c, src/func_8022591C.c, src/func_80225F20.c, src/func_8022631C.c, src/func_80226A10.c, src/func_802297F0.c, src/func_80230390.c, src/func_80233C78.c, src/func_8026643C.c, src/func_80267968.c, src/func_804085E0.c, src/func_80408C78.c */
        } view5DC_0;
        struct {
            void * view; /* +0x5DC: src/func_80218B84.c */
        } view5DC_1;
        struct {
            struct View * view; /* +0x5DC: src/func_8021D3E4.c */
        } view5DC_2;
        struct {
            u8 pad4[8]; /* +0x5DC: src/func_80220D20.c */
        } view5DC_3;
        struct {
            void * entity; /* +0x5DC: src/func_80233C78.c */
        } view5DC_4;
        struct {
            struct Rider * rider; /* +0x5DC: src/func_8026643C.c */
        } view5DC_5;
        struct {
            char * storage; /* +0x5DC: src/func_804085E0.c */
        } view5DC_6;
        struct {
            char * messages; /* +0x5DC: src/func_80408C78.c */
        } view5DC_7;
        struct {
            struct Shared_Hud * hud; /* +0x5DC: src/func_80220EB0.c */
        } view5DC_8;
        struct {
            char pad[0x4];
            s32 unk5E0; /* +0x5E0: src/func_8020FDB0.c, src/func_8043E65C.c, src/func_8044A37C.c */
        } view5E0_8;
        struct {
            char pad[0x4];
            s32 state; /* +0x5E0: src/func_8020FDB0.c */
        } view5E0_9;
        struct {
            char pad[0x4];
            s32 slot; /* +0x5E0: src/func_8043E65C.c */
        } view5E0_10;
    } views5DC;
    union {
        struct {
            s32 unk5E4; /* +0x5E4: src/func_80203278.c, src/func_80208158.c, src/func_80210230.c, src/func_80220D20.c, src/func_8022591C.c, src/func_8022631C.c, src/func_80226A10.c, src/func_80228394.c, src/func_802297F0.c, src/func_80281A70.c */
        } view5E4_0;
        struct {
            s32 active; /* +0x5E4: src/func_80203278.c */
        } view5E4_1;
        struct {
            s32 health; /* +0x5E4: src/func_80208158.c, src/func_80220EB0.c */
        } view5E4_2;
        struct {
            s32 alive; /* +0x5E4: src/func_8022591C.c */
        } view5E4_3;
        struct {
            s32 holding; /* +0x5E4: src/func_8022631C.c */
        } view5E4_4;
    } views5E4;
    union {
        struct {
            u8 unk5E8[3140]; /* +0x5E8: src/func_80220D20.c */
        } view5E8_0;
        struct {
            u8 pad5[3140]; /* +0x5E8: src/func_80220D20.c */
        } view5E8_1;
        struct {
            char pad[0x2];
            s16 unk5EA; /* +0x5EA: src/func_80220EB0.c, src/func_8022591C.c, src/func_8044A37C.c */
        } view5EA_2;
        struct {
            char pad[0x2];
            s16 respawns; /* +0x5EA: src/func_8022591C.c */
        } view5EA_3;
        struct {
            char pad[0x2];
            s16 runType; /* +0x5EA: src/func_8044A37C.c */
        } view5EA_4;
        struct {
            char pad[0x4];
            s32 unk5EC; /* +0x5EC: src/func_80220EB0.c, src/func_8044A37C.c, src/func_8044A4C0.c, src/func_8044AB34.c */
        } view5EC_5;
        struct {
            char pad[0x4];
            s32 model; /* +0x5EC: src/func_8044A37C.c */
        } view5EC_6;
        struct {
            char pad[0x4];
            s32 spawnPoint; /* +0x5EC: src/func_8044A4C0.c */
        } view5EC_7;
        struct {
            char pad[0x4];
            s32 f5EC; /* +0x5EC: src/func_8044AB34.c */
        } view5EC_8;
        struct {
            char pad[0x8];
            s32 unk5F0; /* +0x5F0: src/func_80220EB0.c, src/func_8044AB34.c */
        } view5F0_9;
        struct {
            char pad[0x8];
            s32 f5F0; /* +0x5F0: src/func_8044AB34.c */
        } view5F0_10;
        struct {
            char pad[0xC];
            s16 unk5F4[4]; /* +0x5F4: src/func_80229530.c */
        } view5F4_11;
        struct {
            char pad[0xC];
            s16 ammo[4]; /* +0x5F4: src/func_80229530.c */
        } view5F4_12;
        struct {
            char pad[0xC];
            s16 ammo[3]; /* +0x5F4: src/func_80220EB0.c */
        } view5F4_13;
        struct {
            char pad[0x1A];
            Shared_Slot slots[22]; /* +0x602: src/func_80220EB0.c */
        } view602_14;
        struct {
            char pad[0x46];
            s16 unk62E; /* +0x62E: src/func_8020FDB0.c, src/func_8021E27C.c, src/func_80230390.c */
        } view62E_13;
        struct {
            char pad[0x46];
            s16 weapon; /* +0x62E: src/func_8020FDB0.c */
        } view62E_14;
        struct {
            char pad[0x46];
            s16 character; /* +0x62E: src/func_80220EB0.c */
        } view62E_17;
        struct {
            char pad[0x68];
            s16 unk650; /* +0x650: src/func_80208158.c, src/func_8021E27C.c, src/func_802227D0.c, src/func_802238BC.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c, src/func_80230390.c */
        } view650_15;
        struct {
            char pad[0x68];
            s16 state; /* +0x650: src/func_80208158.c, src/func_80220EB0.c */
        } view650_16;
        struct {
            char pad[0x68];
            s16 action; /* +0x650: src/func_8021E27C.c */
        } view650_17;
        struct {
            char pad[0x68];
            s16 mode; /* +0x650: src/func_802243E4.c */
        } view650_18;
        struct {
            char pad[0x6A];
            s16 unk652; /* +0x652: src/func_802227D0.c */
        } view652_19;
        struct {
            char pad[0x6A];
            s16 previous; /* +0x652: src/func_802227D0.c */
        } view652_20;
        struct {
            char pad[0x6A];
            s16 pad652; /* +0x652: src/func_80220EB0.c */
        } view652_24;
        struct {
            char pad[0x6C];
            s16 prevState; /* +0x654: src/func_80220EB0.c */
        } view654_25;
        struct {
            char pad[0x6E];
            s16 pad656; /* +0x656: src/func_80220EB0.c */
        } view656_26;
        struct {
            char pad[0x70];
            f32 unk658; /* +0x658: src/func_802227D0.c, src/func_80223E10.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c */
        } view658_21;
        struct {
            char pad[0x70];
            f32 counter; /* +0x658: src/func_802227D0.c */
        } view658_22;
        struct {
            char pad[0x70];
            f32 stride; /* +0x658: src/func_80223E10.c */
        } view658_23;
        struct {
            char pad[0x70];
            f32 swimTime; /* +0x658: src/func_802243E4.c */
        } view658_24;
        struct {
            char pad[0x70];
            f32 stateTime; /* +0x658: src/func_80220EB0.c */
        } view658_31;
        struct {
            char pad[0x74];
            s32 unk65C; /* +0x65C: src/func_80220EB0.c */
        } view65C_32;
        struct {
            char pad[0x78];
            s32 unk660; /* +0x660: src/func_802227D0.c */
        } view660_25;
        struct {
            char pad[0x78];
            s32 previousTimer; /* +0x660: src/func_802227D0.c */
        } view660_26;
        struct {
            char pad[0x7C];
            s32 unk664; /* +0x664: src/func_80220EB0.c, src/func_802227D0.c */
        } view664_27;
        struct {
            char pad[0x7C];
            s32 timer; /* +0x664: src/func_802227D0.c */
        } view664_28;
        struct {
            char pad[0x84];
            f32 unk66C; /* +0x66C: src/func_80220EB0.c, src/func_802233CC.c, src/func_802238BC.c */
        } view66C_29;
        struct {
            char pad[0x88];
            f32 unk670; /* +0x670: src/func_80218B84.c, src/func_80220EB0.c, src/func_802297F0.c */
        } view670_30;
        struct {
            char pad[0x88];
            f32 shield; /* +0x670: src/func_80218B84.c */
        } view670_31;
        struct {
            char pad[0x90];
            f32 unk678; /* +0x678: src/func_80220EB0.c */
        } view678_40;
        struct {
            char pad[0xA0];
            char unk688[16]; /* +0x688: src/func_80226A10.c */
        } view688_32;
        struct {
            char pad[0xA0];
            char body[16]; /* +0x688: src/func_80226A10.c */
        } view688_33;
        struct {
            char pad[0xA0];
            Shared_Input input; /* +0x688: src/func_80220EB0.c */
        } view688_43;
        struct {
            char pad[0xB0];
            struct Controller * unk698; /* +0x698: src/func_80218B84.c, src/func_8022591C.c, src/func_80226A10.c, src/func_8026643C.c, src/func_80267968.c, src/func_804085E0.c */
        } view698_34;
        struct {
            char pad[0xB0];
            struct Controller * controller; /* +0x698: src/func_80218B84.c */
        } view698_35;
        struct {
            char pad[0xB0];
            void * controller; /* +0x698: src/func_8022591C.c */
        } view698_36;
        struct {
            char pad[0xB0];
            char * emitter; /* +0x698: src/func_8026643C.c */
        } view698_37;
        struct {
            char pad[0xB0];
            char * title; /* +0x698: src/func_804085E0.c */
        } view698_38;
        struct {
            char pad[0xB4];
            f32 unk69C; /* +0x69C: src/func_802238BC.c, src/func_80225F20.c */
        } view69C_39;
        struct {
            char pad[0xB4];
            f32 stick; /* +0x69C: src/func_80225F20.c */
        } view69C_40;
        struct {
            char pad[0xBC];
            f32 unk6A4; /* +0x6A4: src/func_802233CC.c, src/func_802238BC.c, src/func_802243E4.c */
        } view6A4_41;
        struct {
            char pad[0xBC];
            f32 strafe; /* +0x6A4: src/func_802243E4.c */
        } view6A4_42;
        struct {
            char pad[0xC0];
            f32 unk6A8; /* +0x6A8: src/func_802233CC.c, src/func_802238BC.c, src/func_802243E4.c, src/func_80224C28.c */
        } view6A8_43;
        struct {
            char pad[0xC0];
            f32 lift; /* +0x6A8: src/func_802243E4.c */
        } view6A8_44;
        struct {
            char pad[0xC4];
            s32 unk6AC; /* +0x6AC: src/func_802238BC.c */
        } view6AC_45;
        struct {
            char pad[0xC8];
            s32 unk6B0; /* +0x6B0: src/func_802233CC.c, src/func_802238BC.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80226A10.c, src/func_80230390.c */
        } view6B0_46;
        struct {
            char pad[0xC8];
            s32 input; /* +0x6B0: src/func_802243E4.c */
        } view6B0_47;
        struct {
            char pad[0xC8];
            s32 state; /* +0x6B0: src/func_80226A10.c */
        } view6B0_48;
        struct {
            char pad[0xD0];
            s32 unk6B8; /* +0x6B8: src/func_802233CC.c, src/func_802238BC.c, src/func_80225F20.c */
        } view6B8_49;
        struct {
            char pad[0xD0];
            s32 input; /* +0x6B8: src/func_80225F20.c */
        } view6B8_50;
        struct {
            char pad[0xD8];
            f32 unk6C0; /* +0x6C0: src/func_802233CC.c, src/func_802238BC.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c, src/func_80225F20.c */
        } view6C0_51;
        struct {
            char pad[0xD8];
            f32 climb; /* +0x6C0: src/func_802243E4.c */
        } view6C0_52;
        struct {
            char pad[0xD8];
            f32 speed; /* +0x6C0: src/func_80225F20.c */
        } view6C0_53;
        struct {
            char pad[0xD8];
            f32 velX; /* +0x6C0: src/func_80220EB0.c */
        } view6C0_64;
        struct {
            char pad[0xDC];
            f32 unk6C4; /* +0x6C4: src/func_802233CC.c, src/func_802238BC.c, src/func_80225F20.c */
        } view6C4_54;
        struct {
            char pad[0xDC];
            f32 side; /* +0x6C4: src/func_80225F20.c */
        } view6C4_55;
        struct {
            char pad[0xDC];
            f32 velZ; /* +0x6C4: src/func_80220EB0.c */
        } view6C4_67;
        struct {
            char pad[0xE0];
            f32 unk6C8; /* +0x6C8: src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c */
        } view6C8_56;
        struct {
            char pad[0xE0];
            f32 speed; /* +0x6C8: src/func_80220EB0.c, src/func_802243E4.c */
        } view6C8_57;
        struct {
            char pad[0xE4];
            f32 lastVelY; /* +0x6CC: src/func_80220EB0.c */
        } view6CC_70;
        struct {
            char pad[0xE8];
            s32 onGround; /* +0x6D0: src/func_80220EB0.c */
        } view6D0_71;
        struct {
            char pad[0xEC];
            f32 unk6D4; /* +0x6D4: src/func_802233CC.c, src/func_802238BC.c */
        } view6D4_58;
        struct {
            char pad[0xF0];
            f32 unk6D8; /* +0x6D8: src/func_802233CC.c, src/func_802238BC.c */
        } view6D8_59;
        struct {
            char pad[0xF4];
            f32 unk6DC; /* +0x6DC: src/func_802233CC.c, src/func_802238BC.c */
        } view6DC_60;
        struct {
            char pad[0xFC];
            f32 unk6E4; /* +0x6E4: src/func_802243E4.c, src/func_80224C28.c */
        } view6E4_61;
        struct {
            char pad[0xFC];
            f32 depth; /* +0x6E4: src/func_802243E4.c */
        } view6E4_62;
        struct {
            char pad[0xFC];
            f32 airTime; /* +0x6E4: src/func_80220EB0.c */
        } view6E4_77;
        struct {
            char pad[0x100];
            f32 unk6E8; /* +0x6E8: src/func_802233CC.c, src/func_802238BC.c */
        } view6E8_63;
        struct {
            char pad[0x100];
            Vec3 unk6E8; /* +0x6E8: src/func_80220EB0.c */
        } view6E8_79;
        struct {
            char pad[0x104];
            f32 unk6EC; /* +0x6EC: src/func_802238BC.c, src/func_802243E4.c, src/func_80224C28.c */
        } view6EC_64;
        struct {
            char pad[0x104];
            f32 height; /* +0x6EC: src/func_802243E4.c */
        } view6EC_65;
        struct {
            char pad[0x108];
            f32 unk6F0; /* +0x6F0: src/func_802238BC.c */
        } view6F0_66;
        struct {
            char pad[0x10C];
            f32 unk6F4; /* +0x6F4: src/func_80220EB0.c */
        } view6F4_83;
        struct {
            char pad[0x110];
            Vec3 unk6F8; /* +0x6F8: src/func_80220EB0.c */
        } view6F8_84;
        struct {
            char pad[0x11C];
            f32 unk704; /* +0x704: src/func_80220EB0.c, src/func_80225F20.c */
        } view704_67;
        struct {
            char pad[0x11C];
            f32 lift; /* +0x704: src/func_80225F20.c */
        } view704_68;
        struct {
            char pad[0x130];
            f32 unk718; /* +0x718: src/func_802243E4.c */
        } view718_69;
        struct {
            char pad[0x130];
            f32 crouch; /* +0x718: src/func_80220EB0.c, src/func_802243E4.c */
        } view718_70;
        struct {
            char pad[0x134];
            s32 unk71C; /* +0x71C: src/func_80220EB0.c */
        } view71C_89;
        struct {
            char pad[0x138];
            f32 swim; /* +0x720: src/func_80220EB0.c */
        } view720_90;
        struct {
            char pad[0x13C];
            f32 unk724; /* +0x724: src/func_802243E4.c, src/func_80224C28.c */
        } view724_71;
        struct {
            char pad[0x13C];
            f32 pitch; /* +0x724: src/func_802243E4.c */
        } view724_72;
        struct {
            char pad[0x140];
            f32 unk728; /* +0x728: src/func_80220EB0.c, src/func_80223E10.c */
        } view728_73;
        struct {
            char pad[0x140];
            f32 kickPitch; /* +0x728: src/func_80223E10.c */
        } view728_74;
        struct {
            char pad[0x144];
            f32 unk72C; /* +0x72C: src/func_802238BC.c, src/func_80223E10.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80225F20.c */
        } view72C_75;
        struct {
            char pad[0x144];
            f32 kickRoll; /* +0x72C: src/func_80223E10.c */
        } view72C_76;
        struct {
            char pad[0x144];
            f32 lean; /* +0x72C: src/func_80225F20.c */
        } view72C_77;
        struct {
            char pad[0x148];
            f32 unk730[3]; /* +0x730: src/func_80223E10.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c */
        } view730_78;
        struct {
            char pad[0x148];
            f32 sway[3]; /* +0x730: src/func_80223E10.c */
        } view730_79;
        struct {
            char pad[0x154];
            f32 unk73C; /* +0x73C: src/func_80223E10.c, src/func_80225F20.c */
        } view73C_80;
        struct {
            char pad[0x154];
            f32 side; /* +0x73C: src/func_80223E10.c */
        } view73C_81;
        struct {
            char pad[0x154];
            Vec3f weapon; /* +0x73C: src/func_80225F20.c */
        } view73C_82;
        struct {
            char pad[0x158];
            f32 unk740; /* +0x740: src/func_80223E10.c */
        } view740_83;
        struct {
            char pad[0x158];
            f32 height; /* +0x740: src/func_80223E10.c */
        } view740_84;
        struct {
            char pad[0x15C];
            f32 unk744; /* +0x744: src/func_80223E10.c */
        } view744_85;
        struct {
            char pad[0x15C];
            f32 forward; /* +0x744: src/func_80223E10.c */
        } view744_86;
        struct {
            char pad[0x170];
            f32 unk758; /* +0x758: src/func_80220EB0.c, src/func_80223E10.c */
        } view758_87;
        struct {
            char pad[0x170];
            f32 bobStrength; /* +0x758: src/func_80223E10.c */
        } view758_88;
        struct {
            char pad[0x174];
            f32 unk75C; /* +0x75C: src/func_80220EB0.c, src/func_80223E10.c */
        } view75C_89;
        struct {
            char pad[0x174];
            f32 bobSpeed; /* +0x75C: src/func_80223E10.c */
        } view75C_90;
        struct {
            char pad[0x188];
            s16 unk770; /* +0x770: src/func_8020FDB0.c, src/func_80230390.c */
        } view770_91;
        struct {
            char pad[0x188];
            s16 nextWeapon; /* +0x770: src/func_8020FDB0.c */
        } view770_92;
        struct {
            char pad[0x188];
            s16 weapon; /* +0x770: src/func_80220EB0.c */
        } view770_113;
        struct {
            char pad[0x18A];
            s16 pad772; /* +0x772: src/func_80220EB0.c */
        } view772_114;
        struct {
            char pad[0x18C];
            Vec3 unk774; /* +0x774: src/func_80220EB0.c */
        } view774_115;
        struct {
            char pad[0x198];
            f32 unk780; /* +0x780: src/func_80220EB0.c */
        } view780_116;
        struct {
            char pad[0x19C];
            f32 unk784; /* +0x784: src/func_80220EB0.c */
        } view784_117;
        struct {
            char pad[0x1A0];
            s32 unk788; /* +0x788: src/func_8021E27C.c */
        } view788_93;
        struct {
            char pad[0x1A0];
            s32 icons; /* +0x788: src/func_8021E27C.c */
        } view788_94;
        struct {
            char pad[0x1B0];
            s32 unk798; /* +0x798: src/func_8021E27C.c */
        } view798_95;
        struct {
            char pad[0x1B0];
            s32 carried; /* +0x798: src/func_8021E27C.c */
        } view798_96;
        struct {
            char pad[0x1B4];
            Vec3f unk79C; /* +0x79C: src/func_8021E27C.c */
        } view79C_97;
        struct {
            char pad[0x1B4];
            Vec3f carriedPosition; /* +0x79C: src/func_8021E27C.c */
        } view79C_98;
        struct {
            char pad[0x1D0];
            s32 unk7B8; /* +0x7B8: src/func_8021E27C.c */
        } view7B8_99;
        struct {
            char pad[0x1D0];
            s32 target; /* +0x7B8: src/func_8021E27C.c */
        } view7B8_100;
        struct {
            char pad[0x1D4];
            f32 unk7BC; /* +0x7BC: src/func_8021E27C.c */
        } view7BC_101;
        struct {
            char pad[0x1D4];
            f32 timer; /* +0x7BC: src/func_8021E27C.c */
        } view7BC_102;
        struct {
            char pad[0x1D8];
            Vec3f unk7C0; /* +0x7C0: src/func_8021E27C.c */
        } view7C0_103;
        struct {
            char pad[0x1D8];
            Vec3f targetPosition; /* +0x7C0: src/func_8021E27C.c */
        } view7C0_104;
        struct {
            char pad[0x200];
            s32 unk7E8; /* +0x7E8: src/func_80220EB0.c, src/func_802233CC.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80230390.c */
        } view7E8_105;
        struct {
            char pad[0x200];
            s32 zoomed; /* +0x7E8: src/func_802243E4.c */
        } view7E8_106;
        struct {
            char pad[0x204];
            f32 unk7EC; /* +0x7EC: src/func_80220EB0.c */
        } view7EC_132;
        struct {
            char pad[0x208];
            f32 unk7F0; /* +0x7F0: src/func_80220EB0.c */
        } view7F0_133;
        struct {
            char pad[0x224];
            struct Mount * unk80C; /* +0x80C: src/func_80225F20.c */
        } view80C_107;
        struct {
            char pad[0x224];
            struct Mount * mount; /* +0x80C: src/func_80225F20.c */
        } view80C_108;
        struct {
            char pad[0x228];
            s32 unk810; /* +0x810: src/func_80225F20.c */
        } view810_109;
        struct {
            char pad[0x228];
            s32 kind; /* +0x810: src/func_80225F20.c */
        } view810_110;
        struct {
            char pad[0x22C];
            Triple unk814; /* +0x814: src/func_80225F20.c */
        } view814_111;
        struct {
            char pad[0x22C];
            Triple offset; /* +0x814: src/func_80225F20.c */
        } view814_112;
        struct {
            char pad[0x250];
            f32 unk838; /* +0x838: src/func_80225F20.c */
        } view838_113;
        struct {
            char pad[0x250];
            f32 rideTime; /* +0x838: src/func_80225F20.c */
        } view838_114;
        struct {
            char pad[0x254];
            f32 unk83C; /* +0x83C: src/func_80225F20.c */
        } view83C_115;
        struct {
            char pad[0x254];
            f32 bump; /* +0x83C: src/func_80225F20.c */
        } view83C_116;
        struct {
            char pad[0x258];
            s32 unk840; /* +0x840: src/func_80224F38.c */
        } view840_117;
        struct {
            char pad[0x258];
            s32 surfaced; /* +0x840: src/func_80224F38.c */
        } view840_118;
        struct {
            char pad[0x264];
            s32 unk84C; /* +0x84C: src/func_8022BEF4.c */
        } view84C_149;
        struct {
            char pad[0x26C];
            f32 unk854; /* +0x854: src/func_80220EB0.c */
        } view854_147;
        struct {
            char pad[0x274];
            s32 unk85C; /* +0x85C: src/func_8044A37C.c */
        } view85C_119;
        struct {
            char pad[0x274];
            s32 w85C; /* +0x85C: src/func_8044A37C.c */
        } view85C_120;
        struct {
            char pad[0x27C];
            s32 unk864; /* +0x864: src/func_8044AB34.c */
        } view864_121;
        struct {
            char pad[0x27C];
            s32 f864; /* +0x864: src/func_8044AB34.c */
        } view864_122;
        struct {
            char pad[0x280];
            s32 unk868; /* +0x868: src/func_8044AB34.c */
        } view868_123;
        struct {
            char pad[0x280];
            s32 f868; /* +0x868: src/func_8044AB34.c */
        } view868_124;
        struct {
            char pad[0x284];
            s32 unk86C; /* +0x86C: src/func_80220EB0.c, src/func_802227D0.c, src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c */
        } view86C_125;
        struct {
            char pad[0x284];
            s32 parameter; /* +0x86C: src/func_802227D0.c */
        } view86C_126;
        struct {
            char pad[0x284];
            s32 animation; /* +0x86C: src/func_802243E4.c */
        } view86C_127;
        struct {
            char pad[0x288];
            s32 unk870; /* +0x870: src/func_80220EB0.c */
        } view870_157;
        struct {
            char pad[0x290];
            Shared_Effect effect; /* +0x878: src/func_80220EB0.c */
        } view878_158;
        struct {
            char pad[0x350];
            char unk938[2188]; /* +0x938: src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c, src/func_80226A10.c */
        } view938_128;
        struct {
            char pad[0x350];
            char strokes[2188]; /* +0x938: src/func_802243E4.c */
        } view938_129;
        struct {
            char pad[0x350];
            char strokes[2188]; /* +0x938: src/func_80226A10.c */
        } view938_130;
        struct {
            char pad[0x350];
            s32 unk938; /* +0x938: src/func_80220EB0.c */
        } view938_162;
        struct {
            char pad[0x6D0];
            s32 unkCB8; /* +0xCB8: src/func_80220EB0.c */
        } viewCB8_163;
        struct {
            char pad[0x6E4];
            s32 unkCCC; /* +0xCCC: src/func_80220EB0.c */
        } viewCCC_164;
        struct {
            char pad[0x758];
            s32 unkD40; /* +0xD40: src/func_80220EB0.c */
        } viewD40_165;
        struct {
            char pad[0x96C];
            s32 unkF54; /* +0xF54: src/func_80226A10.c */
        } viewF54_131;
        struct {
            char pad[0x96C];
            s32 selection; /* +0xF54: src/func_80226A10.c */
        } viewF54_132;
        struct {
            char pad[0x9A8];
            s32 unkF90; /* +0xF90: src/func_80226A10.c */
        } viewF90_133;
        struct {
            char pad[0x9A8];
            s32 choice; /* +0xF90: src/func_80226A10.c */
        } viewF90_134;
        struct {
            char pad[0xBCC];
            s32 unk11B4; /* +0x11B4: src/func_80218B84.c */
        } view11B4_135;
        struct {
            char pad[0xBCC];
            s32 locked; /* +0x11B4: src/func_80218B84.c */
        } view11B4_136;
        struct {
            char pad[0xBD0];
            s32 unk11B8; /* +0x11B8: src/func_80218B84.c, src/func_802233CC.c */
        } view11B8_137;
        struct {
            char pad[0xBD0];
            s32 frozen; /* +0x11B8: src/func_80218B84.c */
        } view11B8_138;
        struct {
            char pad[0xBD4];
            s32 unk11BC; /* +0x11BC: src/func_8044AB34.c */
        } view11BC_139;
        struct {
            char pad[0xBD4];
            s32 f11BC; /* +0x11BC: src/func_8044AB34.c */
        } view11BC_140;
        struct {
            char pad[0xBD8];
            s32 unk11C0; /* +0x11C0: src/func_8044AB34.c */
        } view11C0_141;
        struct {
            char pad[0xBD8];
            s32 f11C0; /* +0x11C0: src/func_8044AB34.c */
        } view11C0_142;
        struct {
            char pad[0xBDC];
            f32 unk11C4; /* +0x11C4: src/func_802243E4.c, src/func_80224C28.c, src/func_80224F38.c */
        } view11C4_143;
        struct {
            char pad[0xBDC];
            f32 soundTime; /* +0x11C4: src/func_802243E4.c */
        } view11C4_144;
        struct {
            char pad[0xBE4];
            s32 unk11CC; /* +0x11CC: src/func_8044AB34.c */
        } view11CC_145;
        struct {
            char pad[0xBE4];
            s32 f11CC; /* +0x11CC: src/func_8044AB34.c */
        } view11CC_146;
        struct {
            char pad[0xBF0];
            f32 unk11D8; /* +0x11D8: src/func_80220EB0.c, src/func_80223E10.c, src/func_802243E4.c, src/func_80224C28.c, src/func_802297F0.c, src/func_80230390.c */
        } view11D8_147;
        struct {
            char pad[0xBF0];
            f32 recoil; /* +0x11D8: src/func_80223E10.c */
        } view11D8_148;
        struct {
            char pad[0xBF0];
            f32 stun; /* +0x11D8: src/func_802243E4.c */
        } view11D8_149;
        struct {
            char pad[0xBF4];
            f32 unk11DC; /* +0x11DC: src/func_80220EB0.c */
        } view11DC_185;
        struct {
            char pad[0xBF8];
            f32 unk11E0; /* +0x11E0: src/func_80220EB0.c */
        } view11E0_186;
        struct {
            char pad[0xC00];
            s32 unk11E8; /* +0x11E8: src/func_8044AB34.c */
        } view11E8_150;
        struct {
            char pad[0xC00];
            s32 f11E8; /* +0x11E8: src/func_8044AB34.c */
        } view11E8_151;
        struct {
            char pad[0xC04];
            f32 unk11EC; /* +0x11EC: src/func_80220EB0.c */
        } view11EC_189;
        struct {
            char pad[0xC28];
            s32 unk1210; /* +0x1210: src/func_802297F0.c */
        } view1210_152;
        struct {
            char pad[0xC28];
            s32 marker; /* +0x1210: src/func_802297F0.c */
        } view1210_153;
        struct {
            char pad[0xC2C];
            s32 unk1214; /* +0x1214: src/func_8021D3E4.c, src/func_802297F0.c */
        } view1214_154;
        struct {
            char pad[0xC2C];
            s32 marker; /* +0x1214: src/func_8021D3E4.c */
        } view1214_155;
        struct {
            char pad[0xC2C];
            s32 markerShown; /* +0x1214: src/func_802297F0.c */
        } view1214_156;
        struct {
            char pad[0xC30];
            s32 unk1218; /* +0x1218: src/func_8044AB34.c */
        } view1218_157;
        struct {
            char pad[0xC30];
            s32 f1218; /* +0x1218: src/func_8044AB34.c */
        } view1218_158;
        struct {
            char pad[0xC34];
            s32 unk121C; /* +0x121C: src/func_8044AB34.c */
        } view121C_159;
        struct {
            char pad[0xC34];
            s32 f121C; /* +0x121C: src/func_8044AB34.c */
        } view121C_160;
        struct {
            char pad[0xC38];
            s32 unk1220; /* +0x1220: src/func_8044AB34.c */
        } view1220_161;
        struct {
            char pad[0xC38];
            s32 f1220; /* +0x1220: src/func_8044AB34.c */
        } view1220_162;
        struct { char pad[0xE]; s16 charge; } chargeView;
        struct { char pad[0x11F4 - 0x5E8]; f32 spin; s32 frame; } rapidFireView;
    } views5E8;
    union {
        struct {
            u32 unk122C; /* +0x122C: src/func_80220D20.c, src/func_802297F0.c, src/func_8044AB34.c */
        } view122C_0;
        struct {
            u32 flags; /* +0x122C: src/func_80220D20.c */
        } view122C_1;
        struct {
            s32 options; /* +0x122C: src/func_802297F0.c */
        } view122C_2;
        struct {
            s32 f122C; /* +0x122C: src/func_8044AB34.c */
        } view122C_3;
        struct {
            s32 fxFlags; /* +0x122C: src/func_80220EB0.c */
        } view122C_4;
    } views122C;
    f32 fxTime; /* +0x1230: src/func_80220EB0.c */
    f32 fxSpeed; /* +0x1234: src/func_80220EB0.c */
    s32 fxStage; /* +0x1238: src/func_80220EB0.c */
    char pad123C[0x4];
    f32 unk1240; /* +0x1240: src/func_80220EB0.c */
    f32 unk1244; /* +0x1244: src/func_80220EB0.c */
    char pad1248[0x7C];
    union {
        struct {
            s32 unk12C4; /* +0x12C4: src/func_8044AB34.c */
        } view12C4_0;
        struct {
            s32 f12C4; /* +0x12C4: src/func_8044AB34.c */
        } view12C4_1;
    } views12C4;
    union {
        struct {
            s32 unk12C8; /* +0x12C8: src/func_8044AB34.c */
        } view12C8_0;
        struct {
            s32 f12C8; /* +0x12C8: src/func_8044AB34.c */
        } view12C8_1;
    } views12C8;
    union {
        struct {
            s32 unk12CC[8]; /* +0x12CC: src/func_8044AB34.c */
        } view12CC_0;
        struct {
            s32 splitsA[8]; /* +0x12CC: src/func_8044AB34.c */
        } view12CC_1;
    } views12CC;
    s32 unk12EC; /* +0x12EC: src/func_80220EB0.c */
    char pad12F0[0x4];
    union {
        struct {
            s32 unk12F4[8]; /* +0x12F4: src/func_8044AB34.c */
        } view12F4_0;
        struct {
            s32 splitsB[8]; /* +0x12F4: src/func_8044AB34.c */
        } view12F4_1;
    } views12F4;
    char pad1314[0x20];
    union {
        struct {
            s32 unk1334; /* +0x1334: src/func_8044AB34.c */
        } view1334_0;
        struct {
            s32 f1334; /* +0x1334: src/func_8044AB34.c */
        } view1334_1;
    } views1334;
    union {
        struct {
            s32 unk1338; /* +0x1338: src/func_8044AB34.c */
        } view1338_0;
        struct {
            s32 f1338; /* +0x1338: src/func_8044AB34.c */
        } view1338_1;
    } views1338;
    union {
        struct {
            s32 unk133C; /* +0x133C: src/func_8044A37C.c, src/func_8044A4C0.c */
        } view133C_0;
        struct {
            s32 laps; /* +0x133C: src/func_8044A37C.c */
        } view133C_1;
        struct {
            s32 lives; /* +0x133C: src/func_8044A4C0.c */
        } view133C_2;
    } views133C;
    union {
        struct {
            s32 unk1340; /* +0x1340: src/func_80208158.c, src/func_80209CD8.c, src/func_8044A4C0.c */
        } view1340_0;
        struct {
            s32 stalls; /* +0x1340: src/func_80208158.c */
        } view1340_1;
        struct {
            s32 timer; /* +0x1340: src/func_80209CD8.c */
        } view1340_2;
        struct {
            s32 respawnTimer; /* +0x1340: src/func_8044A4C0.c */
        } view1340_3;
    } views1340;
    char pad1344[0x70];
    union {
        struct {
            struct StateInfo * unk13B4; /* +0x13B4: src/func_802227D0.c, src/func_802238BC.c, src/func_802243E4.c, src/func_8044AB34.c */
        } view13B4_0;
        struct {
            struct StateInfo * states; /* +0x13B4: src/func_802227D0.c */
        } view13B4_1;
        struct {
            struct Mode * unk13B4; /* +0x13B4: src/func_802238BC.c */
        } view13B4_2;
        struct {
            void * character; /* +0x13B4: src/func_802243E4.c */
        } view13B4_3;
        struct {
            s32 f13B4; /* +0x13B4: src/func_8044AB34.c */
        } view13B4_4;
        struct {
            struct Shared_StateInfo * states; /* +0x13B4: src/func_80220EB0.c */
        } view13B4_5;
    } views13B4;
    char pad13B8[0x10];
    union {
        struct {
            s32 unk13C8; /* +0x13C8: src/func_8044A37C.c, src/func_8044AB34.c */
        } view13C8_0;
        struct {
            s32 w13C8; /* +0x13C8: src/func_8044A37C.c */
        } view13C8_1;
        struct {
            s32 f13C8; /* +0x13C8: src/func_8044AB34.c */
        } view13C8_2;
    } views13C8;
    char pad13CC[0x8];
    s32 unk13D4; /* +0x13D4: src/func_80220EB0.c */
    union {
        struct {
            struct Held * unk13D8; /* +0x13D8: src/func_8022631C.c */
        } view13D8_0;
        struct {
            struct Held * held; /* +0x13D8: src/func_8022631C.c */
        } view13D8_1;
    } views13D8;
    char pad13DC[0xC];
    s32 messageIndex; /* +0x13E8: four-line player message log */
    char pad13EC[0x64];
    union {
        struct {
            s32 unk1450; /* +0x1450: src/func_80208158.c, src/func_8020FDB0.c, src/func_80220EB0.c, src/func_8022591C.c, src/func_80229530.c, src/func_80230390.c, src/func_8044A37C.c, src/func_8044A4C0.c, src/func_8044AB34.c */
        } view1450_0;
        struct {
            s32 computer; /* +0x1450: src/func_80208158.c */
        } view1450_1;
        struct {
            s32 infinite; /* +0x1450: src/func_8022591C.c */
        } view1450_2;
        struct {
            s32 unlimited; /* +0x1450: src/func_80229530.c */
        } view1450_3;
        struct {
            s32 uncounted; /* +0x1450: src/func_8044A4C0.c */
        } view1450_4;
        struct {
            s32 f1450; /* +0x1450: src/func_8044AB34.c */
        } view1450_5;
    } views1450;
    union {
        struct {
            s32 unk1454; /* +0x1454: src/func_80220EB0.c, src/func_8044AB34.c */
        } view1454_0;
        struct {
            s32 f1454; /* +0x1454: src/func_8044AB34.c */
        } view1454_1;
    } views1454;
    char pad1458[0xC];
    union {
        struct {
            Vec3f unk1464; /* +0x1464: src/func_8021D3E4.c */
        } view1464_0;
        struct {
            Vec3f aim; /* +0x1464: src/func_8021D3E4.c */
        } view1464_1;
    } views1464;
    char pad1470[0x10];
    union {
        struct {
            Matrix unk1480[2]; /* +0x1480: src/func_8021D3E4.c */
        } view1480_0;
        struct {
            Matrix beams[2]; /* +0x1480: src/func_8021D3E4.c */
        } view1480_1;
    } views1480;
    union {
        struct {
            Matrix unk1500[2]; /* +0x1500: src/func_8021D3E4.c */
        } view1500_0;
        struct {
            Matrix lasers[2]; /* +0x1500: src/func_8021D3E4.c */
        } view1500_1;
    } views1500;
    union {
        struct {
            Matrix unk1580[2]; /* +0x1580: src/func_8021D3E4.c */
        } view1580_0;
        struct {
            Matrix dots[2]; /* +0x1580: src/func_8021D3E4.c */
        } view1580_1;
    } views1580;
    char pad1600[0xD4];
    union {
        struct {
            s32 unk16D4; /* +0x16D4: src/func_80220EB0.c, src/func_8044AB34.c */
        } view16D4_0;
        struct {
            s32 f16D4; /* +0x16D4: src/func_8044AB34.c */
        } view16D4_1;
    } views16D4;
    u16 unk16D8; /* +0x16D8: src/func_80220EB0.c */
    char pad16DA[0x6];
    union {
        struct {
            struct SharedPlayer * unk16E0; /* +0x16E0: src/func_80203278.c, src/func_80226A10.c, src/func_8022804C.c, src/func_80228394.c, src/func_8022A67C.c, src/func_80233C78.c, src/func_80281A70.c */
        } view16E0_0;
        struct {
            struct SharedPlayer * next; /* +0x16E0: src/func_80203278.c */
        } view16E0_1;
        struct {
            struct SharedPlayer * next; /* +0x16E0: src/func_80226A10.c */
        } view16E0_2;
    } views16E0;
};
typedef char SharedPlayer_size_check[(sizeof(SharedPlayer) == 0x16E4) ? 1 : -1];

#endif
