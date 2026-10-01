/* Shared math value types, recovered from landed decompilations rather than
 * assumed. Promoted by the round-6 asset lane after a structural inventory of
 * all landed src/decomp sources: 209 struct typedefs across 139 files collapse
 * into 99 distinct shapes, and these were the ones re-derived by hand over and
 * over.
 *
 * Provenance and counts at promotion time:
 *   Vector3f  44 files, spelled Vector3 (23), Vec3 (18), CVector3, V3, Vec3f
 *   Vector3i  31 files, spelled Triple (21), Vec3i (4), WordTriple (3),
 *             CTriple, IntTriple, and one integer-typed Vec3
 *   Vector4f   4 files, spelled Vec4 (2), CQuaternion, Acc
 *
 * Two things this file deliberately does NOT do:
 *
 *  - It does not merge the float and integer triples. They share offsets
 *    0x0/0x4/0x8 and size 0xC but are different types; collapsing them would
 *    silently mistype 31 files' worth of recovered layout.
 *  - It does not reuse an SDK type. `n64sdk.h` has no three-component float or
 *    int vector: `Vtx_t` is a packed display-list vertex with s16 coordinates
 *    and `Tri` holds three u8 indices. Neither is interchangeable, which is why
 *    every lane kept inventing its own.
 *
 * The NAMES here are new on purpose. None of `Vector3f`/`Vector3i`/`Vector4f`
 * appears among the 104 local alias spellings already on disk, so adding this
 * header cannot collide with a landed file's own typedef -- SN64 GCC 2.8.1
 * rejects a duplicate typedef of the same name, and a collision here would
 * break the compile of every function that declares the old spelling.
 *
 * Already-landed files keep their private copies; nothing is rewritten. This
 * exists so the NEXT function does not have to re-derive a vector, and so a
 * field offset recovered once stays recovered.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vector3f;

/* Historical m2c spellings. The compile prelude injects this header only
 * when a candidate references one of its declared names, and filters any
 * one-line alias the candidate already declares itself. That candidate-local
 * filtering keeps these aliases from colliding with landed functions which
 * own private Vec3/Vector3/etc. typedefs. */
typedef Vector3f Vector3;
typedef Vector3f Vec3;
typedef Vector3f CVector3;
typedef Vector3f V3;
typedef Vector3f Vec3f;

typedef struct {
    int x;
    int y;
    int z;
} Vector3i;

typedef Vector3i Triple;
typedef Vector3i Vec3i;
typedef Vector3i WordTriple;
typedef Vector3i CTriple;
typedef Vector3i IntTriple;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vector4f;
