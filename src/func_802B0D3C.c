/* Sends a 0x85 command with a 32-bit argument over the handshake port and reads back a big-endian 32-bit word, returning it (zero on failure). Adapted from func_802B091C, with the command 0x84 changed to 0x85 and the second and third argument words dropped. */
#include "basetypes.h"

extern s32 D_800D3650;
extern u8 D_8014D3E1;
extern s32 D_8014D3E8;
extern s16 D_B2000004;
extern u8 D_B2000015;

extern u32 func_802BDEA0(void);
extern s32 func_802AE5AC(s32);
extern s32 func_802AE380(u8 *);

typedef struct Response {
    u8 handshake;
    u8 pad11[3];
    u32 output;
    u8 byte;
} Response;

u32 func_802B0D3C(u32 arg0) {
    Response response;
    s32 timeout;
    s32 retries;
    s32 attempts;
    u8 initial_control;
    s32 expected;
    u8 mask;
    u8 final_control;
    u8 cleanup_control;
    s32 final_expected;
    u8 final_mask;
    u32 word;
    s32 valid;
    u8 *byte;
    u32 *output;

    response.output = 0;
    D_8014D3E8 = 0;
    attempts = 100;
    D_800D3650 = attempts;
    initial_control = D_8014D3E1 | 4;
    D_8014D3E1 = initial_control;
    do {
    } while (func_802BDEA0() & 3);

    mask = 2;
    timeout = 0x4E20;
    retries = D_800D3650;
    expected = 2;
    D_B2000004 = initial_control;
    do {
        do {
        } while (func_802BDEA0() & 3);
        if ((D_B2000015 & mask) == expected) {
            goto ready;
        }
        if (timeout-- == 0) {
            retries--;
            timeout = 0x4E20;
        }
    } while (retries > 0);
    D_8014D3E8 = 1;
ready:
    if (D_8014D3E8 != 0) {
        goto cleanup;
    }
    func_802AE5AC(0x10);
    valid = 0;
    if (D_8014D3E8 == 0) {
        func_802AE380(&response.handshake);
        if (D_8014D3E8 == 0) {
            valid = response.handshake == 0x11;
        }
    }
    if (valid == 0) {
        goto cleanup;
    }
    func_802AE5AC(0x85);
    if (D_8014D3E8 != 0) goto cleanup;
    func_802AE5AC(arg0 >> 24);
    if (D_8014D3E8 != 0) goto cleanup;
    func_802AE5AC((arg0 >> 16) & 0xFF);
    if (D_8014D3E8 != 0) goto cleanup;
    func_802AE5AC((arg0 >> 8) & 0xFF);
    if (D_8014D3E8 != 0) goto cleanup;
    func_802AE5AC(arg0 & 0xFF);
    if (D_8014D3E8 != 0) goto cleanup;

    output = &response.output;
    byte = &response.byte;
    do {
        D_8014D3E8 = 0;
        func_802AE380(byte);
        if (D_8014D3E8 == 0) {
            word = response.byte << 8;
            func_802AE380(byte);
            if (D_8014D3E8 == 0) {
                word |= response.byte;
                func_802AE380(byte);
                word <<= 8;
                if (D_8014D3E8 == 0) {
                    word |= response.byte;
                    func_802AE380(byte);
                    word <<= 8;
                    if (D_8014D3E8 == 0) {
                        word |= response.byte;
                        *output = word;
                    }
                }
            }
        }
    } while (attempts-- > 0 && D_8014D3E8 != 0);
    if (D_8014D3E8 != 0) goto cleanup;

    final_control = D_8014D3E1 & 0xFB;
    D_8014D3E1 = final_control;
    do {
    } while (func_802BDEA0() & 3);
    final_mask = 0;
    final_expected = 2;
    timeout = 0x4E20;
    retries = D_800D3650;
    D_B2000004 = final_control;
    do {
        do {
        } while (func_802BDEA0() & 3);
        if ((D_B2000015 & final_expected) == final_mask) {
            goto cleanup;
        }
        if (timeout-- == 0) {
            retries--;
            timeout = 0x4E20;
        }
    } while (retries > 0);
    D_8014D3E8 = 1;

cleanup:
    cleanup_control = D_8014D3E1 & 0xFB;
    D_8014D3E1 = cleanup_control;
    do {
    } while (func_802BDEA0() & 3);
    D_B2000004 = cleanup_control;
    D_800D3650 = 1;
    return response.output;
}
