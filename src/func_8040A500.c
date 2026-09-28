/* Points the output record's table at 0x14 at the variant for the display depth at 0x90 of
   D_800E28BC: 16 and 32 have their own, 8 and anything else use the default; returns 0. */
typedef struct {
    char pad[0x90];
    unsigned int depth;
} Display;

typedef struct {
    char pad[0x14];
    void *table;
} Out;

extern Display *D_800E28BC;
extern int D_800D77D4;
extern int D_800D77D8;
extern int D_800D77DC;

int func_8040A500(Out *out) {
    switch (D_800E28BC->depth) {
    case 8:
    default:
        out->table = &D_800D77D4;
        break;
    case 16:
        out->table = &D_800D77D8;
        break;
    case 32:
        out->table = &D_800D77DC;
        break;
    }
    return 0;
}
