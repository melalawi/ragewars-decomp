#ifndef UNBAKE_SPAN_1000_CODE_80256234_H
#define UNBAKE_SPAN_1000_CODE_80256234_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct CacheEntry;
typedef struct CacheEntry CacheEntry;

struct CartridgeReadRequest;
typedef struct CartridgeReadRequest CartridgeReadRequest;

struct CartridgeReadWorker;
typedef struct CartridgeReadWorker CartridgeReadWorker;

struct Chunk;
typedef struct Chunk Chunk;

struct Chunk_func_80256454_de;
typedef struct Chunk_func_80256454_de Chunk_func_80256454_de;

struct Handles;
typedef struct Handles Handles;

struct Item57BD4;
typedef struct Item57BD4 Item57BD4;

struct Node_func_80256FC0_de;
typedef struct Node_func_80256FC0_de Node_func_80256FC0_de;

struct ObjectLinksC;
typedef struct ObjectLinksC ObjectLinksC;

struct Voice;
typedef struct Voice Voice;

struct Window;
typedef struct Window Window;

struct func_8025631C_S1;
typedef struct func_8025631C_S1 func_8025631C_S1;

struct func_8025663C_S1;
typedef struct func_8025663C_S1 func_8025663C_S1;

struct func_802566A8_S1;
typedef struct func_802566A8_S1 func_802566A8_S1;

struct func_80257A34_S1;
typedef struct func_80257A34_S1 func_80257A34_S1;

struct func_80257BD4_S1;
typedef struct func_80257BD4_S1 func_80257BD4_S1;

struct func_8025844C_S1;
typedef struct func_8025844C_S1 func_8025844C_S1;

struct CacheEntry;
struct CacheEntry {
    struct CacheEntry *next;
    void *key;
    u16 state;
    u16 size;
    s32 padC;
    char data[0x80];
};
struct CartridgeReadRequest;
struct CartridgeReadRequest {
    u32 devAddr;
    void *buffer;
    s32 size;
    void *replyQueue;
    void *replyMsg;
};
struct CartridgeReadWorker;
struct CartridgeReadWorker {
    u8 reserved[0x230];
    u8 requestQueueStorage;
    u8 reserved231[0xA48 - 0x231];
    u8 completionQueueStorage;
};
struct Chunk;
struct Chunk {
    void *source;
    void *destination;
    s32 length;
    void *queue;
};
struct Chunk_func_80256454_de;
struct Queue;
struct Chunk_func_80256454_de {
    void *source;
    void *destination;
    s32 length;
    struct Queue *queue;
    s32 value;
};
struct Handles;
struct Handles {
    char pad0[0x60];
    s16 handles[17];
};
struct Item57BD4;
struct Item57BD4 {
    s16 field0;
    s16 field2;
    s16 field4;
    u16 flags;
};
struct Node_func_80256FC0_de;
struct Node_func_80256FC0_de {
    struct Node_func_80256FC0_de *prev;
    struct Node_func_80256FC0_de *next;
    s32 field8;
    u32 age;
};
struct ObjectLinksC;
struct ObjectLinksC {
    u8 unk_0;
    unsigned char padding_1[3];
    s32 unk_4;
    s32 *unk_8;
};
struct Voice;
struct Voice {
    s32 unk0;
    s32 sound;
    s32 unk8;
    s32 unkC;
    char pad10[0x28];
    s16 priority;
    s16 channel;
    char pad3C[0x64];
    s32 pending;
    s32 flags;
    char padA8[0x24];
};
struct Window;
struct Window {
    struct Window *next;
    struct Window *prev;
    u32 base;
    s32 frame;
    s32 buffer;
};
struct func_8025631C_S1;
struct func_8025631C_S1 {
    char pad0[0x230];
    char unk230;
};
struct func_8025663C_S1;
struct func_8025663C_S1 {
    char pad0[0x5068];
    func_80239C2C_S1_UF24 unk5068;
    char pad5068[0x507C - 0x5068 - sizeof(func_80239C2C_S1_UF24)];
    char unk507C;
};
struct func_802566A8_S1;
struct func_802566A8_S1 {
    char pad0[0x5068];
    char unk5068;
    char pad5068[0x507C - 0x5068 - sizeof(char)];
    char unk507C;
};
struct func_80257A34_S1;
struct func_80257A34_S1 {
    char pad0[0x7C];
    Handles unk7C;
    char pad7C[0x110 - 0x7C - sizeof(Handles)];
    char unk110;
    char pad110[0x138 - 0x110 - sizeof(char)];
    char unk138;
    char pad138[0x1DB8 - 0x138 - sizeof(char)];
    char unk1DB8;
    char pad1DB8[0x1DBC - 0x1DB8 - sizeof(char)];
    char unk1DBC;
};
struct func_80257BD4_S1;
struct func_80257BD4_S1 {
    char pad0[0x110];
    char unk110;
    char pad110[0x138 - 0x110 - sizeof(char)];
    char unk138;
    char pad138[0x1DB8 - 0x138 - sizeof(char)];
    char unk1DB8;
    char pad1DB8[0x2B8C - 0x1DB8 - sizeof(char)];
    s16 unk2B8C;
    char pad2B8C[0x2B90 - 0x2B8C - sizeof(s16)];
    s32 unk2B90;
    char pad2B90[0x2B98 - 0x2B90 - sizeof(s32)];
    void * unk2B98;
};
struct func_8025844C_S1;
struct func_8025844C_S1 {
    char pad0[0x104];
    s32 unk104;
    char pad104[0x134 - 0x104 - sizeof(s32)];
    s32 unk134;
    char pad134[0x1DB8 - 0x134 - sizeof(s32)];
    void * unk1DB8;
    char pad1DB8[0x2BA0 - 0x1DB8 - sizeof(void*)];
    f32 unk2BA0;
    char pad2BA0[0x2BA4 - 0x2BA0 - sizeof(f32)];
    f32 unk2BA4;
    char pad2BA4[0x2BA8 - 0x2BA4 - sizeof(f32)];
    f32 unk2BA8;
    char pad2BA8[0x2BB0 - 0x2BA8 - sizeof(f32)];
    s32 unk2BB0;
    char pad2BB0[0x2BB4 - 0x2BB0 - sizeof(s32)];
    s32 unk2BB4;
};
extern void func_802567D0_de(void);
extern s32 * func_80256E6C_de(s32 * * arg0);
extern s32 func_80256EA8_de(Work56EC8 *arg0);
extern u32 func_802571F0_de(s32 offset, s32 length);
#endif
