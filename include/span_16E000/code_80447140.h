#ifndef UNBAKE_SPAN_16E000_CODE_80447140_H
#define UNBAKE_SPAN_16E000_CODE_80447140_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct OSPfsState;
struct OSPfsState;
typedef struct OSPfsState OSPfsState;

/* unbake evidence input: c3RydWN0IE9TUGZzU3RhdGU7CnR5cGVkZWYgc3RydWN0IE9TUGZzU3RhdGUgT1NQZnNTdGF0ZTsK */

struct __OSContRequesFormatShort;
struct __OSContRequesFormatShort;
typedef struct __OSContRequesFormatShort __OSContRequesFormatShort;

/* unbake evidence input: c3RydWN0IF9fT1NDb250UmVxdWVzRm9ybWF0U2hvcnQ7CnR5cGVkZWYgc3RydWN0IF9fT1NDb250UmVxdWVzRm9ybWF0U2hvcnQgX19PU0NvbnRSZXF1ZXNGb3JtYXRTaG9ydDsK */

struct __OSInodeCache;
struct __OSInodeCache;
typedef struct __OSInodeCache __OSInodeCache;

/* unbake evidence input: c3RydWN0IF9fT1NJbm9kZUNhY2hlOwp0eXBlZGVmIHN0cnVjdCBfX09TSW5vZGVDYWNoZSBfX09TSW5vZGVDYWNoZTsK */

struct __OSPackId;
struct __OSPackId;
typedef struct __OSPackId __OSPackId;

/* unbake evidence input: c3RydWN0IF9fT1NQYWNrSWQ7CnR5cGVkZWYgc3RydWN0IF9fT1NQYWNrSWQgX19PU1BhY2tJZDsK */

struct Entry_func_80448CC4_de;
struct Entry_func_80448CC4_de;
struct Entry_func_80448CC4_de {
    s32 pad0;
    s32 first;
    s32 second;
    char pad[0x65 - 0xC];
    u8 name[32];
};

/* unbake evidence input: c3RydWN0IEVudHJ5X2Z1bmNfODA0NDhDQzRfZGU7CnN0cnVjdCBFbnRyeV9mdW5jXzgwNDQ4Q0M0X2RlIHsKICAgIHMzMiBwYWQwOwogICAgczMyIGZpcnN0OwogICAgczMyIHNlY29uZDsKICAgIGNoYXIgcGFkWzB4NjUgLSAweENdOwogICAgdTggbmFtZVszMl07Cn07Cg== */

struct OSPfsState;
struct OSPfsState;
struct OSPfsState {
    u32 file_size;
    u32 game_code;
    u16 company_code;
    char ext_name[4];
    char game_name[16];
};

/* unbake evidence input: c3RydWN0IE9TUGZzU3RhdGU7CnN0cnVjdCBPU1Bmc1N0YXRlIHsKICAgIHUzMiBmaWxlX3NpemU7CiAgICB1MzIgZ2FtZV9jb2RlOwogICAgdTE2IGNvbXBhbnlfY29kZTsKICAgIGNoYXIgZXh0X25hbWVbNF07CiAgICBjaGFyIGdhbWVfbmFtZVsxNl07Cn07Cg== */

struct __OSContRequesFormatShort;
struct __OSContRequesFormatShort;
struct __OSContRequesFormatShort {
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u8 typeh;
    u8 typel;
    u8 status;
};

/* unbake evidence input: c3RydWN0IF9fT1NDb250UmVxdWVzRm9ybWF0U2hvcnQ7CnN0cnVjdCBfX09TQ29udFJlcXVlc0Zvcm1hdFNob3J0IHsKICAgIHU4IHR4c2l6ZTsKICAgIHU4IHJ4c2l6ZTsKICAgIHU4IGNtZDsKICAgIHU4IHR5cGVoOwogICAgdTggdHlwZWw7CiAgICB1OCBzdGF0dXM7Cn07Cg== */

struct __OSInodeCache;
struct __OSInodeCache;
struct __OSInodeCache {
    __OSInode inode;
    u8 bank;
    u8 map[256];
};

/* unbake evidence input: c3RydWN0IF9fT1NJbm9kZUNhY2hlOwpzdHJ1Y3QgX19PU0lub2RlQ2FjaGUgewogICAgX19PU0lub2RlIGlub2RlOwogICAgdTggYmFuazsKICAgIHU4IG1hcFsyNTZdOwp9Owo= */

struct __OSPackId;
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

/* unbake evidence input: c3RydWN0IF9fT1NQYWNrSWQ7CnN0cnVjdCBfX09TUGFja0lkIHsKICAgIHUzMiByZXBhaXJlZDsKICAgIHUzMiByYW5kb207CiAgICB1NjQgc2VyaWFsX21pZDsKICAgIHU2NCBzZXJpYWxfbG93OwogICAgdTE2IGRldmljZWlkOwogICAgdTggYmFua3M7CiAgICB1OCB2ZXJzaW9uOwogICAgdTE2IGNoZWNrc3VtOwogICAgdTE2IGludmVydGVkX2NoZWNrc3VtOwp9Owo= */

extern void func_80447A38_de(u8 *valid, Entry_func_8023B9C0_eu *data);
#endif
