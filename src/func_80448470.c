#include "basetypes.h"

typedef struct {
    u16 type;
    u8 status;
    u8 error;
} OSContStatus;

extern u8 D_8014D46C[];
extern char D_80154110;

extern void func_802BED04(void);
extern void func_802BED70(void);
extern s32 func_802BEDA0(s32 direction, void *buf);
extern s32 func_802C0390(void *mq, void *msg, s32 flag);
extern void func_804485EC(s32 cmd);
extern void func_80448688(u8 *valid, OSContStatus *data);

/* Polls the controllers under SI access: sends a status request and reads the replies through queue mq, retrying up to three times while a channel lacks status bit 2, then stores in *bitpattern the channels that answered without error with status bit 0 set; returns the read DMA result. */
s32 func_80448470(void *mq, u8 *bitpattern) {
    OSContStatus data[4];
    void *dummy;
    u8 pattern;
    s32 ret;
    s32 i;
    u8 bits = 0;
    s32 retries = 3;

    func_802BED04();
    do {
        func_804485EC(0);
        func_802BEDA0(1, &D_80154110);
        func_802C0390(mq, &dummy, 1);
        ret = func_802BEDA0(0, &D_80154110);
        func_802C0390(mq, &dummy, 1);
        func_80448688(&pattern, data);
        for (i = 0; i < D_8014D46C[0]; i++) {
            if (!(data[i].status & 4)) {
                retries--;
                break;
            }
        }
        if (i == D_8014D46C[0]) {
            retries = 0;
        }
    } while (retries > 0);
    for (i = 0; i < D_8014D46C[0]; i++) {
        if (data[i].error == 0 && (data[i].status & 1)) {
            bits |= 1 << i;
        }
    }
    func_802BED70();
    *bitpattern = bits;
    return ret;
}
