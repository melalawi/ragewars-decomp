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
struct PlayerMovementTuning D_800C9558_de = {
    10.2399998f, 30.7199993f, 13.4399996f, 10.2399998f, 35.8400002f, 13.4399996f, 0.0f, 0.0f
};
