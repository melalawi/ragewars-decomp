/* Clears eight player active flags, then marks the first settings slot whose controller profile is active. */
typedef signed char s8;
typedef unsigned char u8;
typedef signed int s32;

typedef struct {
    char pad0[0x78];
    s8 active;
    char pad79[6];
    s8 selected;
    char pad80[150 - 0x80];
} PlayerSettings;

typedef struct {
    char pad0[0x224];
} ControllerProfile;

typedef struct { char pad[150]; } StatusStep;
typedef struct { char pad[336]; s8 active; } StatusView;
#if defined(VERSION_US_REV1)
extern StatusStep D_801466E2[];
#define PLAYER_STATUS D_801466E2
#elif defined(VERSION_US)
extern StatusStep D_801466E2[];
#define PLAYER_STATUS D_801466E2
#elif defined(VERSION_EU)
extern StatusStep D_801466E2[];
#define PLAYER_STATUS D_801466E2
#elif defined(VERSION_EU_MUL)
extern StatusStep D_801466E2[];
#define PLAYER_STATUS D_801466E2
#elif defined(VERSION_DE)
extern StatusStep D_801466E2[];
#define PLAYER_STATUS D_801466E2
#endif
extern PlayerSettings D_80146398[];
extern ControllerProfile D_8010F328[];
extern s32 func_8026439C(ControllerProfile *);

void func_8043E054(void) {
    StatusStep *status;
    PlayerSettings *settings;
    s32 i;
    s32 active;

    i = 7;
    status = PLAYER_STATUS;
    for (; i >= 0; i--) {
        ((StatusView *)status)->active = 0;
        status--;
    }
    i = 0;
    active = 1;
    settings = D_80146398;
    for (; i < 4; i++) {
        if (func_8026439C(&D_8010F328[i]) != 0) {
            settings[i].active = active;
            settings[i].selected = i;
            break;
        }
    }
}
