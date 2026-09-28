/* Splits a path into drive, directory, file name and extension like _splitpath: a leading "X:" goes to the drive, everything through the last '/' or '\\' to the directory, the rest up to the last '.' at or after that point to the name and from the '.' on to the extension (or all of it to the name when there is none), each copied with a bounded strncpy and terminated, and any missing part cleared. */
#include "basetypes.h"

static inline s32 path_length(u8 *s) {
    u8 *p = s;

    while (*p++) {
    }
    return p - s - 1;
}

static inline void copy_part(u8 *d, u8 *s, s32 n) {
    if (n != 0) {
    copy:
        if ((*d++ = *s++) != 0) {
            if (--n != 0) {
                goto copy;
            }
        }
        if (n != 0) {
            while (--n != 0) {
                *d++ = 0;
            }
        }
    }
}

void func_802A0888(u8 *path, u8 *drive, u8 *dir, u8 *name, u8 *ext) {
    u8 *dot;
    u8 *slash;
    u8 *p;
    s32 n;

    slash = 0;
    dot = 0;
    if (path_length(path) > 0 && path[1] == ':') {
        if (drive != 0) {
            copy_part(drive, path, 2);
            drive[2] = 0;
        }
        path += 2;
    } else if (drive != 0) {
        *drive = 0;
    }
    for (p = path; *p != 0; p++) {
        if (*p == '/' || *p == '\\') {
            slash = p + 1;
        } else if (*p == '.') {
            dot = p;
        }
    }
    if (slash != 0) {
        if (dir != 0) {
            n = slash - path;
            if (n >= 0x100) {
                n = 0xFF;
            }
            copy_part(dir, path, n);
            dir[n] = 0;
        }
        path = slash;
    } else if (dir != 0) {
        *dir = 0;
    }
    if (dot != 0 && dot >= path) {
        if (name != 0) {
            n = dot - path;
            if (n >= 0x100) {
                n = 0xFF;
            }
            copy_part(name, path, n);
            name[n] = 0;
        }
        if (ext != 0) {
            n = p - dot;
            if (n >= 0x100) {
                n = 0xFF;
            }
            copy_part(ext, dot, n);
            ext[n] = 0;
        }
    } else {
        if (name != 0) {
            n = p - path;
            if (n >= 0x101) {
                n = 0x100;
            }
            copy_part(name, path, n);
            name[n] = 0;
        }
        if (ext != 0) {
            *ext = 0;
        }
    }
}
