typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
#define NULL ((void *)0)
int func_8022A404(void *);
void func_802537D8(void *, void *);
void func_80254784(void *);
void func_80255E78(void *, s32);
void func_8025CC0C(void *);
s32 * func_8025CC8C(void);
void func_8025E20C(s32);
void func_8025E488(void);
void func_8028D578(void *);
void func_8044ACCC(void *);
extern s32 D_80145040;

typedef struct func_8044CBE0_S1 func_8044CBE0_S1;
typedef struct func_8044CBE0_S2 func_8044CBE0_S2;
typedef union func_8044CBE0_S1_U1B500 { void* v0; s8 v1; } func_8044CBE0_S1_U1B500;
struct func_8044CBE0_S1 {
    char pad0[0xB8];
    void* unkB8;
    void* unkBC;
    void* unkC0;
    void* unkC4;
    void* unkC8;
    void* unkCC;
    void* unkD0;
    void* unkD4;
    char padD4[0x10];
    void* unkE8;
    void* unkEC;
    void* unkF0;
    void* unkF4;
    char padF4[0x4];
    void* unkFC;
    void* unk100;
    char pad100[0x1B3FC];
    func_8044CBE0_S1_U1B500 unk1B500;
};
struct func_8044CBE0_S2 {
    char pad0[0x10];
    void* unk10;
};

/* Shut down the subsystem, free its owned resources, and unlink its list. */
void func_8044CBE0(func_8044CBE0_S1 *arg0) {
    s32 temp_v0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_s0;
    void *temp_s1;
    func_8044CBE0_S2 *var_a1;

    temp_v0 = func_8022A404(&D_80145040);
    if (temp_v0 != 0) {
        func_8044ACCC((void *) temp_v0);
    }
    func_8025CC0C(func_8025CC8C());
    func_8025E488();
    func_8025E20C(0x1000);
    func_802537D8(NULL, arg0->unk100);
    func_802537D8(NULL, arg0->unkB8);
    func_802537D8(NULL, arg0->unkBC);
    func_802537D8(NULL, arg0->unkC0);
    func_802537D8(NULL, arg0->unkC4);
    func_802537D8(NULL, arg0->unkC8);
    func_802537D8(NULL, arg0->unkD0);
    func_802537D8(NULL, arg0->unkD4);
    func_802537D8(NULL, arg0->unkEC);
    func_802537D8(NULL, arg0->unkCC);
    func_802537D8(NULL, arg0->unkE8);
    temp_a1 = arg0->unkF0;
    if (temp_a1 != NULL) {
        func_802537D8(NULL, temp_a1);
    }
    temp_a1_2 = arg0->unkF4;
    if (temp_a1_2 != NULL) {
        func_802537D8(NULL, temp_a1_2);
    }
    temp_a1_3 = arg0->unkFC;
    if (temp_a1_3 != NULL) {
        func_802537D8(NULL, temp_a1_3);
    }
    func_8028D578(arg0);
    temp_s1 = arg0->unk1B500.v0;
    var_a1 = temp_s1;
    if (temp_s1 != NULL) {
        do {
            temp_s0 = var_a1->unk10;
            func_80255E78(&arg0->unk1B500.v1, (s32) var_a1);
            var_a1 = temp_s0;
        } while (var_a1 != NULL);
    }
    func_80254784(temp_s1);
}
