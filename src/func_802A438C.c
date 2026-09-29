#include "basetypes.h"

typedef struct Node438C {
    u8 pad0[4];
    struct Node438C *next;
    u8 pad8[8];
    f32 x;
    f32 y;
    f32 z;
    s32 a;
    s32 b;
    s32 c;
} Node438C;

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_800D297C;
extern void func_80272D20(void *, s32, s32, s32);
extern void func_80272848(void *);
extern void func_802A41D8(Node438C *, Node438C *, void *, void *);
extern void func_802702EC(void *, s32);

typedef struct func_802A438C_S1 func_802A438C_S1;
struct func_802A438C_S1 {
    char pad0[0x40];
    Node438C* unk40;
    char pad40[0x48 - 0x40 - sizeof(Node438C*)];
    s32 unk48;
};

void func_802A438C(void *arg0, void *arg1) {
    f32 matrix[16];
    Node438C *first;
    Node438C *next;

    if (((func_802A438C_S1 *)(arg0))->unk48 < 2) {
        return;
    }

    first = ((func_802A438C_S1 *)(arg0))->unk40;
    next = first->next;
    if (first != 0) {
        func_80272D20(matrix, first->a, first->b, first->c);
    } else {
        func_80272848(matrix);
    }

    while (first != 0) {
        Node438C *a;
        Node438C *b;

        if (next == 0) {
            break;
        }
        a = first;
        b = next;
        if (first == 0) {
            goto no_pair;
        }
        if (first->x != next->x || first->y != next->y) {
            goto boundary;
        }
z_test:
        if (a->z != b->z) {
            goto boundary;
        }
        a = b;
        b = b->next;
        if (a == 0) {
            goto no_pair;
        }
        if (b == 0 || a->x != b->x || a->y != b->y) {
            goto boundary;
        }
        goto z_test;
boundary:
        if (a != 0 && b != 0) {
            func_802A41D8(a, b, arg1, matrix);
            goto apply;
        }
no_pair:
        {
            matrix[12] = first->x;
            matrix[13] = first->y;
            matrix[14] = first->z;
        }
apply:
        func_802702EC(matrix, (s32)((u8 *)first + ((D_800D297C << 6) + 0x28)));
        first = next;
        next = first->next;
    }

    matrix[12] = first->x;
    matrix[13] = first->y;
    matrix[14] = first->z;
    func_802702EC(matrix, (s32)((u8 *)first + ((D_800D297C << 6) + 0x28)));
}
