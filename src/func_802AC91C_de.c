#include "shared/world.h"
#include "span_1000/code_80233920.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802AB3FC.h"
#include "types.h"

extern char D_800D31D0;




void *func_802AC91C_de(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D31D0;
    i = 3;
    do {
        i -= 1;
        if (((func_8022E3B4_S3 *)(v1))->unk4 != arg0) {
            v1 += 0x18;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}

extern char D_800D3230;




void *func_802AC950_de(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D3230;
    i = 5;
    do {
        i -= 1;
        if (((func_8022E3B4_S3 *)(v1))->unk4 != arg0) {
            v1 += 0x14;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}

extern char D_800D32A8;




void *func_802AC984_de(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D32A8;
    i = 7;
    do {
        i -= 1;
        if (((func_8022E3B4_S3 *)(v1))->unk4 != arg0) {
            v1 += 0x18;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}

extern char D_800D3368;




void *func_802AC9B8_de(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D3368;
    i = 1;
    do {
        i -= 1;
        if (((func_8022E3B4_S3 *)(v1))->unk4 != arg0) {
            v1 += 0x14;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}

extern char D_800D33C0;




void *func_802AC9EC_de(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D33C0;
    i = 0xF;
    do {
        i -= 1;
        if (((func_8022E3B4_S3 *)(v1))->unk4 != arg0) {
            v1 += 0x10;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}

extern char D_800D3390;




void *func_802ACA20_de(s32 arg0) {
    char *v1;
    s32 i;

    v1 = &D_800D3390;
    i = 2;
    do {
        i -= 1;
        if (((func_8022E3B4_S3 *)(v1))->unk4 != arg0) {
            v1 += 0x10;
        } else {
            return v1;
        }
    } while (i != -1);
    return 0;
}

extern int func_8024E924_de(void *arg0);
extern s32 func_802AB6EC_de(void *arg0, void *arg1, s32 arg2);
extern void func_80290548_de(void *arg0);
extern void func_8028B898_de(void *arg0, void *arg1, s32 arg2);
extern void func_80278E04_de(s32 arg0, s32 arg1, void *arg2);





void func_802ACA54_de(void *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = ((func_802ADA44_S1 *)(arg1))->unk19C;
    if (temp_v1 & 8) {
        if (((func_802ADA44_S1 *)(arg1))->unk1D0 & 1) {
            goto block_4;
        }
    } else if (!(temp_v1 & 1)) {
block_4:
        if (func_802AB6EC_de(arg0, arg1, func_8024E924_de(arg1)) != 0) {
            temp_v0 = ((func_802ADA44_S1 *)(arg1))->unk19C | 1;
            ((func_802ADA44_S1 *)(arg1))->unk19C = temp_v0;
            if (temp_v0 & 8) {
                func_80290548_de(arg1);
                return;
            }
            func_8028B898_de(&D_8011FE88, arg1, 1);
            func_80278E04_de(((func_802ADA44_S1 *)(arg1))->unk14, 0x400, arg0);
        }
    }
}

extern char D_80145088;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
extern void func_80222BE8_de(void *, s16, s16);
extern void func_80237E80_de(void *, void *, void *);
extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);


/** Apply an effect descriptor's optional setup, resource, sound, and callback. */
s32 func_802ACB18_de(void *arg0, void *arg1) {
    void *resource;
    s32 sound;
    s32 callback;
    if (((func_802ADB08_S1 *)(arg1))->unkC != -1) {
        func_80222BE8_de(arg0, ((func_802ADB08_S1 *)(arg1))->unkC,
                      ((func_802ADB08_S1 *)(arg1))->unkE);
    }

    resource = *(void **)arg1;
    sound = ((func_802ADB08_S1 *)(arg1))->unk6;
    callback = ((func_802ADB08_S1 *)(arg1))->unk8;
    if (((func_802ADB08_S2 *)(arg0))->unk5DC != 0) {
        func_802391AC_de(((func_802ADB08_S2 *)(arg0))->unk5DC,
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E80_de(&D_80145088,
                          ((func_802ADB08_S2 *)(arg0))->unk5DC,
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                          ((void **)resource)[D_80152789]);
#else
                          *(void **)resource);
#endif
        }
    }
    if (sound != 0) {
        func_8025DE54_de(sound,
                      ((func_802ADB08_S2 *)(arg0))->unk8,
                      ((func_802ADB08_S2 *)(arg0))->unkC,
                      ((func_802ADB08_S2 *)(arg0))->unk10, 0, -1);
    }
    if (callback != 0) {
        func_8025E11C_de(callback);
    }
    return 1;
}

extern char D_80145088;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
extern s32 func_8022AC00_de(void *arg0);
extern void func_80237E80_de(void *, void *, void *);
extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);


/** Advance a timed effect and apply its optional resource, sound, and callback. */
s32 func_802ACC04_de(void *arg0, void *arg1) {
    s32 result;
    void *resource;
    s32 sound;
    s32 callback;

    result = 0;
    if (((func_802ADBF4_S1 *)(arg0))->unk5E4 > 0) {
        s32 limit;

        ((func_802ADBF4_S1 *)(arg0))->unk5E4 +=
            ((func_802ADBF4_S2 *)(arg1))->unkC << 8;
        limit = func_8022AC00_de(arg0);
        if (((func_802ADBF4_S1 *)(arg0))->unk5E4 < limit) {
            limit = ((func_802ADBF4_S1 *)(arg0))->unk5E4;
        }
        result = 1;
        ((func_802ADBF4_S1 *)(arg0))->unk5E4 = limit;
        ((func_802ADBF4_S1 *)(arg0))->unk174 = limit;
    }

    if (result != 0) {
        resource = *(void **)arg1;
        sound = ((func_802ADBF4_S2 *)(arg1))->unk6;
        callback = ((func_802ADBF4_S2 *)(arg1))->unk8;
        if (((func_802ADBF4_S1 *)(arg0))->unk5DC != 0) {
            func_802391AC_de(((func_802ADBF4_S1 *)(arg0))->unk5DC,
                          0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
            if (resource != 0) {
                func_80237E80_de(&D_80145088,
                              ((func_802ADBF4_S1 *)(arg0))->unk5DC,
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                          ((void **)resource)[D_80152789]);
#else
                          *(void **)resource);
#endif
            }
        }
        if (sound != 0) {
            func_8025DE54_de(sound,
                          ((func_802ADBF4_S1 *)(arg0))->unk8,
                          ((func_802ADBF4_S1 *)(arg0))->unkC,
                          ((func_802ADBF4_S1 *)(arg0))->unk10, 0, -1);
        }
        if (callback != 0) {
            func_8025E11C_de(callback);
        }
    }
    return result;
}

extern char D_80145088;
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
extern void func_80237E80_de(void *, void *, void *);
extern s32 func_8025DE54_de(s16 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);




/** Apply an accumulating effect descriptor and its optional payloads. */
s32 func_802ACD28_de(void *arg0, void *arg1) {
    void *resource;
    s32 sound;
    s32 callback;
    s32 amount;

    amount = ((func_802ADD18_S1 *)(arg0))->unk5E8.v0 +
             ((func_802ADD18_S2 *)(arg1))->unkC;
    ((func_802ADD18_S1 *)(arg0))->unk5E8.v1 = amount;
    if ((s16)amount >= 100) {
        ((func_802ADD18_S1 *)(arg0))->unk5E8.v1 = amount - 100;
        if (((func_802ADD18_S1 *)(arg0))->unk5EA.v0 < 9) {
            ((func_802ADD18_S1 *)(arg0))->unk5EA.v0 =
                ((func_802ADD18_S1 *)(arg0))->unk5EA.v1 + 1;
        }
    }

    resource = *(void **)arg1;
    sound = ((func_802ADD18_S2 *)(arg1))->unk6;
    callback = ((func_802ADD18_S2 *)(arg1))->unk8;
    if (((func_802ADD18_S1 *)(arg0))->unk5DC != 0) {
        func_802391AC_de(((func_802ADD18_S1 *)(arg0))->unk5DC,
                      0x80, 0x32, 0x32, 0x4B, 0, 0, 2);
        if (resource != 0) {
            func_80237E80_de(&D_80145088,
                          ((func_802ADD18_S1 *)(arg0))->unk5DC,
#if defined(VERSION_EU) || defined(VERSION_EU_X)
                          ((void **)resource)[D_80152789]);
#else
                          *(void **)resource);
#endif
        }
    }
    if (sound != 0) {
        func_8025DE54_de(sound,
                      ((func_802ADD18_S1 *)(arg0))->unk8,
                      ((func_802ADD18_S1 *)(arg0))->unkC,
                      ((func_802ADD18_S1 *)(arg0))->unk10, 0, -1);
    }
    if (callback != 0) {
        func_8025E11C_de(callback);
    }
    return 1;
}
