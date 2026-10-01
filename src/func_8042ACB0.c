/* Resets the selection screen: maps the menu mode at 0x434 to a category (0 to 2, 1 to 3, 2 to 1,
   otherwise 0), builds the category list through func_8042B398, hides the forty controls of the
   table D_800E4F64 (and each entry's optional second control), refreshes the list, hides five fixed
   widgets and restores the selection, starting from the first entry when nothing was selected. */
typedef struct {
    void *screen;
    char pad4[0x3E8];
    void *widgetA;
    void *widgetB;
    char pad3F4[0x40];
    int mode;
    int selection;
    char pad43C[4];
    void *widgetC;
    void *widgetD;
    void *widgetE;
} Menu;

typedef struct {
    short unk0;
    unsigned short first;
    int second;
    char pad8[8];
} Control;

extern Menu *D_800E4F60;
extern Control D_800E4F64[];
extern void *func_8040ECB0(void *, int);
extern void func_8040E958(void *, int);
extern int func_8042B398(int, int);
extern void func_8042EB80(int, int);
extern void func_8042EB68(int);
extern void func_8042B530(void);
extern void func_8042B1A0(int);
extern void func_8042B1B0(int);
extern void func_8042AEB8(void);

static inline int map_category(int mode) {
    int category;

    switch (mode) {
        case 3:
            category = 0;
            break;
        case 2:
            category = 1;
            break;
        case 1:
            category = 3;
            break;
        case 0:
            category = 2;
            break;
        default:
            return 0;
    }
    return category;
}
void func_8042ACB0(void) {
    int category;
    int list;
    int i;

    category = map_category(D_800E4F60->mode);
    list = func_8042B398(category, D_800E4F60->selection);
    for (i = 0; i < 40; i++) {
        func_8040E958(func_8040ECB0(D_800E4F60->screen, D_800E4F64[i].first), 0);
        if (D_800E4F64[i].second != -1) {
            func_8040E958(func_8040ECB0(D_800E4F60->screen, (unsigned short)D_800E4F64[i].second), 0);
        }
    }
    func_8042EB80(category, list);
    func_8042EB68(0x15);
    func_8040E958(D_800E4F60->widgetC, 0);
    func_8040E958(D_800E4F60->widgetE, 0);
    func_8040E958(D_800E4F60->widgetD, 0);
    func_8040E958(D_800E4F60->widgetA, 0);
    func_8040E958(D_800E4F60->widgetB, 0);
    func_8042B530();
    if (D_800E4F60->selection == 0) {
        func_8042B1A0(category);
        func_8042B1B0(0);
        func_8042AEB8();
    } else {
        func_8042B1A0(-1);
        func_8042B1B0(D_800E4F60->selection);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DFBC6_2[] = {0x03, 0x2D};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E4F66_2[] = {0x03, 0x2D};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F1586_2[] = {0x03, 0x2D};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EC766_2[] = {0x03, 0x31};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E0F16_2[] = {0x03, 0x29};
#endif
