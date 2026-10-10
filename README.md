# Turok: Rage Wars decompilation

A matching decompilation of *Turok: Rage Wars* for the Nintendo 64.

> **This repository contains no game content.** You must supply a legally acquired cartridge dump. Builds are verified against its SHA256.

## Progress

<!-- progress -->
<pre><code>all      [███████████▒░░░░░░░░]  59.00% (~62.29%)  4,046,141 of 6,857,872 bytes</code><br><code>de       [███████████▒░░░░░░░░]  59.45% (~62.88%)  821,948 of 1,382,608 bytes</code><br><code>eu       [███████████▒░░░░░░░░]  59.57% (~62.89%)  826,547 of 1,387,504 bytes</code><br><code>eu-x     [███████████▒░░░░░░░░]  59.13% (~62.75%)  779,399 of 1,318,176 bytes</code><br><code>us       [███████████▒░░░░░░░░]  59.06% (~63.28%)  816,728 of 1,382,992 bytes</code><br><code>us-rev1  [███████████▒░░░░░░░░]  57.80% (~59.69%)  801,519 of 1,386,592 bytes</code></pre>

| de (NUS-NRWD-0, Germany). Censored German release. SHA256 `9dc401252bacb2ad7412ef003f97f28cb225d76b3cc76f430fbc27fa05067ca8` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  66.54% (~68.48%)  735,292 of 1,104,964</code><br><code>data      [██████▒▒░░░░░░░░░░░░]  31.21% (~40.58%)  86,656 of 277,644</code><br><code>functions [███████████████░░░░░]  78.79%  2,886 of 3,663</code></pre> |

| eu (NUS-NRWP-0, Europe). PAL release. SHA256 `d763cbbe485a5f9e1b7be97d5ac16735087e23d0bb62c05dc844e01b7e1156d1` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  66.57% (~68.65%)  740,296 of 1,111,996</code><br><code>data      [██████▒▒░░░░░░░░░░░░]  31.31% (~39.65%)  86,251 of 275,508</code><br><code>functions [███████████████░░░░░]  78.62%  2,887 of 3,672</code></pre> |

| eu-x (NUS-NRWX-0, Europe). PAL multi-language release. SHA256 `511f6c876586bf401faf01a270c67f26fcb7db55ed3f35759c71ab15a29de750` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  66.51% (~68.52%)  740,992 of 1,114,140</code><br><code>data      [███▒▒▒░░░░░░░░░░░░░░]  18.82% (~31.27%)  38,407 of 204,036</code><br><code>functions [███████████████░░░░░]  78.72%  2,892 of 3,674</code></pre> |

| us (NUS-NRWE-0, North America). First NTSC release (black cartridge). SHA256 `0433043aaba2649bdd1fe717c4020550ac663c0362527aa082490f5977a3e46b` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  68.64% (~70.53%)  729,172 of 1,062,244</code><br><code>data      [█████▒▒▒░░░░░░░░░░░░]  27.30% (~39.26%)  87,556 of 320,748</code><br><code>functions [████████████████░░░░]  82.47%  2,846 of 3,451</code></pre> |

| us-rev1 (NUS-NRWE-1, North America). Revised NTSC release (grey cartridge). SHA256 `5dfbae59e4a3860b740ccbb28f33aad624315e30bfca6d60abd62d12a89e0089` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  68.40% (~70.49%)  774,388 of 1,132,124</code><br><code>data      [██▒░░░░░░░░░░░░░░░░░]  10.66% (~11.66%)  27,131 of 254,468</code><br><code>functions [████████████████░░░░]  80.01%  2,965 of 3,706</code></pre> |
<!-- /progress -->

## Development & Contributions

Contributions and corrections are welcome. Run `make check` before opening a pull request.

For detailed instructions please see [CONTRIBUTING.md](CONTRIBUTING.md).

## AI Usage

### Workflow

AI is used in the decompilation process and every function is verified by compiling it against the original ROM. A match can still be a fakematch or use odd C semantics. I try to mark these in source as they are discovered.

I turned these efforts into a repeatable process with [AbuCakeUnbake64](https://github.com/melalawi/abu-cake-unbake-64). It is built so AI can drive it against any N64 ROM.

### Personal Thoughts

AI suits decompilation well. Every function is checked deterministically against the original ROM so correctness is always provable. Decompiled code is plain source built with the original toolchain so nothing opaque runs on the player's machine and the only attack surface is the build tooling. Readable source can be ported, fixed and preserved long after its tools are gone.

While recompilations can be a fine short-term way to play a favourite game, I believe AI-driven recomps are junk and should be avoided entirely. Used this way AI carries more security risk and is more likely to leave the scene littered with broken and abandoned ports. For games as compact as most N64 titles it makes more sense to point AI at a proper decompilation instead.

## License

[CC0 1.0](LICENSE)

## Dependencies

- [AbuCakeUnbake64](https://github.com/melalawi/abu-cake-unbake-64)
- [GCC 2.8.1 for mips-nintendo-nu64](https://github.com/pmret/gcc-papermario) at `d97824ffc7517675646960442b3f512a473e4404`, the compiler of toolchain `gcc-2.8.1`, assembled by SN ASN64 version 2.81