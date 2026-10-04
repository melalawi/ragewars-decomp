#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "types.h"









extern f32 D_800C21C0_de[];
extern char D_8011D8D0;

extern void func_8024E79C_de(void *actor, Triple input, Triple *output,
                          s32 *actorField, s32 unused0, s32 unused1);
extern void func_8024796C_de(Vector4f *result, CActor_t *actor);
extern s32 func_8024BE80_de(CActor_t *actor);
extern void func_8024F478_de(Vector4f *result, CActor_t *actor);
extern void func_802800C0_de(void *system, CActor_t *source, CActor_t *owner,
                          s32 arg3, s32 eventValue, s32 arg1,
                          Vec3 position, Vector4f rotation,
                          Triple input, s32 arg16, s32 arg17, s32 mode);

void func_80216288_de(CActor_t *actor, s32 arg1, Triple input) {
    Triple copiedInput;
    Vec3 position;
    Vector4f rotation;
    s32 actorField;
    CActor_t *typedActor;
    s32 mode;
    s32 eventValue;
    s32 value;

    typedActor = 0;
    mode = 1;
    func_8024E79C_de(actor, input, &copiedInput, &actorField, 0, mode);
    eventValue = 0;

    switch (actor->type) {
    case 0:
    case 2:
        position.x = position.y = position.z = 0.0f;
        rotation.x = rotation.y = rotation.z = 0.0f;
        rotation.w = D_800C21C0_de[1];
        break;

    case 1:
        typedActor = actor;
        position = typedActor->position;
        func_8024796C_de(&rotation, typedActor);
        eventValue = typedActor->eventValue;
        if (func_8024BE80_de(typedActor) == 5) {
            mode = 3;
        }
        break;

    case 3:
        position = actor->position;
        func_8024F478_de(&rotation, actor);
        break;
    }

    func_802800C0_de(&D_8011D8D0, actor, actor, 0, eventValue, arg1,
                  position, rotation, copiedInput, 0, -1, mode);

    if ((actor->type == 1) && (typedActor->objectId == 0x40C)) {
        value = typedActor->eventCount - 1;
        if (value < 0) {
            value = 0;
        }
        typedActor->eventCount = value;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C20F4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C72B4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2464_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C24A4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C21C4_4 = 1.0f;
#endif
