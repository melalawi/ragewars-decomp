#include "shared/layered_text.h"
#include "shared/menu_language.h"
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
/* Measures three text layers, positions their labels, and renders the composite text. */



extern void func_8043F69C(LayeredText *, TextLayerMetrics *);
extern void func_8044044C(LayeredText *, TextLayerRect *, TextLayerRect *, int);
extern void func_8043FFAC(LayeredText *, TextLayerRect *, TextLayerRect *, int, int, int);
#if defined(VERSION_EU_X)
extern void func_804403CC(LayeredText *, TextLayerMetrics *);
#endif
void func_80440618(LayeredText *source, TextLayerRect *position, TextLayerRect *bounds, int flags) {
    LayeredText current;
    TextLayerMetrics first, second, third;
    int center;
    LayeredText *draw;
    center = (bounds->x + bounds->right) / 2;
    current = *source;
    current.mode = 0;
#if defined(VERSION_EU_X)
    func_804403CC(&current, &first);
#else
    func_8043F69C(&current, &first);
#endif
    current = *source;
    current.mode = 1;
    current.text = 0;
#if defined(VERSION_EU_X)
    func_804403CC(&current, &second);
#else
    func_8043F69C(&current, &second);
#endif
    current = *source;
    current.mode = 1;
    current.text = 0;
#if defined(VERSION_EU_X)
    func_804403CC(&current, &third);
#else
    func_8043F69C(&current, &third);
#endif
    current = *source;
    current.text = 0;
    position->y += first.height;
    if (source->flags & 1) {
        position->x = center - (second.width + third.width) / 2;
    }
    position->x += third.width / 2;
    func_8044044C(&current, position, bounds, flags);
    current = *source;
    current.text = 0;
    position->x += (source->spacing * second.width) / 256 - third.width / 2;
    position->y += second.height / 2 - third.height / 2;
    func_8044044C(&current, position, bounds, flags);
    current = *source;
    if (source->flags & 1) {
        position->x = center - first.width / 2;
    }
    draw = &current;
    func_8043FFAC(draw, position, bounds, flags, RW_LOCALIZED_TEXT(*draw->text, draw->text, draw->text, D_80152789), 0);
}
