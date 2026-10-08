/* Four per-player preview positions for character slot 0.
 * 8041F140 resolves17 slots; 80439EC4 walks4 panels with stride12
 * inside each0x70-byte slot and passes each position as the second Vec3
 * to 8041CAD8. Only the consumed position members are source-backed. */
struct PreviewPosition { float x; float y; float z; };
/* First x belongs to the constants owner and remains separate. */
struct PreviewPositionTail { float first_y; float first_z; struct PreviewPosition remaining[3]; };
struct PreviewPositionTail D_800DFA30 = {-60.0f, -100.0f, {
    {-40.0f, -60.0f, -100.0f},
    {29.0f, -95.0f, -70.0f},
    {-29.0f, -95.0f, -70.0f},
}};
