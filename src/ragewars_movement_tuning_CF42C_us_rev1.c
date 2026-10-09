/* Eight movement floats read by func_802233F0_de.
 * The following two-byte reserved gap remains raw and unclaimed. */
struct PlayerMovementTuning {
    float forward_acceleration;
    float forward_limit;
    float forward_decay;
    float strafe_acceleration;
    float strafe_limit;
    float strafe_decay;
    float impulse_speed;
    float impulse_decay;
};
struct PlayerMovementTuning D_800CE82C = {
    7.67999983f, 23.039999f, 5.75999975f, 7.67999983f, 26.8800011f, 5.75999975f, 10.2399998f, 0.768000007f
};
