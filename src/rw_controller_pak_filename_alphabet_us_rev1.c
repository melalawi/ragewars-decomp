#include "types.h"
/* Controller Pak font-code decoding and filename encoding alphabet.
 * func_8040458C_de decodes unsignedcodes0..65; func_804042F0_de
 * and func_8040570C_de search the same66bytes for each uppercase char.
 * Code0 is null,1..14 are unsupported (~),15 is space, followed by
 * digits, uppercase letters and the supported punctuation. */
u8 rw_controller_pak_filename_alphabet_us_rev1[66] =
    "\000~~~~~~~~~~~~~~ 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#'*+,-./:=?@";
