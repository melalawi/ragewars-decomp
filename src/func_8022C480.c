/** Build the player's view matrix for the current viewport from its mount or its own position and the global yaw. */
typedef float Mtx[4][4];

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Frame {
    float data[16];
} Frame;

typedef struct Mount {
    char pad0[0x128];
    Vec3 pos;
} Mount;

typedef struct Player {
    char pad0[0x5DC];
    Mount *mount;
    char pad5E0[0x1640 - 0x5E0];
    Mtx views[1];
} Player;

typedef struct ViewConst {
    float yawScale;
    float eyeHeight;
} ViewConst;

extern ViewConst D_800C7E30;
extern int D_80145080;
extern int D_800D297C;
extern void func_80226DAC(Player *, Frame *);
extern void func_80273340(Frame *, Vec3 *);
extern void func_80272848(Mtx);
extern void func_80273744(Mtx, float);
extern void func_802734B8(Mtx, float, float, float);
extern void func_802702EC(Mtx, Mtx);

static inline void getEye(Player *player, Vec3 *pos) {
    Frame frame;

    if (player->mount != 0) {
        *pos = player->mount->pos;
    } else {
        func_80226DAC(player, &frame);
        func_80273340(&frame, pos);
    }
}

static inline float getYaw(void) {
    return D_80145080 * D_800C7E30.yawScale;
}

void func_8022C480(Player *player) {
    Mtx mtx;
    Vec3 pos;

    getEye(player, &pos);
    func_80272848(mtx);
    func_80273744(mtx, getYaw());
    func_802734B8(mtx, pos.x, pos.y + D_800C7E30.eyeHeight, pos.z);
    func_802702EC(mtx, player->views[D_800D297C]);
}
