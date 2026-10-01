/* Applies texture, color, combiner, render mode and geometry for one material.
 * Reuses func_8026D4F0's color/fog layout and func_8027ED40's animation metadata.
 * Unsigned float casts emit the 2147483648.0f conversion branches seen in the ROM.
 * Width/height temporaries are words: the shift path is not truncated to u16.
 */
#include "basetypes.h"
#include "shared/settings.h"
#include "shared/material_renderer.h"
#include "shared/particle.h"

extern Gfx *D_80110634;
extern s32 D_80110620;
extern Shared_Settings D_801462C8;
extern s32 D_800D15E0;
extern f32 D_800D15E4[5]; /* RGBA tint plus primitive alpha: src/func_8041FCC0.c. */

extern u8 D_800D15F8, D_800D15F9, D_800D15FA, D_800D15FB, D_800D15FC, D_800D15FD;
extern u32 D_800D2980;
extern s32 D_800D15C8, D_800D15CC;
extern u32 D_800D15D4;
extern void **func_80296EC4(void *, s32);
extern void func_80296F7C(void *, Shared_AnimInfo *);
#if defined(VERSION_US_REV1)
extern void func_80295FB4(void *, void *, s32, s32, s32, s32, s32, s32, s32);
#else
extern void func_80294FF4(void *, void *, s32, s32, s32, s32, s32, s32, s32);
#endif
extern void func_80268CE0(u32);
extern s32 func_8026925C(s32);
extern void func_802536F4(void *, void *);
extern s32 func_80274544(void);

s32 func_80269A80(Shared_RenderMaterial *material, s32 pass) {
    Shared_AnimInfo info;
    Gfx *cmdAlt;
    Gfx *cmd1, *cmd2, *cmd3, *cmd4, *cmd5, *cmd6, *cmd7;
    Gfx *cmd9, *cmd10, *cmd11, *cmd13, *cmd14, *cmd15, *cmd16;
    Gfx *cmd17, *cmd18, *cmd19, *cmd20, *cmd22, *cmd23;
    void **texture;
    s32 flags;
    s32 secondaryCount, format;
    u32 tick;
    s32 frame, secondary;
    s32 width, height;
    s32 wrapS, wrapT;
    s32 renderMode;
    u32 geometry;
    u32 gray;

    flags = material->flags;
    if (D_80110620 != 0 && (flags & 0x8040) != 0x8000) {
        flags |= 2;
    }
    if ((flags & 0x100) && material->color[3] == 0) {
        return 0;
    }
    renderMode = -1;
    if (material->texture != 0 && !(D_801462C8.flags & 0x400) &&
        (D_80110620 == 0 || !(flags & 0x8000))) {
        texture = func_80296EC4(&material->texture, pass);
        if (texture == 0) {
            return 0;
        }
        func_80296F7C(texture, &info);
        switch (pass) {
        case -2:
            if (info.count < 2) {
                frame = 0;
                secondary = 0;
            } else {
                tick = (D_800D2980 / info.frame->divisor) & 0xFF;
                if (material->frame != tick) {
                    frame = func_80274544();
                    secondaryCount = info.unk4;
                    frame %= info.count;
                    if (secondaryCount != 0) {
                        secondary = frame;
                        if (secondary >= secondaryCount) {
                            secondary = 0;
                        }
                    } else {
                        secondary = 0;
                    }
                    material->frame = tick;
                } else {
                    frame = (s32)tick % info.count;
                    secondary = info.unk4 != 0 ? (s32)tick % info.unk4 : 0;
                }
            }
            break;
        case -1:
            tick = D_800D2980 / info.frame->divisor;
            frame = (s32)tick % info.count;
            secondary = info.unk4 != 0 ? (s32)tick % info.unk4 : 0;
            break;
        default:
            frame = pass % info.count;
            secondary = info.unk4 != 0 ? pass % info.unk4 : 0;
            break;
        }
        if (flags & 0x10) {
            width = 1 << (info.frame->shiftS + 6);
            height = 1 << (info.frame->shiftT + 6);
        } else {
            width = material->width;
            height = material->height;
        }
        if (flags & 0x20) {
            wrapS = 2;
            wrapT = 2;
        } else {
            wrapS = 0;
            wrapT = 0;
        }
        if (flags & 0x800) {
            wrapS |= 1;
            wrapT |= 1;
        }
#if defined(VERSION_US_REV1)
        func_80295FB4(&material->texture, texture, frame, secondary, width, height, wrapS, wrapT, 0);
#else
        func_80294FF4(&material->texture, texture, frame, secondary, width, height, wrapS, wrapT, 0);
#endif
        if (flags & 0x2000) {
            cmd1 = D_80110634++;
            cmd1->words.w0 = 0xE3000F00;
            cmd1->words.w1 = 0x10000;
        }
        if (D_80110620 != 0) {
            gray = (u32)(material->color[0] + material->color[1] + material->color[2]) / 3U;
            cmd2 = D_80110634++;
            cmd2->words.w0 = (info.frame->lod << 8) | 0xFA000000;
            cmd2->words.w1 = ((gray << 8) & 0xFF00) | material->color[3];
        } else {
            cmd3 = D_80110634++;
            cmd3->words.w0 = (info.frame->lod << 8) | 0xFA000000;
            cmd3->words.w1 = (material->color[0] << 24) | (material->color[1] << 16) | (material->color[2] << 8) | material->color[3];
        }
        if (flags & 0x400) {
            if (D_80110620 != 0) {
                gray = (u32)(material->fog[0] + material->fog[1] + material->fog[2]) / 3U;
                cmd4 = D_80110634++;
                cmd4->words.w0 = 0xFB000000;
                cmd4->words.w1 = ((gray << 8) & 0xFF00) |
                    ((D_800D15E0 == 0 ? (u32)(f32)material->color[3] : (u32)D_800D15E4[3]) & 0xFF);
            } else {
                cmd5 = D_80110634++;
                cmd5->words.w0 = 0xFB000000;
                cmd5->words.w1 = (material->fog[0] << 24) | (material->fog[1] << 16) | (material->fog[2] << 8) |
                    ((D_800D15E0 == 0 ? (u32)(f32)material->color[3] : (u32)D_800D15E4[3]) & 0xFF);
            }
            if (flags & 2) {
                if (flags & 0x1000) {
                    if (D_800D15E0 == 0) {
                        func_80268CE0(0);
                    } else {
                        func_80268CE0(1);
                    }
                } else {
                    func_80268CE0(2);
                }
            } else if (flags & 0x1000) {
                func_80268CE0(3);
            } else {
                func_80268CE0(4);
            }
        } else if (flags & 2) {
            if (flags & 0x2000) {
                format = info.frame->format;
                if (format < 6) {
                    if (format >= 4) {
                        cmd6 = D_80110634++;
                        cmd6->words.w0 = 0xFB000000;
                        cmd6->words.w1 = (material->fog[0] << 24) | (material->fog[1] << 16) | (material->fog[2] << 8) | material->fog[3];
                        func_80268CE0(0x23);
                    } else {
                        func_80268CE0(5);
                    }
                } else {
                    func_80268CE0(5);
                }
            } else if (D_800D15E0 == 0) {
                func_80268CE0(6);
            } else {
                cmd7 = D_80110634++;
                cmd7->words.w0 = 0xFB000000;
                cmd7->words.w1 = ((u32)D_800D15E4[0] << 24) | (((u32)D_800D15E4[1] & 0xFF) << 16) |
                    (((u32)D_800D15E4[2] & 0xFF) << 8) | ((u32)D_800D15E4[3] & 0xFF);
                switch (D_800D15E0) {
                case 1: case 2: func_80268CE0(7); break;
                case 3: func_80268CE0(8); break;
                case 7: func_80268CE0(9); break;
                case 4: case 5: func_80268CE0(0xA); break;
                case 6:
                    {
                        Gfx *cmd = D_80110634++;
                        cmd->words.w0 = 0xFA000000;
                        cmd->words.w1 = ((u32)material->color[0] << 24) |
                            ((u32)material->color[1] << 16) | ((u32)material->color[2] << 8) |
                            ((u32)D_800D15E4[4] & 0xFF);
                    }
                    func_80268CE0(0xB);
                    break;
                }
            }
        } else {
            if (flags & 0x2000) {
                switch (info.frame->format) {
                case 4:
                    cmd9 = D_80110634++;
                    cmd9->words.w0 = 0xFB000000;
                    cmd9->words.w1 = (material->fog[0] << 24) | (material->fog[1] << 16) | (material->fog[2] << 8) | material->fog[3];
                    func_80268CE0(0x25);
                    break;
                case 5:
                    cmd10 = D_80110634++;
                    cmd10->words.w0 = 0xFB000000;
                    cmd10->words.w1 = (material->fog[0] << 24) | (material->fog[1] << 16) | (material->fog[2] << 8) | material->fog[3];
                    func_80268CE0(0x24);
                    break;
                default:
                    func_80268CE0(0xC);
                    break;
                }
            } else if (D_800D15E0 == 0) {
                func_80268CE0(0xD);
            } else {
                cmd11 = D_80110634++;
                cmd11->words.w0 = 0xFB000000;
                cmd11->words.w1 = ((u32)D_800D15E4[0] << 24) | (((u32)D_800D15E4[1] & 0xFF) << 16) |
                    (((u32)D_800D15E4[2] & 0xFF) << 8) | ((u32)D_800D15E4[3] & 0xFF);
                switch (D_800D15E0) {
                case 1: case 2: func_80268CE0(0xE); break;
                case 3: func_80268CE0(0xF); break;
                case 7: func_80268CE0(9); break;
                case 4: case 5: func_80268CE0(0x10); break;
                case 6:
                    {
                        Gfx *cmd = D_80110634++;
                        cmd->words.w0 = 0xFA000000;
                        cmd->words.w1 = ((u32)material->color[0] << 24) |
                            ((u32)material->color[1] << 16) | ((u32)material->color[2] << 8) |
                            ((u32)D_800D15E4[4] & 0xFF);
                    }
                    func_80268CE0(0x11);
                    break;
                }
            }
        }
        func_802536F4(0, texture);
    } else {
        cmd13 = D_80110634++;
        cmd13->words.w0 = 0xE7000000;
        cmd13->words.w1 = 0;
        if (D_800D15F8 != 0) {
            if (D_800D15FC != 0) {
                cmd14 = D_80110634++;
                cmd14->words.w0 = 0xFA000000;
                cmd14->words.w1 = (D_800D15F9 << 24) | (D_800D15FA << 16) |
                    (D_800D15FB << 8) | D_800D15FD;
            } else {
                cmd15 = D_80110634++;
                cmd15->words.w0 = 0xFA000000;
                cmd15->words.w1 = (D_800D15F9 << 24) | (D_800D15FA << 16) |
                    (D_800D15FB << 8) | material->color[3];
            }
        } else if (D_800D15FC != 0) {
            cmd16 = D_80110634++;
            cmd16->words.w0 = 0xFA000000;
            cmd16->words.w1 = (material->color[0] << 24) | (material->color[1] << 16) | (material->color[2] << 8) | D_800D15FD;
        } else if (flags & 0x8000) {
            if (flags & 0x40) {
                cmd17 = D_80110634++;
                cmd17->words.w0 = 0xFA000000;
                cmd17->words.w1 = 0xFF000000 | material->color[3];
            } else {
                cmdAlt = D_80110634++;
                cmdAlt->words.w0 = 0xFA000000;
                cmdAlt->words.w1 = 0xFFFF0000 | material->color[3];
            }
        } else {
            cmd18 = D_80110634++;
            cmd18->words.w0 = 0xFA000000;
            cmd18->words.w1 = (material->color[0] << 24) | (material->color[1] << 16) | (material->color[2] << 8) | material->color[3];
        }
        cmd19 = D_80110634++;
        cmd19->words.w0 = 0xD7000000;
        cmd19->words.w1 = 0;
        if (flags & 2) {
            func_80268CE0(0x12);
        } else if (D_800D15E0 == 0) {
            func_80268CE0(0x13);
        } else {
            cmd20 = D_80110634++;
            cmd20->words.w0 = 0xFB000000;
            cmd20->words.w1 = ((u32)D_800D15E4[0] << 24) | (((u32)D_800D15E4[1] & 0xFF) << 16) |
                (((u32)D_800D15E4[2] & 0xFF) << 8) | ((u32)D_800D15E4[3] & 0xFF);
            switch (D_800D15E0) {
            case 1: case 2: func_80268CE0(0x14); break;
            case 3: func_80268CE0(0x15); break;
            case 7: func_80268CE0(0x16); break;
            case 4: case 5: func_80268CE0(0x17); break;
            case 6:
                {
                    Gfx *cmd = D_80110634++;
                    cmd->words.w0 = 0xFA000000;
                    cmd->words.w1 = ((u32)material->color[0] << 24) |
                        ((u32)material->color[1] << 16) | ((u32)material->color[2] << 8) |
                        ((u32)D_800D15E4[4] & 0xFF);
                }
                    func_80268CE0(0x11);
                break;
            }
        }
    }
    if ((flags & 0x100) || D_800D15E0 == 1 || D_800D15E0 == 4 || D_800D15E0 == 6) {
        if (D_800D15E0 == 0) {
            renderMode = 3;
            if (!(flags & 0x1000)) {
                renderMode = 1;
                if (flags & 0x200) {
                    renderMode = 4;
                }
            }
        } else {
            renderMode = flags & 0x1000 ? 3 : 5;
        }
    } else if (flags & 0x80) {
        func_8026925C(6);
    } else {
        renderMode = 7;
        if (!(flags & 0x200)) {
            if (D_800D15C8 != 0) {
                renderMode = D_800D15CC != 0 ? 8 : 9;
            } else {
                renderMode = D_800D15CC != 0 ? 0xA : 0xB;
            }
        }
    }
    if (renderMode != -1) {
        func_8026925C(renderMode);
    }
    geometry = 0x260404;
    if (flags & 0x1000) {
        geometry |= D_800D15D4;
    }
    cmd22 = D_80110634++;
    cmd22->words.w0 = (~geometry & 0xFFFFFF) | 0xD9000000;
    cmd22->words.w1 = 0;
    geometry = 0;
    if (!(flags & 0x1000)) {
        geometry = D_800D15D4;
    }
    if (D_800D15E0 == 7) {
        geometry |= 0x20000;
    }
    if (!(flags & 0x42)) {
        geometry |= 0x20000;
    }
    geometry |= 0x200004;
    if (!(flags & 4)) {
        geometry |= 0x400;
    }
    if (flags & 0x10) {
        geometry |= 0x60000;
    }
    cmd23 = D_80110634++;
    cmd23->words.w0 = 0xD9FFFFFF;
    cmd23->words.w1 = geometry;
    return 1;
}
