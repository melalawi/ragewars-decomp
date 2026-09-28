/* Tests a centered grid cell and interprets its sentinel value. */
#include "basetypes.h"
typedef struct {s32 unk0,unk4,x,y,unk10,unk14;s16 cells[289];} Grid;
extern int func_80263174(Grid *,int);
#define ABS(x) ((x)<0.0f?-(x):(x))
static inline int offset(int v){return v+9;}
int func_80297390(Grid*g,int x,int y,int z){int v; unsigned int adjusted;if(!(ABS(x-g->x)<9 && ABS(y-g->y)<9))return 0;v=g->cells[(x-g->x)+8+((y-g->y)+8)*17];if(v==-2)return 1;if(v==-3)return 0;adjusted=z+9;g->unk4=v+adjusted;return func_80263174(g,1)!=0;}