#ifndef UNBAKE_SPAN_16E000_CODE_8041DBA0_H
#define UNBAKE_SPAN_16E000_CODE_8041DBA0_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Menu_func_8041DBCC_de;
typedef struct Menu_func_8041DBCC_de Menu_func_8041DBCC_de;

struct Menu_func_8041EE08_de;
typedef struct Menu_func_8041EE08_de Menu_func_8041EE08_de;

struct Player_func_8041EAC4_de;
typedef struct Player_func_8041EAC4_de Player_func_8041EAC4_de;

struct Menu_func_8041DBCC_de;
struct Menu_func_8041DBCC_de {
    char pad0[8];
    char model[1];
};
struct Menu_func_8041EE08_de;
struct Menu_func_8041EE08_de {
    char pad[8];
    int items[3];
    int unk14;
    int unk18;
    int unk1C;
};
struct Request_func_8041E100_de;
struct Request_func_8041E100_de {
    s32 id;
    s32 variant;
    s32 word8;
    s32 variantC;
    char name[28 - 0x10];
};
struct Screen_func_8041ECB4_de;
struct Screen_func_8041ECB4_de {
    char pad0[8];
    void *roots[3];
    s32 request;
    s32 timer;
};
struct Slot_func_8041F140_de;
struct Slot_func_8041F140_de {
    s32 key;
    char pad[0x70 - 4];
};
struct State_func_8041DDF4_de;
struct State_func_8041DDF4_de {
    char pad0[0xEC];
    s32 value;
};
struct State_func_8041DE5C_de;
struct State_func_8041DE5C_de {
    char pad[0xD8];
    s32 first;
    s32 second;
};
extern s32 func_8041DEB4_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_8041EAC4_de(void);
extern s32 func_8041EB50_de(void);
extern s32 func_8041EBBC_de(void);
extern s32 func_8041F140_de(s32 key);
#endif
