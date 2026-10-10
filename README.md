# Turok: Rage Wars decompilation

A matching decompilation of *Turok: Rage Wars* for the Nintendo 64.

> **This repository contains no game content.** You must supply a legally acquired cartridge dump. Builds are verified against its SHA256.

## Progress

<!-- progress -->
<pre><code>all      [███████████▒░░░░░░░░]  58.89% (~61.58%)  4,038,561 of 6,857,872 bytes</code><br><code>de       [███████████▒░░░░░░░░]  59.36% (~62.24%)  820,720 of 1,382,608 bytes</code><br><code>eu       [███████████▒░░░░░░░░]  59.44% (~62.12%)  824,727 of 1,387,504 bytes</code><br><code>eu-x     [███████████▒░░░░░░░░]  59.01% (~62.00%)  777,895 of 1,318,176 bytes</code><br><code>us       [███████████▒░░░░░░░░]  59.00% (~62.64%)  815,944 of 1,382,992 bytes</code><br><code>us-rev1  [███████████▒░░░░░░░░]  57.64% (~58.91%)  799,275 of 1,386,592 bytes</code></pre>

| de (NUS-NRWD-0, Germany). Censored German release. SHA256 `9dc401252bacb2ad7412ef003f97f28cb225d76b3cc76f430fbc27fa05067ca8` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  66.44% (~67.68%)  734,120 of 1,104,964</code><br><code>data      [██████▒▒░░░░░░░░░░░░]  31.19% (~40.56%)  86,600 of 277,644</code><br><code>functions [███████████████░░░░░]  78.60%  2,879 of 3,663</code></pre> |

| eu (NUS-NRWP-0, Europe). PAL release. SHA256 `d763cbbe485a5f9e1b7be97d5ac16735087e23d0bb62c05dc844e01b7e1156d1` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  66.42% (~67.69%)  738,576 of 1,111,996</code><br><code>data      [██████▒▒░░░░░░░░░░░░]  31.27% (~39.63%)  86,151 of 275,508</code><br><code>functions [███████████████░░░░░]  78.32%  2,876 of 3,672</code></pre> |

| eu-x (NUS-NRWX-0, Europe). PAL multi-language release. SHA256 `511f6c876586bf401faf01a270c67f26fcb7db55ed3f35759c71ab15a29de750` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  66.38% (~67.63%)  739,544 of 1,114,140</code><br><code>data      [███▒▒▒░░░░░░░░░░░░░░]  18.80% (~31.24%)  38,351 of 204,036</code><br><code>functions [███████████████░░░░░]  78.42%  2,881 of 3,674</code></pre> |

| us (NUS-NRWE-0, North America). First NTSC release (black cartridge). SHA256 `0433043aaba2649bdd1fe717c4020550ac663c0362527aa082490f5977a3e46b` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  68.58% (~69.71%)  728,468 of 1,062,244</code><br><code>data      [█████▒▒▒░░░░░░░░░░░░]  27.27% (~39.24%)  87,476 of 320,748</code><br><code>functions [████████████████░░░░]  82.29%  2,840 of 3,451</code></pre> |

| us-rev1 (NUS-NRWE-1, North America). Revised NTSC release (grey cartridge). SHA256 `5dfbae59e4a3860b740ccbb28f33aad624315e30bfca6d60abd62d12a89e0089` |
|---|
| <pre><code>code      [█████████████▒░░░░░░]  68.30% (~69.62%)  773,192 of 1,132,124</code><br><code>data      [██▒░░░░░░░░░░░░░░░░░]  10.25% (~11.25%)  26,083 of 254,468</code><br><code>functions [███████████████░░░░░]  79.79%  2,957 of 3,706</code></pre> |
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