#ifndef UNBAKE_SPAN_16E000_CODE_80421A88_H
#define UNBAKE_SPAN_16E000_CODE_80421A88_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct CompactOptionsCommitContext;
typedef struct CompactOptionsCommitContext CompactOptionsCommitContext;

struct OptionsBuildSettings;
typedef struct OptionsBuildSettings OptionsBuildSettings;

struct OptionsCommitContext;
typedef struct OptionsCommitContext OptionsCommitContext;

struct TabOptionsCommitContext;
typedef struct TabOptionsCommitContext TabOptionsCommitContext;

struct TabOptionsCommitOptions;
typedef struct TabOptionsCommitOptions TabOptionsCommitOptions;

struct func_80422C20_S1;
typedef struct func_80422C20_S1 func_80422C20_S1;

struct CompactOptionsCommitContext;
struct CompactOptionsCommitContext {
    void * unk_0;
    void * unk_4;
    void * unk_8;
};
struct Meter;
struct Resource_func_80419E54_de;
struct Meter {
    s32 amount;
    s32 done;
    s32 falling;
    struct Resource_func_80419E54_de *bar;
};
struct OptionsBuildSettings;
struct OptionsBuildSettings {
    char pad0[0x10];
    s32 position;
    char pad14[0x7];
    u8 first;
    char pad1C[0x3];
    u8 second;
    char pad20[0x560];
    u8 third;
};
struct OptionsCommitContext;
struct OptionsCommitContext {
    char pad0[0x8];
    void * unk_8;
    void * unk_C;
    void * unk_10;
    void * unk_14;
};
struct TabOptionsCommitContext;
struct TabOptionsCommitContext {
    char pad0[0x50];
    void * unk_50;
    void * unk_54;
    void * unk_58;
};
struct TabOptionsCommitOptions;
struct TabOptionsCommitOptions {
    char pad0[0x10];
    s32 position;
    char pad14[0x1B - 0x14];
    u8 first;
    char pad1C[0x580 - 0x1C];
    u8 second;
};
struct func_80422C20_S1;
struct func_80422C20_S1 {
    char pad0[0x1240];
    u8 unk1240;
    char pad1240[0x180C - 0x1240 - sizeof(u8)];
    s32 unk180C;
};
extern s32 func_80421A58_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80421DD0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80421E60_de(s32 *record);
extern void func_80421E6C_de(struct Triple *timer, s32 mode);
extern s32 func_80421E9C_de(struct Meter *meter, s32 step);
extern void func_80421FEC_de(struct Rec_func_8024C92C_de *record, s32 value);
extern void func_80422170_de(void);
extern s32 func_8042244C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80422F9C_de(void);
extern void func_80423080_de(void);
#endif
