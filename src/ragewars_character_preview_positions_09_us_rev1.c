/* Four per-player preview positions for character slot 9.
 * 8041F140 resolves17 slots; 80439EC4 walks4 panels with stride12
 * inside each0x70-byte slot and passes each position as the second Vec3
 * to 8041CAD8. Only the consumed position members are source-backed. */
struct PreviewPosition { float x; float y; float z; };
struct PreviewPosition ragewars_character_preview_positions_09_us_rev1[4] = {
    {39.0f, -20.0f, -100.0f},
    {-41.0f, -20.0f, -100.0f},
    {31.0f, -55.0f, -80.0f},
    {-33.0f, -55.0f, -80.0f},
};
