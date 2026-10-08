#include "types.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_802661FC.h"

/* 80267198/802671FC dispatch callbacks by an eight-byte stride; 80265E10
 * reads the second word at the same stride and tests its flag bits.
 * Callback addresses keep the cartridge's KSEG0 bias removed.
 * ROM D1F80..D20A8. */
extern void func_8026730C_de();
extern void func_8026740C_de();
extern void func_80267B68_de();
extern void func_80267BC8_de();
extern void func_80267C20_de();
extern void func_80267C80_de();
extern void func_80267CB4_de();
extern void func_80267DB4_de();
extern void func_80267E48_de();
extern void func_80267ED8_de();
extern void func_80267F98_de();
extern void func_80267FF0_de();
extern void func_80268048_de();
extern void func_802680A0_de();
extern void func_802680F8_de();
extern void func_80268150_de();
extern void func_802681A8_de();
extern void func_80268264_de();
extern void func_8026826C_de();
extern void func_8026835C_de();
extern void func_802683E0_de();
extern void func_802684B8_de();
extern void func_802684E8_de();
extern void func_8026851C_de();
extern void func_80268768_de();
extern void func_802673EC_de();
extern void func_80268864_de();
extern void func_802688AC_de();
extern void func_802688E4_de();
extern s32 func_802686EC_de();
extern void func_802689BC_de();
extern void func_802689CC_de();

struct ResidentEffectCallbackFlags {
    func_80267198_de_Callback callback;
    u32 flags;
};
struct ResidentEffectCallbackFlags D_800CC130[37] = {
    {(func_80267198_de_Callback)((char *)func_8026730C_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_8026740C_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80267B68_de - 0x80000000U), 4U},
    {(func_80267198_de_Callback)((char *)func_80267BC8_de - 0x80000000U), 6U},
    {(func_80267198_de_Callback)((char *)func_80267C20_de - 0x80000000U), 6U},
    {(func_80267198_de_Callback)((char *)func_80267C78_de - 0x80000000U), 10U},
    {(func_80267198_de_Callback)((char *)func_80267C80_de - 0x80000000U), 16U},
    {(func_80267198_de_Callback)((char *)func_80267CB4_de - 0x80000000U), 16U},
    {(func_80267198_de_Callback)((char *)func_8026740C_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80267CE4_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80267D68_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80267D70_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80267DB4_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80267E48_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80267ED8_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80267F98_de - 0x80000000U), 6U},
    {(func_80267198_de_Callback)((char *)func_80267FF0_de - 0x80000000U), 6U},
    {(func_80267198_de_Callback)((char *)func_80268048_de - 0x80000000U), 7U},
    {(func_80267198_de_Callback)((char *)func_802680A0_de - 0x80000000U), 7U},
    {(func_80267198_de_Callback)((char *)func_802680F8_de - 0x80000000U), 6U},
    {(func_80267198_de_Callback)((char *)func_80268150_de - 0x80000000U), 6U},
    {(func_80267198_de_Callback)((char *)func_802681A8_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80268264_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_8026826C_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_8026835C_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_802683E0_de - 0x80000000U), 7U},
    {(func_80267198_de_Callback)((char *)func_802684B8_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_802684E8_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_8026851C_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80268768_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_802673EC_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_80268864_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_802688AC_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_802688E4_de - 0x80000000U), 2U},
    {(func_80267198_de_Callback)((char *)func_802686EC_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_802689BC_de - 0x80000000U), 0U},
    {(func_80267198_de_Callback)((char *)func_802689CC_de - 0x80000000U), 0U},
};
