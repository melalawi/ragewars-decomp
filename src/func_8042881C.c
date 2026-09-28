/* Finds a menu item identifier in three selection tables, falling back to the first item of the second table. */
extern int D_800E5B4C[],D_800E5B44[],D_800E5BCC[],D_800E5BC4[],D_800E5B1C[],D_800E5B14[];
int func_8042881C(int id) {
 int i;
 for(i=0;i<8;i++) if(D_800E5B4C[i*4]==id) return D_800E5B44[i*4];
 for(i=0;i<4;i++) if(D_800E5BCC[i*4]==id) return D_800E5BC4[i*4];
 for(i=0;i<3;i++) if(D_800E5B1C[i*4]==id) return D_800E5B14[i*4];
 return D_800E5BC4[0];
}
