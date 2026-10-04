#ifndef UNBAKE_SPAN_16E000_CODE_80445CE8_H
#define UNBAKE_SPAN_16E000_CODE_80445CE8_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Entry_func_80445AB4_de;
typedef struct Entry_func_80445AB4_de Entry_func_80445AB4_de;

struct Entry_func_80445E04_de;
typedef struct Entry_func_80445E04_de Entry_func_80445E04_de;

struct LocalizedInputState;
typedef struct LocalizedInputState LocalizedInputState;

struct Menu_func_80445964_de;
typedef struct Menu_func_80445964_de Menu_func_80445964_de;

struct Player_func_8044560C_de;
typedef struct Player_func_8044560C_de Player_func_8044560C_de;

struct Spinner;
typedef struct Spinner Spinner;

struct State_func_80445EF4_de;
typedef struct State_func_80445EF4_de State_func_80445EF4_de;

struct Style_func_80445BC0_de;
typedef struct Style_func_80445BC0_de Style_func_80445BC0_de;

struct TextEntry_func_80445D6C_de;
typedef struct TextEntry_func_80445D6C_de TextEntry_func_80445D6C_de;

struct Actor_func_8044560C_de;
struct Actor_func_8044560C_de {
    char pad0[0x80];
    s32 mask80;
    char pad84[0xA8 - 0x84];
    s32 maskA8;
};
struct Entry_func_80445AB4_de;
struct Entry_func_80445AB4_de {
    s32 value;
    f32 timer;
    s32 count;
    u8 text[12];
};
struct Entry_func_80445E04_de;
struct Entry_func_80445E04_de {
    char pad[0x1C];
    func_80209B64_S4 *unk1C;
};
struct LocalizedInputState;
struct LocalizedInputState {
    u8 reserved[0x1809];
    u8 language;
};
struct Menu_func_80445964_de;
struct Menu_func_80445964_de {
    s16 state;
    char pad2[0x1A];
    s32 id;
    s32 input;
};
struct Actor_func_8044560C_de;
struct Player_func_8044560C_de;
struct Player_func_8044560C_de {
    s16 state;
    char pad2[0xA];
    struct Actor_func_8044560C_de *actor;
};
struct Spinner;
struct Spinner {
    s32 value;
    f32 timer;
    s32 max;
    char padC[0xC];
};
struct State_func_80445EF4_de;
struct State_func_80445EF4_de {
    char pad[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
};
struct Style_func_80445BC0_de;
struct Style_func_80445BC0_de {
    char pad0[0x1C];
    s32 id;
    char pad20[0x10];
    f32 alpha;
    f32 fade;
};
struct TextEntry_func_80445D6C_de;
struct TextEntry_func_80445D6C_de {
    s32 length;
    s32 cursor;
    s32 count;
    char text[12];
};
extern void func_8044560C_de(Player_func_8044560C_de *player);
extern void func_8044569C_de(void);
extern void func_804456B8_de(void);
extern s32 func_80445B88_de(u8 *a, u8 *b, s32 count);
extern s32 func_80445EF4_de(void);
extern int func_8044632C_us_rev1(void * arg0);
#endif
