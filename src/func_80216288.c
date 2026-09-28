#include "basetypes.h"

typedef struct CVector3_t {
    f32 x;
    f32 y;
    f32 z;
} CVector3;

typedef struct CQuaternion_t {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} CQuaternion;

typedef struct CActor_t {
    u8 type;
    u8 pad001[0x1B];
    CVector3 position;
    u8 pad028[0xBC];
    u16 objectId;
    u8 pad0E6[0x10A];
    s32 eventValue;
    u8 pad1F4[0xA8];
    s32 eventCount;
} CActor;

typedef struct CTriple_t {
    s32 x;
    s32 y;
    s32 z;
} CTriple;

extern f32 D_800C72B0[];
extern char D_80121990;

extern void func_8024E78C(void *actor, CTriple input, CTriple *output,
                          s32 *actorField, s32 unused0, s32 unused1);
extern void func_8024795C(CQuaternion *result, CActor *actor);
extern s32 func_8024BE70(CActor *actor);
extern void func_8024F468(CQuaternion *result, CActor *actor);
extern void func_80280094(void *system, CActor *source, CActor *owner,
                          s32 arg3, s32 eventValue, s32 arg1,
                          CVector3 position, CQuaternion rotation,
                          CTriple input, s32 arg16, s32 arg17, s32 mode);

void func_80216288(CActor *actor, s32 arg1, CTriple input) {
    CTriple copiedInput;
    CVector3 position;
    CQuaternion rotation;
    s32 actorField;
    CActor *typedActor;
    s32 mode;
    s32 eventValue;
    s32 value;

    typedActor = 0;
    mode = 1;
    func_8024E78C(actor, input, &copiedInput, &actorField, 0, mode);
    eventValue = 0;

    switch (actor->type) {
    case 0:
    case 2:
        position.x = position.y = position.z = 0.0f;
        rotation.x = rotation.y = rotation.z = 0.0f;
        rotation.w = D_800C72B0[1];
        break;

    case 1:
        typedActor = actor;
        position = typedActor->position;
        func_8024795C(&rotation, typedActor);
        eventValue = typedActor->eventValue;
        if (func_8024BE70(typedActor) == 5) {
            mode = 3;
        }
        break;

    case 3:
        position = actor->position;
        func_8024F468(&rotation, actor);
        break;
    }

    func_80280094(&D_80121990, actor, actor, 0, eventValue, arg1,
                  position, rotation, copiedInput, 0, -1, mode);

    if ((actor->type == 1) && (typedActor->objectId == 0x40C)) {
        value = typedActor->eventCount - 1;
        if (value < 0) {
            value = 0;
        }
        typedActor->eventCount = value;
    }
}
