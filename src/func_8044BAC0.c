#include "basetypes.h"

/* Resets the controller and profile state for a new session: reinitialises the input buffers and stream through func_80285A94, func_802BFD50, func_802C0640, func_802BC950, func_802BFE70 and func_802C0510, then for slots 3 down to 0 clears the slot's three state words, refreshes its pad through func_802647A8 and counts the profiles func_8044BC58 accepts in D_800D0E52, remembering the lowest accepted slot in D_8010F320; finally checks the profile just below slot 0 with mode 4, marks the session reset and returns the remembered slot. */
typedef struct {
    char pad[0x224];
} Profile;

extern char D_8010EC90[];
extern char D_8010ECC0[];
extern signed char D_8010FBB8;
extern char D_8010FC00[];
extern char D_8010FBD8[];
extern char D_8010FBC0[];
extern char D_8010F304[];
extern char D_800D0E51[];
extern char D_8010FBE0[];
extern s32 D_800D0E5C;
extern s16 D_8010F320;
extern u8 D_800D0E52;
extern s32 D_8010FBF0[];
extern s32 D_8010FC28[];
extern s32 D_8010F310[];
extern Profile D_8010F328[];
extern signed char D_800D0E50;

extern void func_80285A94(char *, char *, s32);
extern void func_802BFD50(char *, char *, s32);
extern void func_802C0640(s32, char *, s32);
extern void func_802BC950(char *, char *, char *);
extern void func_802BFE70(s32);
extern void func_802C0510(char *, s32, s32);
extern void func_802647A8(s32);
extern s32 func_8044BC58(Profile *, s32);

s16 func_8044BAC0(void) {
    s32 i;

    func_80285A94(D_8010EC90, D_8010ECC0, 8);
    D_8010FBB8 = 2;
    func_802BFD50(D_8010FC00, D_8010FBD8, 1);
    func_802BFD50(D_8010FBC0, D_8010F304, 1);
    func_802C0640(5, D_8010FC00, 1);
    func_802BC950(D_8010FC00, D_800D0E51, D_8010FBE0);
    func_802BFE70(0);
    D_800D0E5C = -1;
    func_802C0510(D_8010FBC0, 0, 1);
    D_8010F320 = -1;
    D_800D0E52 = 0;
    for (i = 3; i >= 0; i--) {
        D_8010FBF0[i] = 0;
        D_8010FC28[i] = 0;
        D_8010F310[i] = 0;
        func_802647A8(i);
        if (func_8044BC58(&D_8010F328[i], i) != 0) {
            D_8010F320 = i;
            D_800D0E52++;
        }
    }
    func_8044BC58(&D_8010F328[i], 4);
    D_800D0E50 = 1;
    return D_8010F320;
}
