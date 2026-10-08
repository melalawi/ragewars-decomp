/* Four per-player preview positions for character slot 10.
 * 8041F140 resolves17 slots; 80439EC4 walks4 panels with stride12
 * inside each0x70-byte slot and passes each position as the second Vec3
 * to 8041CAD8. Only the consumed position members are source-backed. */
struct PreviewPosition { float x; float y; float z; };
struct PreviewPosition ragewars_character_preview_positions_10_us_rev1[4] = {
    {40.0f, -60.0f, -100.0f},
    {-40.0f, -60.0f, -100.0f},
    {43.0f, -95.0f, -80.0f},
    {-21.0f, -95.0f, -80.0f},
};
