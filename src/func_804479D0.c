/* __osPfsGetStatus, drafted from ultralib src/io/pfsgetstatus.c (2.0I branch): send a status request
   to one controller through the pak PIF RAM block and turn its reply into a pack-present, new-pack
   or failure code. */
#include "basetypes.h"

typedef struct {
    u16 type;
    u8 status;
    u8 errno;
} OSContStatus;

extern char D_80154110;
extern void func_80447AA8(int channel);
extern void func_80447B34(int channel, OSContStatus *data);
extern s32 func_802BEDA0(s32 direction, void *data);
extern s32 func_802C0390(void *queue, void **msg, s32 flag);

s32 func_804479D0(void *queue, int channel)
{
    s32 ret = 0;
    void *dummy;
    OSContStatus data;

    func_80447AA8(channel);

    ret = func_802BEDA0(1, &D_80154110);
    func_802C0390(queue, &dummy, 1);

    ret = func_802BEDA0(0, &D_80154110);
    func_802C0390(queue, &dummy, 1);

    func_80447B34(channel, &data);

    if (((data.status & 1) != 0) && ((data.status & 2) != 0)) {
        return 2;
    } else if ((data.errno != 0) || ((data.status & 1) == 0)) {
        return 1;
    } else if ((data.status & 4) != 0) {
        return 4;
    }

    return ret;
}
