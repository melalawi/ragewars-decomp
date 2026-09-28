#include "basetypes.h"

extern void *jtbl_800CB490[];

typedef struct ReadWord {
    u32 word;
    u8 byte;
} ReadWord;

typedef struct ReadCommand {
    u8 byte;
    u8 pad01[3];
    u32 unused;
} ReadCommand;

typedef struct WriteWord {
    u32 word;
    u8 byte;
    u8 value;
} WriteWord;

typedef struct CommandState {
    u8 command;
    u8 pad01[3];
    ReadWord address;
    ReadWord callback;
    WriteWord output;
} CommandState;

extern u8 D_8014D3E2;
extern s32 D_8014D3E8;
extern s16 D_B2000008;

extern void func_802AE260(void);
extern u32 func_802BDEA0(void);
extern s32 func_802AE380(u8 *);
extern s32 func_802AE5AC(s32);
extern s32 func_802AEF84(void);
extern s32 func_802AF544(void);
extern s32 func_802AF6A0(void);
extern void func_802AF33C(void);
extern void func_802AF424(void);
extern s32 func_802C2260(s32);
extern void func_802C23E0(void);
extern void func_802C2100(u32, u32);
extern void func_802AF0E4(void);
extern void func_802AF1F0(void);
extern void func_802AF7F8(void);
extern void func_802AEE48(void);

void func_802AF990(void) {
    CommandState state;
    u8 *command;
    u8 *address;
    u8 *callback;
    u8 *output;
    u32 word;
    u8 temp_v0;

    func_802AE260();
    temp_v0 = D_8014D3E2 | 0x40;
    D_8014D3E2 = temp_v0;
    while (func_802BDEA0() & 3) {
    }
    D_B2000008 = temp_v0;

    command = &state.command;
    address = &state.address.byte;
    callback = &state.callback.byte;
    output = &state.output.byte;

    while (func_802AE380(command) != 0) {
        if (state.command != 0x10) {
            continue;
        }
        if (func_802AE5AC(0x11) == 0) {
            continue;
        }
        if (func_802AE380(command) == 0) {
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
            func_802AEF84();
            break;
        sw_command_0x43:
            func_802AF544();
            break;
        sw_command_0x47:
            func_802AF6A0();
            break;
        sw_command_0x44:
            func_802AE380(address);
            if (D_8014D3E8 != 0) break;
            word = state.address.byte << 8;
            func_802AE380(address);
            if (D_8014D3E8 != 0) break;
            word |= state.address.byte;
            func_802AE380(address);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.address.byte;
            func_802AE380(address);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.address.byte;
            state.address.word = word;
            func_802AE5AC(*(u8 *)word);
            break;
        sw_command_0x45:
            func_802AF33C();
            break;
        sw_command_0x46:
            func_802AF424();
            break;
        sw_command_0x22:
            func_802AE380(callback);
            if (D_8014D3E8 != 0) break;
            word = state.callback.byte << 8;
            func_802AE380(callback);
            if (D_8014D3E8 != 0) break;
            word |= state.callback.byte;
            func_802AE380(callback);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.callback.byte;
            func_802AE380(callback);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.callback.byte;
            state.callback.word = word;
            if (word != 0) {
                func_802C2260(1);
                func_802C23E0();
                func_802C2100(0x80000000, 0x800000);
                ((void (*)(void))word)();
            }
            break;
        sw_command_0x40:
            func_802AE380(output);
            if (D_8014D3E8 != 0) break;
            word = state.output.byte << 8;
            func_802AE380(output);
            if (D_8014D3E8 != 0) break;
            word |= state.output.byte;
            func_802AE380(output);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.output.byte;
            func_802AE380(output);
            word <<= 8;
            if (D_8014D3E8 != 0) break;
            word |= state.output.byte;
            state.output.word = word;
            func_802AE380(&state.output.value);
            if (D_8014D3E8 == 0) {
                *(u8 *)state.output.word = state.output.value;
            }
            break;
        sw_command_0x41:
            func_802AF0E4();
            break;
        sw_command_0x42:
            func_802AF1F0();
            break;
        sw_command_0x18:
            func_802AF7F8();
            break;
        sw_command_0x23:
            func_802AEE48();
            break;
        
    sw_command_default:;
    } while (0);
    }
}
