#ifndef RAGEWARS_RW_VALUE_NODE_H
#define RAGEWARS_RW_VALUE_NODE_H

/* Word-plus-float record, recovered independently in 3 landed files. */
typedef struct RWValueNode {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ f32 value;
} RWValueNode;

#endif
