# Turok: Rage Wars decompilation

A matching decompilation of *Turok: Rage Wars* for the Nintendo 64.

> **This repository contains no game content.** You must supply a legally acquired cartridge dump. Builds are verified against its SHA256.

## Progress

<pre><code>all     [############--------]  63.17%  3,527,808 of 5,584,412 bytes</code><br><code>us      [#############-------]  65.53%  725,172 of 1,106,680 bytes</code><br><code>us-rev1 [#############-------]  67.53%  765,560 of 1,133,680 bytes</code><br><code>eu      [############--------]  61.36%  684,424 of 1,115,388 bytes</code><br><code>eu-mul  [###########---------]  59.56%  664,320 of 1,115,364 bytes</code><br><code>de      [############--------]  61.83%  688,332 of 1,113,300 bytes</code></pre>

| us (NUS-NRWE-0, North America). First NTSC release (black cartridge). SHA256 `0433043aaba2649bdd1fe717c4020550ac663c0362527aa082490f5977a3e46b` |
|---|
| <pre><code>bytes     [#############-------]  65.53%  725,172 of 1,106,680</code><br><code>functions [#################---]  86.82%  3,716 of 4,280</code></pre> |

| us-rev1 (NUS-NRWE-1, North America). Revised NTSC release (grey cartridge). SHA256 `5dfbae59e4a3860b740ccbb28f33aad624315e30bfca6d60abd62d12a89e0089` |
|---|
| <pre><code>bytes     [#############-------]  67.53%  765,560 of 1,133,680</code><br><code>functions [#################---]  89.92%  3,914 of 4,353</code></pre> |

| eu (NUS-NRWP-0, Europe). PAL release. SHA256 `d763cbbe485a5f9e1b7be97d5ac16735087e23d0bb62c05dc844e01b7e1156d1` |
|---|
| <pre><code>bytes     [############--------]  61.36%  684,424 of 1,115,388</code><br><code>functions [################----]  83.67%  3,642 of 4,353</code></pre> |

| eu-mul (NUS-NRWX-0, Europe). PAL multi-language release. SHA256 `511f6c876586bf401faf01a270c67f26fcb7db55ed3f35759c71ab15a29de750` |
|---|
| <pre><code>bytes     [###########---------]  59.56%  664,320 of 1,115,364</code><br><code>functions [################----]  84.86%  3,598 of 4,240</code></pre> |

| de (NUS-NRWD-0, Germany). Censored German release. SHA256 `9dc401252bacb2ad7412ef003f97f28cb225d76b3cc76f430fbc27fa05067ca8` |
|---|
| <pre><code>bytes     [############--------]  61.83%  688,332 of 1,113,300</code><br><code>functions [################----]  84.27%  3,660 of 4,343</code></pre> |

## Development & Contributions

Contributions and corrections are welcome. Run `make check` before opening a pull request.

For detailed instructions please see [DEVELOPMENT.md](DEVELOPMENT.md).

## AI Usage

### Disclaimer

AI is used in the decompilation process and every function is verified by compiling it against the original ROM. A match can still be a fakematch or use odd C semantics and those are marked in the source.

### Personal Thoughts

I turned these efforts into a repeatable process with [N64DecompTools](https://github.com/melalawi/n64-decomp-tools). It is built so AI can drive it against any N64 ROM.

A decompilation is plain C built with the original toolchain. Nothing opaque runs on the player's machine and the only attack surface is the build tooling.

I personally think AI-driven recomps are junk and should be entirely avoided. Recomps can be a fine short-term way to play a favourite game. Over time they carry more security risk and leave the scene full of broken and abandoned ports. For games as simple as most N64 titles it makes more sense to go straight to a decompilation.

## License

The repository's own code is released under [CC0 1.0](LICENSE).

## Dependencies

- [N64DecompTools](https://github.com/melalawi/n64-decomp-tools)
- [splat](https://github.com/ethteck/splat) version 0.50.0.
- [m2c](https://github.com/matt-kempster/m2c) at `708d2d2cb2698f091a92492b328f73b24209f72d`.
- [decomp-permuter](https://github.com/simonlindholm/decomp-permuter) at `059609d4aec73eb0650726772954e1ad575825f8`.
- [maspsx](https://github.com/mkst/maspsx) at `7686f845a181700534c83c0419183e38aeb3e49c`.
- [GCC 2.8.1 for mips-nintendo-nu64](https://github.com/pmret/gcc-papermario) at `d97824ffc7517675646960442b3f512a473e4404`, the compiler of toolchain `gcc-2.8.1`, assembled by SN ASN64 version 2.81.

