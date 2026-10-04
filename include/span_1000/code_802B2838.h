#ifndef UNBAKE_SPAN_1000_CODE_802B2838_H
#define UNBAKE_SPAN_1000_CODE_802B2838_H
#include "span_1000/types.h"
#include "../types.h"
struct DecodeResult;
typedef struct DecodeResult DecodeResult;

struct DecodeResult;
struct DecodeResult {
    s16 type;
    u8 pad2[6];
    u8 status;
    u8 first_data;
    u8 second_data;
    u8 extra1;
    u32 extra2;
};
extern int func_802AD768_de(void);
extern void func_802AD7A0_de(void);
extern void func_802B31E8_de(void);
#endif
