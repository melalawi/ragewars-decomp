#ifndef UNBAKE_SPAN_16E000_CODE_8041BC50_H
#define UNBAKE_SPAN_16E000_CODE_8041BC50_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct List_func_8041BE28_de;
typedef struct List_func_8041BE28_de List_func_8041BE28_de;

struct Menu_func_8041D960_de;
typedef struct Menu_func_8041D960_de Menu_func_8041D960_de;

struct Menu_func_8041DA5C_de;
typedef struct Menu_func_8041DA5C_de Menu_func_8041DA5C_de;

struct Mixer;
typedef struct Mixer Mixer;

struct Node_func_8041DA5C_de;
typedef struct Node_func_8041DA5C_de Node_func_8041DA5C_de;

struct Obj_func_8041CDB0_de;
typedef struct Obj_func_8041CDB0_de Obj_func_8041CDB0_de;

struct Obj_func_8041CDDC_de;
typedef struct Obj_func_8041CDDC_de Obj_func_8041CDDC_de;

struct Obj_func_8041CE08_de;
typedef struct Obj_func_8041CE08_de Obj_func_8041CE08_de;

struct State_func_8041C40C_de;
typedef struct State_func_8041C40C_de State_func_8041C40C_de;

struct Unk8041CE88;
typedef struct Unk8041CE88 Unk8041CE88;

struct Child_func_8041BBD0_de;
struct Child_func_8041BBD0_de {
    char pad[0x12];
    u16 flags;
    char pad14[0x2C - 0x14];
    void *target;
};
struct Child_func_8041BC64_de;
struct Child_func_8041BC64_de {
    char pad[0x12];
    u16 flags;
    char pad14[0x38 - 0x14];
    void *target;
};
struct Child_func_8041BCF8_de;
struct Child_func_8041BCF8_de {
    char pad[0x12];
    u16 flags;
    char pad14[0x30 - 0x14];
    void *target;
};
struct List_func_8041BE28_de;
struct List_func_8041BE28_de {
    char pad[0x48];
    int count;
    void *items[1];
};
struct Label;
struct Menu_func_8041D960_de;
struct Menu_func_8041D960_de {
    char pad0[0xEC];
    func_8021C9B4_S3 *focus;
    struct Label *label;
    char padF4[0x18];
    s32 player;
};
struct Menu_func_8041DA5C_de;
struct Menu_func_8041DA5C_de {
    void *root;
    char pad4[0x108];
    s32 player;
};
struct Mixer;
struct Mixer {
    char pad[0x4C];
    func_8021C9B4_S3 *handlers[4];
    int muted[4];
};
struct Node_func_8041DA5C_de;
struct Node_func_8041DA5C_de {
    char pad0[0x10];
    s8 style;
};
struct Obj_func_8041CDB0_de;
struct Obj_func_8041CDB0_de {
    char pad[0x480];
    Vec3 unk480;
};
struct Obj_func_8041CDDC_de;
struct Obj_func_8041CDDC_de {
    char pad[0x48C];
    Vec3 unk48C;
};
struct Obj_func_8041CE08_de;
struct Obj_func_8041CE08_de {
    char pad[0x498];
    s32 unk498;
};
struct Object49C;
struct Object49C {
    char pad[0x49C];
    s32 value;
};
struct Child_func_8041BBD0_de;
struct Owner_func_8041BBD0_de;
struct Owner_func_8041BBD0_de {
    char pad[0x4C];
    struct Child_func_8041BBD0_de *children[4];
    s32 busy[4];
};
struct Child_func_8041BC64_de;
struct Owner_func_8041BC64_de;
struct Owner_func_8041BC64_de {
    char pad[0x4C];
    struct Child_func_8041BC64_de *children[4];
    s32 busy[4];
};
struct Child_func_8041BCF8_de;
struct Owner_func_8041BCF8_de;
struct Owner_func_8041BCF8_de {
    char pad[0x4C];
    struct Child_func_8041BCF8_de *children[4];
    s32 busy[4];
};
struct Screen_func_8041C2AC_de;
struct Screen_func_8041C2AC_de {
    void *parent;
    void *windows[4];
    s32 selection;
    s32 scroll;
    s32 state;
};
struct State_func_8041C40C_de;
struct State_func_8041C40C_de {
    char pad[0x14];
    int ticks;
    int paused;
};
struct Unk8041CE88;
struct Unk8041CE88 {
    char pad0[0x274];
    u16 unk274;
};
extern s32 func_8041C164_de(void);
extern void func_8041C19C_de(void);
extern s32 func_8041C574_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8041CDB0_de(Obj_func_8041CDB0_de *arg0, Vec3 v);
extern void func_8041CDDC_de(Obj_func_8041CDDC_de *arg0, Vec3 v);
extern void func_8041CE08_de(Obj_func_8041CE08_de *arg0, s32 arg1);
extern void func_8041CE18_de(Unk8041CE88 *arg0);
#endif
