#ifndef UNBAKE_SPAN_1000_CODE_802BC630_H
#define UNBAKE_SPAN_1000_CODE_802BC630_H
#include "../types.h"
struct ContPad;
struct ContPad;
typedef struct ContPad ContPad;

/* unbake evidence input: c3RydWN0IENvbnRQYWQ7CnR5cGVkZWYgc3RydWN0IENvbnRQYWQgQ29udFBhZDsK */

struct ContReadFormat;
struct ContReadFormat;
typedef struct ContReadFormat ContReadFormat;

/* unbake evidence input: c3RydWN0IENvbnRSZWFkRm9ybWF0Owp0eXBlZGVmIHN0cnVjdCBDb250UmVhZEZvcm1hdCBDb250UmVhZEZvcm1hdDsK */

struct OSPfs;
struct OSPfs;
typedef struct OSPfs OSPfs;

/* unbake evidence input: c3RydWN0IE9TUGZzOwp0eXBlZGVmIHN0cnVjdCBPU1BmcyBPU1BmczsK */

struct __OSContRamReadFormat;
struct __OSContRamReadFormat;
typedef struct __OSContRamReadFormat __OSContRamReadFormat;

/* unbake evidence input: c3RydWN0IF9fT1NDb250UmFtUmVhZEZvcm1hdDsKdHlwZWRlZiBzdHJ1Y3QgX19PU0NvbnRSYW1SZWFkRm9ybWF0IF9fT1NDb250UmFtUmVhZEZvcm1hdDsK */

struct ContPad;
struct ContPad;
struct ContPad {
    u16 button;
    s8 stick_x;
    s8 stick_y;
    u8 error;
};

/* unbake evidence input: c3RydWN0IENvbnRQYWQ7CnN0cnVjdCBDb250UGFkIHsKICAgIHUxNiBidXR0b247CiAgICBzOCBzdGlja194OwogICAgczggc3RpY2tfeTsKICAgIHU4IGVycm9yOwp9Owo= */

struct ContReadFormat;
struct ContReadFormat;
struct ContReadFormat {
    u8 dummy;
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u16 button;
    s8 stick_x;
    s8 stick_y;
};

/* unbake evidence input: c3RydWN0IENvbnRSZWFkRm9ybWF0OwpzdHJ1Y3QgQ29udFJlYWRGb3JtYXQgewogICAgdTggZHVtbXk7CiAgICB1OCB0eHNpemU7CiAgICB1OCByeHNpemU7CiAgICB1OCBjbWQ7CiAgICB1MTYgYnV0dG9uOwogICAgczggc3RpY2tfeDsKICAgIHM4IHN0aWNrX3k7Cn07Cg== */

struct OSMesgQueue;
struct OSPfs;
struct OSMesgQueue;
struct OSPfs;
struct OSPfs {
    int status;
    struct OSMesgQueue *queue;
    int channel;
    u8 id[32];
    u8 label[32];
    int version;
    int dir_size;
    int inode_table;
    int minode_table;
    int dir_table;
    int inode_start_page;
    u8 banks;
    u8 activebank;
};

/* unbake evidence input: c3RydWN0IE9TTWVzZ1F1ZXVlOwpzdHJ1Y3QgT1NQZnM7CnN0cnVjdCBPU1BmcyB7CiAgICBpbnQgc3RhdHVzOwogICAgc3RydWN0IE9TTWVzZ1F1ZXVlICpxdWV1ZTsKICAgIGludCBjaGFubmVsOwogICAgdTggaWRbMzJdOwogICAgdTggbGFiZWxbMzJdOwogICAgaW50IHZlcnNpb247CiAgICBpbnQgZGlyX3NpemU7CiAgICBpbnQgaW5vZGVfdGFibGU7CiAgICBpbnQgbWlub2RlX3RhYmxlOwogICAgaW50IGRpcl90YWJsZTsKICAgIGludCBpbm9kZV9zdGFydF9wYWdlOwogICAgdTggYmFua3M7CiAgICB1OCBhY3RpdmViYW5rOwp9Owo= */

struct __OSContRamReadFormat;
struct __OSContRamReadFormat;
struct __OSContRamReadFormat {
    u8 dummy;
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u16 address;
    u8 data[32];
    u8 datacrc;
};

/* unbake evidence input: c3RydWN0IF9fT1NDb250UmFtUmVhZEZvcm1hdDsKc3RydWN0IF9fT1NDb250UmFtUmVhZEZvcm1hdCB7CiAgICB1OCBkdW1teTsKICAgIHU4IHR4c2l6ZTsKICAgIHU4IHJ4c2l6ZTsKICAgIHU4IGNtZDsKICAgIHUxNiBhZGRyZXNzOwogICAgdTggZGF0YVszMl07CiAgICB1OCBkYXRhY3JjOwp9Owo= */

extern void func_802B75F4_de(ContPad *data);
extern void func_802B768C_de(void);
extern void func_802B784C_de(void);
extern int func_802B7C30_de(void);
#endif
