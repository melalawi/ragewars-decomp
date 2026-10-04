#ifndef UNBAKE_SPAN_1000_CODE_80259014_H
#define UNBAKE_SPAN_1000_CODE_80259014_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Cache;
typedef struct Cache Cache;

struct Cell_func_80259440_de;
typedef struct Cell_func_80259440_de Cell_func_80259440_de;

struct ChannelSet;
typedef struct ChannelSet ChannelSet;

struct Context_func_80259440_de;
typedef struct Context_func_80259440_de Context_func_80259440_de;

struct Emitter;
typedef struct Emitter Emitter;

struct Entry_func_80259440_de;
typedef struct Entry_func_80259440_de Entry_func_80259440_de;

struct Entry_func_80259784_de;
typedef struct Entry_func_80259784_de Entry_func_80259784_de;

struct Glyphs;
typedef struct Glyphs Glyphs;

struct LinkPair;
typedef struct LinkPair LinkPair;

struct Link_func_80259260_de;
typedef struct Link_func_80259260_de Link_func_80259260_de;

struct Link_func_80259784_de;
typedef struct Link_func_80259784_de Link_func_80259784_de;

struct ListHead;
typedef struct ListHead ListHead;

struct ListNode;
typedef struct ListNode ListNode;

struct Lists;
typedef struct Lists Lists;

struct Manager_func_80259260_de;
typedef struct Manager_func_80259260_de Manager_func_80259260_de;

struct Manager_func_80259784_de;
typedef struct Manager_func_80259784_de Manager_func_80259784_de;

struct Node_func_80259260_de;
typedef struct Node_func_80259260_de Node_func_80259260_de;

struct Node_func_80259784_de;
typedef struct Node_func_80259784_de Node_func_80259784_de;

struct Node_func_802598B4_de;
typedef struct Node_func_802598B4_de Node_func_802598B4_de;

struct Node_func_80259918_de;
typedef struct Node_func_80259918_de Node_func_80259918_de;

struct Node_func_80259A50_de;
typedef struct Node_func_80259A50_de Node_func_80259A50_de;

struct Obj_func_80259200_de;
typedef struct Obj_func_80259200_de Obj_func_80259200_de;

struct ObjectLinks2B50;
typedef struct ObjectLinks2B50 ObjectLinks2B50;

struct ObjectLinks8;
typedef struct ObjectLinks8 ObjectLinks8;

struct Owner_func_80259918_de;
typedef struct Owner_func_80259918_de Owner_func_80259918_de;

struct Scene_func_80259038_de;
typedef struct Scene_func_80259038_de Scene_func_80259038_de;

struct Slot_func_80258FF4_de;
typedef struct Slot_func_80258FF4_de Slot_func_80258FF4_de;

struct Slot_func_80259200_de;
typedef struct Slot_func_80259200_de Slot_func_80259200_de;

struct Voice_func_802596B4_de;
typedef struct Voice_func_802596B4_de Voice_func_802596B4_de;

struct func_80259014_S1;
typedef struct func_80259014_S1 func_80259014_S1;

struct func_80259280_S1;
typedef struct func_80259280_S1 func_80259280_S1;

struct func_802597A4_S2;
typedef struct func_802597A4_S2 func_802597A4_S2;

struct func_802598D4_S1;
typedef struct func_802598D4_S1 func_802598D4_S1;

union func_802598D4_S1_UD8;
typedef union func_802598D4_S1_UD8 func_802598D4_S1_UD8;

struct func_80259A0C_S1;
typedef struct func_80259A0C_S1 func_80259A0C_S1;

union func_80259A0C_S1_UD8;
typedef union func_80259A0C_S1_UD8 func_80259A0C_S1_UD8;

struct func_80259AD8_S1;
typedef struct func_80259AD8_S1 func_80259AD8_S1;

struct func_80259AD8_S2;
typedef struct func_80259AD8_S2 func_80259AD8_S2;

struct func_80259B30_S1;
typedef struct func_80259B30_S1 func_80259B30_S1;

struct func_8025AA4C_S1;
typedef struct func_8025AA4C_S1 func_8025AA4C_S1;

struct func_8025AA4C_S2;
typedef struct func_8025AA4C_S2 func_8025AA4C_S2;

struct Glyphs;
struct Glyphs {
    char pad0[0x10];
    s32 bitmaps[1];
};
struct Font;
struct Glyphs;
struct Font {
    char pad0[0xC];
    struct Glyphs *glyphs;
};
struct Context_func_80259440_de;
struct Font;
struct Context_func_80259440_de {
    char pad0[0x7C];
    struct Font *font;
    char pad80[4];
    char textures[0xDC - 0x84];
    s16 slots[16];
    char padFC[0x104 - 0xFC];
    s32 frame;
    s32 sequence;
    char pad10C[0x1DB8 - 0x10C];
    char cells[1];
};
struct Entry_func_80259440_de;
struct Entry_func_80259440_de {
    struct Entry_func_80259440_de *prev;
    struct Entry_func_80259440_de *next;
    char body[0x10];
    s32 frame;
    s32 delay;
    char pad20[0x40 - 0x20];
    s16 glyph;
    s16 font;
    s16 style;
    s16 pad46;
    s32 sequence;
    char pad4C[0xA8 - 0x4C];
    s32 fieldA8;
};
struct Entry_func_80259440_de;
struct ListHead;
struct ListHead {
    struct Entry_func_80259440_de *prev;
    struct Entry_func_80259440_de *next;
};
struct Cache;
struct Context_func_80259440_de;
struct Cache {
    struct Context_func_80259440_de *context;
    ListHead pending;
    char padC[0xD8 - 0xC];
    ListHead done;
};
struct Cell_func_80259440_de;
struct Cell_func_80259440_de {
    s32 index;
    s32 pad4;
    s32 texture;
    s32 sequence;
    s32 frame;
    char pad14[0x44 - 0x14];
    char data[1];
};
struct Voice_func_802596B4_de;
struct Voice_func_802596B4_de {
    Link_func_802596B4_de link;
    Header header;
};
struct ChannelSet;
struct ChannelSet {
    s32 owner;
    Link_func_802596B4_de free;
    Header freeHeader;
    Link_func_802596B4_de active;
    Header activeHeader;
    Voice_func_802596B4_de voices[32];
};
struct Emitter;
struct Emitter {
    char pad0[0x34];
    f32 level;
    char pad38[0xC];
    f32 x;
    f32 y;
    f32 z;
    char pad50[8];
    f32 distance;
    f32 lastDistance;
    char pad60[0x48];
    s32 id;
    char padAC[4];
    void *scene;
    char padB4[0xC];
    s32 reset;
};
struct Entry_func_80259784_de;
struct Entry_func_80259784_de {
    char pad0[0xAC];
    s32 busy;
    char padB0[0x1C];
};
struct LinkPair;
struct LinkPair {
    void **first;
    void **second;
};
struct Node_func_80259260_de;
struct Node_func_80259260_de {
    struct Node_func_80259260_de *prev;
    struct Node_func_80259260_de *next;
    char channel[4];
    s32 volume;
    char pad10[4];
    s32 handle;
    s32 frame;
    s32 sample;
    s32 gainA;
    s32 gainB;
    s16 pitch;
    char pad2A[2];
    s32 time;
    char pad30[0x10];
    s16 priority;
    s16 group;
    s16 volume16;
    char pad46[2];
    s32 voice;
    Vec3Words position;
    s32 pad58;
    u8 pan;
    char pad5D[0x4F];
    s32 flags;
    char padB0[4];
    s32 padB4;
    char padB8[0x10];
    s32 mix;
};
struct Link_func_80259260_de;
struct Node_func_80259260_de;
struct Link_func_80259260_de {
    struct Node_func_80259260_de *prev;
    struct Node_func_80259260_de *next;
};
struct Node_func_80259784_de;
struct Node_func_80259784_de {
    struct Node_func_80259784_de *prev;
    struct Node_func_80259784_de *next;
    char pad8[0x14];
    s32 timer;
    char pad20[0x20];
    s16 priority;
    char pad42[6];
    s32 owner;
    Vec3 position;
};
struct Link_func_80259784_de;
struct Node_func_80259784_de;
struct Link_func_80259784_de {
    struct Node_func_80259784_de *prev;
    struct Node_func_80259784_de *next;
};
struct ListNode;
struct ListNode {
    struct ListNode *prev;
    struct ListNode *next;
    unsigned char pad08[0xB4];
    s32 valueBC;
};
struct Node_func_80259A50_de;
struct Node_func_80259A50_de {
    struct Node_func_80259A50_de *prev;
    struct Node_func_80259A50_de *next;
    char pad8[0xA4];
    s32 flags;
};
struct Lists;
struct Lists {
    char pad0[4];
    Node_func_80259A50_de first;
    char padB4[0x24];
    Node_func_80259A50_de second;
};
struct Manager_func_80259260_de;
struct Manager_func_80259260_de {
    s32 *scene;
    Link_func_80259260_de active;
    char padC[0xCC];
    Link_func_80259260_de free;
};
struct Scene_func_80259784_de;
struct Scene_func_80259784_de {
    char pad0[0x1DBC];
    Entry_func_80259784_de entries[1];
};
struct Manager_func_80259784_de;
struct Scene_func_80259784_de;
struct Manager_func_80259784_de {
    struct Scene_func_80259784_de *scene;
    Link_func_80259784_de active;
    char padC[0xCC];
    Link_func_80259784_de free;
};
struct Node_func_802598B4_de;
struct Node_func_802598B4_de {
    struct Node_func_802598B4_de *prev;
    struct Node_func_802598B4_de *next;
    s32 unused;
    s32 value;
};
struct Node_func_80259918_de;
struct Node_func_80259918_de {
    struct Node_func_80259918_de *prev;
    struct Node_func_80259918_de *next;
    char pad08[0xB0 - 0x8];
    s32 key;
};
struct Slot_func_80259200_de;
struct Slot_func_80259200_de {
    int id;
    char pad[0xC8];
};
struct Obj_func_80259200_de;
struct Obj_func_80259200_de {
    char pad[0x102];
    short owner;
    char pad104[0x1E64 - 0x104];
    Slot_func_80259200_de slots[17];
};
struct ObjectLinks2B50;
struct ObjectLinks2B50 {
    unsigned char padding_0[11084];
    void *unk_2B4C;
};
struct ObjectLinks8;
struct ObjectLinks8 {
    void *unk_0;
    void *unk_4;
};
struct Node_func_80259918_de;
struct Owner_func_80259918_de;
struct Owner_func_80259918_de {
    s32 unk00;
    struct Node_func_80259918_de *activePrev;
    struct Node_func_80259918_de *activeNext;
    char pad0C[0xD8 - 0xC];
    struct Node_func_80259918_de *otherPrev;
};
struct Scene_func_80259038_de;
struct Scene_func_80259038_de {
    char pad0[0x130];
    s32 lastPick;
    char pad134[0x2B54 - 0x134];
    s32 count;
    s32 ids;
    s32 *weights;
};
struct Slot_func_80258FF4_de;
struct Slot_func_80258FF4_de {
    char pad[0xC];
    int id;
    char pad2[0xBC];
};
struct func_80259014_S1;
struct func_80259014_S1 {
    char pad0[0x1DBC];
    Slot_func_80258FF4_de unk1DBC;
};
struct func_80259280_S1;
struct func_80259280_S1 {
    char pad0[0x2B8C];
    s16 unk2B8C;
};
struct func_802597A4_S2;
struct func_802597A4_S2 {
    char pad0[0x2A84];
    s32 unk2A84;
    char pad2A84[0x2A88 - 0x2A84 - sizeof(s32)];
    s32 unk2A88;
    char pad2A88[0x2AB4 - 0x2A88 - sizeof(s32)];
    s16 unk2AB4;
    char pad2AB4[0x2AB6 - 0x2AB4 - sizeof(s16)];
    s16 unk2AB6;
};
struct Node_func_802598B4_de;
union func_802598D4_S1_UD8;
union func_802598D4_S1_UD8 {
    Node_func_802598B4_de v0;
    struct Node_func_802598B4_de * v1;
};
struct func_802598D4_S1;
struct func_802598D4_S1 {
    char pad0[0x4];
    union { Node_func_802598B4_de node; struct { void *first; Node_func_802598B4_de *second; } links; } at4;
    char pad14[0xD8 - 0x4 - sizeof(Node_func_802598B4_de)];
    func_802598D4_S1_UD8 unkD8;
};
struct ListNode;
union func_80259A0C_S1_UD8;
union func_80259A0C_S1_UD8 {
    ListNode v0;
    struct ListNode * v1;
};
struct func_80259A0C_S1;
struct func_80259A0C_S1 {
    char pad0[0x4];
    union { ListNode node; struct { void *first; ListNode *second; } links; } at4;
    char padC4[0xD8 - 0x4 - sizeof(ListNode)];
    func_80259A0C_S1_UD8 unkD8;
};
struct func_80259AD8_S1;
struct func_80259AD8_S1 {
    char pad0[0x4];
    char unk4;
    char pad4[0x8 - 0x4 - sizeof(char)];
    void * unk8;
};
struct func_80259AD8_S2;
struct func_80259AD8_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0xB0 - 0x4 - sizeof(void*)];
    int unkB0;
};
struct func_80259B30_S1;
struct func_80259B30_S1 {
    char pad0[0x128];
    Vec3 unk128;
    char pad128[0x160 - 0x128 - sizeof(Vec3)];
    char unk160;
};
struct func_8025AA4C_S1;
struct func_8025AA4C_S1 {
    char pad0[0x2B98];
    char * unk2B98;
};
struct func_8025AA4C_S2;
struct func_8025AA4C_S2 {
    char pad0[0x128];
    f32 unk128;
    char pad128[0x12C - 0x128 - sizeof(f32)];
    f32 unk12C;
    char pad12C[0x130 - 0x12C - sizeof(f32)];
    f32 unk130;
};
extern int func_80258FF4_de(char *arg0, int id);
extern s32 func_80259038_de(Scene_func_80259038_de *scene, s16 id, s16 avoid);
extern void func_802591A0_de(void *arg0, s16 arg1);
extern void func_802591D0_de(void *arg0, s16 arg1);
extern int func_80259200_de(Obj_func_80259200_de *obj, int id);
extern void func_802598B4_de(void *arg0, s32 arg1);
extern void func_80259AF0_de(void **arg0, void *arg1);
#endif
