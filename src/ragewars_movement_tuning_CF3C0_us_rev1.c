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
struct PlayerMovementTuning D_800CE7C0 = {
    5.11999989f, 15.3599997f, 3.83999991f, 5.11999989f, 17.9200001f, 3.83999991f, 0.0f, 0.0f
};
