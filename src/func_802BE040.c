/* osCartRomInit, drafted from ultralib src/io/cartrominit.c (the 2.0I branch, before 2.0J). */
#include "basetypes.h"

typedef struct OSPiHandle_s {
    struct OSPiHandle_s *next;
    u8 type;
    u8 latency;
    u8 pageSize;
    u8 relDuration;
    u8 pulse;
    u8 domain;
    u32 baseAddress;
    u32 speed;
    u8 transferInfo[0x60];
} OSPiHandle;

extern OSPiHandle D_8014E950;
extern OSPiHandle *D_800D83AC;
extern s32 func_802BEC10(u32 devAddr, u32 *data);
extern void *func_802A101C(void *dst, s32 value, u32 size);
extern u32 func_802C2020(void);
extern void func_802C2040(u32 mask);

OSPiHandle *func_802BE040(void)
{
    u32 domain = 0;
    u32 saveMask;
    OSPiHandle *h = &D_8014E950;
    OSPiHandle **table;

    if (h->baseAddress == 0xB0000000)
        return h;

    h->type = 0;
    h->baseAddress = 0xB0000000;
    func_802BEC10(0, &domain);
    h->latency = domain & 0xff;
    h->pulse = (domain >> 8) & 0xff;
    h->pageSize = (domain >> 0x10) & 0xf;
    h->relDuration = (domain >> 0x14) & 0xf;
    h->domain = 0;
    h->speed = 0;

    func_802A101C(&h->transferInfo, 0, sizeof(h->transferInfo));

    saveMask = func_802C2020();
    table = &D_800D83AC;
    h->next = *table;
    *table = h;
    func_802C2040(saveMask);

    return h;
}
