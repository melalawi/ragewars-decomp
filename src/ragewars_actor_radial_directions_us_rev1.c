/* Eight horizontal sampling directions for actor collision probes.
 * 802106E0/80210964 load vectors with stride12; 80210C14 walks
 * all eight x/z pairs, scales them, and probes actor positions. */
struct ActorRadialDirection { float x; float y; float z; };
struct ActorRadialDirection D_800C88A0_de[8] = {
    {0.0f, 0.0f, 1.0f},
    {0.707106769f, 0.0f, 0.707106769f},
    {1.0f, 0.0f, 0.0f},
    {0.707106769f, 0.0f, -0.707106769f},
    {0.0f, 0.0f, -1.0f},
    {-0.707106769f, 0.0f, -0.707106769f},
    {-1.0f, 0.0f, 0.0f},
    {-0.707106769f, 0.0f, 0.707106769f},
};
