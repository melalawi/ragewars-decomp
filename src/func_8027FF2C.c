
#include "basetypes.h"

extern char D_8013BA80;
extern char D_8013B1A8;

extern void func_80279A70(void *arg0);
extern void func_8028414C(void *);
extern void func_802A52E4(void *arg0, void *arg1);
extern void func_80268C7C(void *arg0, s32 arg1);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

typedef struct { void *head; char rest[0x10]; } HeadRecord;
typedef struct { char pad[0xFC28]; HeadRecord heads[3]; } Root;
typedef struct Node Node;
struct Node {
    char pad0[0x5C];
    s32 flags;
    char pad60[0xD0];
    s32 *counter;
    char pad134[4];
    s32 resource;
    char pad13C[0x9D];
    u8 marker;
    char pad1DA[0xA];
    void *handle;
    char pad1E8[4];
    Node *next;
};

typedef struct func_8027FF2C_S1 func_8027FF2C_S1;
struct func_8027FF2C_S1 {
    char pad0[0x14];
    char unk14;
};

void func_8027FF2C(void *arg0) {
    s32 *temp_v1_2;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_s3;
    s32 clear_mask;
    s32 remove_offset;
    s32 active_mask;
    s32 flagged_offset;
    s32 head_offset;
    void *temp_s0;
    void *var_s1;
    void *var_s2;
    u8 *head_cursor;

    var_s3 = 0;
    clear_mask = 0xFDFFFEFF;
    remove_offset = 0xFC00;
    active_mask = 0x01000000;
    flagged_offset = 0xFC14;
    var_s2 = arg0;
    do {
        head_offset = 0xFC28;
        head_cursor = (u8 *)var_s2;
        head_cursor += head_offset;
        var_s1 = ((HeadRecord *)head_cursor)->head;
        if (var_s1 != 0) {
            do {
                temp_s0 = var_s1;
                var_s1 = ((Node *)var_s1)->next;
                temp_v1 = ((Node *)temp_s0)->flags;
                if (temp_v1 & 0x100) {
                  if (!(temp_v1 & 0x800)) {
                    func_80279A70(temp_s0);
                    if (((Node *)temp_s0)->marker != 0) {
                        func_8028414C(temp_s0);
                        func_802A52E4(&D_8013BA80, temp_s0);
                    }
                    temp_a1 = ((Node *)temp_s0)->resource;
                    if (temp_a1 != 0) {
                        func_80268C7C(&D_8013B1A8, temp_a1);
                        *(volatile s32 *)&((Node *)temp_s0)->resource = 0;
                    }
                    temp_v1_2 = ((Node *)temp_s0)->counter;
                    if (temp_v1_2 != 0) {
                        *temp_v1_2 -= 1;
                    }
                    ((Node *)temp_s0)->flags = ((Node *)temp_s0)->flags & clear_mask;
                    func_80255E78(((Node *)temp_s0)->handle, (s32)temp_s0);
                    ((Node *)temp_s0)->handle = 0;
                    func_80255C58((char *)arg0 + remove_offset, (s32)temp_s0);
                    if (((Node *)temp_s0)->flags & active_mask) {
                        func_80255E78((char *)arg0 + flagged_offset, (s32)temp_s0);
                    }
                  }
                }
            } while (var_s1 != 0);
        }
        var_s3 += 1;
        var_s2 = &((func_8027FF2C_S1 *)(var_s2))->unk14;
    } while (var_s3 < 3);
}
