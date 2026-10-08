/* Text passed by func_80427B08_de; US rev1 ROM 0xe25ec-0xe2607.
 * Original text and address references establish the string storage.
 */
struct rw_formats_80427B08_E25EC_us_rev1_layout {
    char text_0[12];
    char text_C[8];
    char text_14[7];
} __attribute__((packed));

const struct rw_formats_80427B08_E25EC_us_rev1_layout rw_formats_80427B08_E25EC_us_rev1 = {
    "[CHARACTER]",
    "%d:%02d",
    "[TIME]",
};
