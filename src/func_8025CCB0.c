/* Runs a music player's state machine on its channel: a start request loads the song's header and sequence from the song bank, records its tempo scale and volume, sets the sequence, clears the player queue, starts the sequence through func_802C51A0, then sets the channel's sample rate from the sequence rate over 22050, its tempo, priority, channel volume, master volume and plays it; a playing song that has ended is stopped and returns to idle or to the start state when it loops, and a stop request stops the sequencer. The state is unsigned with an empty case 0, and the rate and tempo factors are literals so the resident rodata keeps its order. */
#include "basetypes.h"

typedef struct SongHeader {
    u32 tempo;
    u16 volume;
} SongHeader;

typedef struct Bank {
    char pad0[0x2B50];
    void *songs;
} Bank;

typedef struct Player {
    Bank *bank;
    char pad4[4];
    u32 state;
    s32 loop;
    s32 song;
    s32 speed;
    char pad18[3];
    u8 priority;
    char pad1C[2];
    s16 id;
    f32 tempoScale;
    f32 volume;
} Player;

typedef struct Queue {
    void *sequence;
    s32 head;
    u8 kind;
    s32 tail;
} Queue;

typedef struct Sequencer {
    char pad0[4];
    s32 handle;
} Sequencer;

extern Queue D_8010C064[];
extern Sequencer *D_800D0D78;

extern void func_80258760(Bank *);
extern void func_802587C4(Bank *);
extern char *func_80258D60(Bank *);
extern void *func_8028FD94(void *, s32);
extern void func_802C52FC(void);
extern void func_802C530C(void);
extern s32 func_802C51A0(void *, s32, s32 *);
extern void func_802B7FD0(char *, s32);
extern s32 func_802B76F0(char *);
extern void func_802B7F50(char *, f32);
extern void func_802B7FE0(char *, s32);
extern void func_802B7F00(char *, s32);
extern void func_802B7FA0(char *, s32, s32);
extern void func_802B7EB0(char *, s32);
extern void func_802B7E50(char *);

void func_8025CCB0(Player *player) {
    s32 rate;
    char *channel;
    s32 index;
    SongHeader *header;
    void *sequence;

    func_80258760(player->bank);
    channel = func_80258D60(player->bank);
    switch (player->state) {
        case 0:
            break;
        case 3:
            func_802C52FC();
            break;
        case 2:
            func_802B7FD0(channel, player->id);
            if (func_802B76F0(channel) == 0) {
                func_802C530C();
                if (player->loop >= 0) {
                    player->state = 1;
                } else {
                    player->state = 0;
                }
            }
            break;
        case 1:
            ((s32 *)D_8010C064)[0] = 0;
            ((u8 *)D_8010C064)[4] = 2;
            ((s32 *)D_8010C064)[2] = 0;
            index = player->song * 2;
            header = func_8028FD94(player->bank->songs, index);
            player->tempoScale = header->tempo * 0.01f;
            player->volume = header->volume;
            sequence = func_8028FD94(player->bank->songs, index | 1);
            ((void **)D_8010C064)[-1] = sequence;
            D_800D0D78->handle = func_802C51A0(sequence, 0x5622, &rate);
            player->state = 3;
            func_802B7FD0(channel, player->id);
            func_802B7F50(channel, rate * 4.5351473e-05f);
            func_802B7FE0(channel, (s16)(player->speed * player->tempoScale));
            func_802B7F00(channel, player->priority);
            func_802B7FA0(channel, player->id, 0x7F);
            func_802B7EB0(channel, (u8)(u32)player->volume);
            func_802B7E50(channel);
            player->loop = -1;
            break;
    }
    func_802587C4(player->bank);
}
