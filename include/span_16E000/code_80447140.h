#ifndef UNBAKE_SPAN_16E000_CODE_80447140_H
#define UNBAKE_SPAN_16E000_CODE_80447140_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct OSPfsState;
typedef struct OSPfsState OSPfsState;

struct __OSContRequesFormatShort;
typedef struct __OSContRequesFormatShort __OSContRequesFormatShort;

struct __OSInodeCache;
typedef struct __OSInodeCache __OSInodeCache;

struct __OSPackId;
typedef struct __OSPackId __OSPackId;

struct Entry_func_80448CC4_de;
struct Entry_func_80448CC4_de {
    s32 pad0;
    s32 first;
    s32 second;
    char pad[0x65 - 0xC];
    u8 name[32];
};
struct OSPfsState;
struct OSPfsState {
    u32 file_size;
    u32 game_code;
    u16 company_code;
    char ext_name[4];
    char game_name[16];
};
struct __OSContRequesFormatShort;
struct __OSContRequesFormatShort {
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u8 typeh;
    u8 typel;
    u8 status;
};
struct __OSInodeCache;
struct __OSInodeCache {
    __OSInode inode;
    u8 bank;
    u8 map[256];
};
struct __OSPackId;
struct __OSPackId {
    u32 repaired;
    u32 random;
    u64 serial_mid;
    u64 serial_low;
    u16 deviceid;
    u8 banks;
    u8 version;
    u16 checksum;
    u16 inverted_checksum;
};
extern void func_80447A38_de(u8 *valid, Entry_func_8023B9C0_eu *data);
extern u16 func_80448B84_de(u8 *bytes, s32 count);
#endif
