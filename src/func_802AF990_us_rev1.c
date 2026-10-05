#include "span_1000/code_802AE254.h"
#include "span_1000/code_802B8CCC.h"
#include "span_1000/code_802BCF1C.h"
#include "span_1000/code_802BD1A8.h"
#include "types.h"

extern void *jtbl_800CB490[];









extern u8 D_8014D3E2;
extern s32 D_8014D3E8;
extern s16 D_B2000008;

extern void func_802AE260_us_rev1(void);

extern s32 func_802AE380_us_rev1(u8 *);
extern s32 func_802AE5AC_us_rev1(s32);



extern void func_802AF33C_us_rev1(void);
extern void func_802AF424_us_rev1(void);


extern void func_802BD010_de(u32, u32);
extern void func_802AF0E4_us_rev1(void);
extern void func_802AF1F0_us_rev1(void);
extern void func_802AF7F8_us_rev1(void);
extern void func_802AEE48_us_rev1(void);

void func_802AF990_us_rev1(void) {
    CommandState state;
    u8 *command;
    u8 *address;
    u8 *callback;
    u8 *output;
    u32 word;
    u8 temp_v0;

    func_802AE260_us_rev1();
    temp_v0 = D_8014D3E2 | 0x40;
    D_8014D3E2 = temp_v0;
    while (func_802BDEA0_us_rev1() & 3) {
    }
    D_B2000008 = temp_v0;

    command = &state.command;
    address = &state.address.byte;
    callback = &state.callback.byte;
    output = &state.output.byte;

    while (func_802AE380_us_rev1(command) != 0) {
        if (state.command != 0x10) {
            continue;
        }
        if (func_802AE5AC_us_rev1(0x11) == 0) {
            continue;
        }
        if (func_802AE380_us_rev1(command) == 0) {
            continue;
        }
        {
        static void *sw_command_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_command_0x20, &&sw_command_0x43, &&sw_command_0x47, &&sw_command_0x44, &&sw_command_0x45, &&sw_command_0x46, &&sw_command_0x22, &&sw_command_0x40, &&sw_command_0x41, &&sw_command_0x42, &&sw_command_0x18, &&sw_command_0x23, &&sw_command_default
        };
        s32 command_value = state.command;
        s32 sw_command_value = command_value - 24;
        if ((unsigned int)sw_command_value > 47) {
            goto sw_command_default;
        }
        goto *jtbl_800CB490[sw_command_value];
    }
    do {
        sw_command_0x20:
            func_802AEF84_us_rev1();
            break;
        sw_command_0x43:
            func_802AF544_us_rev1();
            break;
        sw_command_0x47:
            func_802AF6A0_us_rev1();
            break;
        sw_command_0x44:
            func_802AE380_us_rev1(address);
            if (D_8014D3E8 != 0) break;
            word = state.address.byte << 8;
            func_802AE380_us_rev1(address);
            if (D_8014D3E8 != 0) break;
            word |= state.address.byte;
            func_802AE380_us_rev1(address);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.address.byte;
            func_802AE380_us_rev1(address);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.address.byte;
            state.address.word = word;
            func_802AE5AC_us_rev1(*(u8 *)word);
            break;
        sw_command_0x45:
            func_802AF33C_us_rev1();
            break;
        sw_command_0x46:
            func_802AF424_us_rev1();
            break;
        sw_command_0x22:
            func_802AE380_us_rev1(callback);
            if (D_8014D3E8 != 0) break;
            word = state.callback.byte << 8;
            func_802AE380_us_rev1(callback);
            if (D_8014D3E8 != 0) break;
            word |= state.callback.byte;
            func_802AE380_us_rev1(callback);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.callback.byte;
            func_802AE380_us_rev1(callback);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.callback.byte;
            state.callback.word = word;
            if (word != 0) {
                func_802BD170_de(1);
                func_802BD2F0_de();
                func_802BD010_de(0x80000000, 0x800000);
                ((void (*)(void))word)();
            }
            break;
        sw_command_0x40:
            func_802AE380_us_rev1(output);
            if (D_8014D3E8 != 0) break;
            word = state.output.byte << 8;
            func_802AE380_us_rev1(output);
            if (D_8014D3E8 != 0) break;
            word |= state.output.byte;
            func_802AE380_us_rev1(output);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.output.byte;
            func_802AE380_us_rev1(output);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.output.byte;
            state.output.word = word;
            func_802AE380_us_rev1(&state.output.value);
            if (D_8014D3E8 == 0) {
                *(u8 *)state.output.word = state.output.value;
            }
            break;
        sw_command_0x41:
            func_802AF0E4_us_rev1();
            break;
        sw_command_0x42:
            func_802AF1F0_us_rev1();
            break;
        sw_command_0x18:
            func_802AF7F8_us_rev1();
            break;
        sw_command_0x23:
            func_802AEE48_us_rev1();
            break;
        
    sw_command_default:;
    } while (0);
    }
}
