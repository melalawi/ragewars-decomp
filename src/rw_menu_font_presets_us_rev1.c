#include "types.h"
/* Nine native font presets, selected by flags0x20..0x2000.
 * Metrics consumer reads kind/width/height at0/4/8. Draw consumer
 * reads scales12/16, render mode20 and two RGB triples21..26.
 * Native index arithmetic selects records at stride28. The final
 * byte is ordinary struct alignment, with no explicit padding field. */
typedef struct RwMenuFontPreset {
    s32 kind;
    f32 glyphWidth;
    f32 glyphHeight;
    f32 scaleX;
    f32 scaleY;
    u8 renderMode;
    u8 primaryRed, primaryGreen, primaryBlue;
    u8 auxiliaryRed, auxiliaryGreen, auxiliaryBlue;
} RwMenuFontPreset;
RwMenuFontPreset rw_menu_font_presets_us_rev1[9] = {
    {0, 24.0f, 24.0f, 1.0f, 1.0f, 2, 255, 255, 200, 86, 71, 47},
    {1, 11.0f, 10.0f, 0.899999976f, 1.0f, 2, 255, 255, 200, 86, 71, 47},
    {0, 14.4000006f, 16.7999992f, 0.600000024f, 0.600000024f, 2, 255, 255, 200, 86, 71, 47},
    {1, 9.0f, 7.5f, 0.75f, 0.75f, 2, 255, 255, 200, 86, 71, 47},
    {0, 14.4000006f, 16.7999992f, 0.600000024f, 0.600000024f, 0, 255, 255, 200, 86, 71, 47},
    {0, 6.0f, 8.39999962f, 0.25f, 0.25f, 2, 255, 255, 200, 86, 71, 47},
    {0, 19.2000008f, 24.0f, 0.800000012f, 1.0f, 2, 255, 255, 200, 86, 71, 47},
    {2, 8.0f, 8.0f, 1.0f, 1.0f, 1, 255, 255, 200, 255, 255, 200},
    {1, 9.0f, 10.0f, 0.75f, 1.0f, 2, 255, 255, 200, 86, 71, 47},
};
