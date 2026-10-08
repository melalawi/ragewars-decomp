/* View-turn tuning passed to func_802231D4_de: it reads six floats
 * at offsets 0,4,8,12,16,20 to scale yaw and directional pitch updates. */
struct PlayerViewTuning {
    float yaw_turn_scale;
    float yaw_response;
    float pitch_scale;
    float pitch_response;
    float pitch_down_scale;
    float pitch_up_scale;
};
struct PlayerViewTuning D_800C95A0 = {
    0.25f, 0.899999976f, 0.600000024f, 0.300000012f, -1.57079649f, 1.57079649f
};
