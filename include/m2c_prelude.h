/* Names an m2c draft emits but never declares.
 *
 * Every generated draft that touches a global died at compile with
 * `M2C_UNK' undeclared / `NULL' undeclared, so the headless sweep could not
 * land anything mechanically -- it was failing before the byte-diff, not at
 * it. These are the two names m2c assumes its own upstream prelude provides.
 *
 * This does NOT solve untyped globals in general: m2c also emits bare
 * references to data symbols it could not type at all (`D_8010513C.count`,
 * `D_80104564[i]`, `(s32) D_80105180` -- struct, array and scalar uses of the
 * same unknown class), and no single declaration satisfies all three. Typing
 * those is real decomp work, function by function, which is what the matching
 * lanes exist for. This header only removes the failures that are pure
 * boilerplate.
 */
#ifndef M2C_PRELUDE_H
#define M2C_PRELUDE_H

#ifndef NULL
#define NULL 0
#endif

typedef int M2C_UNK;
typedef signed char M2C_UNK8;
typedef short M2C_UNK16;
typedef int M2C_UNK32;
typedef long long M2C_UNK64;

#endif
