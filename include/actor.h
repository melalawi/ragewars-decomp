/* actor.h -- RageWars's dominant runtime object struct(s), recovered from the
 * ROM's OWN asm (not a cognate guess).
 *
 * THIS PASS'S MANDATE, IN ORDER (see rw-actor-names.md for the full writeup):
 *   1. DISAMBIGUATE FIRST. Before naming anything, check whether the 247-offset
 *      merged `Actor` blob (built by majority-voting width/kind per offset
 *      across a 56-function unmatched-corpus pool sharing >=2 of 7 anchor
 *      offsets) actually conflates more than one runtime object.
 *   2. THEORIZE per offset, once satisfied a given offset belongs to the
 *      object being named.
 *   3. LIST what unmatched code each object's shape would unlock.
 *
 * DISAMBIGUATION RESULT (this pass): re-clustered the same pool using only
 * trustworthy base registers (saved regs $16-$23, arg regs $4-$7) and treating
 * a lone `sw $0,...` zero-store as ambiguous (compatible with int OR float 0),
 * rather than a hard int vote. Result: 55-124 candidates (depending on
 * inclusion threshold) collapse into ONE consistent, non-contradictory cluster
 * for everything except:
 *   - offset 0x0: already-known Actor/MovementActor overload (1-byte `lbu`
 *     type-switch vs. MovementActor's 4-byte `lw` owner pointer) -- one
 *     apparent THIRD witness (func_802ACBCC, 4-byte `lw`) traced by hand to a
 *     register-reuse artifact (a LATER, unrelated pointer reassigned into the
 *     same numbered register later in the function), not a real conflict.
 *   - offsets 0x298-0x2A8 and 0x340-0x37C: a REAL, repeatable, non-noise
 *     conflict. Two independent unmatched functions (func_8021E068,
 *     func_80236864), verified by hand to use a single stable, never-
 *     reassigned base register, read a clean run of real `lwc1` float loads
 *     across exactly these offsets -- directly contradicting the LANDED,
 *     CONFIRMED integer `eventCount` field at 0x29C (func_80216288.c). This
 *     is flagged loudly at 0x29C below and NOT resolved: landed evidence
 *     wins the naming fight (eventCount keeps its name/type), but the
 *     unmatched-side float evidence is real and says at least one MORE
 *     object is conflated in this specific span. See rw-actor-names.md.
 *   - No other HARD width-class conflict (byte-width actually differing, not
 *     just int-vs-float-at-the-same-width) was found among the 247 previously
 *     named offsets in this pass's systematic check.
 * Verdict: the existing Actor / MovementActor split (already present in this
 * file before this pass) remains the right top-level separation; no third
 * top-level struct is added, because the one real internal conflict found
 * (0x298-0x2A8 / 0x340-0x37C) does not yet have enough evidence -- no landed
 * confirmation, no known start/end, only 2 corroborating unmatched functions
 * -- to safely carve into its own typedef. That is next pass's highest-value
 * target, not this one's to guess at.
 *
 * PROVENANCE TAGS, PER FIELD (same discipline as before, extended this pass):
 *   CONFIRMED   = re-derived this pass from a landed (byte-exact) function's
 *                 recompiled MIPS. Cites exact instruction + function.
 *   CONFIRMED(width) = a landed store/load proves N bytes wide, but the op
 *                 was a zero-store or raw copy that cannot distinguish
 *                 int/pointer vs. float -- kind stays a THEORY.
 *   THEORY      = reasoned from access-pattern evidence (width, signedness,
 *                 GPR vs. FPU mnemonic, mask/compare context) across the
 *                 unmatched corpus, this pass. Each field's comment states
 *                 the sighting counts and which functions, so it can be
 *                 checked and refuted. THEORY(low-confidence, thin evidence)
 *                 marks fields backed by only 1-2 corpus sightings.
 *   THEORY(weak) = only an ambiguous zero-store was found; width is right,
 *                 kind is a coin flip, kept as previously declared.
 *   UNKNOWN     = checked in both mining passes this round (a 124-candidate
 *                 trusted-base-register pool AND the original 56-function
 *                 all-bases pool) and NO access was found anywhere. Left as
 *                 `unk_`/pad on purpose -- see rw-actor-names.md for the
 *                 exhaustive per-offset accounting.
 *
 * Every field sits at an EXPLICIT byte offset via `char padN[gap]` filler --
 * never the compiler's own alignment math -- so a landed function that uses
 * a named field reproduces the exact same asm offset it always used. One
 * exception fixed this pass: offset 0x4 previously relied on 2 bytes of
 * IMPLICIT compiler alignment padding before posX (a `u16` immediately
 * followed by an `f32` with no explicit pad in between); that field is
 * retyped/widened this pass (see 0x4 below) and the gap is now covered
 * explicitly by the field itself, not by alignment math.
 *
 * Do NOT trust the old in-repo claim that func_80246690.c (cite-audit:ignore --
 * prose REFUTING a false citation, not a claim of evidence) "confirms" active/
 * posX-Z/flags/aimYaw/self/ownerId: that file is NOT landed (only an
 * unverified candidate at the repo root under a similar name).
 *
 * SAFETY: a field with the wrong width/sign/float-ness only ever makes a
 * function that uses it MISS the byte-exact `land` gate (it does not, and
 * cannot, corrupt a landed match). Treat every THEORY/UNKNOWN field here as
 * a working hypothesis, not a verified fact.
 */

typedef struct {
    /* 0x0000 */ u8 type;  /* CONFIRMED -- func_80216288.c (CActor, landed): `lbu $3,0($17)`, switched on 0/1/2/3. CAUTION:
                                             the unmatched-pool large-anchor scan (this pass) finds 11 `lw` (4-byte) and 1 `sh` (2-byte)
                                             sightings at this SAME offset from OTHER candidates that also share >=2 large Struct-A anchor
                                             offsets (func_8020AF9C $17=lbu one func, func_802ACBCC $16=lw another). Spot-checked
                                             func_802ACBCC directly: its offset-0 `lw` comes from a LATER reassignment of $16 to an unrelated
                                             pointer (`lw $16,0x0($23)`, arg1) inside the same function, not a second read of the actor -- a
                                             register-reuse artifact, not a real conflict. Kept CONFIRMED u8 on the strength of the landed
                                             switch-on-type usage; the offset-0 A/B overload already documented in struct-map.md section 1 is
                                             believed fully explained by the existing Actor/MovementActor split, not a third object. */
    /* 0x0001 */ char pad_000[0x2];
    /* 0x0003 */ s8 unk_0x0003;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sb) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0004 */ s32 unk_0x0004;  /* THEORY -- Prior header claimed `u16 ownerType`, resting on the non-landed
                                             func_80246690_candidate.c (already discredited in struct-map.md). This pass's large-anchor
                                             unmatched-pool scan finds 17 sightings, ALL 4-byte (15 lw + 1 sw + 1 swc1), ZERO lh/lhu
                                             anywhere, across 5 functions (func_80208000, func_8020EAE0, func_8021B468, func_80236864,
                                             func_80266830). Retyped s32 (4 bytes), widened to consume the 2 bytes (0x6-0x8) that were
                                             previously invisible compiler alignment padding between a 2-byte `ownerType` and `posX` -- this
                                             now makes that gap explicit instead of relying on the compiler's own alignment math. Name kept
                                             generic (unk_) since kind -- plain int vs. pointer -- is not distinguished by these mnemonics
                                             alone; no comparison-to-global-address instruction was found for this offset in the sample
                                             inspected. Falsifiable: a landed function doing `actor->something16 = someGlobalAddr` or a
                                             half-word access here would settle it either way. (widened 2B->4B, absorbing the 2 bytes that
                                             were previously implicit compiler alignment padding before posX; posX's own offset 0x8 is
                                             unchanged) */
    /* 0x0008 */ f32 posX;  /* CONFIRMED -- func_8024ED80.c (landed): copies to stack then `l.s $f1,84($sp)` + `add.s`, real
                                             FPU arithmetic on the copied Y value -- unambiguous. NOTE: the unmatched-pool large-anchor scan
                                             finds plain `lw` OUTNUMBERING `lwc1` here (45 vs 8 at 0x8, similar ratio at 0xC/0x10) --
                                             consistent with most callers doing a raw Vec3-sized struct COPY (compiler uses GPR lw/sw for a
                                             bytewise blit regardless of field type) while a minority do real arithmetic. Frequency of
                                             copy-style access does not weaken the float conclusion. */
    /* 0x000C */ f32 posY;  /* CONFIRMED -- Same evidence as posX (func_8024ED80.c direct arithmetic target). */
    /* 0x0010 */ f32 posZ;  /* CONFIRMED -- Same evidence as posX (func_8024ED80.c copies posZ alongside posX/Y). */
    /* 0x0014 */ s32 field_0x14;  /* THEORY -- 7/7 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8020EAE0',
                                             'func_80219A40', 'func_8021B1E4', 'func_80220EB0', 'func_80225B74'] */
    /* 0x0018 */ s32 field_0x18;  /* THEORY -- 20/20 sightings are int-class (lw) [trusted-pool]; funcs=['func_8020EAE0',
                                             'func_802169AC', 'func_8021AF6C', 'func_8021B468', 'func_80220D20'] */
    /* 0x001C */ s32 unk_0x001C;  /* CONFIRMED(width) -- func_8022D280.c/func_8022ED38.c (landed): `sw $0,28($16)` zero-store.
                                             func_80216288.c (landed, CActor): `lw $8,28($17)` copied as `CActor.position`. func_8024ED80.c
                                             (landed): `lw $3,28($17)` copied as a second Vec3 ("position1"). ALL THREE landed sightings, and
                                             the unmatched-pool scan (6 more sightings, funcs
                                             func_8021A9A4/func_80227014/func_8022A67C/func_8022A738/func_8022D2F8), use only lw/sw/sw0 --
                                             ZERO lwc1/swc1 anywhere in the corpus at 0x1C/0x20/0x24. Width confirmed 4 bytes x3; kind (int
                                             vs f32) is NOT resolved despite two landed functions semantically calling it a position -- do
                                             not retype to f32 without an actual FPU sighting. THEORY NAME "position1_x/y/z" DELIBERATELY
                                             NOT APPLIED: func_8022D280.c (landed, self-declares no local Actor typedef, so it relies on
                                             THIS shared header via the compiler's prelude injection) references this field BY NAME as
                                             `arg0->unk_0x001C`. Renaming it would stop that landed, byte-exact file from compiling. Kept
                                             unk_0x001C on purpose -- see rw-actor-names.md's rename-impact section. */
    /* 0x0020 */ s32 unk_0x0020;  /* CONFIRMED(width) -- Same evidence set as unk_0x001C. THEORY NAME "position1_y" DELIBERATELY NOT
                                             APPLIED for the same func_8022D280.c (landed, `arg0->unk_0x0020`) reason. */
    /* 0x0024 */ s32 unk_0x0024;  /* CONFIRMED(width) -- Same evidence set as unk_0x001C. THEORY NAME "position1_z" DELIBERATELY NOT
                                             APPLIED for the same func_8022D280.c (landed, `arg0->unk_0x0024`) reason. */
    /* 0x0028 */ s32 unk_0x0028;  /* THEORY -- 5/5 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80208000',
                                             'func_8020EAE0', 'func_8022A738'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x002C */ char pad_new001[0xC];
    /* 0x0038 */ s32 unk_0x0038;  /* THEORY -- 10/10 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80208000',
                                             'func_80208AAC', 'func_80208EB0', 'func_8020AF9C', 'func_8021321C'] */
    /* 0x003C */ char pad_002[0x4];
    /* 0x0040 */ f32 unk_0x0040;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0044 */ char pad_003[0x8];
    /* 0x004C */ s32 unk_0x004C;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lw) [original-pool];
                                             funcs=[] */
    /* 0x0050 */ f32 unk_0x0050;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80225B74'] */
    /* 0x0054 */ s32 unk_0x0054;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_80225B74',
                                             'func_80227014'] */
    /* 0x0058 */ f32 unk_0x0058;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80225B74'] */
    /* 0x005C */ s32 unk_0x005C;  /* THEORY -- 6/6 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_80226C3C', 'func_80226DAC', 'func_80227014', 'func_802285C4'] */
    /* 0x0060 */ s32 unk_0x0060;  /* THEORY -- 7/7 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_80226C3C', 'func_80226DAC', 'func_80227014', 'func_802285C4'] */
    /* 0x0064 */ s32 unk_0x0064;  /* THEORY -- 13/14 sightings are int-class (lw) [trusted-pool]; funcs=['func_80208000',
                                             'func_8020FA10', 'func_80220EB0', 'func_80226C3C', 'func_80226DAC'] */
    /* 0x0068 */ s32 unk_0x0068;  /* THEORY -- 5/6 sightings are int-class (lw) [trusted-pool]; funcs=['func_80208000',
                                             'func_80220EB0', 'func_80226C3C', 'func_80226DAC', 'func_802285C4'] */
    /* 0x006C */ f32 unk_0x006C;  /* THEORY -- 9/10 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 1/10 are int-class (lw),
                                             treated as GPR-copy noise on a float field; funcs=['func_8021B1E4', 'func_8021D3E4',
                                             'func_80220EB0', 'func_80225D10', 'func_80226C3C'] */
    /* 0x0070 */ f32 unk_0x0070;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_802149C0'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0074 */ s32 unk_0x0074;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80227014'] */
    /* 0x0078 */ char pad_005[0x8];
    /* 0x0080 */ s8 unk_0x0080;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_8021B468'] */
    /* 0x0081 */ char pad_006[0x12];
    /* 0x0093 */ s8 unk_0x0093;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lbu,sb) [original-pool];
                                             funcs=[] */
    /* 0x0094 */ u8 unk_0x0094;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lbu) [trusted-pool];
                                             funcs=['func_8022591C'] */
    /* 0x0095 */ char pad_new002[0x27];
    /* 0x00BC */ s32 unk_0x00BC;  /* THEORY -- 3/3 sightings are int-class (sw) [trusted-pool]; funcs=['func_80208000',
                                             'func_8020FA10'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x00C0 */ char pad_new003[0x24];
    /* 0x00E4 */ u16 ownerId;  /* CONFIRMED -- func_80216288.c (landed): `lhu $3,228($16)`, compared to 0x40C, local name
                                             `objectId`. Unmatched-pool scan corroborates heavily: 16 more `lhu` sightings (zero
                                             lh/lw/other), 12 distinct functions, zero width conflicts anywhere in the corpus. */
    /* 0x00E6 */ char pad_008[0x1A];
    /* 0x0100 */ s32 flags;  /* CONFIRMED -- func_8022D280.c/func_8022ED38.c (landed): `lw`+`and 0xFF7FFFFF`/`or
                                             0x01000000`+`sw`, a real read-modify-write bitmask. Unmatched-pool scan corroborates: 20
                                             sightings (13 lw/7 sw) across 10 functions, all 4-byte GPR, consistent with a flags word. */
    /* 0x0104 */ f32 aimYaw;  /* THEORY -- 22/22 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021A9A4',
                                             'func_802243E4', 'func_802246E8'] */
    /* 0x0108 */ char pad_009[0x6];
    /* 0x010E */ s8 unk_0x010E;  /* THEORY -- 11/11 sightings are int-class (lb,sb) [trusted-pool]; funcs=['func_8021A9A4',
                                             'func_802243E4', 'func_80224C28', 'func_80224F38', 'func_802285C4'] */
    /* 0x010F */ char pad_010[0x65];
    /* 0x0174 */ s32 unk_0x0174;  /* THEORY -- 11/11 sightings are int-class (sw) [trusted-pool]; funcs=['func_8021BFBC',
                                             'func_80220D20', 'func_80227014', 'func_80266830', 'func_802ADBF4'] */
    /* 0x0178 */ char pad_new004[0x5C];
    /* 0x01D4 */ f32 unk_0x01D4;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8022631C',
                                             'func_8022DAF4'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x01D8 */ s32 self;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021321C',
                                             'func_802169AC', 'func_80220EB0'] */
    /* 0x01DC */ char pad_012[0x14];
    /* 0x01F0 */ s32 eventValue;  /* CONFIRMED -- func_80216288.c (landed): `lw $19,496($16)`. Thin unmatched-pool corroboration (1
                                             lw sighting) -- makes sense, most callers read it through a local copy rather than the raw
                                             field. */
    /* 0x01F4 */ char pad_new005[0x28];
    /* 0x021C */ s32 unk_0x021C;  /* THEORY -- 3/3 sightings are int-class (lw) [trusted-pool]; funcs=['func_8020FA10'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0220 */ char pad_new006[0x40];
    /* 0x0260 */ s32 unk_0x0260;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_80208000',
                                             'func_8021D3E4'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0264 */ s32 unk_0x0264;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_8021D3E4'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0268 */ char pad_new007[0x34];
    /* 0x029C */ f32 unk_0x029C;  /* THEORY -- 18/18 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021E068',
                                             'func_80236864'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x02A0 */ f32 unk_0x02A0;  /* THEORY -- 18/18 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021E068',
                                             'func_80236864'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x02A4 */ f32 unk_0x02A4;  /* THEORY -- 15/17 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021E068',
                                             'func_80236864'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x02A8 */ f32 unk_0x02A8;  /* THEORY -- 13/15 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021E068',
                                             'func_80236864'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x02AC */ char pad_new008[0x38];
    /* 0x02E4 */ s32 unk_0x02E4;  /* THEORY -- 3/5 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80208000',
                                             'func_8028F524', 'func_8028F734'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x02E8 */ s32 unk_0x02E8;  /* THEORY -- 11/13 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80208000',
                                             'func_8028EAAC', 'func_8028ED80', 'func_8028F524', 'func_8028F734'] */
    /* 0x02EC */ char pad_013b[0x4];
    /* 0x02F0 */ s32 unk_0x02F0;  /* THEORY -- 9/12 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021B1E4',
                                             'func_80220EB0', 'func_802285C4', 'func_8022A94C', 'func_8028EAAC'] */
    /* 0x02F4 */ s32 unk_0x02F4;  /* THEORY -- 15/17 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8020EAE0',
                                             'func_8020FA10', 'func_8021B1E4', 'func_80220EB0', 'func_802285C4'] */
    /* 0x02F8 */ s32 unk_0x02F8;  /* THEORY -- 12/13 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8020EAE0',
                                             'func_8020FA10', 'func_8021B1E4', 'func_80220EB0', 'func_802285C4'] */
    /* 0x02FC */ s32 unk_0x02FC;  /* THEORY -- 7/8 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8020EAE0',
                                             'func_8021B1E4', 'func_80220EB0', 'func_802285C4', 'func_8022A94C'] */
    /* 0x0300 */ s32 unk_0x0300;  /* THEORY -- 2/4 sightings are int-class (lw) [trusted-pool]; funcs=['func_8028EAAC',
                                             'func_8028F524', 'func_8028F734'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0304 */ char pad_new009[0x24];
    /* 0x0328 */ f32 unk_0x0328;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80208000', 'func_80220EB0'] */
    /* 0x032C */ char pad_new010[0x14];
    /* 0x0340 */ f32 unk_0x0340;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021E068'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0344 */ s32 unk_0x0344;  /* THEORY -- 3/4 sightings are int-class (sw) [trusted-pool]; 1/4 are lwc1/swc1 (float), a real
                                             minority worth a second look; funcs=['func_8021E068', 'func_80220EB0', 'func_802285C4',
                                             'func_8022A94C'] */
    /* 0x0348 */ s32 unk_0x0348;  /* THEORY -- 3/4 sightings are int-class (sw) [trusted-pool]; 1/4 are lwc1/swc1 (float), a real
                                             minority worth a second look; funcs=['func_8021E068', 'func_80220EB0', 'func_802285C4',
                                             'func_8022A94C'] */
    /* 0x034C */ s32 unk_0x034C;  /* THEORY -- 3/4 sightings are int-class (sw) [trusted-pool]; 1/4 are lwc1/swc1 (float), a real
                                             minority worth a second look; funcs=['func_8021E068', 'func_80220EB0', 'func_802285C4',
                                             'func_8022A94C'] */
    /* 0x0350 */ f32 unk_0x0350;  /* THEORY -- 6/10 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 4/10 are int-class (lw,sw),
                                             treated as GPR-copy noise on a float field; funcs=['func_80220EB0', 'func_802285C4',
                                             'func_8022A94C', 'func_80236864', 'func_80249E18'] */
    /* 0x0354 */ f32 unk_0x0354;  /* THEORY -- 11/12 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 1/12 are int-class (lw),
                                             treated as GPR-copy noise on a float field; funcs=['func_8021B1E4', 'func_80220EB0',
                                             'func_80225D10', 'func_802285C4', 'func_8022A94C'] */
    /* 0x0358 */ f32 unk_0x0358;  /* THEORY -- 6/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 1/7 are int-class (lw), treated
                                             as GPR-copy noise on a float field; funcs=['func_80236864', 'func_80249E18', 'func_80282304',
                                             'func_80289054'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x035C */ f32 unk_0x035C;  /* THEORY -- 6/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 1/7 are int-class (lw), treated
                                             as GPR-copy noise on a float field; funcs=['func_80236864', 'func_80249E18', 'func_80282304',
                                             'func_80289054'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0360 */ f32 unk_0x0360;  /* THEORY -- 5/6 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 1/6 are int-class (lw), treated
                                             as GPR-copy noise on a float field; funcs=['func_80236864', 'func_80249E18', 'func_80282304',
                                             'func_80289054'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0364 */ f32 unk_0x0364;  /* THEORY -- 6/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 1/7 are int-class (lw), treated
                                             as GPR-copy noise on a float field; funcs=['func_80236864', 'func_80249E18', 'func_80282304',
                                             'func_80289054'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0368 */ s32 unk_0x0368;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_80236864'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x036C */ s32 unk_0x036C;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_80236864'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0370 */ s32 unk_0x0370;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_80236864'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0374 */ s32 unk_0x0374;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_80236864'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0378 */ s32 unk_0x0378;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_80236864'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x037C */ s32 unk_0x037C;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool]; 1/2
                                             are lwc1/swc1 (float), a real minority worth a second look; funcs=['func_80236864'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0380 */ char pad_new011[0x68];
    /* 0x03E8 */ s32 unk_0x03E8;  /* THEORY -- 4/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_802285C4'] */
    /* 0x03EC */ char pad_017[0x70];
    /* 0x045C */ s32 unk_0x045C;  /* THEORY -- 5/5 sightings are int-class (sw) [trusted-pool]; funcs=['func_8021BFBC',
                                             'func_80220D20', 'func_80266830'] */
    /* 0x0460 */ char pad_018[0x24];
    /* 0x0484 */ s32 unk_0x0484;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021AF6C', 'func_80220EB0'] */
    /* 0x0488 */ char pad_019[0x4];
    /* 0x048C */ s8 unk_0x048C;  /* THEORY -- 5/5 sightings are int-class (lb,lbu) [trusted-pool]; funcs=['func_80217F4C',
                                             'func_8021A9A4', 'func_8021E27C'] */
    /* 0x048D */ char pad_020[0x33];
    /* 0x04C0 */ s32 unk_0x04C0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x04C4 */ char pad_021[0x5F];
    /* 0x0523 */ s8 unk_0x0523;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lb) [trusted-pool];
                                             funcs=['func_8021E27C'] */
    /* 0x0524 */ char pad_022[0x54];
    /* 0x0578 */ s32 unk_0x0578;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021AF6C'] */
    /* 0x057C */ char pad_023[0x18];
    /* 0x0594 */ s32 unk_0x0594;  /* THEORY -- 7/7 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021A9A4',
                                             'func_8021D750', 'func_8021E27C', 'func_80232394'] */
    /* 0x0598 */ char pad_024[0x4];
    /* 0x059C */ s32 unk_0x059C;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021A9A4'] */
    /* 0x05A0 */ f32 unk_0x05A0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021E27C'] */
    /* 0x05A4 */ char pad_025a[0x24];
    /* 0x05C8 */ s32 unk_0x05C8;  /* UNKNOWN(no corpus evidence found this pass or prior) -- no landed or unmatched-corpus access
                                             found at this offset in either mining pass; kept as previously declared, treat as unverified. */
    /* 0x05CC */ char pad_025b[0x4];
    /* 0x05D0 */ s32 unk_0x05D0;  /* THEORY -- 4/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021B468',
                                             'func_80220A5C', 'func_80220EB0', 'func_80228DA0'] */
    /* 0x05D4 */ s32 unk_0x05D4;  /* THEORY -- 35/35 sightings are int-class (lw) [trusted-pool]; funcs=['func_80219A40',
                                             'func_8021A9A4', 'func_8021B468', 'func_80222BC4', 'func_8022591C'] */
    /* 0x05D8 */ s32 unk_0x05D8;  /* THEORY -- 112/112 sightings are int-class (lw) [trusted-pool]; funcs=['func_80203278',
                                             'func_8020402C', 'func_802095F8', 'func_8021035C', 'func_80216108'] */
    /* 0x05DC */ s32 unk_0x05DC;  /* THEORY -- 122/122 sightings are int-class (lw) [trusted-pool]; funcs=['func_8020402C',
                                             'func_802095F8', 'func_80218B84', 'func_8021A2D4', 'func_8021A9A4'] */
    /* 0x05E0 */ s32 unk_0x05E0;  /* THEORY -- 10/10 sightings are int-class (lw) [trusted-pool]; funcs=['func_80217F4C',
                                             'func_8021A2D4', 'func_8021A9A4', 'func_8021AF6C', 'func_8021B468'] */
    /* 0x05E4 */ s32 unk_0x05E4;  /* THEORY -- 69/71 sightings are int-class (lw,sw) [trusted-pool]; 2/71 are lwc1/swc1 (float), a
                                             real minority worth a second look; funcs=['func_80203278', 'func_8020402C', 'func_80219A40',
                                             'func_8021A2D4', 'func_8021BFBC'] */
    /* 0x05E8 */ s16 unk_0x05E8;  /* THEORY -- 3/3 sightings are int-class (lhu,sh) [trusted-pool]; funcs=['func_802ADD18'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x05EA */ s16 unk_0x05EA;  /* THEORY -- 10/10 sightings are int-class (lh,lhu,sh) [trusted-pool]; funcs=['func_802149C0',
                                             'func_8021EED8', 'func_80220EB0', 'func_8022591C', 'func_802285C4'] */
    /* 0x05EC */ s32 unk_0x05EC;  /* THEORY -- 11/11 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021BFBC',
                                             'func_80220EB0', 'func_80227014', 'func_8022EDEC'] */
    /* 0x05F0 */ s32 unk_0x05F0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x05F4 */ s16 unk_0x05F4;  /* THEORY -- 16/16 sightings are int-class (lh,lhu,sh) [trusted-pool]; funcs=['func_8021AF6C',
                                             'func_8021B468', 'func_8021EA30', 'func_80220EB0', 'func_8022BEF4'] */
    /* 0x05F6 */ s16 unk_0x05F6;  /* THEORY -- 23/23 sightings are int-class (lh,lhu,sh) [trusted-pool]; funcs=['func_8021AF6C',
                                             'func_8021B468', 'func_8021EA30', 'func_80220EB0', 'func_8022BEF4'] */
    /* 0x05F8 */ s16 unk_0x05F8;  /* THEORY -- 15/15 sightings are int-class (lh,lhu,sh) [trusted-pool]; funcs=['func_8021AF6C',
                                             'func_8021B468', 'func_8021EA30', 'func_8021EED8', 'func_80220EB0'] */
    /* 0x05FA */ s16 unk_0x05FA;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sh) [trusted-pool];
                                             funcs=['func_8021AF6C'] */
    /* 0x05FC */ char pad_027[0x32];
    /* 0x062E */ s16 unk_0x062E;  /* THEORY -- 83/83 sightings are int-class (lh,lhu,sh) [trusted-pool]; funcs=['func_80217D74',
                                             'func_80217F4C', 'func_8021A2D4', 'func_8021A9A4', 'func_8021AF6C'] */
    /* 0x0630 */ s16 unk_0x0630;  /* THEORY -- 4/4 sightings are int-class (sh) [trusted-pool]; funcs=['func_8021AF6C'] */
    /* 0x0632 */ s16 unk_0x0632;  /* THEORY -- 3/3 sightings are int-class (sh) [trusted-pool]; funcs=['func_8021AF6C'] */
    /* 0x0634 */ char pad_028[0x1C];
    /* 0x0650 */ s16 unk_0x0650;  /* THEORY -- 43/43 sightings are int-class (lh,lhu,sh) [trusted-pool]; funcs=['func_8020AF9C',
                                             'func_8021321C', 'func_802149C0', 'func_80219A40', 'func_8021A9A4'] */
    /* 0x0652 */ s16 unk_0x0652;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lh,sh) [trusted-pool];
                                             funcs=['func_802227D0', 'func_8022DAF4'] */
    /* 0x0654 */ s16 unk_0x0654;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sh) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0656 */ char pad_029[0x2];
    /* 0x0658 */ f32 unk_0x0658;  /* THEORY -- 15/16 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_802227D0', 'func_80223E10', 'func_80224C28', 'func_80224F38'] */
    /* 0x065C */ s32 unk_0x065C;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0660 */ s32 unk_0x0660;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_802227D0'] */
    /* 0x0664 */ s32 unk_0x0664;  /* THEORY -- 5/5 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_802227D0', 'func_80222FBC', 'func_80225B74'] */
    /* 0x0668 */ char pad_030[0x4];
    /* 0x066C */ f32 unk_0x066C;  /* THEORY -- 7/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 1/8 are int-class (lw), treated
                                             as GPR-copy noise on a float field; funcs=['func_80220EB0', 'func_802233CC', 'func_802238BC',
                                             'func_802251B8'] */
    /* 0x0670 */ f32 unk_0x0670;  /* THEORY -- 8/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80218B84',
                                             'func_802191B8', 'func_8021BFBC', 'func_8021C440', 'func_80220EB0'] */
    /* 0x0674 */ char pad_031[0x4];
    /* 0x0678 */ f32 unk_0x0678;  /* THEORY -- 5/6 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021E5D4',
                                             'func_80220EB0'] */
    /* 0x067C */ s32 unk_0x067C;  /* THEORY -- 4/5 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021E5D4'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0680 */ s32 unk_0x0680;  /* THEORY -- 4/5 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021E5D4'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0684 */ s32 unk_0x0684;  /* THEORY -- 5/6 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021E5D4'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0688 */ char pad_new012[0x10];
    /* 0x0698 */ s32 unk_0x0698;  /* THEORY -- 15/15 sightings are int-class (lw) [trusted-pool]; funcs=['func_80217D74',
                                             'func_80217F4C', 'func_80218B84', 'func_802191B8', 'func_8021B1E4'] */
    /* 0x069C */ f32 unk_0x069C;  /* THEORY -- 5/5 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_802231B0',
                                             'func_802238BC', 'func_802251B8', 'func_80225F20'] */
    /* 0x06A0 */ f32 unk_0x06A0;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_802231B0', 'func_802251B8'] */
    /* 0x06A4 */ f32 unk_0x06A4;  /* THEORY -- 6/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80208AAC',
                                             'func_80208EB0', 'func_802233CC', 'func_802238BC', 'func_802243E4'] */
    /* 0x06A8 */ f32 unk_0x06A8;  /* THEORY -- 18/20 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80208AAC',
                                             'func_80208EB0', 'func_802233CC', 'func_802238BC', 'func_802243E4'] */
    /* 0x06AC */ s32 unk_0x06AC;  /* THEORY -- 17/17 sightings are int-class (lw) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80220EB0', 'func_802238BC', 'func_8022C8EC', 'func_80230048'] */
    /* 0x06B0 */ s32 unk_0x06B0;  /* THEORY -- 22/23 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021321C',
                                             'func_8021E5D4', 'func_80220EB0', 'func_802233CC', 'func_802238BC'] */
    /* 0x06B4 */ s32 unk_0x06B4;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_80220EB0'] */
    /* 0x06B8 */ s32 unk_0x06B8;  /* THEORY -- 3/4 sightings are int-class (lw) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_802233CC', 'func_802238BC', 'func_80225F20'] */
    /* 0x06BC */ s32 unk_0x06BC;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_80220EB0'] */
    /* 0x06C0 */ f32 unk_0x06C0;  /* THEORY -- 50/50 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_80222FBC', 'func_802233CC', 'func_802238BC', 'func_802246E8'] */
    /* 0x06C4 */ f32 unk_0x06C4;  /* THEORY -- 40/40 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_802233CC', 'func_802238BC', 'func_802246E8', 'func_802251B8'] */
    /* 0x06C8 */ f32 unk_0x06C8;  /* THEORY -- 7/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_802246E8', 'func_80224C28', 'func_80224F38', 'func_8022D030'] */
    /* 0x06CC */ f32 unk_0x06CC;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x06D0 */ s32 unk_0x06D0;  /* THEORY -- 7/7 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8020AF9C',
                                             'func_80220EB0', 'func_802246E8'] */
    /* 0x06D4 */ f32 unk_0x06D4;  /* THEORY -- 7/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_802233CC',
                                             'func_802238BC'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x06D8 */ f32 unk_0x06D8;  /* THEORY -- 7/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_802233CC',
                                             'func_802238BC'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x06DC */ f32 unk_0x06DC;  /* THEORY -- 8/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_802233CC',
                                             'func_802238BC'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x06E0 */ f32 unk_0x06E0;  /* THEORY -- 5/5 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_802251B8'] */
    /* 0x06E4 */ f32 unk_0x06E4;  /* THEORY -- 6/9 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_802243E4', 'func_802246E8', 'func_80224C28', 'func_802251B8'] */
    /* 0x06E8 */ f32 unk_0x06E8;  /* THEORY -- 6/10 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 4/10 are int-class (lw,sw),
                                             treated as GPR-copy noise on a float field; funcs=['func_80220EB0', 'func_802238BC',
                                             'func_802251B8', 'func_80225D10'] */
    /* 0x06EC */ f32 unk_0x06EC;  /* THEORY -- 8/12 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 4/12 are int-class (lw,sw),
                                             treated as GPR-copy noise on a float field; funcs=['func_80220EB0', 'func_802238BC',
                                             'func_80224C28', 'func_802251B8', 'func_80225D10'] */
    /* 0x06F0 */ f32 unk_0x06F0;  /* THEORY -- 6/10 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 4/10 are int-class (lw,sw),
                                             treated as GPR-copy noise on a float field; funcs=['func_80220EB0', 'func_802238BC',
                                             'func_802251B8', 'func_80225D10'] */
    /* 0x06F4 */ f32 unk_0x06F4;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0'] */
    /* 0x06F8 */ s32 unk_0x06F8;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x06FC */ s32 unk_0x06FC;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0700 */ s32 unk_0x0700;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0704 */ f32 unk_0x0704;  /* THEORY -- 4/4 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_80225F20'] */
    /* 0x0708 */ f32 unk_0x0708;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80226C3C', 'func_80226DAC'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x070C */ char pad_new013[0xC];
    /* 0x0718 */ f32 unk_0x0718;  /* THEORY -- 11/11 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021B468',
                                             'func_80220A5C', 'func_80220EB0', 'func_802243E4', 'func_802246E8'] */
    /* 0x071C */ s32 unk_0x071C;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0720 */ f32 unk_0x0720;  /* THEORY -- 5/5 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80220EB0'] */
    /* 0x0724 */ f32 unk_0x0724;  /* THEORY -- 4/5 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80224C28', 'func_802251B8', 'func_80226C3C', 'func_80226DAC'] */
    /* 0x0728 */ f32 unk_0x0728;  /* THEORY -- 11/14 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80220EB0', 'func_802251B8', 'func_80226C3C', 'func_80226DAC'] */
    /* 0x072C */ f32 unk_0x072C;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80226C3C', 'func_80226DAC'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0730 */ f32 unk_0x0730;  /* THEORY -- 7/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80223E10', 'func_80224C28', 'func_80224F38', 'func_80226C3C'] */
    /* 0x0734 */ f32 unk_0x0734;  /* THEORY -- 7/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80223E10', 'func_80224C28', 'func_80224F38', 'func_80226C3C'] */
    /* 0x0738 */ f32 unk_0x0738;  /* THEORY -- 7/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80223E10', 'func_80224C28', 'func_80224F38', 'func_80226C3C'] */
    /* 0x073C */ f32 unk_0x073C;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80220A5C', 'func_80226DAC'] (NEW -- carved out of a previously-blind pad span this
                                             pass) */
    /* 0x0740 */ f32 unk_0x0740;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80220A5C', 'func_80226DAC'] (NEW -- carved out of a previously-blind pad span this
                                             pass) */
    /* 0x0744 */ f32 unk_0x0744;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80220A5C', 'func_80226DAC'] (NEW -- carved out of a previously-blind pad span this
                                             pass) */
    /* 0x0748 */ char pad_new014[0x10];
    /* 0x0758 */ f32 unk_0x0758;  /* THEORY -- 9/9 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_80223E10'] */
    /* 0x075C */ f32 unk_0x075C;  /* THEORY -- 8/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_80223E10'] */
    /* 0x0760 */ char pad_037[0x10];
    /* 0x0770 */ s16 unk_0x0770;  /* THEORY -- 28/28 sightings are int-class (lh,sh) [trusted-pool]; funcs=['func_80217D74',
                                             'func_80217F4C', 'func_8021AF6C', 'func_80220EB0', 'func_8022FC10'] */
    /* 0x0772 */ char pad_038[0x2];
    /* 0x0774 */ s32 unk_0x0774;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0778 */ s32 unk_0x0778;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x077C */ s32 unk_0x077C;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0780 */ f32 unk_0x0780;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80220EB0', 'func_80226DAC'] */
    /* 0x0784 */ f32 unk_0x0784;  /* THEORY -- 12/12 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_802228E4'] */
    /* 0x0788 */ s32 unk_0x0788;  /* THEORY -- 11/12 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_802169AC',
                                             'func_8021A9A4', 'func_8021D750', 'func_8021E27C', 'func_80230048'] */
    /* 0x078C */ f32 unk_0x078C;  /* THEORY -- 5/12 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021D750',
                                             'func_80232394', 'func_80232CDC'] */
    /* 0x0790 */ char pad_039[0x4];
    /* 0x0794 */ s32 unk_0x0794;  /* THEORY -- 8/9 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_802169AC',
                                             'func_8021A9A4', 'func_8021D750'] */
    /* 0x0798 */ s32 unk_0x0798;  /* THEORY -- 6/6 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D750',
                                             'func_8021E27C'] */
    /* 0x079C */ s32 unk_0x079C;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x07A0 */ s32 unk_0x07A0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x07A4 */ s32 unk_0x07A4;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x07A8 */ s32 unk_0x07A8;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_8021D750'] */
    /* 0x07AC */ s32 unk_0x07AC;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_8021D750'] */
    /* 0x07B0 */ s32 unk_0x07B0;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_8021D750'] */
    /* 0x07B4 */ s32 unk_0x07B4;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x07B8 */ s32 unk_0x07B8;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D750',
                                             'func_8021E27C'] */
    /* 0x07BC */ f32 unk_0x07BC;  /* THEORY -- 3/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 2/8 are int-class (lw), treated
                                             as GPR-copy noise on a float field; funcs=['func_8021E27C'] */
    /* 0x07C0 */ s32 unk_0x07C0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x07C4 */ s32 unk_0x07C4;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x07C8 */ s32 unk_0x07C8;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x07CC */ s32 unk_0x07CC;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_8021D750'] */
    /* 0x07D0 */ s32 unk_0x07D0;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_8021D750'] */
    /* 0x07D4 */ s32 unk_0x07D4;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_8021D750'] */
    /* 0x07D8 */ s32 unk_0x07D8;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021A9A4',
                                             'func_8021D750'] */
    /* 0x07DC */ s32 unk_0x07DC;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021A9A4',
                                             'func_8021D750'] */
    /* 0x07E0 */ s32 unk_0x07E0;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021A9A4',
                                             'func_8021D750'] */
    /* 0x07E4 */ s32 unk_0x07E4;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021A9A4',
                                             'func_8021D750'] */
    /* 0x07E8 */ s32 unk_0x07E8;  /* THEORY -- 16/23 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D750',
                                             'func_80220EB0', 'func_802233CC', 'func_802243E4', 'func_802246E8'] */
    /* 0x07EC */ f32 unk_0x07EC;  /* THEORY -- 7/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220A5C',
                                             'func_80220EB0', 'func_802231B0', 'func_8022DF98', 'func_802631D0'] */
    /* 0x07F0 */ f32 unk_0x07F0;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80220EB0', 'func_8022DF98'] */
    /* 0x07F4 */ f32 unk_0x07F4;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80225D10'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x07F8 */ char pad_new015[0x4];
    /* 0x07FC */ s32 unk_0x07FC;  /* THEORY -- 4/4 sightings are int-class (lw) [trusted-pool]; funcs=['func_80225D10'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0800 */ char pad_new016[0xC];
    /* 0x080C */ s32 unk_0x080C;  /* THEORY -- 4/4 sightings are int-class (lw) [trusted-pool]; funcs=['func_8021BFBC',
                                             'func_80222FBC', 'func_80225F20', 'func_8022BEF4'] */
    /* 0x0810 */ char pad_new017[0x28];
    /* 0x0838 */ f32 unk_0x0838;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80225F20'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x083C */ f32 unk_0x083C;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80225F20'] (NEW --
                                             carved out of a previously-blind pad span this pass) */
    /* 0x0840 */ s32 unk_0x0840;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_80224F38'] */
    /* 0x0844 */ char pad_new018[0x8];
    /* 0x084C */ s32 unk_0x084C;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8022BEF4'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0850 */ char pad_new019[0x4];
    /* 0x0854 */ f32 unk_0x0854;  /* THEORY -- 4/4 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0'] */
    /* 0x0858 */ char pad_043[0x8];
    /* 0x0860 */ s32 unk_0x0860;  /* CONFIRMED(width) -- func_8022D280.c (landed): `sw $0,2144($16)`, plain GPR zero-store (width
                                             only). Unmatched sibling func_8022D2F8 (same offset, same struct-cluster) shows real
                                             `lwc1`+`swc1` (2 sightings) -- THEORY-level float lean, though this file's own m2c draft
                                             historically used an M2C_BITWISE reinterpret at this offset (pre-existing header comment), so
                                             the float reading may be a punned/reinterpreted access rather than the field's true declared
                                             type. Kept s32, flagged float-leaning. */
    /* 0x0864 */ char pad_044[0x8];
    /* 0x086C */ s32 unk_0x086C;  /* CONFIRMED -- func_8022D280.c/func_8022ED38.c (landed): assigned magic constants 1 or 0x5E24 via
                                             `sw`. Unmatched-pool scan strongly corroborates: 61 sightings (34 sw/27 lw) across 13 functions,
                                             no float votes anywhere. */
    /* 0x0870 */ s32 unk_0x0870;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0874 */ char pad_045a[0xB8];
    /* 0x092C */ s32 unk_0x092C;  /* UNKNOWN(no corpus evidence found this pass or prior) -- no landed or unmatched-corpus access
                                             found at this offset in either mining pass; kept as previously declared, treat as unverified. */
    /* 0x0930 */ char pad_045b[0x8];
    /* 0x0938 */ s32 unk_0x0938;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x093C */ char pad_046[0x37C];
    /* 0x0CB8 */ s32 unk_0x0CB8;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_80220EB0'] */
    /* 0x0CBC */ char pad_047[0x4];
    /* 0x0CC0 */ s32 unk_0x0CC0;  /* THEORY -- 6/6 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80217D74',
                                             'func_80217F4C', 'func_80222BC4', 'func_802AD65C'] */
    /* 0x0CC4 */ char pad_048[0x8];
    /* 0x0CCC */ s32 unk_0x0CCC;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_80217F4C'] */
    /* 0x0CD0 */ char pad_new020[0x194];
    /* 0x0E64 */ s32 unk_0x0E64;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021EA30'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0E68 */ char pad_new021[0x38];
    /* 0x0EA0 */ s32 unk_0x0EA0;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021EA30'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0EA4 */ char pad_new022[0x38];
    /* 0x0EDC */ s32 unk_0x0EDC;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021EA30'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x0EE0 */ char pad_new023[0x10];
    /* 0x0EF0 */ f32 unk_0x0EF0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x0EF4 */ f32 unk_0x0EF4;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x0EF8 */ char pad_050[0x24];
    /* 0x0F1C */ s32 unk_0x0F1C;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x0F20 */ char pad_051[0x4];
    /* 0x0F24 */ s32 unk_0x0F24;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x0F28 */ char pad_052[0x4];
    /* 0x0F2C */ f32 unk_0x0F2C;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x0F30 */ f32 unk_0x0F30;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x0F34 */ char pad_053[0x20];
    /* 0x0F54 */ s32 unk_0x0F54;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8',
                                             'func_80226A10'] */
    /* 0x0F58 */ char pad_054[0xF0];
    /* 0x1048 */ s32 unk_0x1048;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x104C */ char pad_055[0x4];
    /* 0x1050 */ s32 unk_0x1050;  /* THEORY -- 5/5 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x1054 */ char pad_056[0x4];
    /* 0x1058 */ f32 unk_0x1058;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x105C */ f32 unk_0x105C;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x1060 */ char pad_057[0x1C];
    /* 0x107C */ f32 unk_0x107C;  /* THEORY -- 5/5 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x1080 */ s32 unk_0x1080;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x1084 */ s32 unk_0x1084;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x1088 */ char pad_058[0x4];
    /* 0x108C */ s32 unk_0x108C;  /* THEORY -- 6/6 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x1090 */ char pad_059[0x4];
    /* 0x1094 */ f32 unk_0x1094;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x1098 */ f32 unk_0x1098;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x109C */ char pad_060[0x20];
    /* 0x10BC */ s32 unk_0x10BC;  /* THEORY -- 4/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x10C0 */ s32 unk_0x10C0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x10C4 */ char pad_061[0x4];
    /* 0x10C8 */ s32 unk_0x10C8;  /* THEORY -- 6/6 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x10CC */ char pad_062[0x4];
    /* 0x10D0 */ f32 unk_0x10D0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x10D4 */ f32 unk_0x10D4;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x10D8 */ char pad_063[0x20];
    /* 0x10F8 */ s32 unk_0x10F8;  /* THEORY -- 4/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x10FC */ char pad_064[0x8];
    /* 0x1104 */ s32 unk_0x1104;  /* THEORY -- 2/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x1108 */ char pad_065[0x28];
    /* 0x1130 */ f32 unk_0x1130;  /* THEORY -- 12/12 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x1134 */ s32 unk_0x1134;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x1138 */ char pad_066[0x8];
    /* 0x1140 */ s32 unk_0x1140;  /* THEORY -- 2/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x1144 */ char pad_067[0x28];
    /* 0x116C */ f32 unk_0x116C;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x1170 */ s32 unk_0x1170;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x1174 */ char pad_068[0x8];
    /* 0x117C */ s32 unk_0x117C;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x1180 */ char pad_069[0x28];
    /* 0x11A8 */ f32 unk_0x11A8;  /* THEORY -- 4/5 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x11AC */ s32 unk_0x11AC;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw,sw) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x11B0 */ s32 unk_0x11B0;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_80217F4C'] */
    /* 0x11B4 */ s32 unk_0x11B4;  /* THEORY -- 9/17 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80217D74',
                                             'func_80217F4C', 'func_80218B84', 'func_802191B8', 'func_802231B0'] */
    /* 0x11B8 */ s32 unk_0x11B8;  /* THEORY -- 3/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80218B84',
                                             'func_802191B8', 'func_802233CC'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x11BC */ s32 unk_0x11BC;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_802285C4'] */
    /* 0x11C0 */ s32 unk_0x11C0;  /* THEORY -- 6/7 sightings are int-class (lw) [trusted-pool]; funcs=['func_802285C4',
                                             'func_8028C248', 'func_8028C34C', 'func_8028C400', 'func_8028C490'] */
    /* 0x11C4 */ f32 unk_0x11C4;  /* THEORY -- 8/13 sightings are lwc1/swc1 (real FPU) [trusted-pool]; 4/13 are int-class (lw),
                                             treated as GPR-copy noise on a float field; funcs=['func_802246E8', 'func_80224C28',
                                             'func_80224F38', 'func_8028C34C', 'func_8028C400'] */
    /* 0x11C8 */ s32 unk_0x11C8;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_8028C248', 'func_8028D7A0'] (NEW -- carved out of a previously-blind pad span this
                                             pass) */
    /* 0x11CC */ s32 unk_0x11CC;  /* THEORY -- 5/7 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8',
                                             'func_8028D7A0'] */
    /* 0x11D0 */ s32 unk_0x11D0;  /* THEORY -- 8/9 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8',
                                             'func_8028C248', 'func_8028C34C', 'func_8028C400', 'func_8028C490'] */
    /* 0x11D4 */ s32 unk_0x11D4;  /* THEORY -- 7/8 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8',
                                             'func_8028C34C', 'func_8028C400', 'func_8028C490', 'func_8028D7A0'] */
    /* 0x11D8 */ f32 unk_0x11D8;  /* CONFIRMED(width); THEORY(kind upgraded) -- func_8022D280.c (landed): `sw $0,4568($16)`
                                             zero-store, width-only. Unmatched-pool scan (this pass) is now overwhelming: 43 real float votes
                                             (39 lwc1 + 4 swc1) vs 0 real int votes across 34 different functions -- upgraded from the prior
                                             pass's 'kept s32 pending FPU sighting' to f32 THEORY. This is a core anchor offset for the whole
                                             Struct-A cluster. */
    /* 0x11DC */ f32 unk_0x11DC;  /* THEORY -- 6/6 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_802ACBCC'] */
    /* 0x11E0 */ f32 unk_0x11E0;  /* THEORY -- 5/5 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80219A40',
                                             'func_80220EB0'] */
    /* 0x11E4 */ f32 unk_0x11E4;  /* THEORY -- 6/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021B468',
                                             'func_8021C440', 'func_8021EED8', 'func_802ACBCC'] */
    /* 0x11E8 */ char pad_072[0x4];
    /* 0x11EC */ f32 unk_0x11EC;  /* THEORY -- 3/3 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80220EB0',
                                             'func_80282E6C'] */
    /* 0x11F0 */ s32 unk_0x11F0;  /* THEORY(weak) -- only a zero-store seen (x1); width-only, ambiguous kind, kept as-declared;
                                             funcs=['func_80217F4C'] */
    /* 0x11F4 */ f32 unk_0x11F4;  /* THEORY -- 8/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_80231654'] */
    /* 0x11F8 */ s32 unk_0x11F8;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80217F4C',
                                             'func_80231654'] */
    /* 0x11FC */ s32 unk_0x11FC;  /* CONFIRMED(width) -- func_8022D280.c (landed): `sw $0,4604($16)` zero-store,
                                             width-only. Unmatched-pool scan: 5 real float votes (3 lwc1 + 2 swc1), 0 real int votes, across
                                             4 functions (func_8021B468, func_80228934, func_80228DA0, func_8022B1A8) -- same pattern as
                                             0x11D8, and the same reasoning would upgrade this to f32 THEORY. TYPE CHANGE DELIBERATELY NOT
                                             APPLIED, unlike 0x11D8 (which was already f32 in the live header before this pass, so leaving
                                             it alone carries no new risk): func_8022D280.c (landed, relies on this shared header via
                                             prelude injection -- see rw-actor-names.md) both reads and writes this field
                                             (`arg0->unk_0x11FC = 0;`). A zero-constant store is very likely bit-identical whether the
                                             field is s32 or f32 (same reasoning that makes this a zero-store-only CONFIRMED-width field
                                             in the first place), but that could not be verified without editing the live header (forbidden
                                             this pass) or a real N64 recompile of the changed type, so the type is kept s32 out of caution
                                             for this landed match. The float THEORY is recorded here, not applied. */
    /* 0x1200 */ char pad_new024[0xC];
    /* 0x120C */ s32 unk_0x120C;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80228934',
                                             'func_80228DA0', 'func_8022B1A8'] (NEW -- carved out of a previously-blind pad span this pass) */
    /* 0x1210 */ s32 unk_0x1210;  /* THEORY -- 3/4 sightings are int-class (lw) [trusted-pool]; funcs=['func_8021D750',
                                             'func_80228934', 'func_802297F0'] */
    /* 0x1214 */ s32 unk_0x1214;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D3E4', 'func_802297F0'] */
    /* 0x1218 */ s32 unk_0x1218;  /* THEORY -- 2/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021B468',
                                             'func_80266830'] */
    /* 0x121C */ s32 unk_0x121C;  /* THEORY -- 3/3 sightings are int-class (lw) [trusted-pool]; funcs=['func_8021B468'] */
    /* 0x1220 */ s32 unk_0x1220;  /* THEORY -- 18/18 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021B468'] */
    /* 0x1224 */ char pad_074[0x8];
    /* 0x122C */ s32 unk_0x122C;  /* THEORY -- 61/61 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021035C',
                                             'func_80216108', 'func_80219A40', 'func_8021A2D4', 'func_8021B468'] */
    /* 0x1230 */ f32 unk_0x1230;  /* THEORY -- 44/49 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021B468',
                                             'func_8021EED8', 'func_80220EB0', 'func_80230D94', 'func_802ACBCC'] */
    /* 0x1234 */ f32 unk_0x1234;  /* THEORY -- 6/7 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021B468',
                                             'func_80220EB0'] */
    /* 0x1238 */ s32 unk_0x1238;  /* THEORY -- 10/11 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021B468',
                                             'func_8021EED8', 'func_80220EB0', 'func_802ACBCC'] */
    /* 0x123C */ s8 unk_0x123C;  /* THEORY -- 6/6 sightings are int-class (lbu,sb) [trusted-pool]; funcs=['func_8021A2D4',
                                             'func_802ACBCC'] */
    /* 0x123D */ s8 unk_0x123D;  /* THEORY -- 4/4 sightings are int-class (lbu,sb) [trusted-pool]; funcs=['func_8021A2D4',
                                             'func_802ACBCC'] */
    /* 0x123E */ s8 unk_0x123E;  /* THEORY -- 5/5 sightings are int-class (lbu,sb) [trusted-pool]; funcs=['func_8021A2D4',
                                             'func_802ACBCC'] */
    /* 0x123F */ char pad_075[0x1];
    /* 0x1240 */ f32 unk_0x1240;  /* THEORY -- 8/10 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_8021A2D4',
                                             'func_8021B468', 'func_80220EB0', 'func_802ACBCC'] */
    /* 0x1244 */ f32 unk_0x1244;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_80220EB0', 'func_802ACBCC'] */
    /* 0x1248 */ char pad_076[0x78];
    /* 0x12C0 */ f32 unk_0x12C0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are lwc1/swc1 (real FPU) [trusted-pool];
                                             funcs=['func_8021EED8'] */
    /* 0x12C4 */ char pad_077[0x28];
    /* 0x12EC */ s32 unk_0x12EC;  /* THEORY(low-confidence, thin evidence) -- 1/2 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80219A40', 'func_80220EB0'] */
    /* 0x12F0 */ s32 unk_0x12F0;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_80219A40'] */
    /* 0x12F4 */ char pad_078[0x40];
    /* 0x1334 */ s32 unk_0x1334;  /* THEORY -- 4/6 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8'] */
    /* 0x1338 */ s32 unk_0x1338;  /* THEORY -- 5/7 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80219A40',
                                             'func_8021EED8'] */
    /* 0x133C */ s32 unk_0x133C;  /* THEORY -- 3/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021EED8',
                                             'func_8022C100'] */
    /* 0x1340 */ char pad_079[0x74];
    /* 0x13B4 */ void *unk_0x13B4;  /* CONFIRMED -- func_8022D280.c (landed): `lw $3,5044($16)` compared via bne/beq against `la
                                             $2,D_800CED30`, a global's address -- pointer, unambiguous. Unmatched-pool scan corroborates
                                             heavily: 17 sightings (15 lw/2 sw), 8 functions, no float or narrow-width sightings. */
    /* 0x13B8 */ char pad_080[0xC];
    /* 0x13C4 */ s8 unk_0x13C4;  /* THEORY -- 6/6 sightings are int-class (lbu,sb) [trusted-pool]; funcs=['func_80219A40',
                                             'func_8021B468'] */
    /* 0x13C5 */ char pad_081[0x3];
    /* 0x13C8 */ s32 unk_0x13C8;  /* THEORY -- 5/7 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021A2D4',
                                             'func_8021B468', 'func_8021BFBC', 'func_8022C100'] */
    /* 0x13CC */ char pad_082[0x8];
    /* 0x13D4 */ s32 unk_0x13D4;  /* THEORY -- 2/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_80220EB0'] */
    /* 0x13D8 */ s32 unk_0x13D8;  /* THEORY -- 5/6 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021C440',
                                             'func_8022631C'] */
    /* 0x13DC */ char pad_083[0x4];
    /* 0x13E0 */ s32 unk_0x13E0;  /* THEORY -- 1/3 sightings are int-class (lw) [trusted-pool]; funcs=['func_8021B468',
                                             'func_802ACBCC'] */
    /* 0x13E4 */ char pad_084[0x6C];
    /* 0x1450 */ s32 unk_0x1450;  /* THEORY -- 40/40 sightings are int-class (lw) [trusted-pool]; funcs=['func_802095F8',
                                             'func_8020AF9C', 'func_8021035C', 'func_80219A40', 'func_8021A2D4'] */
    /* 0x1454 */ s32 unk_0x1454;  /* THEORY -- 19/19 sightings are int-class (lw) [trusted-pool]; funcs=['func_8020AF9C',
                                             'func_8021035C', 'func_80219A40', 'func_8021B1E4', 'func_80220EB0'] */
    /* 0x1458 */ s32 unk_0x1458;  /* THEORY -- 10/10 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D750',
                                             'func_8022B1A8'] */
    /* 0x145C */ s32 unk_0x145C;  /* THEORY -- 10/10 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D750',
                                             'func_8022B1A8'] */
    /* 0x1460 */ s32 unk_0x1460;  /* THEORY -- 10/10 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D750',
                                             'func_8022B1A8'] */
    /* 0x1464 */ s32 unk_0x1464;  /* THEORY -- 4/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D3E4',
                                             'func_8021D750'] */
    /* 0x1468 */ s32 unk_0x1468;  /* THEORY -- 4/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D3E4',
                                             'func_8021D750'] */
    /* 0x146C */ s32 unk_0x146C;  /* THEORY -- 4/4 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D3E4',
                                             'func_8021D750'] */
    /* 0x1470 */ s32 unk_0x1470;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x1474 */ s32 unk_0x1474;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x1478 */ s32 unk_0x1478;  /* THEORY(low-confidence, thin evidence) -- 1/1 sightings are int-class (sw) [trusted-pool];
                                             funcs=['func_8021D750'] */
    /* 0x147C */ s32 unk_0x147C;  /* THEORY -- 2/3 sightings are int-class (lw,sw) [trusted-pool]; funcs=['func_8021D750',
                                             'func_8022B1A8'] */
    /* 0x1480 */ char pad_085[0x240];
    /* 0x16C0 */ f32 unk_0x16C0;  /* THEORY -- 6/8 sightings are lwc1/swc1 (real FPU) [trusted-pool]; funcs=['func_802251B8'] */
    /* 0x16C4 */ char pad_086[0x10];
    /* 0x16D4 */ s32 unk_0x16D4;  /* THEORY(low-confidence, thin evidence) -- 2/2 sightings are int-class (lw) [trusted-pool];
                                             funcs=['func_8021BFBC', 'func_80220EB0'] */
    /* 0x16D8 */ s16 unk_0x16D8;  /* THEORY -- 4/4 sightings are int-class (lhu,sh) [trusted-pool]; funcs=['func_80220EB0'] */
    /* 0x16DA */ char pad_087[0x6];
    /* 0x16E0 */ s32 unk_0x16E0;  /* THEORY -- 15/15 sightings are int-class (lw) [trusted-pool]; funcs=['func_80203278',
                                             'func_8020402C', 'func_8021B468', 'func_80226A10', 'func_8022804C'] */
    /* struct continues past 0x16E4; only mined offsets declared */
} Actor;

/* MovementActor and its embedded MovementActorQuery moved OUT of this header
 * into `include/movementactor.h`. One struct per header is the phase-2
 * convention: struct lanes cannot run in parallel while every object lives in
 * one file. No landed `src/us-rev1/*.c` references `MovementActor`, so the move
 * carries no rename impact -- verified by corpus sweep, not assumed.
 */
