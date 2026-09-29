/* Maps an id from 1 to 33 to the address of its data block, returning 0 for any other id. */
#include "basetypes.h"

extern char D_41C5EC[];
extern char D_41DF24[];
extern char D_41F118[];
extern char D_420E00[];
extern char D_421A88[];
extern char D_421E00[];
extern char D_42247C[];
extern char D_42359C[];
extern char D_423930[];
extern char D_423B88[];
extern char D_424528[];
extern char D_429058[];
extern char D_4290E8[];
extern char D_42931C[];
extern char D_429B74[];
extern char D_42BCB0[];
extern char D_42DB38[];
extern char D_42DFF0[];
extern char D_435C54[];
extern char D_435F70[];
extern char D_43630C[];
extern char D_436634[];
extern char D_436FE4[];
extern char D_437454[];
extern char D_437868[];
extern char D_437B98[];
extern char D_43905C[];
extern char D_439390[];
extern char D_43962C[];
extern char D_439938[];
extern char D_43A014[];
extern char D_43C1D0[];

void *func_8043C500(s32 id) {
    switch (id) {
    case 1:
        return D_435F70;
    case 31:
        return D_43630C;
    case 32:
        return D_436634;
    case 7:
        return D_420E00;
    case 8:
        return D_43C1D0;
    case 10:
        return D_429058;
    case 15:
        return D_4290E8;
    case 3:
        return D_424528;
    case 4:
        return D_42359C;
    case 6:
        return D_439390;
    case 5:
        return D_436FE4;
    case 11:
        return D_423930;
    case 12:
        return D_437454;
    case 13:
        return D_43962C;
    case 16:
        return D_41DF24;
    case 17:
        return D_42DB38;
    case 18:
        return D_43905C;
    case 9:
        return D_437868;
    case 30:
        return D_437B98;
    case 20:
        return D_42BCB0;
    case 21:
        return D_429B74;
    case 23:
        return D_41F118;
    case 14:
        return D_42931C;
    case 19:
        return D_435C54;
    case 22:
        return D_423B88;
    case 24:
        return D_439938;
    case 25:
        return D_42247C;
    case 27:
        return D_421E00;
    case 26:
        return D_42DFF0;
    case 29:
        return D_41C5EC;
    case 28:
        return D_421A88;
    case 33:
        return D_43A014;
    default:
        return 0;
    }
}
