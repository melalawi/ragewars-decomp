#ifndef UNBAKE_SPAN_16E000_CODE_8042D1BC_H
#define UNBAKE_SPAN_16E000_CODE_8042D1BC_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Game_func_8042D060_de;
struct Game_func_8042D060_de;
typedef struct Game_func_8042D060_de Game_func_8042D060_de;

/* unbake evidence input: c3RydWN0IEdhbWVfZnVuY184MDQyRDA2MF9kZTsKdHlwZWRlZiBzdHJ1Y3QgR2FtZV9mdW5jXzgwNDJEMDYwX2RlIEdhbWVfZnVuY184MDQyRDA2MF9kZTsK */

struct IntegerState330;
struct IntegerState330;
typedef struct IntegerState330 IntegerState330;

/* unbake evidence input: c3RydWN0IEludGVnZXJTdGF0ZTMzMDsKdHlwZWRlZiBzdHJ1Y3QgSW50ZWdlclN0YXRlMzMwIEludGVnZXJTdGF0ZTMzMDsK */

struct IntegerStateF4;
struct IntegerStateF4;
typedef struct IntegerStateF4 IntegerStateF4;

/* unbake evidence input: c3RydWN0IEludGVnZXJTdGF0ZUY0Owp0eXBlZGVmIHN0cnVjdCBJbnRlZ2VyU3RhdGVGNCBJbnRlZ2VyU3RhdGVGNDsK */

struct Rules_func_8042D060_de;
struct Rules_func_8042D060_de;
typedef struct Rules_func_8042D060_de Rules_func_8042D060_de;

/* unbake evidence input: c3RydWN0IFJ1bGVzX2Z1bmNfODA0MkQwNjBfZGU7CnR5cGVkZWYgc3RydWN0IFJ1bGVzX2Z1bmNfODA0MkQwNjBfZGUgUnVsZXNfZnVuY184MDQyRDA2MF9kZTsK */

struct Screen_func_8042DC04_de;
struct Screen_func_8042DC04_de;
typedef struct Screen_func_8042DC04_de Screen_func_8042DC04_de;

/* unbake evidence input: c3RydWN0IFNjcmVlbl9mdW5jXzgwNDJEQzA0X2RlOwp0eXBlZGVmIHN0cnVjdCBTY3JlZW5fZnVuY184MDQyREMwNF9kZSBTY3JlZW5fZnVuY184MDQyREMwNF9kZTsK */

struct Settings_func_8042D060_de;
struct Settings_func_8042D060_de;
typedef struct Settings_func_8042D060_de Settings_func_8042D060_de;

/* unbake evidence input: c3RydWN0IFNldHRpbmdzX2Z1bmNfODA0MkQwNjBfZGU7CnR5cGVkZWYgc3RydWN0IFNldHRpbmdzX2Z1bmNfODA0MkQwNjBfZGUgU2V0dGluZ3NfZnVuY184MDQyRDA2MF9kZTsK */

struct Shared_BigObj;
struct Shared_BigObj;
typedef struct Shared_BigObj Shared_BigObj;

/* unbake evidence input: c3RydWN0IFNoYXJlZF9CaWdPYmo7CnR5cGVkZWYgc3RydWN0IFNoYXJlZF9CaWdPYmogU2hhcmVkX0JpZ09iajsK */

struct Shared_Rec3;
struct Shared_Rec3;
typedef struct Shared_Rec3 Shared_Rec3;

/* unbake evidence input: c3RydWN0IFNoYXJlZF9SZWMzOwp0eXBlZGVmIHN0cnVjdCBTaGFyZWRfUmVjMyBTaGFyZWRfUmVjMzsK */

struct Slot_func_8042DC04_de;
struct Slot_func_8042DC04_de;
typedef struct Slot_func_8042DC04_de Slot_func_8042DC04_de;

/* unbake evidence input: c3RydWN0IFNsb3RfZnVuY184MDQyREMwNF9kZTsKdHlwZWRlZiBzdHJ1Y3QgU2xvdF9mdW5jXzgwNDJEQzA0X2RlIFNsb3RfZnVuY184MDQyREMwNF9kZTsK */

struct Match_func_8042DEA0_de;
struct Match_func_8042DEA0_de {
    char pad0[0x90];
    s32 kills;
    char pad94[4];
    s32 deaths;
};
/* unbake evidence input: c3RydWN0IE1hdGNoX2Z1bmNfODA0MkRFQTBfZGUgewogICAgY2hhciBwYWQwWzB4OTBdOwogICAgczMyIGtpbGxzOwogICAgY2hhciBwYWQ5NFs0XTsKICAgIHMzMiBkZWF0aHM7Cn07 */

struct Record_func_8042DEA0_de;
struct Record_func_8042DEA0_de {
    char name[0x189];
    u8 profile[5];
    char pad18E[2];
};
/* unbake evidence input: c3RydWN0IFJlY29yZF9mdW5jXzgwNDJERUEwX2RlIHsKICAgIGNoYXIgbmFtZVsweDE4OV07CiAgICB1OCBwcm9maWxlWzVdOwogICAgY2hhciBwYWQxOEVbMl07Cn07 */

struct Status_func_8042DEA0_de;
struct Status_func_8042DEA0_de {
    char pad0[0x78];
    u8 joined;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    char pad7C;
    u8 unk7D;
    char pad7E[2];
    s8 kind;
    char pad81;
    u8 unk82;
    char pad83;
    char name[0x91 - 0x84];
    u8 computer;
    u8 team;
    char pad93;
    u8 lives;
    u8 score;
};
/* unbake evidence input: c3RydWN0IFN0YXR1c19mdW5jXzgwNDJERUEwX2RlIHsKICAgIGNoYXIgcGFkMFsweDc4XTsKICAgIHU4IGpvaW5lZDsKICAgIHU4IHVuazc5OwogICAgdTggdW5rN0E7CiAgICB1OCB1bms3QjsKICAgIGNoYXIgcGFkN0M7CiAgICB1OCB1bms3RDsKICAgIGNoYXIgcGFkN0VbMl07CiAgICBzOCBraW5kOwogICAgY2hhciBwYWQ4MTsKICAgIHU4IHVuazgyOwogICAgY2hhciBwYWQ4MzsKICAgIGNoYXIgbmFtZVsweDkxIC0gMHg4NF07CiAgICB1OCBjb21wdXRlcjsKICAgIHU4IHRlYW07CiAgICBjaGFyIHBhZDkzOwogICAgdTggbGl2ZXM7CiAgICB1OCBzY29yZTsKfTs= */

struct Rules_func_8042D060_de;
struct Rules_func_8042D060_de;
struct Rules_func_8042D060_de {
    char pad0[0x14];
    f32 timeLeft;
    char pad18[0x98 - 0x18];
    s32 lastStanding;
};

/* unbake evidence input: c3RydWN0IFJ1bGVzX2Z1bmNfODA0MkQwNjBfZGU7CnN0cnVjdCBSdWxlc19mdW5jXzgwNDJEMDYwX2RlIHsKICAgIGNoYXIgcGFkMFsweDE0XTsKICAgIGYzMiB0aW1lTGVmdDsKICAgIGNoYXIgcGFkMThbMHg5OCAtIDB4MThdOwogICAgczMyIGxhc3RTdGFuZGluZzsKfTsK */

struct Settings_func_8042D060_de;
struct Settings_func_8042D060_de;
struct Settings_func_8042D060_de {
    char pad0[0x24];
    s8 timeSetting;
};

/* unbake evidence input: c3RydWN0IFNldHRpbmdzX2Z1bmNfODA0MkQwNjBfZGU7CnN0cnVjdCBTZXR0aW5nc19mdW5jXzgwNDJEMDYwX2RlIHsKICAgIGNoYXIgcGFkMFsweDI0XTsKICAgIHM4IHRpbWVTZXR0aW5nOwp9Owo= */

struct Game_func_8042D060_de;
struct Game_func_8042D060_de;
struct Game_func_8042D060_de {
    char pad0[0xCAC];
    Settings_func_8042D060_de settings;
    char padCD1[0x1284 - 0xCD1];
    Rules_func_8042D060_de rules;
};

/* unbake evidence input: c3RydWN0IEdhbWVfZnVuY184MDQyRDA2MF9kZTsKc3RydWN0IEdhbWVfZnVuY184MDQyRDA2MF9kZSB7CiAgICBjaGFyIHBhZDBbMHhDQUNdOwogICAgU2V0dGluZ3NfZnVuY184MDQyRDA2MF9kZSBzZXR0aW5nczsKICAgIGNoYXIgcGFkQ0QxWzB4MTI4NCAtIDB4Q0QxXTsKICAgIFJ1bGVzX2Z1bmNfODA0MkQwNjBfZGUgcnVsZXM7Cn07Cg== */

struct IntegerState330;
struct IntegerState330;
struct IntegerState330 {
    char pad0[0x32C];
    s32 unk_32C;
};

/* unbake evidence input: c3RydWN0IEludGVnZXJTdGF0ZTMzMDsKc3RydWN0IEludGVnZXJTdGF0ZTMzMCB7CiAgICBjaGFyIHBhZDBbMHgzMkNdOwogICAgczMyIHVua18zMkM7Cn07Cg== */

struct IntegerStateF4;
struct IntegerStateF4;
struct IntegerStateF4 {
    unsigned char padding_0[240];
    s32 unk_F0;
};

/* unbake evidence input: c3RydWN0IEludGVnZXJTdGF0ZUY0OwpzdHJ1Y3QgSW50ZWdlclN0YXRlRjQgewogICAgdW5zaWduZWQgY2hhciBwYWRkaW5nXzBbMjQwXTsKICAgIHMzMiB1bmtfRjA7Cn07Cg== */

struct Item_func_8042D304_de;
struct Item_func_8042D304_de;
struct Item_func_8042D304_de {
    char pad[0x10];
    u8 alpha;
    char pad11[0x2C - 0x11];
    s32 frame;
};

/* unbake evidence input: c3RydWN0IEl0ZW1fZnVuY184MDQyRDMwNF9kZTsKc3RydWN0IEl0ZW1fZnVuY184MDQyRDMwNF9kZSB7CiAgICBjaGFyIHBhZFsweDEwXTsKICAgIHU4IGFscGhhOwogICAgY2hhciBwYWQxMVsweDJDIC0gMHgxMV07CiAgICBzMzIgZnJhbWU7Cn07Cg== */

struct Object_func_8042DD00_de;
struct Object_func_8042DD00_de;
struct Object_func_8042DD00_de {
    char pad[0x14];
    char text[0xC];
    s32 value;
};

/* unbake evidence input: c3RydWN0IE9iamVjdF9mdW5jXzgwNDJERDAwX2RlOwpzdHJ1Y3QgT2JqZWN0X2Z1bmNfODA0MkREMDBfZGUgewogICAgY2hhciBwYWRbMHgxNF07CiAgICBjaGFyIHRleHRbMHhDXTsKICAgIHMzMiB2YWx1ZTsKfTsK */

struct Screen_func_8042D690_de;
struct Screen_func_8042D690_de;
struct Screen_func_8042D690_de {
    char pad0[0xE4];
    void *object;
    char padE8[0x320 - 0xE8];
    s32 open;
    char pad324[0x328 - 0x324];
    s32 choice;
};

/* unbake evidence input: c3RydWN0IFNjcmVlbl9mdW5jXzgwNDJENjkwX2RlOwpzdHJ1Y3QgU2NyZWVuX2Z1bmNfODA0MkQ2OTBfZGUgewogICAgY2hhciBwYWQwWzB4RTRdOwogICAgdm9pZCAqb2JqZWN0OwogICAgY2hhciBwYWRFOFsweDMyMCAtIDB4RThdOwogICAgczMyIG9wZW47CiAgICBjaGFyIHBhZDMyNFsweDMyOCAtIDB4MzI0XTsKICAgIHMzMiBjaG9pY2U7Cn07Cg== */

struct Screen_func_8042DC04_de;
struct Screen_func_8042DC04_de;
struct Screen_func_8042DC04_de {
    int window;
    char pad4[12];
    int state;
    char pad14[12];
    int count;
};

/* unbake evidence input: c3RydWN0IFNjcmVlbl9mdW5jXzgwNDJEQzA0X2RlOwpzdHJ1Y3QgU2NyZWVuX2Z1bmNfODA0MkRDMDRfZGUgewogICAgaW50IHdpbmRvdzsKICAgIGNoYXIgcGFkNFsxMl07CiAgICBpbnQgc3RhdGU7CiAgICBjaGFyIHBhZDE0WzEyXTsKICAgIGludCBjb3VudDsKfTsK */

struct Shape_func_802764D4_de_2;
struct Shared_BigObj;
struct Shape_func_802764D4_de_2;
struct Shared_BigObj;
struct Shared_BigObj {
    char pad0[0xF0];
    s32 slot[8];
    struct Shape_func_802764D4_de_2 arr2[8];
};

/* unbake evidence input: c3RydWN0IFNoYXBlX2Z1bmNfODAyNzY0RDRfZGVfMjsKc3RydWN0IFNoYXJlZF9CaWdPYmo7CnN0cnVjdCBTaGFyZWRfQmlnT2JqIHsKICAgIGNoYXIgcGFkMFsweEYwXTsKICAgIHMzMiBzbG90WzhdOwogICAgc3RydWN0IFNoYXBlX2Z1bmNfODAyNzY0RDRfZGVfMiBhcnIyWzhdOwp9Owo= */

struct Shared_Rec3;
struct Shared_Rec3;
struct Shared_Rec3 {
    char pad0[0x91];
    u8 flag;
    char pad92[0x4];
};

/* unbake evidence input: c3RydWN0IFNoYXJlZF9SZWMzOwpzdHJ1Y3QgU2hhcmVkX1JlYzMgewogICAgY2hhciBwYWQwWzB4OTFdOwogICAgdTggZmxhZzsKICAgIGNoYXIgcGFkOTJbMHg0XTsKfTsK */

struct State_func_8042CFDC_de;
struct State_func_8042CFDC_de;
struct State_func_8042CFDC_de {
    char pad0[0x54];
    s32 first;
    char pad58[0x78 - 0x58];
    s32 second;
};

/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODA0MkNGRENfZGU7CnN0cnVjdCBTdGF0ZV9mdW5jXzgwNDJDRkRDX2RlIHsKICAgIGNoYXIgcGFkMFsweDU0XTsKICAgIHMzMiBmaXJzdDsKICAgIGNoYXIgcGFkNThbMHg3OCAtIDB4NThdOwogICAgczMyIHNlY29uZDsKfTsK */

struct State_func_8042D908_de;
struct State_func_8042D908_de;
struct State_func_8042D908_de {
    char pad[0xE8];
    s32 position;
    s32 limit;
};

/* unbake evidence input: c3RydWN0IFN0YXRlX2Z1bmNfODA0MkQ5MDhfZGU7CnN0cnVjdCBTdGF0ZV9mdW5jXzgwNDJEOTA4X2RlIHsKICAgIGNoYXIgcGFkWzB4RThdOwogICAgczMyIHBvc2l0aW9uOwogICAgczMyIGxpbWl0Owp9Owo= */

struct Frame_func_804217D4_de;
struct Menu_func_804241BC_de;
struct State_func_8042DAF8_de;
struct Frame_func_804217D4_de;
struct Menu_func_804241BC_de;
struct State_func_8042DAF8_de;
struct State_func_8042DAF8_de {
    struct Menu_func_804241BC_de *menu;
    char pad4[0x8 - 0x4];
    struct Frame_func_804217D4_de *list;
    s32 delay;
    s32 target;
};

/* unbake evidence input: c3RydWN0IEZyYW1lX2Z1bmNfODA0MjE3RDRfZGU7CnN0cnVjdCBNZW51X2Z1bmNfODA0MjQxQkNfZGU7CnN0cnVjdCBTdGF0ZV9mdW5jXzgwNDJEQUY4X2RlOwpzdHJ1Y3QgU3RhdGVfZnVuY184MDQyREFGOF9kZSB7CiAgICBzdHJ1Y3QgTWVudV9mdW5jXzgwNDI0MUJDX2RlICptZW51OwogICAgY2hhciBwYWQ0WzB4OCAtIDB4NF07CiAgICBzdHJ1Y3QgRnJhbWVfZnVuY184MDQyMTdENF9kZSAqbGlzdDsKICAgIHMzMiBkZWxheTsKICAgIHMzMiB0YXJnZXQ7Cn07Cg== */

extern s32 func_8042D060_de(void);
extern void func_8042D118_de(void);
extern void func_8042D1C8_de(void);
extern void func_8042D418_de(s32 arg0);
extern s32 func_8042D958_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_8042DE10_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8042EB10_de(void);
#endif
