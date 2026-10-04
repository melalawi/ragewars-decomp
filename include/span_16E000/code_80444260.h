#ifndef UNBAKE_SPAN_16E000_CODE_80444260_H
#define UNBAKE_SPAN_16E000_CODE_80444260_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct MenuItem_func_80444314_de;
typedef struct MenuItem_func_80444314_de MenuItem_func_80444314_de;

struct Record_func_8043E494_de;
typedef struct Record_func_8043E494_de Record_func_8043E494_de;

struct Actor_func_804441F4_de;
struct Owner_func_804441F4_de;
struct Actor_func_804441F4_de {
    char pad[0x1C];
    struct Owner_func_804441F4_de *owner;
};
struct Settings_func_80444488_de;
struct Settings_func_80444488_de {
    char pad[0x7C];
    u8 value;
};
struct Owner_func_80444488_de;
struct Settings_func_80444488_de;
struct Owner_func_80444488_de {
    char pad[0x5D8];
    struct Settings_func_80444488_de *settings;
};
struct Holder_func_80444488_de;
struct Owner_func_80444488_de;
struct Holder_func_80444488_de {
    char pad[0x1C];
    struct Owner_func_80444488_de *owner;
};
struct Settings_func_80444548_de;
struct Settings_func_80444548_de {
    char pad[0x7D];
    u8 value;
};
struct Owner_func_80444548_de;
struct Settings_func_80444548_de;
struct Owner_func_80444548_de {
    char pad[0x5D8];
    struct Settings_func_80444548_de *settings;
};
struct Holder_func_80444548_de;
struct Owner_func_80444548_de;
struct Holder_func_80444548_de {
    char pad[0x1C];
    struct Owner_func_80444548_de *owner;
};
struct Settings_func_80444610_de;
struct Settings_func_80444610_de {
    char pad[0x7E];
    u8 value;
};
struct Owner_func_80444610_de;
struct Settings_func_80444610_de;
struct Owner_func_80444610_de {
    char pad[0x5D8];
    struct Settings_func_80444610_de *settings;
};
struct Holder_func_80444610_de;
struct Owner_func_80444610_de;
struct Holder_func_80444610_de {
    char pad[0x1C];
    struct Owner_func_80444610_de *owner;
};
struct Settings_func_80444988_de;
struct Settings_func_80444988_de {
    char pad[0x79];
    u8 value;
};
struct Owner_func_80444988_de;
struct Settings_func_80444988_de;
struct Owner_func_80444988_de {
    char pad[0x5D8];
    struct Settings_func_80444988_de *settings;
};
struct Holder_func_80444988_de;
struct Owner_func_80444988_de;
struct Holder_func_80444988_de {
    char pad[0x1C];
    struct Owner_func_80444988_de *owner;
};
struct Settings_func_80444AB8_de;
struct Settings_func_80444AB8_de {
    char pad[0x7A];
    u8 value;
};
struct Owner_func_80444AB8_de;
struct Settings_func_80444AB8_de;
struct Owner_func_80444AB8_de {
    char pad[0x5D8];
    struct Settings_func_80444AB8_de *settings;
};
struct Holder_func_80444AB8_de;
struct Owner_func_80444AB8_de;
struct Holder_func_80444AB8_de {
    char pad[0x1C];
    struct Owner_func_80444AB8_de *owner;
};
struct Settings_func_80444BE8_de;
struct Settings_func_80444BE8_de {
    char pad[0x82];
    u8 flag;
};
struct Owner_func_80444BE8_de;
struct Settings_func_80444BE8_de;
struct Owner_func_80444BE8_de {
    char pad[0x5D8];
    struct Settings_func_80444BE8_de *settings;
};
struct Holder_func_80444BE8_de;
struct Owner_func_80444BE8_de;
struct Holder_func_80444BE8_de {
    char pad[0x1C];
    struct Owner_func_80444BE8_de *owner;
};
struct MenuItem_func_80444314_de;
struct MenuItem_func_80444314_de {
    char pad0[8];
    u32 flags;
    char padC[8];
    void *table;
};
struct Options_func_80444D50_de;
struct Options_func_80444D50_de {
    s32 flags;
    s32 pad4[3];
    s32 value;
};
extern void func_804441E4_de(void);
extern char *func_804441F4_de(struct Actor_func_804441F4_de *actor);
#endif
