# How the two pinned compilers are produced

Written by hand; no goal reads it back. Every digest and every count below names the command that
produced it, so each is reproduced by running that command rather than taken on trust.

## The two compilers, and which one may prove anything

`config.toml` names two directories under `[toolchain]`:

- `installed = "artifacts/sn64"` -- the compiler a match is proved with. Pinned by
  `{toolkit}/sn64/toolchain.sha256`, which `[toolchain].pins` names.
- `diagnostic_installed = "artifacts/sn64-diagnostic"` -- the same compiler plus three decision
  logs. Pinned by `diagnostic.sha256` beside those pins, and it never proves a match.

`{toolkit}` is the installed toolkit's package directory, so both pins files sit beside the `sn64`
driver there. Neither digest file lives in this repository: the compiler's facts belong to the
compiler, not to the cartridge.

`[toolchain].source = "artifacts/toolchain"` is **not** a source tree. It is the directory
`make bootstrap` creates and the four supplied executables are dropped into, in any layout;
`make setup` searches it by name and SHA-256 and installs the verified copies into
`[toolchain].installed`. `config.toml` states no path for a compiler source tree, so a GCC checkout
has no configured home in this repository and none is invented here. The recipe below fetches its
own sources into a temporary directory and deletes them.

## The recipe

`{toolkit}/sn64/build-cc1` builds either compiler and refuses any build whose SHA-256 is not the
pinned one, so a digest below is reproduced rather than asserted:

```sh
build-cc1 prover      DIRECTORY   # pins in toolchain.sha256
build-cc1 diagnostic  DIRECTORY   # pins in diagnostic.sha256
build-cc1 baseline    DIRECTORY   # report how the upstream tree differs from the FSF release
```

It writes nothing to a default path: the destination is an argument, and it must never be
`artifacts/sn64`, which holds the compiler the build proves matches with. Its whole input is
public:

| What | Which |
| --- | --- |
| FSF release | `https://ftp.gnu.org/gnu/gcc/gcc-2.8.1.tar.gz`, sha256 `3b30fbfdf93e628373d90d174243f3267b0eec9ebe792bb64fd15b8828c2ea4c` |
| tree adding the target | `https://github.com/pmret/gcc-papermario` at `d97824ffc7517675646960442b3f512a473e4404` |
| host | `ubuntu:20.04` under Docker, whose `gcc` is 9.4.0 |
| configure target | `mips-nintendo-nu64` |
| host CFLAGS | `-std=gnu89 -m32 -static` |

Nothing is taken from a vendor and nothing is extracted from an installed binary. The terms are the
release's own `COPYING`, GPL version 2.

## What the upstream tree adds, and what it changes

`build-cc1 baseline` diffs the checkout against the extracted FSF release. It adds six files:

```
.github/workflows/build.yml   .gitignore   PAPERMARIO.md
config.sub.alt                config/i386/xm-darwin.h   config/mips/nu64.h
```

and changes 34 more, 40 paths in all, in a 466,764-byte diff. The one that matters is
`config/mips/nu64.h`: `MIPS_ISA_DEFAULT 3`, `MIPS_CPU_STRING_DEFAULT "4300"`,
`TARGET_DEFAULT (MASK_GAS | MASK_4300_MUL_FIX)`. `configure` and `config.sub` carry the case that
selects the target.

Measured with the same run: `reload1.c`, `reload.c`, `global.c`, `local-alloc.c` and `loop.c` are
byte-identical to the FSF release. Every optimisation pass this project reasons about is therefore
the FSF's own source, and a line number cited from it is a line number in GCC 2.8.1 as the FSF
released it.

## The patch that makes the diagnostic build

One patch, `{toolkit}/sn64/decision-logs.patch`, 1,565 lines. It touches four files and no others:

| File | Hunks | What it adds |
| --- | --- | --- |
| `local-alloc.c` | 17 | the `lalloc` stream |
| `global.c` | 13 | the `galloc` stream |
| `toplev.c` | 12 | the dump-file plumbing for all three |
| `loop.c` | 10 | the `loopcost` stream |

The pass names `matchkit decisions <pass> <function> <candidate>` reads are `local-alloc`,
`global-alloc` and `loop-cost`. **The patch touches no reload source.** There is no reload stream and
no way to ask this compiler what reload did; a question about reload is answered by reading
`reload1.c`, which the recipe's own inputs make available and which the paragraph above shows is the
FSF file unmodified.

## What was measured, with the commands

Run 2026-09-26. `SP` is any directory outside this repository.

```sh
sha256sum artifacts/sn64/* artifacts/sn64-diagnostic/*
# 1e04e1195f6504fe711c3db67ad94eb50d47f2a0f21e87dbbe20cbac4d83db39  artifacts/sn64/asn64.exe
# 83894592be24de2aa63bdff9322c35c170d96484ca0049a51c300a073e69bdc1  artifacts/sn64/cc1
# 7b90d21f0315cd9158531502a9fafcd95e1e4db0ef9d1244e46828b4203acb75  artifacts/sn64/psyq-obj-parser
# d926a72202c420f6535904a4d49481d2bb4f138462ed639c8908d0a305323908  artifacts/sn64/wibo
# 9a546b001f90054ec4a0fd7c1ae58a283556d1847a8f481be2ab6dbd5d5ad71e  artifacts/sn64-diagnostic/cc1
# (the other three files of the diagnostic directory are the prover's own, at the same digests)

build-cc1 diagnostic $SP/rebuild-diagnostic
# OK(build-cc1): diagnostic cc1 at 9a546b001f90054ec4a0fd7c1ae58a283556d1847a8f481be2ab6dbd5d5ad71e
cmp $SP/rebuild-diagnostic/cc1 artifacts/sn64-diagnostic/cc1   # no output: identical, 3,322,592 bytes

build-cc1 prover $SP/rebuild-prover
# OK(build-cc1): prover cc1 at 83894592be24de2aa63bdff9322c35c170d96484ca0049a51c300a073e69bdc1
cmp $SP/rebuild-prover/cc1 artifacts/sn64/cc1                   # no output: identical
```

Both installed compilers are reproduced byte for byte from the public sources above. Neither
rebuild was installed anywhere in this repository, and `artifacts/sn64/` was not written to.

The control on the claim that the patch only prints: every authored source in `src/` was
preprocessed once and compiled by both `cc1` binaries with the flags the `sn64` driver passes
(`-quiet -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mgp32 -mfp64 -mno-fix4300`), and the
two assembly outputs compared:

```
identical=3724 differing=0 failed=0
```

3,724 of 3,724 byte-identical, over every authored source `src/` held at 04:20 on 2026-09-26. That
identity is what makes the diagnostic build's logs evidence about the prover rather than about
itself; a later run compares its own count against that one.

## The host the pinned binaries name

Both installed binaries report the host that built them:

```sh
echo 'int f(void){return 1;}' > probe.i
artifacts/sn64/cc1 -quiet -version probe.i -o probe.s
# GNU C version 2.8.1 (mips-nintendo-nu64) compiled by GNU C version 9.4.0.
```

`ubuntu:20.04` shipped 9.3.0 when the first pin was taken and ships 9.4.0 now. The pinned binaries
are the 9.4.0 ones, and the rebuild above reaches their digests.

## How reload remembers what a hard register holds

A fact about the compiler, not about any one function, so it is recorded here and cited from
`data/attempts.json` rather than restated there. Every line number below is a line in GCC 2.8.1 as
the FSF released it, which the section above establishes for each file it cites.

The pass is `reload_cse_regs`, `reload1.c:7869`, called from `toplev.c:3501` under
`if (optimize > 0)` after `reload_completed = 1` at `toplev.c:3497` and before the post-reload
scheduler at `toplev.c:3510`. Its record is `reg_values[]`, one `EXPR_LIST` per hard register,
declared at `reload1.c:7585`. It is cleared:

- **at a `CODE_LABEL`, completely** -- `reload1.c:7900-7908`, whose own comment reads "Forget all the
  register values at a code label. We don't try to do anything clever around jumps."
- **at a `CALL_INSN`, only where `call_used_regs[i]`** -- `reload1.c:7929-7937`, through
  `reload_cse_invalidate_regno (i, VOIDmode, 1)`, plus all memory when the call is not const.
- on each set or clobber, for the register written and every entry depending on it, through
  `reload_cse_record_set` and `reload_cse_invalidate_rtx`.

Not at a jump: `JUMP_INSN` is rtx class `'i'` and `CODE_LABEL` is `'x'` (`rtl.def:354`, `:372`), so a
jump falls past the label test at `reload1.c:7900` and is processed as an ordinary insn.

The same two rules hold a second time in `reload_as_needed`, at
`reload1.c:4207-4213` for a label and `4217-4223` for call-used spill registers, so both of reload's
records agree and neither is a way round the other. The other clearing sites in that loop are dead
for this target: `reload1.c:7910-7919` needs `NON_SAVING_SETJMP`, which no mips header defines;
`reload1.c:4228-4235` needs `INSN_CLOBBERS_REGNO_P`, commented out at `config/mips/mips.h:1830`; and
`reload1.c:4188-4205` needs `AUTO_INC_DEC`, which is off because `HAVE_POST_INCREMENT` and
`HAVE_PRE_INCREMENT` are commented out at `config/mips/mips.h:2390` and `:2394`. And `toplev.c:3501`
gates the pass on `optimize` alone, with no `-f` flag of its own, so no compiler option turns it off
at the `-O2` this project states in `[toolchain].cflags`.

## What is still not reproducible

`toolchain.sha256` says so at length, and it has not changed: of the four pinned files only `cc1` is
reproducible. `asn64.exe` is proprietary with no published source, and the pinned `wibo` and
`psyq-obj-parser` builds name revisions that cannot be traced to their public repositories. Every
byte this decompilation proves passes through `asn64.exe`, so the build is not reproducible from
public sources alone. The compiler is.
