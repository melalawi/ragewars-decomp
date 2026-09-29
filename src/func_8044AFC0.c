/* Initializes camera slots, resource pools, and the transform freelists. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { void ** unk0; char * unk4; s32 unk8; char pC[40]; s32 unk34; s32 unk38; char p3C[12]; s32 unk48; char p4C[3788]; void ** unkF18; char * unkF1C; s32 unkF20; char pF24[732]; s32 unk1200; } State;
typedef struct { char pad[8]; s32 index; } Item;
typedef struct { f32 unk0; f32 unk4; f32 unk8; f32 unkC; f32 unk10; f32 unk14; } Floats;
typedef struct { Floats first; char tail[0x54 - sizeof(Floats)]; } CameraRecord;
typedef struct { char pad[0xF38]; CameraRecord records[8]; } CameraBlock;
void **func_802533DC(s32, s32, s32, char *);               /* extern */
void func_802537D8(s32, void **);                        /* extern */
void func_802538A8(s32);                                 /* extern */
void func_80255C40(void *, s32, s32);                      /* extern */
void func_80255CB4(void *, void *);                    /* extern */
void func_8025E410(void *);                            /* extern */
void func_802A101C(void *, s32, s32);                    /* extern */
void func_8044ADC0(s32);                               /* extern */
extern char D_800C83C0;
extern char D_800C83CC;


typedef struct func_8044AFC0_S1 func_8044AFC0_S1;
typedef struct func_8044AFC0_S2 func_8044AFC0_S2;
typedef struct func_8044AFC0_S3 func_8044AFC0_S3;
struct func_8044AFC0_S1 {
    char pad0[0x18];
    Floats unk18;
    char pad18[0x40 - 0x18 - sizeof(Floats)];
    Floats unk40;
};
struct func_8044AFC0_S2 {
    char pad0[0x2C];
    Floats unk2C;
};
struct func_8044AFC0_S3 {
    char pad0[0xC];
    char unkC;
    char padC[0x20 - 0xC - sizeof(char)];
    char unk20;
    char pad20[0xF24 - 0x20 - sizeof(char)];
    char unkF24;
    char padF24[0x11D8 - 0xF24 - sizeof(char)];
    char unk11D8;
    char pad11D8[0x11EC - 0x11D8 - sizeof(char)];
    char unk11EC;
};

static inline void reset(Floats *temp_v1) {
 Floats *temp_v0,*temp_v0_2,*temp_v1_2;
        temp_v0 = &((func_8044AFC0_S1 *)(temp_v1))->unk18;
        temp_v1->unk8 = 0;
        temp_v1->unkC = 0;
        temp_v1->unk10 = 0;
        temp_v1->unk14 = 1.0f;
        temp_v0->unk4 = 0;
        temp_v0->unk8 = 0;
        temp_v0->unkC = 0;
        temp_v0->unk10 = 0;
        temp_v0_2 = &((func_8044AFC0_S2 *)(temp_v1))->unk2C;
        temp_v1_2 = &((func_8044AFC0_S1 *)(temp_v1))->unk40;
        temp_v0_2->unk4 = 0;
        temp_v0_2->unk8 = 0;
        temp_v0_2->unkC = 0;
        temp_v0_2->unk10 = 0;
        temp_v1_2->unk4 = 0;
        temp_v1_2->unk8 = 0;
        temp_v1_2->unkC = 0;
        temp_v1_2->unk10 = 0;
}
void func_8044AFC0(State *arg0, s32 arg1) {
    f32 temp_f20;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    void **temp_a1;
    void **temp_a1_2;
    void **temp_v0_3;
    void **temp_v0_4;
    void *temp_a0;
    void *temp_a0_2;
    Floats *temp_v0;
    Floats *temp_v0_2;
    Floats *temp_v1;
    Floats *temp_v1_2;
    void *var_a0;

    var_s4 = arg1;
    if (var_s4 >= 5) {
        var_s4 = 4;
    }
    arg0->unk34 = 0;
    arg0->unk38 = 0;
    arg0->unk48 = 0;
    func_8044ADC0((s32)&arg0->p3C[4]);
    arg0->unk38 = 2;
    func_80255C40(&((func_8044AFC0_S3 *)(arg0))->unk11D8, 0, 4);
    func_80255C40(&((func_8044AFC0_S3 *)(arg0))->unk11EC, 0, 4);
    var_s1 = 0;
    var_s3 = 0xF38;
    temp_f20 = 1.0f;
    do {
        reset(&((CameraBlock *)arg0)->records[var_s1].first);
        func_80255CB4(&((func_8044AFC0_S3 *)(arg0))->unk11D8, (void *)&((CameraBlock *)arg0)->records[var_s1]);
        var_s3 += 0x54;
        var_s1 += 1;
    } while (var_s1 < 8);
    func_80255C40(&((func_8044AFC0_S3 *)(arg0))->unkC, 0, 4);
    func_80255C40(&((func_8044AFC0_S3 *)(arg0))->unk20, 0, 4);
    func_80255C40(&((func_8044AFC0_S3 *)(arg0))->unkF24, 0, 4);
    arg0->unk1200 = 1;
    func_8025E410(&arg0->p3C[4]);
    func_802538A8(0);
    temp_a1 = arg0->unk0;
    if (temp_a1 != NULL) {
        func_802537D8(0, temp_a1);
        arg0->unk0 = NULL;
        arg0->unk4 = NULL;
        arg0->unk8 = 0;
    }
    func_802538A8(0);
    temp_a1_2 = arg0->unkF18;
    if (temp_a1_2 != NULL) {
        func_802537D8(0, temp_a1_2);
        arg0->unkF18 = NULL;
        arg0->unkF1C = NULL;
        arg0->unkF20 = 0;
    }
    if (var_s4 != 0) {
        temp_s0 = var_s4 * 0xED8;
        arg0->unk8 = var_s4;
        temp_v0_3 = func_802533DC(0, temp_s0, 0x23, &D_800C83C0 + 4);
        arg0->unk0 = temp_v0_3;
        temp_a0 = *temp_v0_3;
        arg0->unk4 = temp_a0;
        func_802A101C(temp_a0, 0, temp_s0);
        var_s1 = 0;
        if (arg0->unk8 > 0) {
            var_s0 = 0;
            do {
                ((Item *)(var_s0 + (s32)arg0->unk4))->index = var_s1;
                var_s1 += 1;
                func_80255CB4(&((func_8044AFC0_S3 *)(arg0))->unkC, arg0->unk4 + var_s0);
                var_s0 += 0xED8;
            } while (var_s1 < arg0->unk8);
        }
        func_8025E410(arg0->unk4);
        arg0->unk1200 = 0;
    }
    arg0->unkF20 = 0x10;
    temp_v0_4 = func_802533DC(0, 0x400, 0x23, &D_800C83CC);
    arg0->unkF18 = temp_v0_4;
    temp_a0_2 = *temp_v0_4;
    arg0->unkF1C = temp_a0_2;
    func_802A101C(temp_a0_2, 0, 0x400);
    for(var_s1=0;var_s1<arg0->unkF20;var_s1++) {
        func_80255CB4(&((func_8044AFC0_S3 *)(arg0))->unkF24, (void *)((s32)arg0->unkF1C + (var_s1 << 6)));
    }
}
