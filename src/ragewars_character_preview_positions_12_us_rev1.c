/* Four per-player preview positions for character slot 12.
 * 8041F140 resolves17 slots; 80439EC4 walks4 panels with stride12
 * inside each0x70-byte slot and passes each position as the second Vec3
 * to 8041CAD8. Only the consumed position members are source-backed. */
struct PreviewPosition { float x; float y; float z; };
struct PreviewPosition ragewars_character_preview_positions_12_us_rev1[4] = {
    {45.0f, -58.0f, -100.0f},
    {-34.0f, -60.0f, -100.0f},
    {53.0f, -97.0f, -80.0f},
    {-13.0f, -97.0f, -80.0f},
};
