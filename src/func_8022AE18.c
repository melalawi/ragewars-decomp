typedef struct {
    int a;
    int b;
    int c;
} Triple;

int func_802866F8(void *a);

extern char D_8011FE88[];

typedef struct func_8022AE18_S1 func_8022AE18_S1;
struct func_8022AE18_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x14 - 0x8 - sizeof(Triple)];
    int unk14;
    char pad14[0x2F0 - 0x14 - sizeof(int)];
    Triple unk2F0;
    char pad2F0[0x2FC - 0x2F0 - sizeof(Triple)];
    int unk2FC;
};

int func_8022AE18(void *arg0, void *arg1) {
    int flag;
    Triple *src;
    src = (Triple *)arg1;
    flag = func_802866F8(D_8011FE88);
    ((func_8022AE18_S1 *)(arg0))->unk8 = *src;
    ((func_8022AE18_S1 *)(arg0))->unk14 = flag;
    ((func_8022AE18_S1 *)(arg0))->unk2F0 = *src;
    ((func_8022AE18_S1 *)(arg0))->unk2FC = flag;
    return flag != 0;
}
