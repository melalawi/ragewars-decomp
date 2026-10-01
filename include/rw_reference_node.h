#ifndef RAGEWARS_RW_REFERENCE_NODE_H
#define RAGEWARS_RW_REFERENCE_NODE_H

/* Reference-counted node metadata, recovered independently in 6 landed files. */
typedef struct RWReferenceNode {
    /* 0x00 */ s32 field0;
    /* 0x04 */ s32 field4;
    /* 0x08 */ s32 references;
    /* 0x0C */ s32 flags;
} RWReferenceNode;

#endif
