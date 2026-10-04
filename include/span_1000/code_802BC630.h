#ifndef UNBAKE_SPAN_1000_CODE_802BC630_H
#define UNBAKE_SPAN_1000_CODE_802BC630_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ContPad;
typedef struct ContPad ContPad;

struct ContReadFormat;
typedef struct ContReadFormat ContReadFormat;

struct OSPfs;
typedef struct OSPfs OSPfs;

struct __OSContRamReadFormat;
typedef struct __OSContRamReadFormat __OSContRamReadFormat;

struct ContPad;
struct ContPad {
    u16 button;
    s8 stick_x;
    s8 stick_y;
    u8 error;
};
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
extern void func_802B75F4_de(ContPad *data);
extern void func_802B768C_de(void);
extern void func_802B784C_de(void);
extern int func_802B7C30_de(void);
#endif
