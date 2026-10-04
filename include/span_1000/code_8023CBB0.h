#ifndef UNBAKE_SPAN_1000_CODE_8023CBB0_H
#define UNBAKE_SPAN_1000_CODE_8023CBB0_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Input;
typedef struct Input Input;

struct Link_func_8023CC08_de;
typedef struct Link_func_8023CC08_de Link_func_8023CC08_de;

struct Node_func_8023CBC0_de;
typedef struct Node_func_8023CBC0_de Node_func_8023CBC0_de;

struct Node_func_8023CC08_de;
typedef struct Node_func_8023CC08_de Node_func_8023CC08_de;

struct Node_func_8023CCD4_de;
typedef struct Node_func_8023CCD4_de Node_func_8023CCD4_de;

struct Output;
typedef struct Output Output;

struct Owner_func_8023CCD4_de;
typedef struct Owner_func_8023CCD4_de Owner_func_8023CCD4_de;

struct Polygon;
typedef struct Polygon Polygon;

struct Polygon_func_8023E178_de;
typedef struct Polygon_func_8023E178_de Polygon_func_8023E178_de;

struct Polygon_func_8023E8D4_de;
typedef struct Polygon_func_8023E8D4_de Polygon_func_8023E8D4_de;

struct Ray;
typedef struct Ray Ray;

struct Ray_func_8023DF70_de;
typedef struct Ray_func_8023DF70_de Ray_func_8023DF70_de;

struct Ray_func_8023E178_de;
typedef struct Ray_func_8023E178_de Ray_func_8023E178_de;

struct Ray_func_8023E8D4_de;
typedef struct Ray_func_8023E8D4_de Ray_func_8023E8D4_de;

struct Region;
typedef struct Region Region;

struct RegionDesc;
typedef struct RegionDesc RegionDesc;

struct Segment_func_8023E6EC_de;
typedef struct Segment_func_8023E6EC_de Segment_func_8023E6EC_de;

struct Slot_func_8023CCD4_de;
typedef struct Slot_func_8023CCD4_de Slot_func_8023CCD4_de;

struct func_8023D148_S1;
typedef struct func_8023D148_S1 func_8023D148_S1;

struct func_8023D148_S2;
typedef struct func_8023D148_S2 func_8023D148_S2;

struct func_8023E6C0_S1;
typedef struct func_8023E6C0_S1 func_8023E6C0_S1;

struct func_8023E844_S1;
typedef struct func_8023E844_S1 func_8023E844_S1;

struct func_8023E854_S1;
typedef struct func_8023E854_S1 func_8023E854_S1;

struct func_8023E854_S2;
typedef struct func_8023E854_S2 func_8023E854_S2;

struct func_8023E8A4_S1;
typedef struct func_8023E8A4_S1 func_8023E8A4_S1;

struct func_8023E8A4_S2;
typedef struct func_8023E8A4_S2 func_8023E8A4_S2;

struct func_8023EBC4_S1;
typedef struct func_8023EBC4_S1 func_8023EBC4_S1;

struct Instance;
struct Instance {
    u8 pad0[0x14];
    s32 field14;
};
struct Input;
struct Instance;
struct Input {
    u8 pad0[0xB0];
    s32 type;
    u8 padB4[8];
    s32 fieldBC;
    s32 fieldC0;
    u8 padC4[0x34];
    Triple vecF8;
    struct Instance *instance104;
    s32 field108;
    Block70 block10C;
    s32 field17C;
    Triple vec180;
};
struct Link_func_8023CC08_de;
struct Link_func_8023CC08_de {
    struct Link_func_8023CC08_de *next;
    struct Link_func_8023CC08_de *prev;
    u16 id;
    u16 padA;
    s32 fieldC;
};
struct Node_func_8023CBC0_de;
struct Node_func_8023CBC0_de {
    struct Node_func_8023CBC0_de *next;
    u16 f4;
    u16 f6;
};
struct Node_func_8023CC08_de;
struct Node_func_8023CC08_de {
    struct Node_func_8023CC08_de *next;
    u16 start;
    u16 size;
    char pad8[8];
    u8 *data;
};
struct Node_func_8023CCD4_de;
struct Node_func_8023CCD4_de {
    struct Node_func_8023CCD4_de *next;
    u16 id;
    u16 count;
    s32 unk8;
    s32 unkC;
    u8 *slots;
};
struct Instance;
struct Output;
struct Output {
    struct Instance *instance0;
    s32 instanceValue4;
    Triple vec8;
    s32 field14;
    Block70 block18;
    struct Instance *instance88;
    s32 instanceValue8C;
    Triple vec90;
    u8 pad9C[0x28];
    s32 fieldC4;
    Triple vecC8;
    s32 fieldD4;
    u8 padD8[0xC];
    Triple vecE4;
    Triple vecF0;
    s32 typeFC;
    s32 field100;
};
struct Owner_func_8023CCD4_de;
struct Owner_func_8023CCD4_de {
    s32 unk0;
    u32 handle;
    s32 queue;
};
struct Polygon;
struct Polygon {
    s32 type;
    s32 pad4;
    s32 kind;
    char padC[0x3C];
    Vec3 normal;
    char pad54[0x78];
    f32 t;
    Vec3 hit;
};
struct Polygon_func_8023E178_de;
struct Polygon_func_8023E178_de {
    s32 type;
    s32 pad4;
    s32 kind;
    char padC[0x8];
    s32 flag;
    Vec3 point;
    char pad24[0x24];
    Vec3 normal;
    char pad54[0x78];
    f32 t;
    Vec3 hit;
};
struct Polygon_func_8023E8D4_de;
struct Polygon_func_8023E8D4_de {
    s32 type;
    s32 pad4;
    s32 kind;
    char padC[0xC0];
    f32 t;
    Vec3 hit;
};
struct Range;
struct Range {
    char pad[8];
    f32 low;
    s32 count;
    f32 high;
    f32 extra;
    f32 limit;
};
struct Ray;
struct Ray {
    char pad0[0x44];
    Vec3 start;
    Vec3 end;
    Vec3 dir;
    char pad68[0x114];
    f32 nearest;
};
struct Ray_func_8023DF70_de;
struct Ray_func_8023DF70_de {
    char pad0[0x44];
    Vec3 start;
    Vec3 end;
    char pad5C[0x24];
    f32 slack;
    char pad84[0x2C];
    Polygon nearest;
};
struct Ray_func_8023E178_de;
struct Ray_func_8023E178_de {
    char pad0[0x44];
    Vec3 start;
    Vec3 end;
    Vec3 dir;
    char pad68[0x18];
    f32 slack;
    char pad84[0x2C];
    Polygon_func_8023E178_de nearest;
};
struct Ray_func_8023E8D4_de;
struct Ray_func_8023E8D4_de {
    char pad0[0x44];
    Vec3 start;
    Vec3 end;
    char pad5C[0x24];
    f32 slack;
    char pad84[0x2C];
    Polygon_func_8023E8D4_de nearest;
};
struct Region;
struct Region {
    struct Region *next;
    u16 start;
    u16 pages;
    s32 pad8;
    s32 padC;
    u8 *map;
    s32 pad14;
    u8 data[1];
};
struct Region;
struct RegionDesc;
struct RegionDesc {
    s32 pad0;
    s32 size;
    struct Region *region;
    void *mapping;
};
struct Segment_func_8023E6EC_de;
struct Segment_func_8023E6EC_de {
    char pad0[0x40];
    Field_f32_10 *limits;
    f32 x0;
    char pad48[4];
    f32 y0;
    f32 x1;
    f32 height;
    f32 y1;
    char pad5C[0x74 - 0x5C];
    char node[1];
};
struct Slot_func_8023CCD4_de;
struct Slot_func_8023CCD4_de {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    u16 id;
    u16 unkA;
    s32 unkC;
};
struct func_8023D148_S1;
struct func_8023D148_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x40 - 0x4 - sizeof(s32)];
    s32 * unk40;
    char pad40[0x44 - 0x40 - sizeof(s32*)];
    func_80234DD0_S1_U260 unk44;
    char pad44[0x50 - 0x44 - sizeof(func_80234DD0_S1_U260)];
    func_80234DD0_S1_U260 unk50;
    char pad50[0x5C - 0x50 - sizeof(func_80234DD0_S1_U260)];
    func_80234DD0_S1_U260 unk5C;
    char pad5C[0x68 - 0x5C - sizeof(func_80234DD0_S1_U260)];
    Vec3 unk68;
    char pad68[0x80 - 0x68 - sizeof(Vec3)];
    f32 unk80;
    char pad80[0x84 - 0x80 - sizeof(f32)];
    f32 unk84;
    char pad84[0x88 - 0x84 - sizeof(f32)];
    f32 unk88;
    char pad88[0x8C - 0x88 - sizeof(f32)];
    f32 unk8C;
    char pad8C[0x90 - 0x8C - sizeof(f32)];
    f32 unk90;
    char pad90[0x94 - 0x90 - sizeof(f32)];
    f32 unk94;
    char pad94[0x98 - 0x94 - sizeof(f32)];
    f32 unk98;
    char pad98[0x9C - 0x98 - sizeof(f32)];
    f32 unk9C;
    char pad9C[0xA0 - 0x9C - sizeof(f32)];
    f32 unkA0;
    char padA0[0xA4 - 0xA0 - sizeof(f32)];
    f32 unkA4;
    char padA4[0xA8 - 0xA4 - sizeof(f32)];
    f32 unkA8;
    char padA8[0xB0 - 0xA8 - sizeof(f32)];
    s32 unkB0;
};
struct func_8023D148_S2;
struct func_8023D148_S2 {
    char pad0[0x48];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x54 - 0x4C - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x60 - 0x58 - sizeof(f32)];
    f32 unk60;
    char pad60[0x64 - 0x60 - sizeof(f32)];
    f32 unk64;
};
struct func_8023E6C0_S1;
struct func_8023E6C0_S1 {
    char pad0[0x8];
    float unk8;
    char pad8[0xC - 0x8 - sizeof(float)];
    float unkC;
    char padC[0x10 - 0xC - sizeof(float)];
    float unk10;
    char pad10[0x14 - 0x10 - sizeof(float)];
    int unk14;
    char pad14[0x18 - 0x14 - sizeof(int)];
    float unk18;
};
struct func_8023E844_S1;
struct func_8023E844_S1 {
    char pad0[0x18C];
    int unk18C;
    char pad18C[0x190 - 0x18C - sizeof(int)];
    int unk190;
    char pad190[0x194 - 0x190 - sizeof(int)];
    int unk194;
};
struct func_8023E854_S1;
struct func_8023E854_S1 {
    char pad0[0x18C];
    f32 unk18C;
    char pad18C[0x190 - 0x18C - sizeof(f32)];
    f32 unk190;
    char pad190[0x194 - 0x190 - sizeof(f32)];
    f32 unk194;
};
struct func_8023E854_S2;
struct func_8023E854_S2 {
    char pad0[0x48];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
};
struct func_8023E8A4_S1;
struct func_8023E8A4_S1 {
    char pad0[0x18C];
    Triple unk18C;
};
struct func_8023E8A4_S2;
struct func_8023E8A4_S2 {
    char pad0[0x48];
    Triple unk48;
};
struct func_8023EBC4_S1;
struct func_8023EBC4_S1 {
    s32 unk0;
    char pad0[0x88 - 0x0 - sizeof(s32)];
    s32 unk88;
    char pad88[0x9C - 0x88 - sizeof(s32)];
    s32 unk9C;
    char pad9C[0xB0 - 0x9C - sizeof(s32)];
    s32 unkB0;
    char padB0[0xC4 - 0xB0 - sizeof(s32)];
    s32 unkC4;
    char padC4[0xFC - 0xC4 - sizeof(s32)];
    s32 unkFC;
    char padFC[0x100 - 0xFC - sizeof(s32)];
    s32 unk100;
};
extern void func_8023CCD4_de(Owner_func_8023CCD4_de *arg0);
extern void func_8023CDD4_de(RegionDesc *desc);
extern void func_8023CFC8_de(void);
extern void func_8023CFD8_eu(void * arg0);
extern s32 func_8023E864_de(void *arg0, void *arg1);
extern void func_8023E8B4_de(void *arg0, void *arg1);
extern void func_8023EBFC_de(void *arg0, void *arg1);
extern void func_8023EC54_de(void *arg0, void *arg1);
#endif
