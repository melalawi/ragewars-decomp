# The toolchain, as the cartridges testify to it

This document is written by hand. Every number in it is copied from
`data/toolchain-evidence.json` rather than computed here. That record is named by
`config.toml [toolchain].survey`, and `decomp check evidence` refuses it when a cartridge's recorded
image digest stops being the digest that cartridge states, so a survey of images this project no
longer pins cannot go on being quoted here as current. No goal renders or rewrites this file, so
every claim in it names the field it came from and is to be checked against that field by whoever
changes either.

## What a label is, and what it is not

The survey reports structural claims about the code -- `move-always-addu` says every
register copy in a region is encoded as `addu`, and nothing more. **No mapping from a
set of these labels to the name of a compiler exists**, in this repository or in the
tool that produced them. Where you would expect to read a compiler's name below, you
will read the label set that survived instead. Writing that mapping is open work.

Surveyed with `matchkit.provenance` at toolkit commit `f45f6333b7e1d4414783c08bc86b70c1aa051640`, discriminator set
`b4c5afc2d562d8f71b5e3dcb10d54972778721bb888843d24a34b069dae6b1a3`.

## What the build pins, and why that is not a finding

The build compiles with GCC 2.8.1 as SN Systems shipped it for the N64, and that
compiler names itself, checkably in one command against the copy `make setup` installs:

```sh
echo 'int f(void){return 1;}' > probe.i
artifacts/sn64/cc1 -quiet -version probe.i -o probe.s
# GNU C version 2.8.1 (mips-nintendo-nu64) compiled by GNU C version 9.4.0.
```

A banner is the compiler describing itself. It is evidence about the copy on this disk
and about nothing on any cartridge. The survey below neither confirms nor contradicts
it, because the step that would connect them -- a mapping from a label set to a named
compiler -- has not been written.

How that copy is built from public sources, and the rebuild that reaches its digest byte for
byte, are in `docs/compiler-rebuild.md`.

## What the authored corpus shows, and what it cannot

`us-rev1` carries authored C, 3,717 functions as the last build recorded in
`artifacts/us-rev1/matching-c.json`, each admitted only because the bytes it compiles
to equal the cartridge's. That is a real result and it shows the pinned compiler is
*sufficient*. It cannot show that it is necessary: every one of those functions was
iterated against that compiler until it matched, so the corpus was authored against the
very thing it would be used to test. `us`, `eu`, `eu-x` and `de` have no authored C
at all and verify entirely from extracted assembly, so the survey below is the only
compiler evidence they carry.

## Regions and their boundaries

Each cartridge's regions come from its own `versions/<id>/ragewars.yaml`: the text
subsegments of each code segment, merged where they are contiguous, at the vram the
split fitted. The one interval named from elsewhere is `non-uniform-return-slot`,
0x80200500-0x802017FF, which `docs/method.md` records as ending functions with an empty
return delay slot; it is cut out of its run so the survey reports it on its own.

The survey partitions only what it is given. It finds no boundary of its own, so a
region that is internally mixed is reported as mixed rather than split further. That
limit is the tool's, and any further region will be found by some other means.

Only words the survey proves to be code are counted. Within a run of consecutively
decodable words, the spans that end at `jr $ra` and the delay slot behind it are
admissible; anything outside such a body -- a jump table that happens to decode, a
tail after the last return -- is inadmissible and counted nowhere. Each region's
inadmissible word count is in its table below.

## us

`artifacts/roms/ragewars.us.z64`, sha256 `0433043aaba2649bdd1fe717c4020550ac663c0362527aa082490f5977a3e46b`.
Boundaries from `versions/us/ragewars.yaml`; description in `versions/us/toolchain-description.json`.

4 regions. 3 narrowed at least one axis. 1 narrowed nothing on any axis and is reported unidentified. 0 hold a contradiction. 0 words fall outside an admissible body and are counted nowhere. 14 discriminator abstentions.

| region | vram | words | instructions | inadmissible | abstentions | narrowed | contradictions |
| --- | --- | --- | --- | --- | --- | --- | --- |
| `main_code:before-non-uniform-return-slot` | 0x80200400-0x80200500 | 64 | 2 | 62 | 8 | **no** | - |
| `main_code:non-uniform-return-slot` | 0x80200500-0x80201800 | 1216 | 1210 | 6 | 6 | yes | - |
| `main_code:after-non-uniform-return-slot` | 0x80201800-0x802C18F0 | 196668 | 194914 | 1754 | 0 | yes | - |
| `code_80400000` | 0x80400000-0x8044E2C0 | 80048 | 79487 | 561 | 0 | yes | - |

Majority label set, by instructions:

- `small-data`: `no-small-data` (274401 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `move-encoding`: `move-always-addu`, `move-mixed` (275611 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`
- `b-encoding`: `b-always-beq`, `b-always-bgez`, `b-mixed` (196126 instructions); narrowing further: `code_80400000`
- `return-delay-slot`: `return-slot-always-filled`, `return-slot-mixed` (274401 instructions); **disagreeing**: `main_code:non-uniform-return-slot`; narrowing nothing here: `main_code:before-non-uniform-return-slot`
- `call-delay-slot`: `call-slot-mixed` (274401 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `division-check`: `division-always-checked`, `division-mixed` (274401 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `fp-register-file`: `fp-register-file-64-bit` (274401 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `fp-double-transfer`: *no vocabulary -- this axis offers no label to stand* (275613 instructions)
- `fp-calling-convention`: *no vocabulary -- this axis offers no label to stand* (275613 instructions)

Regions disagreeing with the majority, and the counts that put them
there. Read the counts: a disagreement standing on a handful of sites is a
stray, and only one standing on many is a second producer.

- `main_code:non-uniform-return-slot` on `return-delay-slot`: stands at `return-slot-always-empty`, `return-slot-mixed` where the majority stands at `return-slot-always-filled`, `return-slot-mixed` -- released-in-delay-slot 0, released-before-empty-slot 19, released-before-filled-slot 0, frameless 5

## us-rev1

`artifacts/roms/ragewars.us-rev1.z64`, sha256 `5dfbae59e4a3860b740ccbb28f33aad624315e30bfca6d60abd62d12a89e0089`.
Boundaries from `versions/us-rev1/ragewars.yaml`; description in `versions/us-rev1/toolchain-description.json`.

8 regions. 6 narrowed at least one axis. 2 narrowed nothing on any axis and are reported unidentified. 0 hold a contradiction. 0 words fall outside an admissible body and are counted nowhere. 39 discriminator abstentions.

| region | vram | words | instructions | inadmissible | abstentions | narrowed | contradictions |
| --- | --- | --- | --- | --- | --- | --- | --- |
| `main_code:before-non-uniform-return-slot` | 0x80200400-0x80200500 | 64 | 2 | 62 | 8 | **no** | - |
| `main_code:non-uniform-return-slot` | 0x80200500-0x80201800 | 1216 | 1210 | 6 | 6 | yes | - |
| `main_code:after-non-uniform-return-slot` | 0x80201800-0x802C6414 | 201477 | 200168 | 1309 | 0 | yes | - |
| `main_code#1` | 0x802C6420-0x802C6914 | 317 | 317 | 0 | 6 | yes | - |
| `main_code#2` | 0x802C6920-0x802C6968 | 18 | 18 | 0 | 8 | **no** | - |
| `main_code#3` | 0x802C6970-0x802C69F8 | 34 | 34 | 0 | 5 | yes | - |
| `main_code#4` | 0x802C6A00-0x802C6AB0 | 44 | 44 | 0 | 5 | yes | - |
| `code_80400000` | 0x80400000-0x8044EDA0 | 80744 | 80247 | 497 | 1 | yes | - |

Majority label set, by instructions:

- `small-data`: `no-small-data` (280415 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`, `main_code#1`, `main_code#2`, `main_code#3`, `main_code#4`
- `move-encoding`: `move-always-addu`, `move-mixed` (282020 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code#2`
- `b-encoding`: `b-always-bgez`, `b-mixed` (200168 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`, `main_code#1`, `main_code#2`, `main_code#3`, `main_code#4`, `code_80400000`
- `return-delay-slot`: `return-slot-always-filled`, `return-slot-mixed` (280732 instructions); **disagreeing**: `main_code:non-uniform-return-slot`; narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code#2`, `main_code#3`, `main_code#4`
- `call-delay-slot`: `call-slot-mixed` (280415 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`, `main_code#1`, `main_code#2`, `main_code#3`, `main_code#4`
- `division-check`: `division-always-checked`, `division-mixed` (280732 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`, `main_code#2`, `main_code#3`, `main_code#4`
- `fp-register-file`: `fp-register-file-64-bit` (280415 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`, `main_code#1`, `main_code#2`, `main_code#3`, `main_code#4`
- `fp-double-transfer`: *no vocabulary -- this axis offers no label to stand* (282040 instructions)
- `fp-calling-convention`: *no vocabulary -- this axis offers no label to stand* (282040 instructions)

Regions disagreeing with the majority, and the counts that put them
there. Read the counts: a disagreement standing on a handful of sites is a
stray, and only one standing on many is a second producer.

- `main_code:non-uniform-return-slot` on `return-delay-slot`: stands at `return-slot-always-empty`, `return-slot-mixed` where the majority stands at `return-slot-always-filled`, `return-slot-mixed` -- released-in-delay-slot 0, released-before-empty-slot 19, released-before-filled-slot 0, frameless 5

## eu

`artifacts/roms/ragewars.eu.z64`, sha256 `d763cbbe485a5f9e1b7be97d5ac16735087e23d0bb62c05dc844e01b7e1156d1`.
Boundaries from `versions/eu/ragewars.yaml`; description in `versions/eu/toolchain-description.json`.

4 regions. 3 narrowed at least one axis. 1 narrowed nothing on any axis and is reported unidentified. 0 hold a contradiction. 0 words fall outside an admissible body and are counted nowhere. 15 discriminator abstentions.

| region | vram | words | instructions | inadmissible | abstentions | narrowed | contradictions |
| --- | --- | --- | --- | --- | --- | --- | --- |
| `main_code:before-non-uniform-return-slot` | 0x80200400-0x80200500 | 64 | 2 | 62 | 8 | **no** | - |
| `main_code:non-uniform-return-slot` | 0x80200500-0x80201800 | 1216 | 1210 | 6 | 6 | yes | - |
| `main_code:after-non-uniform-return-slot` | 0x80201800-0x802C21F0 | 197244 | 195586 | 1658 | 0 | yes | - |
| `code_80400000` | 0x80400000-0x8044F420 | 81160 | 80665 | 495 | 1 | yes | - |

Majority label set, by instructions:

- `small-data`: `no-small-data` (276251 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `move-encoding`: `move-always-addu`, `move-mixed` (277461 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`
- `b-encoding`: `b-always-bgez`, `b-mixed` (195586 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`, `code_80400000`
- `return-delay-slot`: `return-slot-always-filled`, `return-slot-mixed` (276251 instructions); **disagreeing**: `main_code:non-uniform-return-slot`; narrowing nothing here: `main_code:before-non-uniform-return-slot`
- `call-delay-slot`: `call-slot-mixed` (276251 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `division-check`: `division-always-checked`, `division-mixed` (276251 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `fp-register-file`: `fp-register-file-64-bit` (276251 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `fp-double-transfer`: *no vocabulary -- this axis offers no label to stand* (277463 instructions)
- `fp-calling-convention`: *no vocabulary -- this axis offers no label to stand* (277463 instructions)

Regions disagreeing with the majority, and the counts that put them
there. Read the counts: a disagreement standing on a handful of sites is a
stray, and only one standing on many is a second producer.

- `main_code:non-uniform-return-slot` on `return-delay-slot`: stands at `return-slot-always-empty`, `return-slot-mixed` where the majority stands at `return-slot-always-filled`, `return-slot-mixed` -- released-in-delay-slot 0, released-before-empty-slot 19, released-before-filled-slot 0, frameless 5

Code in this image that was **not** surveyed:

- `second_overlay_80400000`, rom 0x176000-0x200000: the split configuration types it bin and fits it no vram, so there is no address at which to decode it; it is code and it is not surveyed

## eu-x

`artifacts/roms/ragewars.eu-x.z64`, sha256 `511f6c876586bf401faf01a270c67f26fcb7db55ed3f35759c71ab15a29de750`.
Boundaries from `versions/eu-x/ragewars.yaml`; description in `versions/eu-x/toolchain-description.json`.

4 regions. 3 narrowed at least one axis. 1 narrowed nothing on any axis and is reported unidentified. 0 hold a contradiction. 0 words fall outside an admissible body and are counted nowhere. 15 discriminator abstentions.

| region | vram | words | instructions | inadmissible | abstentions | narrowed | contradictions |
| --- | --- | --- | --- | --- | --- | --- | --- |
| `main_code:before-non-uniform-return-slot` | 0x80200400-0x80200500 | 64 | 2 | 62 | 8 | **no** | - |
| `main_code:non-uniform-return-slot` | 0x80200500-0x80201800 | 1216 | 1210 | 6 | 6 | yes | - |
| `main_code:after-non-uniform-return-slot` | 0x80201800-0x802C1CA0 | 196904 | 195587 | 1317 | 0 | yes | - |
| `code_80400000` | 0x80400000-0x8044F550 | 81236 | 80740 | 496 | 1 | yes | - |

Majority label set, by instructions:

- `small-data`: `no-small-data` (276327 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `move-encoding`: `move-always-addu`, `move-mixed` (277537 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`
- `b-encoding`: `b-always-bgez`, `b-mixed` (195587 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`, `code_80400000`
- `return-delay-slot`: `return-slot-always-filled`, `return-slot-mixed` (276327 instructions); **disagreeing**: `main_code:non-uniform-return-slot`; narrowing nothing here: `main_code:before-non-uniform-return-slot`
- `call-delay-slot`: `call-slot-mixed` (276327 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `division-check`: `division-always-checked`, `division-mixed` (276327 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `fp-register-file`: `fp-register-file-64-bit` (276327 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `fp-double-transfer`: *no vocabulary -- this axis offers no label to stand* (277539 instructions)
- `fp-calling-convention`: *no vocabulary -- this axis offers no label to stand* (277539 instructions)

Regions disagreeing with the majority, and the counts that put them
there. Read the counts: a disagreement standing on a handful of sites is a
stray, and only one standing on many is a second producer.

- `main_code:non-uniform-return-slot` on `return-delay-slot`: stands at `return-slot-always-empty`, `return-slot-mixed` where the majority stands at `return-slot-always-filled`, `return-slot-mixed` -- released-in-delay-slot 0, released-before-empty-slot 19, released-before-filled-slot 0, frameless 5

Code in this image that was **not** surveyed:

- `second_overlay_80400000`, rom 0x16C000-0x1F5000: the split configuration types it bin and fits it no vram, so there is no address at which to decode it; it is code and it is not surveyed

## de

`artifacts/roms/ragewars.de.z64`, sha256 `9dc401252bacb2ad7412ef003f97f28cb225d76b3cc76f430fbc27fa05067ca8`.
Boundaries from `versions/de/ragewars.yaml`; description in `versions/de/toolchain-description.json`.

4 regions. 3 narrowed at least one axis. 1 narrowed nothing on any axis and is reported unidentified. 0 hold a contradiction. 0 words fall outside an admissible body and are counted nowhere. 15 discriminator abstentions.

| region | vram | words | instructions | inadmissible | abstentions | narrowed | contradictions |
| --- | --- | --- | --- | --- | --- | --- | --- |
| `main_code:before-non-uniform-return-slot` | 0x80200400-0x80200500 | 64 | 2 | 62 | 8 | **no** | - |
| `main_code:non-uniform-return-slot` | 0x80200500-0x80201800 | 1216 | 1210 | 6 | 6 | yes | - |
| `main_code:after-non-uniform-return-slot` | 0x80201800-0x802C19C0 | 196720 | 195399 | 1321 | 0 | yes | - |
| `code_80400000` | 0x80400000-0x80460110 | 98372 | 93824 | 4548 | 1 | yes | - |

Majority label set, by instructions:

- `small-data`: `no-small-data` (289223 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `move-encoding`: `move-always-addu`, `move-mixed` (290433 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`
- `b-encoding`: `b-always-beq`, `b-always-bgez`, `b-mixed` (290435 instructions)
- `return-delay-slot`: `return-slot-always-filled`, `return-slot-mixed` (289223 instructions); **disagreeing**: `main_code:non-uniform-return-slot`; narrowing nothing here: `main_code:before-non-uniform-return-slot`
- `call-delay-slot`: `call-slot-mixed` (289223 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `division-check`: `division-always-checked`, `division-mixed` (289223 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `fp-register-file`: `fp-register-file-64-bit` (289223 instructions); narrowing nothing here: `main_code:before-non-uniform-return-slot`, `main_code:non-uniform-return-slot`
- `fp-double-transfer`: *no vocabulary -- this axis offers no label to stand* (290435 instructions)
- `fp-calling-convention`: *no vocabulary -- this axis offers no label to stand* (290435 instructions)

Regions disagreeing with the majority, and the counts that put them
there. Read the counts: a disagreement standing on a handful of sites is a
stray, and only one standing on many is a second producer.

- `main_code:non-uniform-return-slot` on `return-delay-slot`: stands at `return-slot-always-empty`, `return-slot-mixed` where the majority stands at `return-slot-always-filled`, `return-slot-mixed` -- released-in-delay-slot 0, released-before-empty-slot 19, released-before-filled-slot 0, frameless 5

## Do the four cartridges with no authored C agree with us-rev1?

`us`, `eu`, `eu-x` and `de` carry no authored C, so this survey is the only compiler
evidence they will ever carry. Comparing majority label sets, axis by axis:

- **us**: narrows less on `b-encoding` (an abstention, not a disagreement)
- **eu**: agrees on every axis, label for label
- **eu-x**: agrees on every axis, label for label
- **de**: narrows less on `b-encoding` (an abstention, not a disagreement)

No cartridge contradicts another. Agreement here is a measured fact about the
four images, and it is the whole of the compiler evidence they carry: it says
they were built by something that makes the same structural choices, not what
that something was named.

## Axes carrying no vocabulary

These axes name a question the discriminator set offers no label to answer.
They are not contradictions and they are not findings: nothing stands because
there is nothing to stand.

- `fp-double-transfer`, on `us`, `us-rev1`, `eu`, `eu-x`, `de`.
- `fp-calling-convention`, on `us`, `us-rev1`, `eu`, `eu-x`, `de`.

## What each discriminator excluded

Each label named here was excluded somewhere across the five cartridges. Read
the site counts in the region tables before leaning on a thin one.

- `gp-relative-accesses` -- excluded `small-data-in-use`
- `move-encoding` -- excluded `move-always-or`
- `b-encoding` -- excluded `b-always-beq`, `b-always-bgez`
- `stack-release-position` -- excluded `return-slot-always-empty`, `return-slot-always-filled`
- `call-delay-slot` -- excluded `call-slot-always-filled`, `call-slot-never-filled`
- `division-trap-pair` -- excluded `division-never-checked`
- `double-operand-register-parity` -- excluded `fp-register-file-32-bit-pairs`

## Discriminators that excluded nothing

A property with no exclusion is not evidence, and is named here rather than listed
among the findings. Counted across all five cartridges, these excluded nothing:

- `double-transfer-form` (double-width memory transfers, by whether one access or two carries the value)
- `float-argument-registers` (float registers written in the four instructions before a call)

## What this does not establish

- **No compiler is named.** The label sets above are structural; the mapping from a
  label set to a compiler and its settings is unwritten, so this document names none.
- **A byte-identical image is not compiler evidence.** Intervals that do not match are
  relinked from the cartridge's own extracted assembly, so every image verifies whether
  or not a single line of C compiles. Image identity proves the extraction and the link,
  and stops there.
- **A handful of matched leaf functions is not evidence either.** Short functions are
  dominated by the shape of the C, which is free until the source is known, so two
  different compilers can both be made to hit the same few words.
- **The 3,717-function corpus cannot test the compiler it was authored against.** Each
  of `us-rev1`'s authored C functions was iterated until its bytes equalled the
  cartridge's, under one fixed compiler and flag set. That agreement shows the compiler
  is *sufficient*. It is structurally incapable of showing whether another would also
  work, and it is not cited above as though it could.
- **No alternative compiler has been run and shown to fail.** Nothing here was reached
  by refusing a candidate; it was reached by counting shapes in the image.
- **Why this release rather than another** is not established, and nothing above
  answers it.

