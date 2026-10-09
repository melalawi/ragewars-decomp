#ifndef RAGEWARS_VERSION_CALLS_H
#define RAGEWARS_VERSION_CALLS_H

#if defined(VERSION_EU)
#define func_802B2350 func_802AD520_eu
#else
#define func_802B2350 func_802B2350
#endif

#if defined(VERSION_DE)
#define func_802BC850_eu_x func_802BC570_de
#elif defined(VERSION_EU)
#define func_802BC850_eu_x func_802BC810_eu
#elif defined(VERSION_US)
#define func_802BC850_eu_x func_802BC4A0
#endif

#endif
