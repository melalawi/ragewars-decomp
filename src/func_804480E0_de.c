#include "span_16E000/code_80447140.h"
#include "span_16E000/types.h"
#include "types.h"
/* osPfsFindFile, drafted from ultralib src/io/pfssearchfile.c (2.0I branch): scan the controller pak
   directory for the entry with the given company and game codes and, when given, names, returning its
   index. */








extern s32 func_802B84C0_de(void *queue, int channel, u16 address, u8 *buffer);
extern s32 func_80448BFC_de(OSPfs_func_80445F80_de *pfs);

s32 func_804480E0_de(OSPfs_func_80445F80_de *pfs, u16 company_code, u32 game_code, u8 *game_name, u8 *ext_name, s32 *file_no)
{
    s32 j;
    int i;
    __OSDir dir;
    s32 ret = 0;
    int fail;

    if (func_80448BFC_de(pfs) == 2)
        return 2;

    for (j = 0; j < pfs->dir_size; j++) {
        ret = func_802B84C0_de(pfs->queue, pfs->channel, pfs->dir_table + j, (u8 *)&dir);
        if (ret != 0)
            return ret;

        if ((dir.company_code == company_code) && dir.game_code == game_code) {
            fail = 0;

            if (game_name != 0) {
                for (i = 0; i < 16; i++) {
                    if (dir.game_name[i] != game_name[i]) {
                        fail = 1;
                        break;
                    }
                }
            }

            if (ext_name != 0 && !fail) {
                for (i = 0; i < 4; i++) {
                    if (dir.ext_name[i] != ext_name[i]) {
                        fail = 1;
                        break;
                    }
                }
            }

            if (!fail) {
                *file_no = j;
                return ret;
            }
        }
    }

    *file_no = -1;
    return 5;
}
