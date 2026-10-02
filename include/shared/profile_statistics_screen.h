#ifndef RAGEWARS_SHARED_PROFILE_STATISTICS_SCREEN_H
#define RAGEWARS_SHARED_PROFILE_STATISTICS_SCREEN_H
#include "basetypes.h"
struct ProfileStatisticsScreen {
    void *handle;
    char pad4[0x10C - 4];
    s32 index;
    char kills[0x32];
    char wins[0x32];
    char deaths[0x32];
    char score[0x32];
    char count[0x32];
};

typedef struct ProfileStatisticsScreen ProfileStatisticsScreen;
#endif
