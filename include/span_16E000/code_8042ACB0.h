#ifndef UNBAKE_SPAN_16E000_CODE_8042ACB0_H
#define UNBAKE_SPAN_16E000_CODE_8042ACB0_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Control;
struct Control;
typedef struct Control Control;

/* unbake evidence input: c3RydWN0IENvbnRyb2w7CnR5cGVkZWYgc3RydWN0IENvbnRyb2wgQ29udHJvbDsK */

struct G;
struct G;
typedef struct G G;

/* unbake evidence input: c3RydWN0IEc7CnR5cGVkZWYgc3RydWN0IEcgRzsK */

struct Menu_func_8042AAD0_de;
struct Menu_func_8042AAD0_de;
typedef struct Menu_func_8042AAD0_de Menu_func_8042AAD0_de;

/* unbake evidence input: c3RydWN0IE1lbnVfZnVuY184MDQyQUFEMF9kZTsKdHlwZWRlZiBzdHJ1Y3QgTWVudV9mdW5jXzgwNDJBQUQwX2RlIE1lbnVfZnVuY184MDQyQUFEMF9kZTsK */

struct Record_func_8042B1B8_de;
struct Record_func_8042B1B8_de;
typedef struct Record_func_8042B1B8_de Record_func_8042B1B8_de;

/* unbake evidence input: c3RydWN0IFJlY29yZF9mdW5jXzgwNDJCMUI4X2RlOwp0eXBlZGVmIHN0cnVjdCBSZWNvcmRfZnVuY184MDQyQjFCOF9kZSBSZWNvcmRfZnVuY184MDQyQjFCOF9kZTsK */

struct ResourceBank;
struct ResourceBank;
typedef struct ResourceBank ResourceBank;

/* unbake evidence input: c3RydWN0IFJlc291cmNlQmFuazsKdHlwZWRlZiBzdHJ1Y3QgUmVzb3VyY2VCYW5rIFJlc291cmNlQmFuazsK */

struct func_8042B4C4_S1;
struct func_8042B4C4_S1;
typedef struct func_8042B4C4_S1 func_8042B4C4_S1;

/* unbake evidence input: c3RydWN0IGZ1bmNfODA0MkI0QzRfUzE7CnR5cGVkZWYgc3RydWN0IGZ1bmNfODA0MkI0QzRfUzEgZnVuY184MDQyQjRDNF9TMTsK */

struct Control;
struct Control;
struct Control {
    short unk0;
    unsigned short first;
    int second;
    char pad8[8];
};

/* unbake evidence input: c3RydWN0IENvbnRyb2w7CnN0cnVjdCBDb250cm9sIHsKICAgIHNob3J0IHVuazA7CiAgICB1bnNpZ25lZCBzaG9ydCBmaXJzdDsKICAgIGludCBzZWNvbmQ7CiAgICBjaGFyIHBhZDhbOF07Cn07Cg== */

struct Cup;
struct Cup;
struct Cup {
    s32 index;
    s32 stages;
    u8 played[4];
};

/* unbake evidence input: c3RydWN0IEN1cDsKc3RydWN0IEN1cCB7CiAgICBzMzIgaW5kZXg7CiAgICBzMzIgc3RhZ2VzOwogICAgdTggcGxheWVkWzRdOwp9Owo= */

struct G;
struct G;
struct G {
    char pad0[0x3DC];
    s32 unk3DC;
    char pad3E0[0x3EC - 0x3E0];
    s32 unk3EC;
    s32 unk3F0;
    char pad3F4[0x440 - 0x3F4];
    s32 unk440;
    s32 unk444;
    s32 unk448;
    Resource_func_80419E54_de *unk44C;
};

/* unbake evidence input: c3RydWN0IEc7CnN0cnVjdCBHIHsKICAgIGNoYXIgcGFkMFsweDNEQ107CiAgICBzMzIgdW5rM0RDOwogICAgY2hhciBwYWQzRTBbMHgzRUMgLSAweDNFMF07CiAgICBzMzIgdW5rM0VDOwogICAgczMyIHVuazNGMDsKICAgIGNoYXIgcGFkM0Y0WzB4NDQwIC0gMHgzRjRdOwogICAgczMyIHVuazQ0MDsKICAgIHMzMiB1bms0NDQ7CiAgICBzMzIgdW5rNDQ4OwogICAgUmVzb3VyY2VfZnVuY184MDQxOUU1NF9kZSAqdW5rNDRDOwp9Owo= */

struct Menu_func_8042AAD0_de;
struct Menu_func_8042AAD0_de;
struct Menu_func_8042AAD0_de {
    void *screen;
    char pad4[0x3E8];
    void *widgetA;
    void *widgetB;
    char pad3F4[0x40];
    int mode;
    int selection;
    char pad43C[4];
    void *widgetC;
    void *widgetD;
    void *widgetE;
};

/* unbake evidence input: c3RydWN0IE1lbnVfZnVuY184MDQyQUFEMF9kZTsKc3RydWN0IE1lbnVfZnVuY184MDQyQUFEMF9kZSB7CiAgICB2b2lkICpzY3JlZW47CiAgICBjaGFyIHBhZDRbMHgzRThdOwogICAgdm9pZCAqd2lkZ2V0QTsKICAgIHZvaWQgKndpZGdldEI7CiAgICBjaGFyIHBhZDNGNFsweDQwXTsKICAgIGludCBtb2RlOwogICAgaW50IHNlbGVjdGlvbjsKICAgIGNoYXIgcGFkNDNDWzRdOwogICAgdm9pZCAqd2lkZ2V0QzsKICAgIHZvaWQgKndpZGdldEQ7CiAgICB2b2lkICp3aWRnZXRFOwp9Owo= */

struct Record_func_8042B1B8_de;
struct Record_func_8042B1B8_de;
struct Record_func_8042B1B8_de {
    s32 key;
    char pad4[0x8];
    s32 value;
};

/* unbake evidence input: c3RydWN0IFJlY29yZF9mdW5jXzgwNDJCMUI4X2RlOwpzdHJ1Y3QgUmVjb3JkX2Z1bmNfODA0MkIxQjhfZGUgewogICAgczMyIGtleTsKICAgIGNoYXIgcGFkNFsweDhdOwogICAgczMyIHZhbHVlOwp9Owo= */

struct ResourceBank;
struct ResourceBank;
struct ResourceBank {
    u16 ids[20];
};

/* unbake evidence input: c3RydWN0IFJlc291cmNlQmFuazsKc3RydWN0IFJlc291cmNlQmFuayB7CiAgICB1MTYgaWRzWzIwXTsKfTsK */

struct Label;
struct Screen_func_8042AFE0_de;
struct Label;
struct Screen_func_8042AFE0_de;
struct Screen_func_8042AFE0_de {
    char pad0[0x3EC];
    struct Label *widget;
    char pad3F0[0x3F4 - 0x3F0];
    char label[0x40];
    s32 list;
    s32 entry;
};

/* unbake evidence input: c3RydWN0IExhYmVsOwpzdHJ1Y3QgU2NyZWVuX2Z1bmNfODA0MkFGRTBfZGU7CnN0cnVjdCBTY3JlZW5fZnVuY184MDQyQUZFMF9kZSB7CiAgICBjaGFyIHBhZDBbMHgzRUNdOwogICAgc3RydWN0IExhYmVsICp3aWRnZXQ7CiAgICBjaGFyIHBhZDNGMFsweDNGNCAtIDB4M0YwXTsKICAgIGNoYXIgbGFiZWxbMHg0MF07CiAgICBzMzIgbGlzdDsKICAgIHMzMiBlbnRyeTsKfTsK */

struct Item_func_8042B4D4_de;
struct Screen_func_8042B4D4_de;
struct Item_func_8042B4D4_de;
struct Screen_func_8042B4D4_de;
struct Screen_func_8042B4D4_de {
    char pad0[0x308];
    char view[0x434 - 0x308];
    s32 category;
    s32 selection;
    struct Item_func_8042B4D4_de *item;
    struct Item_func_8042B4D4_de *left;
    struct Item_func_8042B4D4_de *right;
    struct Item_func_8042B4D4_de *marker;
    char pad44C[0x45C - 0x44C];
    s32 word45C;
    char pad460[0x464 - 0x460];
    s32 word464;
};

/* unbake evidence input: c3RydWN0IEl0ZW1fZnVuY184MDQyQjRENF9kZTsKc3RydWN0IFNjcmVlbl9mdW5jXzgwNDJCNEQ0X2RlOwpzdHJ1Y3QgU2NyZWVuX2Z1bmNfODA0MkI0RDRfZGUgewogICAgY2hhciBwYWQwWzB4MzA4XTsKICAgIGNoYXIgdmlld1sweDQzNCAtIDB4MzA4XTsKICAgIHMzMiBjYXRlZ29yeTsKICAgIHMzMiBzZWxlY3Rpb247CiAgICBzdHJ1Y3QgSXRlbV9mdW5jXzgwNDJCNEQ0X2RlICppdGVtOwogICAgc3RydWN0IEl0ZW1fZnVuY184MDQyQjRENF9kZSAqbGVmdDsKICAgIHN0cnVjdCBJdGVtX2Z1bmNfODA0MkI0RDRfZGUgKnJpZ2h0OwogICAgc3RydWN0IEl0ZW1fZnVuY184MDQyQjRENF9kZSAqbWFya2VyOwogICAgY2hhciBwYWQ0NENbMHg0NUMgLSAweDQ0Q107CiAgICBzMzIgd29yZDQ1QzsKICAgIGNoYXIgcGFkNDYwWzB4NDY0IC0gMHg0NjBdOwogICAgczMyIHdvcmQ0NjQ7Cn07Cg== */

struct Resource_func_80419E54_de;
struct Screen_func_8042B644_de;
struct Resource_func_80419E54_de;
struct Screen_func_8042B644_de;
struct Screen_func_8042B644_de {
    char pad0[0x434];
    s32 category;
    s32 selection;
    struct Resource_func_80419E54_de *item;
    struct Resource_func_80419E54_de *left;
    struct Resource_func_80419E54_de *right;
    struct Resource_func_80419E54_de *marker;
    char pad44C[0x45C - 0x44C];
    s32 word45C;
    char pad460[0x464 - 0x460];
    s32 word464;
};

/* unbake evidence input: c3RydWN0IFJlc291cmNlX2Z1bmNfODA0MTlFNTRfZGU7CnN0cnVjdCBTY3JlZW5fZnVuY184MDQyQjY0NF9kZTsKc3RydWN0IFNjcmVlbl9mdW5jXzgwNDJCNjQ0X2RlIHsKICAgIGNoYXIgcGFkMFsweDQzNF07CiAgICBzMzIgY2F0ZWdvcnk7CiAgICBzMzIgc2VsZWN0aW9uOwogICAgc3RydWN0IFJlc291cmNlX2Z1bmNfODA0MTlFNTRfZGUgKml0ZW07CiAgICBzdHJ1Y3QgUmVzb3VyY2VfZnVuY184MDQxOUU1NF9kZSAqbGVmdDsKICAgIHN0cnVjdCBSZXNvdXJjZV9mdW5jXzgwNDE5RTU0X2RlICpyaWdodDsKICAgIHN0cnVjdCBSZXNvdXJjZV9mdW5jXzgwNDE5RTU0X2RlICptYXJrZXI7CiAgICBjaGFyIHBhZDQ0Q1sweDQ1QyAtIDB4NDRDXTsKICAgIHMzMiB3b3JkNDVDOwogICAgY2hhciBwYWQ0NjBbMHg0NjQgLSAweDQ2MF07CiAgICBzMzIgd29yZDQ2NDsKfTsK */

struct Item_func_8042B4D4_de;
struct Screen_func_8042B78C_de;
struct Item_func_8042B4D4_de;
struct Screen_func_8042B78C_de;
struct Screen_func_8042B78C_de {
    char pad0[0x308];
    char view[0x434 - 0x308];
    s32 category;
    s32 selection;
    struct Item_func_8042B4D4_de *item;
    char pad440[0x448 - 0x440];
    struct Item_func_8042B4D4_de *marker;
    char pad44C[0x45C - 0x44C];
    s32 word45C;
    char pad460[0x464 - 0x460];
    s32 word464;
};

/* unbake evidence input: c3RydWN0IEl0ZW1fZnVuY184MDQyQjRENF9kZTsKc3RydWN0IFNjcmVlbl9mdW5jXzgwNDJCNzhDX2RlOwpzdHJ1Y3QgU2NyZWVuX2Z1bmNfODA0MkI3OENfZGUgewogICAgY2hhciBwYWQwWzB4MzA4XTsKICAgIGNoYXIgdmlld1sweDQzNCAtIDB4MzA4XTsKICAgIHMzMiBjYXRlZ29yeTsKICAgIHMzMiBzZWxlY3Rpb247CiAgICBzdHJ1Y3QgSXRlbV9mdW5jXzgwNDJCNEQ0X2RlICppdGVtOwogICAgY2hhciBwYWQ0NDBbMHg0NDggLSAweDQ0MF07CiAgICBzdHJ1Y3QgSXRlbV9mdW5jXzgwNDJCNEQ0X2RlICptYXJrZXI7CiAgICBjaGFyIHBhZDQ0Q1sweDQ1QyAtIDB4NDRDXTsKICAgIHMzMiB3b3JkNDVDOwogICAgY2hhciBwYWQ0NjBbMHg0NjQgLSAweDQ2MF07CiAgICBzMzIgd29yZDQ2NDsKfTsK */

struct State_func_8042BA54_de;
struct State_func_8042BA54_de;
struct State_func_8042BA54_de {
    char pad[0x3DC];
    s32 mode;
    s32 next;
};

/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODA0MkJBNTRfZGU7CnN0cnVjdCBTdGF0ZV9mdW5jXzgwNDJCQTU0X2RlIHsKICAgIGNoYXIgcGFkWzB4M0RDXTsKICAgIHMzMiBtb2RlOwogICAgczMyIG5leHQ7Cn07Cg== */

struct State_func_8042BA98_de;
struct State_func_8042BA98_de;
struct State_func_8042BA98_de {
    char pad[0x3DC];
    s32 mode;
};

/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODA0MkJBOThfZGU7CnN0cnVjdCBTdGF0ZV9mdW5jXzgwNDJCQTk4X2RlIHsKICAgIGNoYXIgcGFkWzB4M0RDXTsKICAgIHMzMiBtb2RlOwp9Owo= */

struct Resource_func_80419E54_de;
struct func_8042B4C4_S1;
struct Resource_func_80419E54_de;
struct func_8042B4C4_S1;
struct func_8042B4C4_S1 {
    char pad0[0x450];
    struct Resource_func_80419E54_de * unk450;
    char pad450[0x454 - 0x450 - sizeof(struct Resource_func_80419E54_de*)];
    struct Resource_func_80419E54_de * unk454;
    char pad454[0x46C - 0x454 - sizeof(struct Resource_func_80419E54_de*)];
    s32 unk46C;
};

/* unbake evidence input: c3RydWN0IFJlc291cmNlX2Z1bmNfODA0MTlFNTRfZGU7CnN0cnVjdCBmdW5jXzgwNDJCNEM0X1MxOwpzdHJ1Y3QgZnVuY184MDQyQjRDNF9TMSB7CiAgICBjaGFyIHBhZDBbMHg0NTBdOwogICAgc3RydWN0IFJlc291cmNlX2Z1bmNfODA0MTlFNTRfZGUgKiB1bms0NTA7CiAgICBjaGFyIHBhZDQ1MFsweDQ1NCAtIDB4NDUwIC0gc2l6ZW9mKHN0cnVjdCBSZXNvdXJjZV9mdW5jXzgwNDE5RTU0X2RlKildOwogICAgc3RydWN0IFJlc291cmNlX2Z1bmNfODA0MTlFNTRfZGUgKiB1bms0NTQ7CiAgICBjaGFyIHBhZDQ1NFsweDQ2QyAtIDB4NDU0IC0gc2l6ZW9mKHN0cnVjdCBSZXNvdXJjZV9mdW5jXzgwNDE5RTU0X2RlKildOwogICAgczMyIHVuazQ2QzsKfTsK */

extern s32 func_8042AFB8_de(void);
extern void func_8042AFE0_de(void);
extern void func_8042B080_de(void);
extern void func_8042B350_de(void);
extern s32 func_8042BAD0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8042CC74_de(void);
extern void func_8042CFB0_de(void);
#endif
