/* Eight movement floats read by func_802238E0_de.
 * The following two-byte reserved gap remains raw and unclaimed. */
struct PlayerMovementTuning {
    float thrust_acceleration;
    float thrust_limit;
    float thrust_decay;
    float impulse_speed;
    float impulse_decay;
    float vertical_acceleration;
    float vertical_limit;
    float vertical_impulse;
};
struct PlayerMovementTuning D_800C960C = {
    2.0480001f, 15.3599997f, 1.02400005f, 20.4799995f, 1.53600001f, 20.4799995f, 153.599991f, 102.399994f
};
