#ifndef UNBAKE_SPAN_16E000_CODE_80403BCC_H
#define UNBAKE_SPAN_16E000_CODE_80403BCC_H
#include "common/types.h"
#include "../types.h"
struct Device;
typedef struct Device Device;

struct Menu_func_80403BE0_de;
typedef struct Menu_func_80403BE0_de Menu_func_80403BE0_de;

struct NoteState;
typedef struct NoteState NoteState;

struct NoteState_func_8040458C_de;
typedef struct NoteState_func_8040458C_de NoteState_func_8040458C_de;

struct OSPfs_func_80403E90_de;
typedef struct OSPfs_func_80403E90_de OSPfs_func_80403E90_de;

struct PakDirectory;
typedef struct PakDirectory PakDirectory;

struct PakDirectory_func_8040458C_de;
typedef struct PakDirectory_func_8040458C_de PakDirectory_func_8040458C_de;

struct Record_func_80403E10_de;
typedef struct Record_func_80403E10_de Record_func_80403E10_de;

struct Device;
struct Device {
    s8 pad0[0x68];
};
struct Entry_func_804053E0_de;
struct Entry_func_804053E0_de {
    s32 size;
    char data[28];
};
struct Menu_func_80403BE0_de;
struct Menu_func_80403BE0_de {
    char pad[0x34];
    int group;
    char pad38[0x3C];
    int id;
};
struct NoteState;
struct NoteState {
    u32 file_size;
    u32 game_code;
    u16 company_code;
    char ext_name[4];
    char game_name[16];
    char pad[2];
};
struct NoteState_func_8040458C_de;
struct NoteState_func_8040458C_de {
    u32 file_size;
    u32 game_code;
    u16 company_code;
    u8 ext_name[4];
    u8 game_name[16];
    char pad[2];
};
struct OSPfs_func_80403E90_de;
struct OSPfs_func_80403E90_de {
    char pad[0x68];
};
struct PakDirectory;
struct PakDirectory {
    s32 free;
    NoteState notes[16];
};
struct PakDirectory_func_8040458C_de;
struct PakDirectory_func_8040458C_de {
    s32 free;
    NoteState_func_8040458C_de notes[16];
};
struct Record_func_80403E10_de;
struct Record_func_80403E10_de {
    char pad[0x11];
    unsigned char kind;
    unsigned char subtype;
};
struct Entry_func_80405338_de;
struct Record_func_80405338_de;
struct Record_func_80405338_de {
    s32 header;
    struct Entry_func_80405338_de entries[16];
};
struct Entry_func_804053E0_de;
struct Record_func_804053E0_de;
struct Record_func_804053E0_de {
    s32 header;
    struct Entry_func_804053E0_de entries[16];
};
extern s32 func_80403BCC_de(void);
extern int func_80403BE0_de(void);
extern f32 func_80403C58_de(f32 from, f32 to, f32 t);
extern f32 func_80403C98_de(f32 from, f32 to, f32 weight);
extern void func_80403DE8_de(void);
extern int func_804041E8_de(void);
extern int func_80404D84_de(void);
extern void func_80404DDC_de(void);
extern s32 func_804053E0_de(s32 index, s32 entry, s32 *out);
#endif
