#ifndef UNBAKE_SPAN_1000_CODE_8026D4F0_H
#define UNBAKE_SPAN_1000_CODE_8026D4F0_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Node8026E4F8;
typedef struct Node8026E4F8 Node8026E4F8;

struct ObjectState18;
typedef struct ObjectState18 ObjectState18;

struct TreeNode;
typedef struct TreeNode TreeNode;

struct func_8026E158_S1;
typedef struct func_8026E158_S1 func_8026E158_S1;

struct Node8026E4F8;
struct Node8026E4F8 {
    u32 key;
    char pad4[0x14];
    struct Node8026E4F8 *left;
    struct Node8026E4F8 *right;
};
struct ObjectState18;
struct ObjectState18 {
    s32 flags;
    u8 padding4[0xC];
    u8 color[4];
    u8 fog[4];
};
struct TreeNode;
struct TreeNode {
    unsigned int key;
    unsigned char padding[12];
    struct TreeNode *link10;
    struct TreeNode *link14;
    struct TreeNode *link18;
    struct TreeNode *link1c;
};
struct func_8026E158_S1;
struct func_8026E158_S1 {
    char pad0[0x8];
    func_8026E158_S1_U8 unk8;
};
extern void func_8026D834_de(void);
extern void func_8026D83C_de(void);
extern void func_8026D844_de(void);
extern void func_8026D88C_de(void);
extern void func_8026D8F8_de(void);
extern void func_8026D980_de(void);
extern void func_8026D9D0_de(void);
extern void func_8026E1F8_de(void **arg0);
extern void func_8026E350_de(unsigned char first, unsigned char second, unsigned char third, unsigned char fourth);
extern void func_8026E390_de(void);
extern void func_8026E428_de(void);
extern void func_8026E4C0_de(int *state);
extern void func_8026E4D0_de(void);
extern void *func_8026E4F8_de(Node8026E4F8 **arg0, u32 arg1);
#endif
