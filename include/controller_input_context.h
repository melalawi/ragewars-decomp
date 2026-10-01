typedef struct ControllerInputContext {
    int active;                              /* 0x000 CONFIRMED */
    signed char port_id;                    /* 0x004 CONFIRMED */
    char unk_005[0x003];                    /* 0x005 UNKNOWN */
    int unk_008;                            /* 0x008 CONFIRMED */
    int unk_00C;                            /* 0x00C CONFIRMED */
    int unk_010;                            /* 0x010 CONFIRMED */
    unsigned int button_state_0;            /* 0x014 CONFIRMED */
    unsigned int button_state_1;            /* 0x018 CONFIRMED */
    unsigned int button_state_2;            /* 0x01C CONFIRMED */
    unsigned int button_state_3;            /* 0x020 CONFIRMED */
    unsigned int button_state_4;            /* 0x024 CONFIRMED */
    unsigned int button_state_5;            /* 0x028 CONFIRMED */
    unsigned char button_repeat_state[0x20][4]; /* 0x02C THEORY */
    unsigned int previous_buttons;          /* 0x0AC CONFIRMED */
    unsigned int current_buttons;           /* 0x0B0 CONFIRMED */
    unsigned int button_history_1;          /* 0x0B4 CONFIRMED */
    unsigned int button_history_2;          /* 0x0B8 CONFIRMED */
    unsigned int button_history_3;          /* 0x0BC CONFIRMED */
    unsigned int button_history_4;          /* 0x0C0 CONFIRMED */
    signed char stick_x;                    /* 0x0C4 CONFIRMED */
    signed char stick_y;                    /* 0x0C5 CONFIRMED */
    signed char previous_stick_x;           /* 0x0C6 CONFIRMED */
    signed char previous_stick_y;           /* 0x0C7 CONFIRMED */
    int unk_0C8;                            /* 0x0C8 CONFIRMED */
    int unk_0CC;                            /* 0x0CC CONFIRMED */
    float unk_0D0;                          /* 0x0D0 THEORY */
    float unk_0D4;                          /* 0x0D4 THEORY */
    unsigned char unk_0D8[0x068];           /* 0x0D8 THEORY */
    unsigned char unk_140[0x02C];           /* 0x140 THEORY */
    unsigned char unk_16C[0x02C];           /* 0x16C THEORY */
    char unk_198[0x088];                    /* 0x198 UNKNOWN */
    int unk_220;                            /* 0x220 CONFIRMED */
} ControllerInputContext;                   /* sizeof = 0x224 */
