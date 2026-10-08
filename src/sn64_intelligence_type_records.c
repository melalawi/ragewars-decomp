#include "sn64_type_records.h"

#if defined(VERSION_US_REV1)
/* Serialized symbol/type definitions: ROM 0xF8E03..0xFDDF0,
 * resident VMA 0x800F8203. Boundary fields continue in
 * adjacent inventory spans; this object owns only this assigned interval. */
typedef struct Sn64IntelligenceTypeRecords {
    /* ROM 0xF8E03: CGeneratorIntelligence_t / CGeneratorIntelligence_t */
    struct {
        Sn64DefinitionHeaderTail header;
        unsigned char name_length;
        char name[24];
    } r0_CGeneratorIntelligence_t_CGeneratorIntelligence_t;
    /* ROM 0xF8E28: CGeneratorIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r1_CGeneratorIntelligence_t_m_dwFlags;
    /* ROM 0xF8E3F: CGeneratorIntelligence_t / m_Type */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r2_CGeneratorIntelligence_t_m_Type;
    /* ROM 0xF8E53: CGeneratorIntelligence_t / m_FiniteTotal */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r3_CGeneratorIntelligence_t_m_FiniteTotal;
    /* ROM 0xF8E6E: CGeneratorIntelligence_t / m_MaxActive */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r4_CGeneratorIntelligence_t_m_MaxActive;
    /* ROM 0xF8E87: CGeneratorIntelligence_t / m_IntervalTime1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r5_CGeneratorIntelligence_t_m_IntervalTime1;
    /* ROM 0xF8EA4: CGeneratorIntelligence_t / m_IntervalTime2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r6_CGeneratorIntelligence_t_m_IntervalTime2;
    /* ROM 0xF8EC1: CGeneratorIntelligence_t / m_ObjectIndex */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r7_CGeneratorIntelligence_t_m_ObjectIndex;
    /* ROM 0xF8EDC: CGeneratorIntelligence_t / m_VariationIndex */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r8_CGeneratorIntelligence_t_m_VariationIndex;
    /* ROM 0xF8EFA: CGeneratorIntelligence_t / m_ScaleX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r9_CGeneratorIntelligence_t_m_ScaleX;
    /* ROM 0xF8F10: CGeneratorIntelligence_t / m_ScaleY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r10_CGeneratorIntelligence_t_m_ScaleY;
    /* ROM 0xF8F26: CGeneratorIntelligence_t / m_ScaleZ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r11_CGeneratorIntelligence_t_m_ScaleZ;
    /* ROM 0xF8F3C: CGeneratorIntelligence_t / m_ParticleType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r12_CGeneratorIntelligence_t_m_ParticleType;
    /* ROM 0xF8F58: CGeneratorIntelligence_t / m_Unused */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r13_CGeneratorIntelligence_t_m_Unused;
    /* ROM 0xF8F6E: CGeneratorIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[4];
    } r14_CGeneratorIntelligence_t__eos;
    /* ROM 0xF8F9B: CGeneratorIntelligence_t / CGeneratorIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[22];
    } r15_CGeneratorIntelligence_t_CGeneratorIntelligence;
    /* ROM 0xF8FDA: CTurretIntelligence_t / CTurretIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r16_CTurretIntelligence_t_CTurretIntelligence_t;
    /* ROM 0xF8FFD: CTurretIntelligence_t / m_Common */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[26];
        unsigned char name_length;
        char name[8];
    } r17_CTurretIntelligence_t_m_Common;
    /* ROM 0xF9030: CTurretIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r18_CTurretIntelligence_t_m_dwFlags;
    /* ROM 0xF9047: CTurretIntelligence_t / m_GunNode */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r19_CTurretIntelligence_t_m_GunNode;
    /* ROM 0xF905E: CTurretIntelligence_t / m_RotNode */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r20_CTurretIntelligence_t_m_RotNode;
    /* ROM 0xF9075: CTurretIntelligence_t / m_RotSpeed */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r21_CTurretIntelligence_t_m_RotSpeed;
    /* ROM 0xF908D: CTurretIntelligence_t / m_RotLimit */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r22_CTurretIntelligence_t_m_RotLimit;
    /* ROM 0xF90A5: CTurretIntelligence_t / m_SightRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r23_CTurretIntelligence_t_m_SightRadius;
    /* ROM 0xF90C0: CTurretIntelligence_t / m_SightAngle */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r24_CTurretIntelligence_t_m_SightAngle;
    /* ROM 0xF90DA: CTurretIntelligence_t / m_FireRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r25_CTurretIntelligence_t_m_FireRadius;
    /* ROM 0xF90F4: CTurretIntelligence_t / m_FireAngle */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r26_CTurretIntelligence_t_m_FireAngle;
    /* ROM 0xF910D: CTurretIntelligence_t / m_VertDist */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r27_CTurretIntelligence_t_m_VertDist;
    /* ROM 0xF9125: CTurretIntelligence_t / m_HorizDist */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r28_CTurretIntelligence_t_m_HorizDist;
    /* ROM 0xF913E: CTurretIntelligence_t / m_HorizDir */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r29_CTurretIntelligence_t_m_HorizDir;
    /* ROM 0xF9156: CTurretIntelligence_t / m_MoveSpeed */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r30_CTurretIntelligence_t_m_MoveSpeed;
    /* ROM 0xF916F: CTurretIntelligence_t / m_StartOffset */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r31_CTurretIntelligence_t_m_StartOffset;
    /* ROM 0xF918A: CTurretIntelligence_t / m_TargetVisibleMotionType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[25];
    } r32_CTurretIntelligence_t_m_TargetVisibleMotionType;
    /* ROM 0xF91B1: CTurretIntelligence_t / m_TargetNotVisibleMotionType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[28];
    } r33_CTurretIntelligence_t_m_TargetNotVisibleMotionType;
    /* ROM 0xF91DB: CTurretIntelligence_t / pad1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r34_CTurretIntelligence_t_pad1;
    /* ROM 0xF91ED: CTurretIntelligence_t / pad2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r35_CTurretIntelligence_t_pad2;
    /* ROM 0xF91FF: CTurretIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r36_CTurretIntelligence_t__eos;
    /* ROM 0xF9229: CTurretIntelligence_t / CTurretIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r37_CTurretIntelligence_t_CTurretIntelligence;
    /* ROM 0xF9262: CThrowableIntelligence_t / CThrowableIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[24];
    } r38_CThrowableIntelligence_t_CThrowableIntelligence_t;
    /* ROM 0xF9288: CThrowableIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r39_CThrowableIntelligence_t_m_dwFlags;
    /* ROM 0xF929F: CThrowableIntelligence_t / m_CollisionRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r40_CThrowableIntelligence_t_m_CollisionRadius;
    /* ROM 0xF92BE: CThrowableIntelligence_t / m_CollisionHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r41_CThrowableIntelligence_t_m_CollisionHeight;
    /* ROM 0xF92DD: CThrowableIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[4];
    } r42_CThrowableIntelligence_t__eos;
    /* ROM 0xF930A: CThrowableIntelligence_t / CThrowableIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[22];
    } r43_CThrowableIntelligence_t_CThrowableIntelligence;
    /* ROM 0xF9349: CDoorIntelligence_t / CDoorIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r44_CDoorIntelligence_t_CDoorIntelligence_t;
    /* ROM 0xF936A: CDoorIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r45_CDoorIntelligence_t_m_dwFlags;
    /* ROM 0xF9381: CDoorIntelligence_t / m_OpenDuration */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r46_CDoorIntelligence_t_m_OpenDuration;
    /* ROM 0xF939D: CDoorIntelligence_t / m_OpenDoorEvent */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r47_CDoorIntelligence_t_m_OpenDoorEvent;
    /* ROM 0xF93BA: CDoorIntelligence_t / m_CloseDoorEvent */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r48_CDoorIntelligence_t_m_CloseDoorEvent;
    /* ROM 0xF93D8: CDoorIntelligence_t / pad1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r49_CDoorIntelligence_t_pad1;
    /* ROM 0xF93EA: CDoorIntelligence_t / pad2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r50_CDoorIntelligence_t_pad2;
    /* ROM 0xF93FC: CDoorIntelligence_t / m_AutoOpenRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r51_CDoorIntelligence_t_m_AutoOpenRadius;
    /* ROM 0xF941A: CDoorIntelligence_t / m_AutoCloseRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r52_CDoorIntelligence_t_m_AutoCloseRadius;
    /* ROM 0xF9439: CDoorIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } r53_CDoorIntelligence_t__eos;
    /* ROM 0xF9461: CDoorIntelligence_t / CDoorIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[17];
    } r54_CDoorIntelligence_t_CDoorIntelligence;
    /* ROM 0xF9496: CDestructibleIntelligence_t / CDestructibleIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[27];
    } r55_CDestructibleIntelligence_t_CDestructibleIntelligence_t;
    /* ROM 0xF94BF: CDestructibleIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r56_CDestructibleIntelligence_t_m_dwFlags;
    /* ROM 0xF94D6: CDestructibleIntelligence_t / m_Health */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r57_CDestructibleIntelligence_t_m_Health;
    /* ROM 0xF94EC: CDestructibleIntelligence_t / pad */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[3];
    } r58_CDestructibleIntelligence_t_pad;
    /* ROM 0xF94FD: CDestructibleIntelligence_t / m_CollisionRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r59_CDestructibleIntelligence_t_m_CollisionRadius;
    /* ROM 0xF951C: CDestructibleIntelligence_t / m_CollisionHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r60_CDestructibleIntelligence_t_m_CollisionHeight;
    /* ROM 0xF953B: CDestructibleIntelligence_t / m_IdleAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r61_CDestructibleIntelligence_t_m_IdleAnim;
    /* ROM 0xF9553: CDestructibleIntelligence_t / m_AutoGoRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r62_CDestructibleIntelligence_t_m_AutoGoRadius;
    /* ROM 0xF956F: CDestructibleIntelligence_t / m_GoAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r63_CDestructibleIntelligence_t_m_GoAnim;
    /* ROM 0xF9585: CDestructibleIntelligence_t / m_GoParticleEffect */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r64_CDestructibleIntelligence_t_m_GoParticleEffect;
    /* ROM 0xF95A5: CDestructibleIntelligence_t / m_GoSoundEffect */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r65_CDestructibleIntelligence_t_m_GoSoundEffect;
    /* ROM 0xF95C2: CDestructibleIntelligence_t / m_dwGoPickupsFlag1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r66_CDestructibleIntelligence_t_m_dwGoPickupsFlag1;
    /* ROM 0xF95E2: CDestructibleIntelligence_t / m_dwGoPickupsFlag2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r67_CDestructibleIntelligence_t_m_dwGoPickupsFlag2;
    /* ROM 0xF9602: CDestructibleIntelligence_t / m_GoDeathAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r68_CDestructibleIntelligence_t_m_GoDeathAnim;
    /* ROM 0xF961D: CDestructibleIntelligence_t / m_GoDeathParticleEffect */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[23];
    } r69_CDestructibleIntelligence_t_m_GoDeathParticleEffect;
    /* ROM 0xF9642: CDestructibleIntelligence_t / m_GoDeathSoundEffect */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r70_CDestructibleIntelligence_t_m_GoDeathSoundEffect;
    /* ROM 0xF9664: CDestructibleIntelligence_t / m_dwGoDeathPickupsFlag1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[23];
    } r71_CDestructibleIntelligence_t_m_dwGoDeathPickupsFlag1;
    /* ROM 0xF9689: CDestructibleIntelligence_t / m_dwGoDeathPickupsFlag2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[23];
    } r72_CDestructibleIntelligence_t_m_dwGoDeathPickupsFlag2;
    /* ROM 0xF96AE: CDestructibleIntelligence_t / m_TotemMissionDuration */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[22];
    } r73_CDestructibleIntelligence_t_m_TotemMissionDuration;
    /* ROM 0xF96D2: CDestructibleIntelligence_t / m_EnemiesAttackingTurok */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[23];
    } r74_CDestructibleIntelligence_t_m_EnemiesAttackingTurok;
    /* ROM 0xF96F7: CDestructibleIntelligence_t / m_EnemiesToKillToSaveTotem */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[26];
    } r75_CDestructibleIntelligence_t_m_EnemiesToKillToSaveTotem;
    /* ROM 0xF971F: CDestructibleIntelligence_t / m_ModelIndex */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r76_CDestructibleIntelligence_t_m_ModelIndex;
    /* ROM 0xF9740: CDestructibleIntelligence_t / m_ModelFrame */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r77_CDestructibleIntelligence_t_m_ModelFrame;
    /* ROM 0xF9761: CDestructibleIntelligence_t / m_ModelIndexHealthPercentage */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[28];
    } r78_CDestructibleIntelligence_t_m_ModelIndexHealthPercentage;
    /* ROM 0xF9792: CDestructibleIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[27];
        unsigned char name_length;
        char name[4];
    } r79_CDestructibleIntelligence_t__eos;
    /* ROM 0xF97C2: CDestructibleIntelligence_t / CDestructibleIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[27];
        unsigned char name_length;
        char name[25];
    } r80_CDestructibleIntelligence_t_CDestructibleIntelligence;
    /* ROM 0xF9807: CPickupIntelligence_t / CPickupIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r81_CPickupIntelligence_t_CPickupIntelligence_t;
    /* ROM 0xF982A: CPickupIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r82_CPickupIntelligence_t_m_dwFlags;
    /* ROM 0xF9841: CPickupIntelligence_t / m_CollisionRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r83_CPickupIntelligence_t_m_CollisionRadius;
    /* ROM 0xF9860: CPickupIntelligence_t / m_CollisionHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r84_CPickupIntelligence_t_m_CollisionHeight;
    /* ROM 0xF987F: CPickupIntelligence_t / m_Time */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r85_CPickupIntelligence_t_m_Time;
    /* ROM 0xF9893: CPickupIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r86_CPickupIntelligence_t__eos;
    /* ROM 0xF98BD: CPickupIntelligence_t / CPickupIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r87_CPickupIntelligence_t_CPickupIntelligence;
    /* ROM 0xF98F6: CInteractiveAnimIntelligence_t / CInteractiveAnimIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[30];
    } r88_CInteractiveAnimIntelligence_t_CInteractiveAnimIntelligence_t;
    /* ROM 0xF9922: CInteractiveAnimIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r89_CInteractiveAnimIntelligence_t_m_dwFlags;
    /* ROM 0xF9939: CInteractiveAnimIntelligence_t / m_StartAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r90_CInteractiveAnimIntelligence_t_m_StartAnim;
    /* ROM 0xF9952: CInteractiveAnimIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[30];
        unsigned char name_length;
        char name[4];
    } r91_CInteractiveAnimIntelligence_t__eos;
    /* ROM 0xF9985: CInteractiveAnimIntelligence_t / CInteractiveAnimIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[30];
        unsigned char name_length;
        char name[28];
    } r92_CInteractiveAnimIntelligence_t_CInteractiveAnimIntelligence;
    /* ROM 0xF99D0: CActionIntelligence_t / CActionIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r93_CActionIntelligence_t_CActionIntelligence_t;
    /* ROM 0xF99F3: CActionIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r94_CActionIntelligence_t_m_dwFlags;
    /* ROM 0xF9A0A: CActionIntelligence_t / m_CollisionRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r95_CActionIntelligence_t_m_CollisionRadius;
    /* ROM 0xF9A29: CActionIntelligence_t / m_CollisionHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r96_CActionIntelligence_t_m_CollisionHeight;
    /* ROM 0xF9A48: CActionIntelligence_t / m_IdleAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r97_CActionIntelligence_t_m_IdleAnim;
    /* ROM 0xF9A60: CActionIntelligence_t / m_IdleModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r98_CActionIntelligence_t_m_IdleModel;
    /* ROM 0xF9A79: CActionIntelligence_t / m_IdleTexture */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r99_CActionIntelligence_t_m_IdleTexture;
    /* ROM 0xF9A94: CActionIntelligence_t / m_AutoGoRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r100_CActionIntelligence_t_m_AutoGoRadius;
    /* ROM 0xF9AB0: CActionIntelligence_t / m_GoAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r101_CActionIntelligence_t_m_GoAnim;
    /* ROM 0xF9AC6: CActionIntelligence_t / m_GoPickupNeeded */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r102_CActionIntelligence_t_m_GoPickupNeeded;
    /* ROM 0xF9AE4: CActionIntelligence_t / m_GoPickupNeededText */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r103_CActionIntelligence_t_m_GoPickupNeededText;
    /* ROM 0xF9B06: CActionIntelligence_t / m_GoModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r104_CActionIntelligence_t_m_GoModel;
    /* ROM 0xF9B1D: CActionIntelligence_t / m_GoTexture */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r105_CActionIntelligence_t_m_GoTexture;
    /* ROM 0xF9B36: CActionIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r106_CActionIntelligence_t__eos;
    /* ROM 0xF9B60: CActionIntelligence_t / CActionIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r107_CActionIntelligence_t_CActionIntelligence;
    /* ROM 0xF9B99: CPlayerIntelligence_t / CPlayerIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r108_CPlayerIntelligence_t_CPlayerIntelligence_t;
    /* ROM 0xF9BBC: CPlayerIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r109_CPlayerIntelligence_t_m_dwFlags;
    /* ROM 0xF9BD3: CPlayerIntelligence_t / m_StartHealth */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r110_CPlayerIntelligence_t_m_StartHealth;
    /* ROM 0xF9BEE: CPlayerIntelligence_t / m_SpeedScaler */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r111_CPlayerIntelligence_t_m_SpeedScaler;
    /* ROM 0xF9C09: CPlayerIntelligence_t / m_JumpScaler */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r112_CPlayerIntelligence_t_m_JumpScaler;
    /* ROM 0xF9C23: CPlayerIntelligence_t / m_HealHealth */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r113_CPlayerIntelligence_t_m_HealHealth;
    /* ROM 0xF9C3D: CPlayerIntelligence_t / m_Aggressiveness */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r114_CPlayerIntelligence_t_m_Aggressiveness;
    /* ROM 0xF9C5B: CPlayerIntelligence_t / m_Accuracy */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r115_CPlayerIntelligence_t_m_Accuracy;
    /* ROM 0xF9C73: CPlayerIntelligence_t / m_Awareness */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r116_CPlayerIntelligence_t_m_Awareness;
    /* ROM 0xF9C8C: CPlayerIntelligence_t / m_Evasiveness */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r117_CPlayerIntelligence_t_m_Evasiveness;
    /* ROM 0xF9CA7: CPlayerIntelligence_t / m_SeekKillZone */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r118_CPlayerIntelligence_t_m_SeekKillZone;
    /* ROM 0xF9CC3: CPlayerIntelligence_t / m_AvoidDeathZone */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r119_CPlayerIntelligence_t_m_AvoidDeathZone;
    /* ROM 0xF9CE1: CPlayerIntelligence_t / m_CloseAttackComfort */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r120_CPlayerIntelligence_t_m_CloseAttackComfort;
    /* ROM 0xF9D03: CPlayerIntelligence_t / m_MediumAttackComfort */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r121_CPlayerIntelligence_t_m_MediumAttackComfort;
    /* ROM 0xF9D26: CPlayerIntelligence_t / m_FarAttackComfort */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r122_CPlayerIntelligence_t_m_FarAttackComfort;
    /* ROM 0xF9D46: CPlayerIntelligence_t / m_WeaponList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r123_CPlayerIntelligence_t_m_WeaponList;
    /* ROM 0xF9D67: CPlayerIntelligence_t / m_WeaponAccuracy */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[16];
    } r124_CPlayerIntelligence_t_m_WeaponAccuracy;
    /* ROM 0xF9D8C: CPlayerIntelligence_t / m_WeaponCloseList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[17];
    } r125_CPlayerIntelligence_t_m_WeaponCloseList;
    /* ROM 0xF9DB2: CPlayerIntelligence_t / m_WeaponMediumList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[18];
    } r126_CPlayerIntelligence_t_m_WeaponMediumList;
    /* ROM 0xF9DD9: CPlayerIntelligence_t / m_WeaponFarList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[15];
    } r127_CPlayerIntelligence_t_m_WeaponFarList;
    /* ROM 0xF9DFD: CPlayerIntelligence_t / m_CollisionRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r128_CPlayerIntelligence_t_m_CollisionRadius;
    /* ROM 0xF9E1C: CPlayerIntelligence_t / m_CollisionWallRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r129_CPlayerIntelligence_t_m_CollisionWallRadius;
    /* ROM 0xF9E3F: CPlayerIntelligence_t / m_CollisionHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r130_CPlayerIntelligence_t_m_CollisionHeight;
    /* ROM 0xF9E5E: CPlayerIntelligence_t / m_CollisionDeadHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r131_CPlayerIntelligence_t_m_CollisionDeadHeight;
    /* ROM 0xF9E81: CPlayerIntelligence_t / m_ScaleX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r132_CPlayerIntelligence_t_m_ScaleX;
    /* ROM 0xF9E97: CPlayerIntelligence_t / m_ScaleY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r133_CPlayerIntelligence_t_m_ScaleY;
    /* ROM 0xF9EAD: CPlayerIntelligence_t / m_ScaleZ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r134_CPlayerIntelligence_t_m_ScaleZ;
    /* ROM 0xF9EC3: CPlayerIntelligence_t / m_AmmoMax */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[9];
    } r135_CPlayerIntelligence_t_m_AmmoMax;
    /* ROM 0xF9EE1: CPlayerIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r136_CPlayerIntelligence_t__eos;
    /* ROM 0xF9F0B: CPlayerIntelligence_t / CPlayerIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r137_CPlayerIntelligence_t_CPlayerIntelligence;
    /* ROM 0xF9F44: CMorpherIntelligence_t / CMorpherIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[22];
    } r138_CMorpherIntelligence_t_CMorpherIntelligence_t;
    /* ROM 0xF9F68: CMorpherIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r139_CMorpherIntelligence_t_m_dwFlags;
    /* ROM 0xF9F7F: CMorpherIntelligence_t / m_CollisionRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r140_CMorpherIntelligence_t_m_CollisionRadius;
    /* ROM 0xF9F9E: CMorpherIntelligence_t / m_CollisionHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r141_CMorpherIntelligence_t_m_CollisionHeight;
    /* ROM 0xF9FBD: CMorpherIntelligence_t / m_AnimSpeed */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r142_CMorpherIntelligence_t_m_AnimSpeed;
    /* ROM 0xF9FD6: CMorpherIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[22];
        unsigned char name_length;
        char name[4];
    } r143_CMorpherIntelligence_t__eos;
    /* ROM 0xFA001: CMorpherIntelligence_t / CMorpherIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[22];
        unsigned char name_length;
        char name[20];
    } r144_CMorpherIntelligence_t_CMorpherIntelligence;
    /* ROM 0xFA03C: CWarpEntranceIntelligence_t / CWarpEntranceIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[27];
    } r145_CWarpEntranceIntelligence_t_CWarpEntranceIntelligence_t;
    /* ROM 0xFA065: CWarpEntranceIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r146_CWarpEntranceIntelligence_t_m_dwFlags;
    /* ROM 0xFA07C: CWarpEntranceIntelligence_t / m_CollisionRadius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r147_CWarpEntranceIntelligence_t_m_CollisionRadius;
    /* ROM 0xFA09B: CWarpEntranceIntelligence_t / m_CollisionHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r148_CWarpEntranceIntelligence_t_m_CollisionHeight;
    /* ROM 0xFA0BA: CWarpEntranceIntelligence_t / m_DestinationID */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r149_CWarpEntranceIntelligence_t_m_DestinationID;
    /* ROM 0xFA0D7: CWarpEntranceIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[27];
        unsigned char name_length;
        char name[4];
    } r150_CWarpEntranceIntelligence_t__eos;
    /* ROM 0xFA107: CWarpEntranceIntelligence_t / CWarpEntranceIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[27];
        unsigned char name_length;
        char name[25];
    } r151_CWarpEntranceIntelligence_t_CWarpEntranceIntelligence;
    /* ROM 0xFA14C: CWeatherGeneratorIntelligence_t / CWeatherGeneratorIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[31];
    } r152_CWeatherGeneratorIntelligence_t_CWeatherGeneratorIntelligence_t;
    /* ROM 0xFA179: CWeatherGeneratorIntelligence_t / m_wFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r153_CWeatherGeneratorIntelligence_t_m_wFlags;
    /* ROM 0xFA18F: CWeatherGeneratorIntelligence_t / m_NumParticles */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r154_CWeatherGeneratorIntelligence_t_m_NumParticles;
    /* ROM 0xFA1AB: CWeatherGeneratorIntelligence_t / m_Radius */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r155_CWeatherGeneratorIntelligence_t_m_Radius;
    /* ROM 0xFA1C1: CWeatherGeneratorIntelligence_t / m_StartHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r156_CWeatherGeneratorIntelligence_t_m_StartHeight;
    /* ROM 0xFA1DC: CWeatherGeneratorIntelligence_t / m_MinFallVelocity */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r157_CWeatherGeneratorIntelligence_t_m_MinFallVelocity;
    /* ROM 0xFA1FB: CWeatherGeneratorIntelligence_t / m_MaxFallVelocity */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r158_CWeatherGeneratorIntelligence_t_m_MaxFallVelocity;
    /* ROM 0xFA21A: CWeatherGeneratorIntelligence_t / m_SlopeX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r159_CWeatherGeneratorIntelligence_t_m_SlopeX;
    /* ROM 0xFA230: CWeatherGeneratorIntelligence_t / m_SlopeZ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r160_CWeatherGeneratorIntelligence_t_m_SlopeZ;
    /* ROM 0xFA246: CWeatherGeneratorIntelligence_t / m_MinLength */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r161_CWeatherGeneratorIntelligence_t_m_MinLength;
    /* ROM 0xFA25F: CWeatherGeneratorIntelligence_t / m_MaxLength */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r162_CWeatherGeneratorIntelligence_t_m_MaxLength;
    /* ROM 0xFA278: CWeatherGeneratorIntelligence_t / m_UpperColour */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[13];
    } r163_CWeatherGeneratorIntelligence_t_m_UpperColour;
    /* ROM 0xFA29A: CWeatherGeneratorIntelligence_t / m_LowerColour */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[13];
    } r164_CWeatherGeneratorIntelligence_t_m_LowerColour;
    /* ROM 0xFA2BC: CWeatherGeneratorIntelligence_t / m_nTexture */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r165_CWeatherGeneratorIntelligence_t_m_nTexture;
    /* ROM 0xFA2D4: CWeatherGeneratorIntelligence_t / m_MinWidth */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r166_CWeatherGeneratorIntelligence_t_m_MinWidth;
    /* ROM 0xFA2EC: CWeatherGeneratorIntelligence_t / m_MaxWidth */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r167_CWeatherGeneratorIntelligence_t_m_MaxWidth;
    /* ROM 0xFA304: CWeatherGeneratorIntelligence_t / m_Timeout */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r168_CWeatherGeneratorIntelligence_t_m_Timeout;
    /* ROM 0xFA31B: CWeatherGeneratorIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[31];
        unsigned char name_length;
        char name[4];
    } r169_CWeatherGeneratorIntelligence_t__eos;
    /* ROM 0xFA34F: CWeatherGeneratorIntelligence_t / CWeatherGeneratorIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[31];
        unsigned char name_length;
        char name[29];
    } r170_CWeatherGeneratorIntelligence_t_CWeatherGeneratorIntelligence;
    /* ROM 0xFA39C: CWeatherGeneratorIntelligence_t / .134fake */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r171_CWeatherGeneratorIntelligence_t__134fake;
    /* ROM 0xFA3B2: CWeatherGeneratorIntelligence_t / Static */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[6];
    } r172_CWeatherGeneratorIntelligence_t_Static;
    /* ROM 0xFA3DE: CWeatherGeneratorIntelligence_t / Enemy */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[5];
    } r173_CWeatherGeneratorIntelligence_t_Enemy;
    /* ROM 0xFA408: CWeatherGeneratorIntelligence_t / Platform */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[23];
        unsigned char name_length;
        char name[8];
    } r174_CWeatherGeneratorIntelligence_t_Platform;
    /* ROM 0xFA438: CWeatherGeneratorIntelligence_t / Generator */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[9];
    } r175_CWeatherGeneratorIntelligence_t_Generator;
    /* ROM 0xFA46A: CWeatherGeneratorIntelligence_t / Turret */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[6];
    } r176_CWeatherGeneratorIntelligence_t_Turret;
    /* ROM 0xFA496: CWeatherGeneratorIntelligence_t / Throwable */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[9];
    } r177_CWeatherGeneratorIntelligence_t_Throwable;
    /* ROM 0xFA4C8: CWeatherGeneratorIntelligence_t / Door */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } r178_CWeatherGeneratorIntelligence_t_Door;
    /* ROM 0xFA4F0: CWeatherGeneratorIntelligence_t / Destructible */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[27];
        unsigned char name_length;
        char name[12];
    } r179_CWeatherGeneratorIntelligence_t_Destructible;
    /* ROM 0xFA528: CWeatherGeneratorIntelligence_t / Pickup */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[6];
    } r180_CWeatherGeneratorIntelligence_t_Pickup;
    /* ROM 0xFA554: CWeatherGeneratorIntelligence_t / InteractiveAnim */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[30];
        unsigned char name_length;
        char name[15];
    } r181_CWeatherGeneratorIntelligence_t_InteractiveAnim;
    /* ROM 0xFA592: CWeatherGeneratorIntelligence_t / Action */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[6];
    } r182_CWeatherGeneratorIntelligence_t_Action;
    /* ROM 0xFA5BE: CWeatherGeneratorIntelligence_t / Player */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[6];
    } r183_CWeatherGeneratorIntelligence_t_Player;
    /* ROM 0xFA5EA: CWeatherGeneratorIntelligence_t / Morpher */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[22];
        unsigned char name_length;
        char name[7];
    } r184_CWeatherGeneratorIntelligence_t_Morpher;
    /* ROM 0xFA618: CWeatherGeneratorIntelligence_t / WarpEntrance */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[27];
        unsigned char name_length;
        char name[12];
    } r185_CWeatherGeneratorIntelligence_t_WarpEntrance;
    /* ROM 0xFA650: CWeatherGeneratorIntelligence_t / WeatherGenerator */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[31];
        unsigned char name_length;
        char name[16];
    } r186_CWeatherGeneratorIntelligence_t_WeatherGenerator;
    /* ROM 0xFA690: CWeatherGeneratorIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[4];
    } r187_CWeatherGeneratorIntelligence_t__eos;
    /* ROM 0xFA6AD: CIntelligence_t / CIntelligence_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r188_CIntelligence_t_CIntelligence_t;
    /* ROM 0xFA6CA: CIntelligence_t / m_nType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r189_CIntelligence_t_m_nType;
    /* ROM 0xFA6DF: CIntelligence_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r190_CIntelligence_t_m_dwFlags;
    /* ROM 0xFA6F6: CIntelligence_t / m_LODDist2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r191_CIntelligence_t_m_LODDist2;
    /* ROM 0xFA70E: CIntelligence_t / m_Id */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r192_CIntelligence_t_m_Id;
    /* ROM 0xFA720: CIntelligence_t / m_nModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r193_CIntelligence_t_m_nModel;
    /* ROM 0xFA736: CIntelligence_t / m_nModel2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r194_CIntelligence_t_m_nModel2;
    /* ROM 0xFA74D: CIntelligence_t / m_nShadowModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r195_CIntelligence_t_m_nShadowModel;
    /* ROM 0xFA769: CIntelligence_t / m_nShadowModel2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r196_CIntelligence_t_m_nShadowModel2;
    /* ROM 0xFA786: CIntelligence_t / m_nTexture */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r197_CIntelligence_t_m_nTexture;
    /* ROM 0xFA79E: CIntelligence_t / pad */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[3];
    } r198_CIntelligence_t_pad;
    /* ROM 0xFA7AF: CIntelligence_t / u */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[1];
    } r199_CIntelligence_t_u;
    /* ROM 0xFA7C9: CIntelligence_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r200_CIntelligence_t__eos;
    /* ROM 0xFA7ED: CIntelligence_t / CIntelligence */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } r201_CIntelligence_t_CIntelligence;
    /* ROM 0xFA81A: Behaviors / Behaviors */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r202_Behaviors_Behaviors;
    /* ROM 0xFA831: Behaviors / GROUND_BEHAVIOR */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r203_Behaviors_GROUND_BEHAVIOR;
    /* ROM 0xFA84E: Behaviors / AIR_BEHAVIOR */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r204_Behaviors_AIR_BEHAVIOR;
    /* ROM 0xFA868: Behaviors / UNDERWATER_BEHAVIOR */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r205_Behaviors_UNDERWATER_BEHAVIOR;
    /* ROM 0xFA889: Behaviors / BEHAVIOR_COUNT */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r206_Behaviors_BEHAVIOR_COUNT;
    /* ROM 0xFA8A5: Behaviors / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[9];
        unsigned char name_length;
        char name[4];
    } r207_Behaviors__eos;
    /* ROM 0xFA8C3: CBehavior_t / CBehavior_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r208_CBehavior_t_CBehavior_t;
    /* ROM 0xFA8DC: CBehavior_t / m_Type */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[6];
    } r209_CBehavior_t_m_Type;
    /* ROM 0xFA8F7: CBehavior_t / m_CurrentBehavior */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r210_CBehavior_t_m_CurrentBehavior;
    /* ROM 0xFA916: CBehavior_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[4];
    } r211_CBehavior_t__eos;
    /* ROM 0xFA936: CBehavior_t / CBehavior */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[9];
    } r212_CBehavior_t_CBehavior;
    /* ROM 0xFA95B: CBehavior_t / .135fake */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r213_CBehavior_t__135fake;
    /* ROM 0xFA971: CBehavior_t / m_float */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r214_CBehavior_t_m_float;
    /* ROM 0xFA986: CBehavior_t / m_int */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[5];
    } r215_CBehavior_t_m_int;
    /* ROM 0xFA999: CBehavior_t / m_pAnimInst */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[11];
    } r216_CBehavior_t_m_pAnimInst;
    /* ROM 0xFA9CA: CBehavior_t / m_DWORD */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r217_CBehavior_t_m_DWORD;
    /* ROM 0xFA9DF: CBehavior_t / m_Bytes */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[7];
    } r218_CBehavior_t_m_Bytes;
    /* ROM 0xFA9FB: CBehavior_t / m_Words */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[7];
    } r219_CBehavior_t_m_Words;
    /* ROM 0xFAA17: CBehavior_t / m_Behavior */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[10];
    } r220_CBehavior_t_m_Behavior;
    /* ROM 0xFAA3D: CBehavior_t / m_BOOL */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r221_CBehavior_t_m_BOOL;
    /* ROM 0xFAA51: CBehavior_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[4];
    } r222_CBehavior_t__eos;
    /* ROM 0xFAA6E: CMiscVar_t / CMiscVar_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r223_CMiscVar_t_CMiscVar_t;
    /* ROM 0xFAA86: CMiscVar_t / u */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[1];
    } r224_CMiscVar_t_u;
    /* ROM 0xFAAA0: CMiscVar_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r225_CMiscVar_t__eos;
    /* ROM 0xFAABF: CMiscVar_t / CMiscVar */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } r226_CMiscVar_t_CMiscVar;
    /* ROM 0xFAAE2: CAI_t / CAI_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[5];
    } r227_CAI_t_CAI_t;
    /* ROM 0xFAAF5: CAI_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r228_CAI_t_m_dwFlags;
    /* ROM 0xFAB0C: CAI_t / m_Health */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r229_CAI_t_m_Health;
    /* ROM 0xFAB22: CAI_t / m_StartHealth */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r230_CAI_t_m_StartHealth;
    /* ROM 0xFAB3D: CAI_t / m_dwModelFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r231_CAI_t_m_dwModelFlags;
    /* ROM 0xFAB59: CAI_t / m_TranqHealth */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r232_CAI_t_m_TranqHealth;
    /* ROM 0xFAB74: CAI_t / padding */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r233_CAI_t_padding;
    /* ROM 0xFAB89: CAI_t / m_FlinchCountdown */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r234_CAI_t_m_FlinchCountdown;
    /* ROM 0xFABA8: CAI_t / m_FlinchTime */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r235_CAI_t_m_FlinchTime;
    /* ROM 0xFABC2: CAI_t / m_FlinchNode */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r236_CAI_t_m_FlinchNode;
    /* ROM 0xFABE3: CAI_t / m_vFlinchAxis */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[13];
    } r237_CAI_t_m_vFlinchAxis;
    /* ROM 0xFAC0B: CAI_t / m_HeadTurn */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r238_CAI_t_m_HeadTurn;
    /* ROM 0xFAC23: CAI_t / m_HeadTilt */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r239_CAI_t_m_HeadTilt;
    /* ROM 0xFAC3B: CAI_t / m_pModeTable */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[12];
    } r240_CAI_t_m_pModeTable;
    /* ROM 0xFAC65: CAI_t / m_pModeInfo */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[11];
    } r241_CAI_t_m_pModeInfo;
    /* ROM 0xFAC8E: CAI_t / m_Mode */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r242_CAI_t_m_Mode;
    /* ROM 0xFACA2: CAI_t / m_ModeLastFrame */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r243_CAI_t_m_ModeLastFrame;
    /* ROM 0xFACBF: CAI_t / m_ModeBefore */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r244_CAI_t_m_ModeBefore;
    /* ROM 0xFACD9: CAI_t / m_Action */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r245_CAI_t_m_Action;
    /* ROM 0xFACEF: CAI_t / m_ModeLastFrameFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r246_CAI_t_m_ModeLastFrameFlags;
    /* ROM 0xFAD11: CAI_t / m_ModeFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r247_CAI_t_m_ModeFlags;
    /* ROM 0xFAD2A: CAI_t / m_ModeTime */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r248_CAI_t_m_ModeTime;
    /* ROM 0xFAD42: CAI_t / m_ActionTime */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r249_CAI_t_m_ActionTime;
    /* ROM 0xFAD5C: CAI_t / m_vPosLastFrame */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[15];
    } r250_CAI_t_m_vPosLastFrame;
    /* ROM 0xFAD86: CAI_t / m_vDesiredPos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[13];
    } r251_CAI_t_m_vDesiredPos;
    /* ROM 0xFADAE: CAI_t / m_RotYLastFrame */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r252_CAI_t_m_RotYLastFrame;
    /* ROM 0xFADCB: CAI_t / m_MoveTime */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r253_CAI_t_m_MoveTime;
    /* ROM 0xFADE3: CAI_t / m_pLeader */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[9];
    } r254_CAI_t_m_pLeader;
    /* ROM 0xFAE12: CAI_t / m_vTargetOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[15];
    } r255_CAI_t_m_vTargetOffset;
    /* ROM 0xFAE3C: CAI_t / m_pTargetOverride */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[17];
    } r256_CAI_t_m_pTargetOverride;
    /* ROM 0xFAE73: CAI_t / m_TargetOverrideTime */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r257_CAI_t_m_TargetOverrideTime;
    /* ROM 0xFAE95: CAI_t / m_pSightTarget */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[14];
    } r258_CAI_t_m_pSightTarget;
    /* ROM 0xFAEC9: CAI_t / m_pPathAvoidRegion */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[18];
    } r259_CAI_t_m_pPathAvoidRegion;
    /* ROM 0xFAEF9: CAI_t / m_pPathTarget */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[13];
    } r260_CAI_t_m_pPathTarget;
    /* ROM 0xFAF2C: CAI_t / m_PathRotY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r261_CAI_t_m_PathRotY;
    /* ROM 0xFAF44: CAI_t / m_PathHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r262_CAI_t_m_PathHeight;
    /* ROM 0xFAF5E: CAI_t / m_PathTrack */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[11];
    } r263_CAI_t_m_PathTrack;
    /* ROM 0xFAF84: CAI_t / m_StartRotY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r264_CAI_t_m_StartRotY;
    /* ROM 0xFAF9D: CAI_t / m_vStartPos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[11];
    } r265_CAI_t_m_vStartPos;
    /* ROM 0xFAFC3: CAI_t / m_pStartRegion */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[14];
    } r266_CAI_t_m_pStartRegion;
    /* ROM 0xFAFEF: CAI_t / m_vLeashPos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[11];
    } r267_CAI_t_m_vLeashPos;
    /* ROM 0xFB015: CAI_t / m_pLeashRegion */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[14];
    } r268_CAI_t_m_pLeashRegion;
    /* ROM 0xFB041: CAI_t / m_AnimSpeed */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r269_CAI_t_m_AnimSpeed;
    /* ROM 0xFB05A: CAI_t / m_ModeAnimSpeed */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r270_CAI_t_m_ModeAnimSpeed;
    /* ROM 0xFB077: CAI_t / m_AnimType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r271_CAI_t_m_AnimType;
    /* ROM 0xFB08F: CAI_t / m_AnimIndex */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r272_CAI_t_m_AnimIndex;
    /* ROM 0xFB0A8: CAI_t / m_AnimPlayed */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r273_CAI_t_m_AnimPlayed;
    /* ROM 0xFB0C2: CAI_t / m_Aggression */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r274_CAI_t_m_Aggression;
    /* ROM 0xFB0DC: CAI_t / m_FreezeTime */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r275_CAI_t_m_FreezeTime;
    /* ROM 0xFB0F6: CAI_t / m_PathFindCount */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r276_CAI_t_m_PathFindCount;
    /* ROM 0xFB113: CAI_t / m_FramesSinceLastPainSFX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[24];
    } r277_CAI_t_m_FramesSinceLastPainSFX;
    /* ROM 0xFB139: CAI_t / m_DeathRegionTimer */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r278_CAI_t_m_DeathRegionTimer;
    /* ROM 0xFB159: CAI_t / m_OnFireTimer */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r279_CAI_t_m_OnFireTimer;
    /* ROM 0xFB174: CAI_t / m_vBoreTarget */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[13];
    } r280_CAI_t_m_vBoreTarget;
    /* ROM 0xFB19C: CAI_t / m_vBoreCollNormal */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[17];
    } r281_CAI_t_m_vBoreCollNormal;
    /* ROM 0xFB1C8: CAI_t / m_vLaserSightSource */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[19];
    } r282_CAI_t_m_vLaserSightSource;
    /* ROM 0xFB1F6: CAI_t / m_pAttachedLoopingSound */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[23];
    } r283_CAI_t_m_pAttachedLoopingSound;
    /* ROM 0xFB231: CAI_t / m_UseAlternateModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r284_CAI_t_m_UseAlternateModel;
    /* ROM 0xFB252: CAI_t / m_wLimbStatus */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r285_CAI_t_m_wLimbStatus;
    /* ROM 0xFB26D: CAI_t / pad */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[3];
    } r286_CAI_t_pad;
    /* ROM 0xFB27E: CAI_t / m_pfAdvance */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r287_CAI_t_m_pfAdvance;
    /* ROM 0xFB297: CAI_t / m_pfDraw */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r288_CAI_t_m_pfDraw;
    /* ROM 0xFB2AD: CAI_t / m_pfDecreaseHealth */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r289_CAI_t_m_pfDecreaseHealth;
    /* ROM 0xFB2CD: CAI_t / m_pfCollision */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r290_CAI_t_m_pfCollision;
    /* ROM 0xFB2E8: CAI_t / m_pfHitByParticle */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r291_CAI_t_m_pfHitByParticle;
    /* ROM 0xFB307: CAI_t / m_pfCalculateOrientationMatrix */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[30];
    } r292_CAI_t_m_pfCalculateOrientationMatrix;
    /* ROM 0xFB333: CAI_t / m_pfSpecialEffects */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r293_CAI_t_m_pfSpecialEffects;
    /* ROM 0xFB353: CAI_t / m_M0 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r294_CAI_t_m_M0;
    /* ROM 0xFB372: CAI_t / m_M1 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r295_CAI_t_m_M1;
    /* ROM 0xFB391: CAI_t / m_M2 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r296_CAI_t_m_M2;
    /* ROM 0xFB3B0: CAI_t / m_M3 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r297_CAI_t_m_M3;
    /* ROM 0xFB3CF: CAI_t / m_M4 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r298_CAI_t_m_M4;
    /* ROM 0xFB3EE: CAI_t / m_M5 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r299_CAI_t_m_M5;
    /* ROM 0xFB40D: CAI_t / m_M6 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r300_CAI_t_m_M6;
    /* ROM 0xFB42C: CAI_t / m_M7 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r301_CAI_t_m_M7;
    /* ROM 0xFB44B: CAI_t / m_M8 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r302_CAI_t_m_M8;
    /* ROM 0xFB46A: CAI_t / m_M9 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r303_CAI_t_m_M9;
    /* ROM 0xFB489: CAI_t / m_M10 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r304_CAI_t_m_M10;
    /* ROM 0xFB4A9: CAI_t / m_M11 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r305_CAI_t_m_M11;
    /* ROM 0xFB4C9: CAI_t / m_M12 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r306_CAI_t_m_M12;
    /* ROM 0xFB4E9: CAI_t / m_M13 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r307_CAI_t_m_M13;
    /* ROM 0xFB509: CAI_t / m_M14 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r308_CAI_t_m_M14;
    /* ROM 0xFB529: CAI_t / m_M15 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r309_CAI_t_m_M15;
    /* ROM 0xFB549: CAI_t / m_M16 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r310_CAI_t_m_M16;
    /* ROM 0xFB569: CAI_t / m_M17 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r311_CAI_t_m_M17;
    /* ROM 0xFB589: CAI_t / m_M18 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } r312_CAI_t_m_M18;
    /* ROM 0xFB5A9: CAI_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[5];
        unsigned char name_length;
        char name[4];
    } r313_CAI_t__eos;
    /* ROM 0xFB5C3: CAI_t / CAI */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[5];
        unsigned char name_length;
        char name[3];
    } r314_CAI_t_CAI;
    /* ROM 0xFB5DC: CAnimCompInfo_t / CAnimCompInfo_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r315_CAnimCompInfo_t_CAnimCompInfo_t;
    /* ROM 0xFB5F9: CAnimCompInfo_t / SmoothSize */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r316_CAnimCompInfo_t_SmoothSize;
    /* ROM 0xFB611: CAnimCompInfo_t / nFrames */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r317_CAnimCompInfo_t_nFrames;
    /* ROM 0xFB626: CAnimCompInfo_t / DecompMode */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r318_CAnimCompInfo_t_DecompMode;
    /* ROM 0xFB63E: CAnimCompInfo_t / Tolerance */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r319_CAnimCompInfo_t_Tolerance;
    /* ROM 0xFB655: CAnimCompInfo_t / nRot */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r320_CAnimCompInfo_t_nRot;
    /* ROM 0xFB667: CAnimCompInfo_t / nTrans */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r321_CAnimCompInfo_t_nTrans;
    /* ROM 0xFB67B: CAnimCompInfo_t / nNewFrames */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r322_CAnimCompInfo_t_nNewFrames;
    /* ROM 0xFB693: CAnimCompInfo_t / FrameScale */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r323_CAnimCompInfo_t_FrameScale;
    /* ROM 0xFB6AB: CAnimCompInfo_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r324_CAnimCompInfo_t__eos;
    /* ROM 0xFB6CF: CAnimCompInfo_t / CAnimCompInfo */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } r325_CAnimCompInfo_t_CAnimCompInfo;
    /* ROM 0xFB6FC: CROMInitialOrientation_t / CROMInitialOrientation_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[24];
    } r326_CROMInitialOrientation_t_CROMInitialOrientation_t;
    /* ROM 0xFB722: CROMInitialOrientation_t / m_vPos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r327_CROMInitialOrientation_t_m_vPos;
    /* ROM 0xFB743: CROMInitialOrientation_t / m_RotX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r328_CROMInitialOrientation_t_m_RotX;
    /* ROM 0xFB757: CROMInitialOrientation_t / m_RotY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r329_CROMInitialOrientation_t_m_RotY;
    /* ROM 0xFB76B: CROMInitialOrientation_t / m_RotZ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r330_CROMInitialOrientation_t_m_RotZ;
    /* ROM 0xFB77F: CROMInitialOrientation_t / m_RotT */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r331_CROMInitialOrientation_t_m_RotT;
    /* ROM 0xFB793: CROMInitialOrientation_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[4];
    } r332_CROMInitialOrientation_t__eos;
    /* ROM 0xFB7C0: CROMInitialOrientation_t / CROMInitialOrientation */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[24];
        unsigned char name_length;
        char name[22];
    } r333_CROMInitialOrientation_t_CROMInitialOrientation;
    /* ROM 0xFB7FF: CROMNodeIndex_t / CROMNodeIndex_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r334_CROMNodeIndex_t_CROMNodeIndex_t;
    /* ROM 0xFB81C: CROMNodeIndex_t / m_nTranslationSet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r335_CROMNodeIndex_t_m_nTranslationSet;
    /* ROM 0xFB83B: CROMNodeIndex_t / m_nRotationSet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r336_CROMNodeIndex_t_m_nRotationSet;
    /* ROM 0xFB857: CROMNodeIndex_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r337_CROMNodeIndex_t__eos;
    /* ROM 0xFB87B: CROMNodeIndex_t / CROMNodeIndex */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } r338_CROMNodeIndex_t_CROMNodeIndex;
    /* ROM 0xFB8A8: CTranslationOffset_t / CTranslationOffset_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[20];
    } r339_CTranslationOffset_t_CTranslationOffset_t;
    /* ROM 0xFB8CA: CTranslationOffset_t / m_vOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[9];
    } r340_CTranslationOffset_t_m_vOffset;
    /* ROM 0xFB8EE: CTranslationOffset_t / m_vScale */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } r341_CTranslationOffset_t_m_vScale;
    /* ROM 0xFB911: CTranslationOffset_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[4];
    } r342_CTranslationOffset_t__eos;
    /* ROM 0xFB93A: CTranslationOffset_t / CTranslationOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[18];
    } r343_CTranslationOffset_t_CTranslationOffset;
    /* ROM 0xFB971: CROMTransition_t / CROMTransition_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r344_CROMTransition_t_CROMTransition_t;
    /* ROM 0xFB98F: CROMTransition_t / m_BlendFromLength */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r345_CROMTransition_t_m_BlendFromLength;
    /* ROM 0xFB9AE: CROMTransition_t / m_nExitToFrame */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r346_CROMTransition_t_m_nExitToFrame;
    /* ROM 0xFB9CA: CROMTransition_t / m_BlendStart */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r347_CROMTransition_t_m_BlendStart;
    /* ROM 0xFB9E4: CROMTransition_t / m_BlendFinish */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r348_CROMTransition_t_m_BlendFinish;
    /* ROM 0xFB9FF: CROMTransition_t / m_FPS */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[5];
    } r349_CROMTransition_t_m_FPS;
    /* ROM 0xFBA12: CROMTransition_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[4];
    } r350_CROMTransition_t__eos;
    /* ROM 0xFBA37: CROMTransition_t / CROMTransition */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[14];
    } r351_CROMTransition_t_CROMTransition;
    /* ROM 0xFBA66: CROMTransitionEntry_t / CROMTransitionEntry_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r352_CROMTransitionEntry_t_CROMTransitionEntry_t;
    /* ROM 0xFBA89: CROMTransitionEntry_t / m_nRequestedAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r353_CROMTransitionEntry_t_m_nRequestedAnim;
    /* ROM 0xFBAA7: CROMTransitionEntry_t / m_nWaitForFrame */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r354_CROMTransitionEntry_t_m_nWaitForFrame;
    /* ROM 0xFBAC4: CROMTransitionEntry_t / m_nDeliveredAnim */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r355_CROMTransitionEntry_t_m_nDeliveredAnim;
    /* ROM 0xFBAE2: CROMTransitionEntry_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r356_CROMTransitionEntry_t__eos;
    /* ROM 0xFBB0C: CROMTransitionEntry_t / CROMTransitionEntry */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r357_CROMTransitionEntry_t_CROMTransitionEntry;
    /* ROM 0xFBB45: EventValueFormats / EventValueFormats */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r358_EventValueFormats_EventValueFormats;
    /* ROM 0xFBB64: EventValueFormats / EVENT_FORMAT1A */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r359_EventValueFormats_EVENT_FORMAT1A;
    /* ROM 0xFBB80: EventValueFormats / EVENT_FORMAT2A */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r360_EventValueFormats_EVENT_FORMAT2A;
    /* ROM 0xFBB9C: EventValueFormats / EVENT_FORMAT2B */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r361_EventValueFormats_EVENT_FORMAT2B;
    /* ROM 0xFBBB8: EventValueFormats / EVENT_FORMAT3A */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r362_EventValueFormats_EVENT_FORMAT3A;
    /* ROM 0xFBBD4: EventValueFormats / EVENT_FORMAT4A */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r363_EventValueFormats_EVENT_FORMAT4A;
    /* ROM 0xFBBF0: EventValueFormats / EVENT_FORMAT6A */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r364_EventValueFormats_EVENT_FORMAT6A;
    /* ROM 0xFBC0C: EventValueFormats / EVENT_FORMAT7A */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r365_EventValueFormats_EVENT_FORMAT7A;
    /* ROM 0xFBC28: EventValueFormats / EVENT_FORMATS */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r366_EventValueFormats_EVENT_FORMATS;
    /* ROM 0xFBC43: EventValueFormats / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[4];
    } r367_EventValueFormats__eos;
    /* ROM 0xFBC69: s_CEventValueFormat1a / s_CEventValueFormat1a */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r368_s_CEventValueFormat1a_s_CEventValueFormat1a;
    /* ROM 0xFBC8C: s_CEventValueFormat1a / m_s32_Value1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r369_s_CEventValueFormat1a_m_s32_Value1;
    /* ROM 0xFBCA6: s_CEventValueFormat1a / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r370_s_CEventValueFormat1a__eos;
    /* ROM 0xFBCD0: s_CEventValueFormat1a / CEventValueFormat1a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r371_s_CEventValueFormat1a_CEventValueFormat1a;
    /* ROM 0xFBD09: s_CEventValueFormat2a / s_CEventValueFormat2a */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r372_s_CEventValueFormat2a_s_CEventValueFormat2a;
    /* ROM 0xFBD2C: s_CEventValueFormat2a / m_s32_Value1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r373_s_CEventValueFormat2a_m_s32_Value1;
    /* ROM 0xFBD46: s_CEventValueFormat2a / m_s32_Value2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r374_s_CEventValueFormat2a_m_s32_Value2;
    /* ROM 0xFBD60: s_CEventValueFormat2a / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r375_s_CEventValueFormat2a__eos;
    /* ROM 0xFBD8A: s_CEventValueFormat2a / CEventValueFormat2a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r376_s_CEventValueFormat2a_CEventValueFormat2a;
    /* ROM 0xFBDC3: s_CEventValueFormat2b / s_CEventValueFormat2b */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r377_s_CEventValueFormat2b_s_CEventValueFormat2b;
    /* ROM 0xFBDE6: s_CEventValueFormat2b / m_s32_Value1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r378_s_CEventValueFormat2b_m_s32_Value1;
    /* ROM 0xFBE00: s_CEventValueFormat2b / m_f32_Value2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r379_s_CEventValueFormat2b_m_f32_Value2;
    /* ROM 0xFBE1A: s_CEventValueFormat2b / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r380_s_CEventValueFormat2b__eos;
    /* ROM 0xFBE44: s_CEventValueFormat2b / CEventValueFormat2b */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r381_s_CEventValueFormat2b_CEventValueFormat2b;
    /* ROM 0xFBE7D: s_CEventValueFormat3a / s_CEventValueFormat3a */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r382_s_CEventValueFormat3a_s_CEventValueFormat3a;
    /* ROM 0xFBEA0: s_CEventValueFormat3a / m_s32_Value1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r383_s_CEventValueFormat3a_m_s32_Value1;
    /* ROM 0xFBEBA: s_CEventValueFormat3a / m_s16_Value2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r384_s_CEventValueFormat3a_m_s16_Value2;
    /* ROM 0xFBED4: s_CEventValueFormat3a / m_s8_Value3 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r385_s_CEventValueFormat3a_m_s8_Value3;
    /* ROM 0xFBEED: s_CEventValueFormat3a / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r386_s_CEventValueFormat3a__eos;
    /* ROM 0xFBF17: s_CEventValueFormat3a / CEventValueFormat3a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r387_s_CEventValueFormat3a_CEventValueFormat3a;
    /* ROM 0xFBF50: s_CEventValueFormat4a / s_CEventValueFormat4a */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r388_s_CEventValueFormat4a_s_CEventValueFormat4a;
    /* ROM 0xFBF73: s_CEventValueFormat4a / m_s16_Value1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r389_s_CEventValueFormat4a_m_s16_Value1;
    /* ROM 0xFBF8D: s_CEventValueFormat4a / m_s16_Value2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r390_s_CEventValueFormat4a_m_s16_Value2;
    /* ROM 0xFBFA7: s_CEventValueFormat4a / m_s16_Value3 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r391_s_CEventValueFormat4a_m_s16_Value3;
    /* ROM 0xFBFC1: s_CEventValueFormat4a / m_s16_Value4 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r392_s_CEventValueFormat4a_m_s16_Value4;
    /* ROM 0xFBFDB: s_CEventValueFormat4a / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r393_s_CEventValueFormat4a__eos;
    /* ROM 0xFC005: s_CEventValueFormat4a / CEventValueFormat4a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r394_s_CEventValueFormat4a_CEventValueFormat4a;
    /* ROM 0xFC03E: s_CEventValueFormat6a / s_CEventValueFormat6a */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r395_s_CEventValueFormat6a_s_CEventValueFormat6a;
    /* ROM 0xFC061: s_CEventValueFormat6a / m_s16_Value1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r396_s_CEventValueFormat6a_m_s16_Value1;
    /* ROM 0xFC07B: s_CEventValueFormat6a / m_s16_Value2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r397_s_CEventValueFormat6a_m_s16_Value2;
    /* ROM 0xFC095: s_CEventValueFormat6a / m_s8_Value3 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r398_s_CEventValueFormat6a_m_s8_Value3;
    /* ROM 0xFC0AE: s_CEventValueFormat6a / m_s8_Value4 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r399_s_CEventValueFormat6a_m_s8_Value4;
    /* ROM 0xFC0C7: s_CEventValueFormat6a / m_s8_Value5 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r400_s_CEventValueFormat6a_m_s8_Value5;
    /* ROM 0xFC0E0: s_CEventValueFormat6a / m_s8_Value6 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r401_s_CEventValueFormat6a_m_s8_Value6;
    /* ROM 0xFC0F9: s_CEventValueFormat6a / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r402_s_CEventValueFormat6a__eos;
    /* ROM 0xFC123: s_CEventValueFormat6a / CEventValueFormat6a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r403_s_CEventValueFormat6a_CEventValueFormat6a;
    /* ROM 0xFC15C: s_CEventValueFormat7a / s_CEventValueFormat7a */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r404_s_CEventValueFormat7a_s_CEventValueFormat7a;
    /* ROM 0xFC17F: s_CEventValueFormat7a / m_u8_Value1 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r405_s_CEventValueFormat7a_m_u8_Value1;
    /* ROM 0xFC198: s_CEventValueFormat7a / m_u8_Value2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r406_s_CEventValueFormat7a_m_u8_Value2;
    /* ROM 0xFC1B1: s_CEventValueFormat7a / m_u8_Value3 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r407_s_CEventValueFormat7a_m_u8_Value3;
    /* ROM 0xFC1CA: s_CEventValueFormat7a / m_u8_Value4 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r408_s_CEventValueFormat7a_m_u8_Value4;
    /* ROM 0xFC1E3: s_CEventValueFormat7a / m_u8_Value5 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r409_s_CEventValueFormat7a_m_u8_Value5;
    /* ROM 0xFC1FC: s_CEventValueFormat7a / m_u8_Value6 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r410_s_CEventValueFormat7a_m_u8_Value6;
    /* ROM 0xFC215: s_CEventValueFormat7a / m_u8_Value7 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r411_s_CEventValueFormat7a_m_u8_Value7;
    /* ROM 0xFC22E: s_CEventValueFormat7a / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } r412_s_CEventValueFormat7a__eos;
    /* ROM 0xFC258: s_CEventValueFormat7a / CEventValueFormat7a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } r413_s_CEventValueFormat7a_CEventValueFormat7a;
    /* ROM 0xFC291: s_CEventValueFormat7a / .136fake */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r414_s_CEventValueFormat7a__136fake;
    /* ROM 0xFC2A7: s_CEventValueFormat7a / m_Format1a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r415_s_CEventValueFormat7a_m_Format1a;
    /* ROM 0xFC2D7: s_CEventValueFormat7a / m_Format2a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r416_s_CEventValueFormat7a_m_Format2a;
    /* ROM 0xFC307: s_CEventValueFormat7a / m_Format2b */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r417_s_CEventValueFormat7a_m_Format2b;
    /* ROM 0xFC337: s_CEventValueFormat7a / m_Format3a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r418_s_CEventValueFormat7a_m_Format3a;
    /* ROM 0xFC367: s_CEventValueFormat7a / m_Format4a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r419_s_CEventValueFormat7a_m_Format4a;
    /* ROM 0xFC397: s_CEventValueFormat7a / m_Format6a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r420_s_CEventValueFormat7a_m_Format6a;
    /* ROM 0xFC3C7: s_CEventValueFormat7a / m_Format7a */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[10];
    } r421_s_CEventValueFormat7a_m_Format7a;
    /* ROM 0xFC3F7: s_CEventValueFormat7a / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[4];
    } r422_s_CEventValueFormat7a__eos;
    /* ROM 0xFC414: s_CEventValue / s_CEventValue */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r423_s_CEventValue_s_CEventValue;
    /* ROM 0xFC42F: s_CEventValue / u */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[1];
    } r424_s_CEventValue_u;
    /* ROM 0xFC449: s_CEventValue / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[4];
    } r425_s_CEventValue__eos;
    /* ROM 0xFC46B: s_CEventValue / CEventValue */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[11];
    } r426_s_CEventValue_CEventValue;
    /* ROM 0xFC494: CROMEventEntry_t / CROMEventEntry_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r427_CROMEventEntry_t_CROMEventEntry_t;
    /* ROM 0xFC4B2: CROMEventEntry_t / m_nFrame */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r428_CROMEventEntry_t_m_nFrame;
    /* ROM 0xFC4C8: CROMEventEntry_t / m_nEvent */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r429_CROMEventEntry_t_m_nEvent;
    /* ROM 0xFC4DE: CROMEventEntry_t / m_nNode */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r430_CROMEventEntry_t_m_nNode;
    /* ROM 0xFC4F3: CROMEventEntry_t / pad */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[3];
    } r431_CROMEventEntry_t_pad;
    /* ROM 0xFC504: CROMEventEntry_t / m_vOffset */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[9];
    } r432_CROMEventEntry_t_m_vOffset;
    /* ROM 0xFC528: CROMEventEntry_t / m_Value */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[7];
    } r433_CROMEventEntry_t_m_Value;
    /* ROM 0xFC54D: CROMEventEntry_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[4];
    } r434_CROMEventEntry_t__eos;
    /* ROM 0xFC572: CROMEventEntry_t / CROMEventEntry */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[14];
    } r435_CROMEventEntry_t_CROMEventEntry;
    /* ROM 0xFC5A1: CVisBits_t / CVisBits_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r436_CVisBits_t_CVisBits_t;
    /* ROM 0xFC5B9: CVisBits_t / Bits */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[4];
    } r437_CVisBits_t_Bits;
    /* ROM 0xFC5D2: CVisBits_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } r438_CVisBits_t__eos;
    /* ROM 0xFC5F1: CVisBits_t / CVisBits */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } r439_CVisBits_t_CVisBits;
    /* ROM 0xFC614: CROMCornerEnc_t / CROMCornerEnc_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r440_CROMCornerEnc_t_CROMCornerEnc_t;
    /* ROM 0xFC631: CROMCornerEnc_t / x */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[1];
    } r441_CROMCornerEnc_t_x;
    /* ROM 0xFC640: CROMCornerEnc_t / y */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[1];
    } r442_CROMCornerEnc_t_y;
    /* ROM 0xFC64F: CROMCornerEnc_t / z */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[1];
    } r443_CROMCornerEnc_t_z;
    /* ROM 0xFC65E: CROMCornerEnc_t / c */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[1];
    } r444_CROMCornerEnc_t_c;
    /* ROM 0xFC66D: CROMCornerEnc_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r445_CROMCornerEnc_t__eos;
    /* ROM 0xFC691: CROMCornerEnc_t / CROMCornerEnc */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } r446_CROMCornerEnc_t_CROMCornerEnc;
    /* ROM 0xFC6BE: CROMCorner_t / CROMCorner_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r447_CROMCorner_t_CROMCorner_t;
    /* ROM 0xFC6D8: CROMCorner_t / m_vCorner */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[9];
    } r448_CROMCorner_t_m_vCorner;
    /* ROM 0xFC6FC: CROMCorner_t / m_Ceiling */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r449_CROMCorner_t_m_Ceiling;
    /* ROM 0xFC713: CROMCorner_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[4];
    } r450_CROMCorner_t__eos;
    /* ROM 0xFC734: CROMCorner_t / CROMCorner */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[10];
    } r451_CROMCorner_t_CROMCorner;
    /* ROM 0xFC75B: CROMRegionSet_t / CROMRegionSet_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r452_CROMRegionSet_t_CROMRegionSet_t;
    /* ROM 0xFC778: CROMRegionSet_t / m_FogColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[10];
    } r453_CROMRegionSet_t_m_FogColor;
    /* ROM 0xFC797: CROMRegionSet_t / m_WaterColor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[12];
    } r454_CROMRegionSet_t_m_WaterColor;
    /* ROM 0xFC7B8: CROMRegionSet_t / m_FogStart */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r455_CROMRegionSet_t_m_FogStart;
    /* ROM 0xFC7D0: CROMRegionSet_t / m_WaterStart */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r456_CROMRegionSet_t_m_WaterStart;
    /* ROM 0xFC7EA: CROMRegionSet_t / m_FarClip */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r457_CROMRegionSet_t_m_FarClip;
    /* ROM 0xFC801: CROMRegionSet_t / m_FieldOfView */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r458_CROMRegionSet_t_m_FieldOfView;
    /* ROM 0xFC81C: CROMRegionSet_t / m_WaterFarClip */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r459_CROMRegionSet_t_m_WaterFarClip;
    /* ROM 0xFC838: CROMRegionSet_t / m_WaterFieldOfView */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r460_CROMRegionSet_t_m_WaterFieldOfView;
    /* ROM 0xFC858: CROMRegionSet_t / m_WaterElevation */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r461_CROMRegionSet_t_m_WaterElevation;
    /* ROM 0xFC876: CROMRegionSet_t / m_BlendLength */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r462_CROMRegionSet_t_m_BlendLength;
    /* ROM 0xFC891: CROMRegionSet_t / m_DeathTimeDelay */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r463_CROMRegionSet_t_m_DeathTimeDelay;
    /* ROM 0xFC8AF: CROMRegionSet_t / m_CameraVertEyeOffset */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r464_CROMRegionSet_t_m_CameraVertEyeOffset;
    /* ROM 0xFC8D2: CROMRegionSet_t / m_CameraMovementScaler */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[22];
    } r465_CROMRegionSet_t_m_CameraMovementScaler;
    /* ROM 0xFC8F6: CROMRegionSet_t / m_JumpPadEndX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r466_CROMRegionSet_t_m_JumpPadEndX;
    /* ROM 0xFC911: CROMRegionSet_t / m_JumpPadEndY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r467_CROMRegionSet_t_m_JumpPadEndY;
    /* ROM 0xFC92C: CROMRegionSet_t / m_JumpPadEndZ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r468_CROMRegionSet_t_m_JumpPadEndZ;
    /* ROM 0xFC947: CROMRegionSet_t / m_JumpPadHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r469_CROMRegionSet_t_m_JumpPadHeight;
    /* ROM 0xFC964: CROMRegionSet_t / m_dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r470_CROMRegionSet_t_m_dwFlags;
    /* ROM 0xFC97B: CROMRegionSet_t / m_WarpID */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r471_CROMRegionSet_t_m_WarpID;
    /* ROM 0xFC991: CROMRegionSet_t / m_PressurePlateSoundNumber */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[26];
    } r472_CROMRegionSet_t_m_PressurePlateSoundNumber;
    /* ROM 0xFC9B9: CROMRegionSet_t / m_SaveCheckpointID */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r473_CROMRegionSet_t_m_SaveCheckpointID;
    /* ROM 0xFC9D9: CROMRegionSet_t / m_PressureID */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r474_CROMRegionSet_t_m_PressureID;
    /* ROM 0xFC9F3: CROMRegionSet_t / m_DeathHitPoints */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r475_CROMRegionSet_t_m_DeathHitPoints;
    /* ROM 0xFCA11: CROMRegionSet_t / m_wFlags2 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r476_CROMRegionSet_t_m_wFlags2;
    /* ROM 0xFCA28: CROMRegionSet_t / m_wFlags3 */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r477_CROMRegionSet_t_m_wFlags3;
    /* ROM 0xFCA3F: CROMRegionSet_t / m_wSkyLayers */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r478_CROMRegionSet_t_m_wSkyLayers;
    /* ROM 0xFCA59: CROMRegionSet_t / m_GroundMat */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r479_CROMRegionSet_t_m_GroundMat;
    /* ROM 0xFCA72: CROMRegionSet_t / m_WallMat */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r480_CROMRegionSet_t_m_WallMat;
    /* ROM 0xFCA89: CROMRegionSet_t / m_MusicID */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r481_CROMRegionSet_t_m_MusicID;
    /* ROM 0xFCAA0: CROMRegionSet_t / m_AmbientSounds */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r482_CROMRegionSet_t_m_AmbientSounds;
    /* ROM 0xFCABD: CROMRegionSet_t / m_MapColor */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r483_CROMRegionSet_t_m_MapColor;
    /* ROM 0xFCAD5: CROMRegionSet_t / m_CurrentStrength */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r484_CROMRegionSet_t_m_CurrentStrength;
    /* ROM 0xFCAF4: CROMRegionSet_t / m_JumpPadTime */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r485_CROMRegionSet_t_m_JumpPadTime;
    /* ROM 0xFCB0F: CROMRegionSet_t / m_CurrentDirectionX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r486_CROMRegionSet_t_m_CurrentDirectionX;
    /* ROM 0xFCB30: CROMRegionSet_t / m_CurrentDirectionY */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r487_CROMRegionSet_t_m_CurrentDirectionY;
    /* ROM 0xFCB51: CROMRegionSet_t / m_CurrentDirectionZ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[19];
    } r488_CROMRegionSet_t_m_CurrentDirectionZ;
    /* ROM 0xFCB72: CROMRegionSet_t / m_WeatherID */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r489_CROMRegionSet_t_m_WeatherID;
    /* ROM 0xFCB8B: CROMRegionSet_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r490_CROMRegionSet_t__eos;
    /* ROM 0xFCBAF: CROMRegionSet_t / CROMRegionSet */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } r491_CROMRegionSet_t_CROMRegionSet;
    /* ROM 0xFCBDC: CROMRegion_t / CROMRegion_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r492_CROMRegion_t_CROMRegion_t;
    /* ROM 0xFCBF6: CROMRegion_t / m_nRegionSet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r493_CROMRegion_t_m_nRegionSet;
    /* ROM 0xFCC10: CROMRegion_t / m_wFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r494_CROMRegion_t_m_wFlags;
    /* ROM 0xFCC26: CROMRegion_t / m_Corners */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[9];
    } r495_CROMRegion_t_m_Corners;
    /* ROM 0xFCC44: CROMRegion_t / m_Neighbors */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[11];
    } r496_CROMRegion_t_m_Neighbors;
    /* ROM 0xFCC64: CROMRegion_t / m_VisBits */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[9];
    } r497_CROMRegion_t_m_VisBits;
    /* ROM 0xFCC88: CROMRegion_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[4];
    } r498_CROMRegion_t__eos;
    /* ROM 0xFCCA9: CROMRegion_t / CROMRegion */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[10];
    } r499_CROMRegion_t_CROMRegion;
    /* ROM 0xFCCD0: CGameRegion_t / CGameRegion_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r500_CGameRegion_t_CGameRegion_t;
    /* ROM 0xFCCEB: CGameRegion_t / m_nRegionSet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r501_CGameRegion_t_m_nRegionSet;
    /* ROM 0xFCD05: CGameRegion_t / m_wFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r502_CGameRegion_t_m_wFlags;
    /* ROM 0xFCD1B: CGameRegion_t / m_pCorners */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[10];
    } r503_CGameRegion_t_m_pCorners;
    /* ROM 0xFCD46: CGameRegion_t / m_pNeighbors */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[12];
    } r504_CGameRegion_t_m_pNeighbors;
    /* ROM 0xFCD74: CGameRegion_t / m_VisBits */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[9];
    } r505_CGameRegion_t_m_VisBits;
    /* ROM 0xFCD98: CGameRegion_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[4];
    } r506_CGameRegion_t__eos;
    /* ROM 0xFCDBA: CGameRegion_t / CGameRegion */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[11];
    } r507_CGameRegion_t_CGameRegion;
    /* ROM 0xFCDE3: CROMBounds_t / CROMBounds_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r508_CROMBounds_t_CROMBounds_t;
    /* ROM 0xFCDFD: CROMBounds_t / m_vMin */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r509_CROMBounds_t_m_vMin;
    /* ROM 0xFCE1E: CROMBounds_t / m_vMax */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r510_CROMBounds_t_m_vMax;
    /* ROM 0xFCE3F: CROMBounds_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[4];
    } r511_CROMBounds_t__eos;
    /* ROM 0xFCE60: CROMBounds_t / CROMBounds */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[10];
    } r512_CROMBounds_t_CROMBounds;
    /* ROM 0xFCE87: CBoundsRect_t / CBoundsRect_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r513_CBoundsRect_t_CBoundsRect_t;
    /* ROM 0xFCEA2: CBoundsRect_t / m_MinX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r514_CBoundsRect_t_m_MinX;
    /* ROM 0xFCEB6: CBoundsRect_t / m_MinZ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r515_CBoundsRect_t_m_MinZ;
    /* ROM 0xFCECA: CBoundsRect_t / m_MaxX */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r516_CBoundsRect_t_m_MaxX;
    /* ROM 0xFCEDE: CBoundsRect_t / m_MaxZ */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r517_CBoundsRect_t_m_MaxZ;
    /* ROM 0xFCEF2: CBoundsRect_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[4];
    } r518_CBoundsRect_t__eos;
    /* ROM 0xFCF14: CBoundsRect_t / CBoundsRect */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[11];
    } r519_CBoundsRect_t_CBoundsRect;
    /* ROM 0xFCF3D: CROMRegionBlock_t / CROMRegionBlock_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[17];
    } r520_CROMRegionBlock_t_CROMRegionBlock_t;
    /* ROM 0xFCF5C: CROMRegionBlock_t / m_BoundsRect */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[12];
    } r521_CROMRegionBlock_t_m_BoundsRect;
    /* ROM 0xFCF86: CROMRegionBlock_t / m_nRegions */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r522_CROMRegionBlock_t_m_nRegions;
    /* ROM 0xFCF9E: CROMRegionBlock_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[4];
    } r523_CROMRegionBlock_t__eos;
    /* ROM 0xFCFC4: CROMRegionBlock_t / CROMRegionBlock */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[15];
    } r524_CROMRegionBlock_t_CROMRegionBlock;
    /* ROM 0xFCFF5: CROMGridBounds_t / CROMGridBounds_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r525_CROMGridBounds_t_CROMGridBounds_t;
    /* ROM 0xFD013: CROMGridBounds_t / m_BoundsRect */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[12];
    } r526_CROMGridBounds_t_m_BoundsRect;
    /* ROM 0xFD03D: CROMGridBounds_t / m_bEmpty */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r527_CROMGridBounds_t_m_bEmpty;
    /* ROM 0xFD053: CROMGridBounds_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[4];
    } r528_CROMGridBounds_t__eos;
    /* ROM 0xFD078: CROMGridBounds_t / CROMGridBounds */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[16];
        unsigned char name_length;
        char name[14];
    } r529_CROMGridBounds_t_CROMGridBounds;
    /* ROM 0xFD0A7: CInstanceHdr_t / CInstanceHdr_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r530_CInstanceHdr_t_CInstanceHdr_t;
    /* ROM 0xFD0C3: CInstanceHdr_t / m_Type */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r531_CInstanceHdr_t_m_Type;
    /* ROM 0xFD0D7: CInstanceHdr_t / m_nModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r532_CInstanceHdr_t_m_nModel;
    /* ROM 0xFD0ED: CInstanceHdr_t / m_nShadowModel */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r533_CInstanceHdr_t_m_nShadowModel;
    /* ROM 0xFD109: CInstanceHdr_t / m_nTexture */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r534_CInstanceHdr_t_m_nTexture;
    /* ROM 0xFD121: CInstanceHdr_t / m_nObjType */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r535_CInstanceHdr_t_m_nObjType;
    /* ROM 0xFD139: CInstanceHdr_t / PADDING */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[7];
    } r536_CInstanceHdr_t_PADDING;
    /* ROM 0xFD155: CInstanceHdr_t / m_vPos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r537_CInstanceHdr_t_m_vPos;
    /* ROM 0xFD176: CInstanceHdr_t / m_pCurrentRegion */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[16];
    } r538_CInstanceHdr_t_m_pCurrentRegion;
    /* ROM 0xFD1A4: CInstanceHdr_t / m_pI */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r539_CInstanceHdr_t_m_pI;
    /* ROM 0xFD1C8: CInstanceHdr_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[4];
    } r540_CInstanceHdr_t__eos;
    /* ROM 0xFD1EB: CInstanceHdr_t / CInstanceHdr */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[12];
    } r541_CInstanceHdr_t_CInstanceHdr;
    /* ROM 0xFD216: CAnimInstanceHdr_t / CAnimInstanceHdr_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r542_CAnimInstanceHdr_t_CAnimInstanceHdr_t;
    /* ROM 0xFD236: CAnimInstanceHdr_t / ih */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[2];
    } r543_CAnimInstanceHdr_t_ih;
    /* ROM 0xFD257: CAnimInstanceHdr_t / m_vVelocity */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[11];
    } r544_CAnimInstanceHdr_t_m_vVelocity;
    /* ROM 0xFD27D: CAnimInstanceHdr_t / m_vCurrent */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[10];
    } r545_CAnimInstanceHdr_t_m_vCurrent;
    /* ROM 0xFD2A2: CAnimInstanceHdr_t / m_pInstanceBelow */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[16];
    } r546_CAnimInstanceHdr_t_m_pInstanceBelow;
    /* ROM 0xFD2D1: CAnimInstanceHdr_t / m_CollFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r547_CAnimInstanceHdr_t_m_CollFlags;
    /* ROM 0xFD2EA: CAnimInstanceHdr_t / m_GroundMaterial */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[16];
    } r548_CAnimInstanceHdr_t_m_GroundMaterial;
    /* ROM 0xFD308: CAnimInstanceHdr_t / m_GroundHeight */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r549_CAnimInstanceHdr_t_m_GroundHeight;
    /* ROM 0xFD324: CAnimInstanceHdr_t / m_vGroundNormal */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[15];
    } r550_CAnimInstanceHdr_t_m_vGroundNormal;
    /* ROM 0xFD34E: CAnimInstanceHdr_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[18];
        unsigned char name_length;
        char name[4];
    } r551_CAnimInstanceHdr_t__eos;
    /* ROM 0xFD375: CAnimInstanceHdr_t / CAnimInstanceHdr */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[18];
        unsigned char name_length;
        char name[16];
    } r552_CAnimInstanceHdr_t_CAnimInstanceHdr;
    /* ROM 0xFD3A8: s_ISet / s_ISet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r553_s_ISet_s_ISet;
    /* ROM 0xFD3BC: s_ISet / m_BlockCount */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r554_s_ISet_m_BlockCount;
    /* ROM 0xFD3D6: s_ISet / m_Offsets */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[9];
    } r555_s_ISet_m_Offsets;
    /* ROM 0xFD3F4: s_ISet / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[6];
        unsigned char name_length;
        char name[4];
    } r556_s_ISet__eos;
    /* ROM 0xFD40F: s_ISet / CISet */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[6];
        unsigned char name_length;
        char name[5];
    } r557_s_ISet_CISet;
    /* ROM 0xFD42B: s_USet / s_USet */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r558_s_USet_s_USet;
    /* ROM 0xFD43F: s_USet / m_BlockSize */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r559_s_USet_m_BlockSize;
    /* ROM 0xFD458: s_USet / m_BlockCount */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r560_s_USet_m_BlockCount;
    /* ROM 0xFD472: s_USet / m_Array */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[7];
    } r561_s_USet_m_Array;
    /* ROM 0xFD48E: s_USet / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[6];
        unsigned char name_length;
        char name[4];
    } r562_s_USet__eos;
    /* ROM 0xFD4A9: s_USet / CUSet */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[6];
        unsigned char name_length;
        char name[5];
    } r563_s_USet_CUSet;
    /* ROM 0xFD4C5: CHeapBlock_t / CHeapBlock_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[12];
    } r564_CHeapBlock_t_CHeapBlock_t;
    /* ROM 0xFD4DF: CHeapBlock_t / pFreeLast */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[9];
    } r565_CHeapBlock_t_pFreeLast;
    /* ROM 0xFD505: CHeapBlock_t / pFreeNext */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[9];
    } r566_CHeapBlock_t_pFreeNext;
    /* ROM 0xFD52B: CHeapBlock_t / pUsedLast */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[9];
    } r567_CHeapBlock_t_pUsedLast;
    /* ROM 0xFD551: CHeapBlock_t / pUsedNext */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[9];
    } r568_CHeapBlock_t_pUsedNext;
    /* ROM 0xFD577: CHeapBlock_t / Used */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r569_CHeapBlock_t_Used;
    /* ROM 0xFD589: CHeapBlock_t / Free */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r570_CHeapBlock_t_Free;
    /* ROM 0xFD59B: CHeapBlock_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[4];
    } r571_CHeapBlock_t__eos;
    /* ROM 0xFD5BC: CHeapBlock_t / CHeapBlock */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[10];
    } r572_CHeapBlock_t_CHeapBlock;
    /* ROM 0xFD5E3: CHeap_t / CHeap_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r573_CHeap_t_CHeap_t;
    /* ROM 0xFD5F8: CHeap_t / MemStart */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r574_CHeap_t_MemStart;
    /* ROM 0xFD60E: CHeap_t / MemEnd */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r575_CHeap_t_MemEnd;
    /* ROM 0xFD622: CHeap_t / pFreeHead */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[9];
    } r576_CHeap_t_pFreeHead;
    /* ROM 0xFD648: CHeap_t / pFreeTail */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[9];
    } r577_CHeap_t_pFreeTail;
    /* ROM 0xFD66E: CHeap_t / pUsedHead */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[12];
        unsigned char name_length;
        char name[9];
    } r578_CHeap_t_pUsedHead;
    /* ROM 0xFD694: CHeap_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[4];
    } r579_CHeap_t__eos;
    /* ROM 0xFD6B0: CHeap_t / CHeap */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[5];
    } r580_CHeap_t_CHeap;
    /* ROM 0xFD6CD: CHeap_t / pfnTHREADMAIN */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r581_CHeap_t_pfnTHREADMAIN;
    /* ROM 0xFD6E8: CLoaderEntry_t / CLoaderEntry_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r582_CLoaderEntry_t_CLoaderEntry_t;
    /* ROM 0xFD704: CLoaderEntry_t / pAddress */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[8];
    } r583_CLoaderEntry_t_pAddress;
    /* ROM 0xFD71A: CLoaderEntry_t / pDest */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[5];
    } r584_CLoaderEntry_t_pDest;
    /* ROM 0xFD72D: CLoaderEntry_t / Length */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r585_CLoaderEntry_t_Length;
    /* ROM 0xFD741: CLoaderEntry_t / pReplyQueue */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[11];
    } r586_CLoaderEntry_t_pReplyQueue;
    /* ROM 0xFD76A: CLoaderEntry_t / pReplyMessage */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r587_CLoaderEntry_t_pReplyMessage;
    /* ROM 0xFD785: CLoaderEntry_t / dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r588_CLoaderEntry_t_dwFlags;
    /* ROM 0xFD79A: CLoaderEntry_t / pLast */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[5];
    } r589_CLoaderEntry_t_pLast;
    /* ROM 0xFD7BE: CLoaderEntry_t / pNext */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[5];
    } r590_CLoaderEntry_t_pNext;
    /* ROM 0xFD7E2: CLoaderEntry_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[4];
    } r591_CLoaderEntry_t__eos;
    /* ROM 0xFD805: CLoaderEntry_t / CLoaderEntry */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[12];
    } r592_CLoaderEntry_t_CLoaderEntry;
    /* ROM 0xFD830: CLoader_t / CLoader_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r593_CLoader_t_CLoader_t;
    /* ROM 0xFD847: CLoader_t / Thread */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r594_CLoader_t_Thread;
    /* ROM 0xFD868: CLoader_t / Queue */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[5];
    } r595_CLoader_t_Queue;
    /* ROM 0xFD88B: CLoader_t / Msgs */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[4];
    } r596_CLoader_t_Msgs;
    /* ROM 0xFD8A4: CLoader_t / PiReplyQueue */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[12];
    } r597_CLoader_t_PiReplyQueue;
    /* ROM 0xFD8CE: CLoader_t / PiReplyMsg */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r598_CLoader_t_PiReplyMsg;
    /* ROM 0xFD8E6: CLoader_t / Stack */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[5];
    } r599_CLoader_t_Stack;
    /* ROM 0xFD900: CLoader_t / Entries */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        char tag[14];
        unsigned char name_length;
        char name[7];
    } r600_CLoader_t_Entries;
    /* ROM 0xFD92A: CLoader_t / FreeList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[8];
    } r601_CLoader_t_FreeList;
    /* ROM 0xFD94A: CLoader_t / UsedList */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[8];
    } r602_CLoader_t_UsedList;
    /* ROM 0xFD96A: CLoader_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[9];
        unsigned char name_length;
        char name[4];
    } r603_CLoader_t__eos;
    /* ROM 0xFD988: CLoader_t / CLoader */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[9];
        unsigned char name_length;
        char name[7];
    } r604_CLoader_t_CLoader;
    /* ROM 0xFD9A9: CLoader_t / pfnDECOMPRESSCALLBACK */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[21];
    } r605_CLoader_t_pfnDECOMPRESSCALLBACK;
    /* ROM 0xFD9CC: CMemEntry_t / CMemEntry_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[11];
    } r606_CMemEntry_t_CMemEntry_t;
    /* ROM 0xFD9E5: CMemEntry_t / pData */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[5];
    } r607_CMemEntry_t_pData;
    /* ROM 0xFD9F8: CMemEntry_t / Size */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[4];
    } r608_CMemEntry_t_Size;
    /* ROM 0xFDA0A: CMemEntry_t / nLocks */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[6];
    } r609_CMemEntry_t_nLocks;
    /* ROM 0xFDA1E: CMemEntry_t / dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r610_CMemEntry_t_dwFlags;
    /* ROM 0xFDA33: CMemEntry_t / Age */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[3];
    } r611_CMemEntry_t_Age;
    /* ROM 0xFDA44: CMemEntry_t / pCacheEntry */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[11];
    } r612_CMemEntry_t_pCacheEntry;
    /* ROM 0xFDA6D: CMemEntry_t / pLast */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[5];
    } r613_CMemEntry_t_pLast;
    /* ROM 0xFDA8E: CMemEntry_t / pNext */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[5];
    } r614_CMemEntry_t_pNext;
    /* ROM 0xFDAAF: CMemEntry_t / pPosLast */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[8];
    } r615_CMemEntry_t_pPosLast;
    /* ROM 0xFDAD3: CMemEntry_t / pPosNext */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[8];
    } r616_CMemEntry_t_pPosNext;
    /* ROM 0xFDAF7: CMemEntry_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[4];
    } r617_CMemEntry_t__eos;
    /* ROM 0xFDB17: CMemEntry_t / CMemEntry */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[9];
    } r618_CMemEntry_t_CMemEntry;
    /* ROM 0xFDB3C: CCacheNtry2_t / CCacheNtry2_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r619_CCacheNtry2_t_CCacheNtry2_t;
    /* ROM 0xFDB57: CCacheNtry2_t / pMemEntry */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[9];
    } r620_CCacheNtry2_t_pMemEntry;
    /* ROM 0xFDB7C: CCacheNtry2_t / pReferencedMemEntry */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[19];
    } r621_CCacheNtry2_t_pReferencedMemEntry;
    /* ROM 0xFDBAB: CCacheNtry2_t / pRequestID */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r622_CCacheNtry2_t_pRequestID;
    /* ROM 0xFDBC3: CCacheNtry2_t / RequestLength */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[13];
    } r623_CCacheNtry2_t_RequestLength;
    /* ROM 0xFDBDE: CCacheNtry2_t / dwFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[7];
    } r624_CCacheNtry2_t_dwFlags;
    /* ROM 0xFDBF3: CCacheNtry2_t / DecompressCallback */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[18];
    } r625_CCacheNtry2_t_DecompressCallback;
    /* ROM 0xFDC13: CCacheNtry2_t / pNotifyID */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[9];
    } r626_CCacheNtry2_t_pNotifyID;
    /* ROM 0xFDC2A: CCacheNtry2_t / dwMemFlags */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[10];
    } r627_CCacheNtry2_t_dwMemFlags;
    /* ROM 0xFDC42: CCacheNtry2_t / pDecompressReplyQueue */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[21];
    } r628_CCacheNtry2_t_pDecompressReplyQueue;
    /* ROM 0xFDC75: CCacheNtry2_t / pNext */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[5];
    } r629_CCacheNtry2_t_pNext;
    /* ROM 0xFDC98: CCacheNtry2_t / pLast */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[5];
    } r630_CCacheNtry2_t_pLast;
    /* ROM 0xFDCBB: CCacheNtry2_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[4];
    } r631_CCacheNtry2_t__eos;
    /* ROM 0xFDCDD: CCacheNtry2_t / CCacheNtry2 */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[11];
    } r632_CCacheNtry2_t_CCacheNtry2;
    /* ROM 0xFDD06: CDecompressor_t / CDecompressor_t */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[15];
    } r633_CDecompressor_t_CDecompressor_t;
    /* ROM 0xFDD23: CDecompressor_t / Thread */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } r634_CDecompressor_t_Thread;
    /* ROM 0xFDD44: CDecompressor_t / Queue */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[5];
    } r635_CDecompressor_t_Queue;
    /* ROM 0xFDD67: CDecompressor_t / Msgs */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[4];
    } r636_CDecompressor_t_Msgs;
    /* ROM 0xFDD80: CDecompressor_t / Stack */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        Sn64Le32 dimensions[1];
        unsigned char tag_length;
        unsigned char name_length;
        char name[5];
    } r637_CDecompressor_t_Stack;
    /* ROM 0xFDD9A: CDecompressor_t / LastDecompress */
    struct {
        Sn64DefinitionHeader header;
        unsigned char name_length;
        char name[14];
    } r638_CDecompressor_t_LastDecompress;
    /* ROM 0xFDDB6: CDecompressor_t / .eos */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } r639_CDecompressor_t__eos;
    /* ROM 0xFDDDA: CDecompressor_t / CDecompressor */
    struct {
        Sn64DefinitionHeader header;
        Sn64Le16 dimension_count;
        unsigned char tag_length;
        char tag[6];
    } r640_CDecompressor_t_CDecompressor;
} Sn64IntelligenceTypeRecords;

const Sn64IntelligenceTypeRecords sn64_intelligence_type_records = {
    { { SN64_VALUE_TAIL24(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(40U) }, 24, "CGeneratorIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 6, "m_Type" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 13, "m_FiniteTotal" },
    { { SN64_LE32(10U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 11, "m_MaxActive" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 15, "m_IntervalTime1" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 15, "m_IntervalTime2" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 13, "m_ObjectIndex" },
    { { SN64_LE32(22U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 16, "m_VariationIndex" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 8, "m_ScaleX" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 8, "m_ScaleY" },
    { { SN64_LE32(32U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 8, "m_ScaleZ" },
    { { SN64_LE32(36U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 14, "m_ParticleType" },
    { { SN64_LE32(38U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 8, "m_Unused" },
    { { SN64_LE32(40U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(40U) }, SN64_LE16(0), 24, "CGeneratorIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(40U) }, SN64_LE16(0), 24, "CGeneratorIntelligence_t", 22, "CGeneratorIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(116U) }, 21, "CTurretIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(56U) }, SN64_LE16(0), 26, "CCommonEnemyIntelligence_t", 8, "m_Common" },
    { { SN64_LE32(56U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(60U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 9, "m_GunNode" },
    { { SN64_LE32(64U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 9, "m_RotNode" },
    { { SN64_LE32(68U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_RotSpeed" },
    { { SN64_LE32(72U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_RotLimit" },
    { { SN64_LE32(76U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_SightRadius" },
    { { SN64_LE32(80U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 12, "m_SightAngle" },
    { { SN64_LE32(84U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 12, "m_FireRadius" },
    { { SN64_LE32(88U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_FireAngle" },
    { { SN64_LE32(92U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_VertDist" },
    { { SN64_LE32(96U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_HorizDist" },
    { { SN64_LE32(100U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_HorizDir" },
    { { SN64_LE32(104U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_MoveSpeed" },
    { { SN64_LE32(108U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_StartOffset" },
    { { SN64_LE32(112U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 25, "m_TargetVisibleMotionType" },
    { { SN64_LE32(113U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 28, "m_TargetNotVisibleMotionType" },
    { { SN64_LE32(114U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 4, "pad1" },
    { { SN64_LE32(115U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 4, "pad2" },
    { { SN64_LE32(116U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(116U) }, SN64_LE16(0), 21, "CTurretIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(116U) }, SN64_LE16(0), 21, "CTurretIntelligence_t", 19, "CTurretIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(12U) }, 24, "CThrowableIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionRadius" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionHeight" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(12U) }, SN64_LE16(0), 24, "CThrowableIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 24, "CThrowableIntelligence_t", 22, "CThrowableIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 19, "CDoorIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 14, "m_OpenDuration" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 15, "m_OpenDoorEvent" },
    { { SN64_LE32(9U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 16, "m_CloseDoorEvent" },
    { { SN64_LE32(10U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 4, "pad1" },
    { { SN64_LE32(11U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 4, "pad2" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 16, "m_AutoOpenRadius" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_AutoCloseRadius" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 19, "CDoorIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 19, "CDoorIntelligence_t", 17, "CDoorIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(84U) }, 27, "CDestructibleIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 8, "m_Health" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 3, "pad" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionRadius" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionHeight" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 10, "m_IdleAnim" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 14, "m_AutoGoRadius" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 8, "m_GoAnim" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 18, "m_GoParticleEffect" },
    { { SN64_LE32(32U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 15, "m_GoSoundEffect" },
    { { SN64_LE32(36U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 18, "m_dwGoPickupsFlag1" },
    { { SN64_LE32(40U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 18, "m_dwGoPickupsFlag2" },
    { { SN64_LE32(44U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 13, "m_GoDeathAnim" },
    { { SN64_LE32(48U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 23, "m_GoDeathParticleEffect" },
    { { SN64_LE32(52U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 20, "m_GoDeathSoundEffect" },
    { { SN64_LE32(56U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 23, "m_dwGoDeathPickupsFlag1" },
    { { SN64_LE32(60U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 23, "m_dwGoDeathPickupsFlag2" },
    { { SN64_LE32(64U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 22, "m_TotemMissionDuration" },
    { { SN64_LE32(68U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 23, "m_EnemiesAttackingTurok" },
    { { SN64_LE32(70U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 26, "m_EnemiesToKillToSaveTotem" },
    { { SN64_LE32(72U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 12, "m_ModelIndex" },
    { { SN64_LE32(76U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 12, "m_ModelFrame" },
    { { SN64_LE32(80U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 28, "m_ModelIndexHealthPercentage" },
    { { SN64_LE32(84U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(84U) }, SN64_LE16(0), 27, "CDestructibleIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(84U) }, SN64_LE16(0), 27, "CDestructibleIntelligence_t", 25, "CDestructibleIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(16U) }, 21, "CPickupIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionRadius" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionHeight" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 6, "m_Time" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(16U) }, SN64_LE16(0), 21, "CPickupIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 21, "CPickupIntelligence_t", 19, "CPickupIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 30, "CInteractiveAnimIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 11, "m_StartAnim" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 30, "CInteractiveAnimIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 30, "CInteractiveAnimIntelligence_t", 28, "CInteractiveAnimIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(28U) }, 21, "CActionIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionRadius" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionHeight" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 10, "m_IdleAnim" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_IdleModel" },
    { { SN64_LE32(15U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 13, "m_IdleTexture" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 14, "m_AutoGoRadius" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 8, "m_GoAnim" },
    { { SN64_LE32(22U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 16, "m_GoPickupNeeded" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 20, "m_GoPickupNeededText" },
    { { SN64_LE32(26U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 9, "m_GoModel" },
    { { SN64_LE32(27U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_GoTexture" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(28U) }, SN64_LE16(0), 21, "CActionIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(28U) }, SN64_LE16(0), 21, "CActionIntelligence_t", 19, "CActionIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(372U) }, 21, "CPlayerIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 13, "m_StartHealth" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_SpeedScaler" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 12, "m_JumpScaler" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 12, "m_HealHealth" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 16, "m_Aggressiveness" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_Accuracy" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_Awareness" },
    { { SN64_LE32(32U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_Evasiveness" },
    { { SN64_LE32(36U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 14, "m_SeekKillZone" },
    { { SN64_LE32(40U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 16, "m_AvoidDeathZone" },
    { { SN64_LE32(44U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 20, "m_CloseAttackComfort" },
    { { SN64_LE32(48U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 21, "m_MediumAttackComfort" },
    { { SN64_LE32(52U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 18, "m_FarAttackComfort" },
    { { SN64_LE32(56U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003F), SN64_LE32(32U) }, SN64_LE16(1), { SN64_LE32(8U) }, 0, 12, "m_WeaponList" },
    { { SN64_LE32(88U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0036), SN64_LE32(32U) }, SN64_LE16(1), { SN64_LE32(8U) }, 0, 16, "m_WeaponAccuracy" },
    { { SN64_LE32(120U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003F), SN64_LE32(32U) }, SN64_LE16(1), { SN64_LE32(8U) }, 0, 17, "m_WeaponCloseList" },
    { { SN64_LE32(152U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003F), SN64_LE32(32U) }, SN64_LE16(1), { SN64_LE32(8U) }, 0, 18, "m_WeaponMediumList" },
    { { SN64_LE32(184U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003F), SN64_LE32(32U) }, SN64_LE16(1), { SN64_LE32(8U) }, 0, 15, "m_WeaponFarList" },
    { { SN64_LE32(216U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionRadius" },
    { { SN64_LE32(220U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 21, "m_CollisionWallRadius" },
    { { SN64_LE32(224U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionHeight" },
    { { SN64_LE32(228U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 21, "m_CollisionDeadHeight" },
    { { SN64_LE32(232U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 8, "m_ScaleX" },
    { { SN64_LE32(236U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 8, "m_ScaleY" },
    { { SN64_LE32(240U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 8, "m_ScaleZ" },
    { { SN64_LE32(244U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0034), SN64_LE32(128U) }, SN64_LE16(1), { SN64_LE32(32U) }, 0, 9, "m_AmmoMax" },
    { { SN64_LE32(372U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(372U) }, SN64_LE16(0), 21, "CPlayerIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(372U) }, SN64_LE16(0), 21, "CPlayerIntelligence_t", 19, "CPlayerIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(16U) }, 22, "CMorpherIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionRadius" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionHeight" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_AnimSpeed" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(16U) }, SN64_LE16(0), 22, "CMorpherIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 22, "CMorpherIntelligence_t", 20, "CMorpherIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(16U) }, 27, "CWarpEntranceIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionRadius" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 17, "m_CollisionHeight" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 15, "m_DestinationID" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(16U) }, SN64_LE16(0), 27, "CWarpEntranceIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 27, "CWarpEntranceIntelligence_t", 25, "CWarpEntranceIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(44U) }, 31, "CWeatherGeneratorIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 8, "m_wFlags" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 14, "m_NumParticles" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 8, "m_Radius" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_StartHeight" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 17, "m_MinFallVelocity" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 17, "m_MaxFallVelocity" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 8, "m_SlopeX" },
    { { SN64_LE32(18U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 8, "m_SlopeZ" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 11, "m_MinLength" },
    { { SN64_LE32(22U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 11, "m_MaxLength" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 13, "m_UpperColour" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 13, "m_LowerColour" },
    { { SN64_LE32(32U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 10, "m_nTexture" },
    { { SN64_LE32(36U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 10, "m_MinWidth" },
    { { SN64_LE32(38U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 10, "m_MaxWidth" },
    { { SN64_LE32(40U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 9, "m_Timeout" },
    { { SN64_LE32(44U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(44U) }, SN64_LE16(0), 31, "CWeatherGeneratorIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(44U) }, SN64_LE16(0), 31, "CWeatherGeneratorIntelligence_t", 29, "CWeatherGeneratorIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(12), SN64_LE16(0x0009), SN64_LE32(372U) }, 8, ".134fake" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 21, "CStaticIntelligence_t", 6, "Static" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(140U) }, SN64_LE16(0), 20, "CEnemyIntelligence_t", 5, "Enemy" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(96U) }, SN64_LE16(0), 23, "CPlatformIntelligence_t", 8, "Platform" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(40U) }, SN64_LE16(0), 24, "CGeneratorIntelligence_t", 9, "Generator" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(116U) }, SN64_LE16(0), 21, "CTurretIntelligence_t", 6, "Turret" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 24, "CThrowableIntelligence_t", 9, "Throwable" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 19, "CDoorIntelligence_t", 4, "Door" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(84U) }, SN64_LE16(0), 27, "CDestructibleIntelligence_t", 12, "Destructible" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 21, "CPickupIntelligence_t", 6, "Pickup" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 30, "CInteractiveAnimIntelligence_t", 15, "InteractiveAnim" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(28U) }, SN64_LE16(0), 21, "CActionIntelligence_t", 6, "Action" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(372U) }, SN64_LE16(0), 21, "CPlayerIntelligence_t", 6, "Player" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 22, "CMorpherIntelligence_t", 7, "Morpher" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 27, "CWarpEntranceIntelligence_t", 12, "WarpEntrance" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(44U) }, SN64_LE16(0), 31, "CWeatherGeneratorIntelligence_t", 16, "WeatherGenerator" },
    { { SN64_LE32(372U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(372U) }, SN64_LE16(0), 8, ".134fake", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(392U) }, 15, "CIntelligence_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 7, "m_nType" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_LODDist2" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 4, "m_Id" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 8, "m_nModel" },
    { { SN64_LE32(15U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 9, "m_nModel2" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 14, "m_nShadowModel" },
    { { SN64_LE32(17U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 15, "m_nShadowModel2" },
    { { SN64_LE32(18U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 10, "m_nTexture" },
    { { SN64_LE32(19U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 3, "pad" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0009), SN64_LE32(372U) }, SN64_LE16(0), 8, ".134fake", 1, "u" },
    { { SN64_LE32(392U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(392U) }, SN64_LE16(0), 15, "CIntelligence_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(392U) }, SN64_LE16(0), 15, "CIntelligence_t", 13, "CIntelligence" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 9, "Behaviors" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 15, "GROUND_BEHAVIOR" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 12, "AIR_BEHAVIOR" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 19, "UNDERWATER_BEHAVIOR" },
    { { SN64_LE32(3U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 14, "BEHAVIOR_COUNT" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 9, "Behaviors", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(4U) }, 11, "CBehavior_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0032), SN64_LE32(3U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 6, "m_Type" },
    { { SN64_LE32(3U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 17, "m_CurrentBehavior" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 11, "CBehavior_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 11, "CBehavior_t", 9, "CBehavior" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(12), SN64_LE16(0x0009), SN64_LE32(4U) }, 8, ".135fake" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(11), SN64_LE16(0x0006), SN64_LE32(0U) }, 7, "m_float" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(11), SN64_LE16(0x0004), SN64_LE32(0U) }, 5, "m_int" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 21, "CGameObjectInstance_t", 11, "m_pAnimInst" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(11), SN64_LE16(0x000F), SN64_LE32(0U) }, 7, "m_DWORD" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 7, "m_Bytes" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x003D), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(2U) }, 0, 7, "m_Words" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 11, "CBehavior_t", 10, "m_Behavior" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(11), SN64_LE16(0x0004), SN64_LE32(0U) }, 6, "m_BOOL" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 8, ".135fake", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(4U) }, 10, "CMiscVar_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0009), SN64_LE32(4U) }, SN64_LE16(0), 8, ".135fake", 1, "u" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 8, "CMiscVar" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(368U) }, 5, "CAI_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 8, "m_Health" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 13, "m_StartHealth" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 14, "m_dwModelFlags" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 13, "m_TranqHealth" },
    { { SN64_LE32(17U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 7, "padding" },
    { { SN64_LE32(18U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 17, "m_FlinchCountdown" },
    { { SN64_LE32(19U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 12, "m_FlinchTime" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0032), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 12, "m_FlinchNode" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 13, "m_vFlinchAxis" },
    { { SN64_LE32(36U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_HeadTurn" },
    { { SN64_LE32(40U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_HeadTilt" },
    { { SN64_LE32(44U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 13, "CAIModeInfo_t", 12, "m_pModeTable" },
    { { SN64_LE32(48U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 13, "CAIModeInfo_t", 11, "m_pModeInfo" },
    { { SN64_LE32(52U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 6, "m_Mode" },
    { { SN64_LE32(53U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 15, "m_ModeLastFrame" },
    { { SN64_LE32(54U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 12, "m_ModeBefore" },
    { { SN64_LE32(55U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 8, "m_Action" },
    { { SN64_LE32(56U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 20, "m_ModeLastFrameFlags" },
    { { SN64_LE32(60U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 11, "m_ModeFlags" },
    { { SN64_LE32(64U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_ModeTime" },
    { { SN64_LE32(68U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 12, "m_ActionTime" },
    { { SN64_LE32(72U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 15, "m_vPosLastFrame" },
    { { SN64_LE32(84U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 13, "m_vDesiredPos" },
    { { SN64_LE32(96U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 15, "m_RotYLastFrame" },
    { { SN64_LE32(100U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_MoveTime" },
    { { SN64_LE32(104U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 21, "CGameObjectInstance_t", 9, "m_pLeader" },
    { { SN64_LE32(108U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 15, "m_vTargetOffset" },
    { { SN64_LE32(120U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 21, "CGameObjectInstance_t", 17, "m_pTargetOverride" },
    { { SN64_LE32(124U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 20, "m_TargetOverrideTime" },
    { { SN64_LE32(128U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 21, "CGameObjectInstance_t", 14, "m_pSightTarget" },
    { { SN64_LE32(132U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 13, "CGameRegion_t", 18, "m_pPathAvoidRegion" },
    { { SN64_LE32(136U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 21, "CGameObjectInstance_t", 13, "m_pPathTarget" },
    { { SN64_LE32(140U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "m_PathRotY" },
    { { SN64_LE32(144U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 12, "m_PathHeight" },
    { { SN64_LE32(148U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 10, "CPathTrack", 11, "m_PathTrack" },
    { { SN64_LE32(156U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_StartRotY" },
    { { SN64_LE32(160U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 11, "m_vStartPos" },
    { { SN64_LE32(172U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 13, "CGameRegion_t", 14, "m_pStartRegion" },
    { { SN64_LE32(176U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 11, "m_vLeashPos" },
    { { SN64_LE32(188U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 13, "CGameRegion_t", 14, "m_pLeashRegion" },
    { { SN64_LE32(192U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 11, "m_AnimSpeed" },
    { { SN64_LE32(196U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 15, "m_ModeAnimSpeed" },
    { { SN64_LE32(200U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 10, "m_AnimType" },
    { { SN64_LE32(202U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_AnimIndex" },
    { { SN64_LE32(203U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 12, "m_AnimPlayed" },
    { { SN64_LE32(204U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 12, "m_Aggression" },
    { { SN64_LE32(205U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 12, "m_FreezeTime" },
    { { SN64_LE32(206U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 15, "m_PathFindCount" },
    { { SN64_LE32(207U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 24, "m_FramesSinceLastPainSFX" },
    { { SN64_LE32(208U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 18, "m_DeathRegionTimer" },
    { { SN64_LE32(212U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_OnFireTimer" },
    { { SN64_LE32(216U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 13, "m_vBoreTarget" },
    { { SN64_LE32(228U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 17, "m_vBoreCollNormal" },
    { { SN64_LE32(240U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 19, "m_vLaserSightSource" },
    { { SN64_LE32(252U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(32U) }, SN64_LE16(0), 19, "CLoopingSoundData_t", 23, "m_pAttachedLoopingSound" },
    { { SN64_LE32(256U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 19, "m_UseAlternateModel" },
    { { SN64_LE32(258U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 13, "m_wLimbStatus" },
    { { SN64_LE32(260U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 3, "pad" },
    { { SN64_LE32(264U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0091), SN64_LE32(0U) }, 11, "m_pfAdvance" },
    { { SN64_LE32(268U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0091), SN64_LE32(0U) }, 8, "m_pfDraw" },
    { { SN64_LE32(272U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0091), SN64_LE32(0U) }, 18, "m_pfDecreaseHealth" },
    { { SN64_LE32(276U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0091), SN64_LE32(0U) }, 13, "m_pfCollision" },
    { { SN64_LE32(280U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0091), SN64_LE32(0U) }, 17, "m_pfHitByParticle" },
    { { SN64_LE32(284U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0091), SN64_LE32(0U) }, 30, "m_pfCalculateOrientationMatrix" },
    { { SN64_LE32(288U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0091), SN64_LE32(0U) }, 18, "m_pfSpecialEffects" },
    { { SN64_LE32(292U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M0" },
    { { SN64_LE32(296U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M1" },
    { { SN64_LE32(300U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M2" },
    { { SN64_LE32(304U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M3" },
    { { SN64_LE32(308U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M4" },
    { { SN64_LE32(312U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M5" },
    { { SN64_LE32(316U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M6" },
    { { SN64_LE32(320U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M7" },
    { { SN64_LE32(324U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M8" },
    { { SN64_LE32(328U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 4, "m_M9" },
    { { SN64_LE32(332U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M10" },
    { { SN64_LE32(336U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M11" },
    { { SN64_LE32(340U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M12" },
    { { SN64_LE32(344U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M13" },
    { { SN64_LE32(348U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M14" },
    { { SN64_LE32(352U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M15" },
    { { SN64_LE32(356U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M16" },
    { { SN64_LE32(360U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M17" },
    { { SN64_LE32(364U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CMiscVar_t", 5, "m_M18" },
    { { SN64_LE32(368U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(368U) }, SN64_LE16(0), 5, "CAI_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(368U) }, SN64_LE16(0), 5, "CAI_t", 3, "CAI" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(32U) }, 15, "CAnimCompInfo_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 10, "SmoothSize" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 7, "nFrames" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 10, "DecompMode" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 9, "Tolerance" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 4, "nRot" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 6, "nTrans" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "nNewFrames" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 10, "FrameScale" },
    { { SN64_LE32(32U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(32U) }, SN64_LE16(0), 15, "CAnimCompInfo_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(32U) }, SN64_LE16(0), 15, "CAnimCompInfo_t", 13, "CAnimCompInfo" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 24, "CROMInitialOrientation_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 6, "m_vPos" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 6, "m_RotX" },
    { { SN64_LE32(14U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 6, "m_RotY" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 6, "m_RotZ" },
    { { SN64_LE32(18U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 6, "m_RotT" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 24, "CROMInitialOrientation_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 24, "CROMInitialOrientation_t", 22, "CROMInitialOrientation" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(4U) }, 15, "CROMNodeIndex_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 17, "m_nTranslationSet" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 14, "m_nRotationSet" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 15, "CROMNodeIndex_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 15, "CROMNodeIndex_t", 13, "CROMNodeIndex" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(24U) }, 20, "CTranslationOffset_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 9, "m_vOffset" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 8, "m_vScale" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(24U) }, SN64_LE16(0), 20, "CTranslationOffset_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 20, "CTranslationOffset_t", 18, "CTranslationOffset" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(12U) }, 16, "CROMTransition_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 17, "m_BlendFromLength" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 14, "m_nExitToFrame" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 12, "m_BlendStart" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 13, "m_BlendFinish" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 5, "m_FPS" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(12U) }, SN64_LE16(0), 16, "CROMTransition_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 16, "CROMTransition_t", 14, "CROMTransition" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(12U) }, 21, "CROMTransitionEntry_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 16, "m_nRequestedAnim" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 15, "m_nWaitForFrame" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 16, "m_nDeliveredAnim" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(12U) }, SN64_LE16(0), 21, "CROMTransitionEntry_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 21, "CROMTransitionEntry_t", 19, "CROMTransitionEntry" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_TAG), SN64_LE16(0x000A), SN64_LE32(4U) }, 17, "EventValueFormats" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 14, "EVENT_FORMAT1A" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 14, "EVENT_FORMAT2A" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 14, "EVENT_FORMAT2B" },
    { { SN64_LE32(3U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 14, "EVENT_FORMAT3A" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 14, "EVENT_FORMAT4A" },
    { { SN64_LE32(5U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 14, "EVENT_FORMAT6A" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 14, "EVENT_FORMAT7A" },
    { { SN64_LE32(7U), SN64_DEF, SN64_LE16(SN64_ENUM_MEMBER), SN64_LE16(0x000B), SN64_LE32(0U) }, 13, "EVENT_FORMATS" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 17, "EventValueFormats", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(4U) }, 21, "s_CEventValueFormat1a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 12, "m_s32_Value1" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 21, "s_CEventValueFormat1a", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 21, "s_CEventValueFormat1a", 19, "CEventValueFormat1a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 21, "s_CEventValueFormat2a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 12, "m_s32_Value1" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 12, "m_s32_Value2" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat2a", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat2a", 19, "CEventValueFormat2a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 21, "s_CEventValueFormat2b" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 12, "m_s32_Value1" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 12, "m_f32_Value2" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat2b", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat2b", 19, "CEventValueFormat2b" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 21, "s_CEventValueFormat3a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 12, "m_s32_Value1" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "m_s16_Value2" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_s8_Value3" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat3a", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat3a", 19, "CEventValueFormat3a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 21, "s_CEventValueFormat4a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "m_s16_Value1" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "m_s16_Value2" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "m_s16_Value3" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "m_s16_Value4" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat4a", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat4a", 19, "CEventValueFormat4a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 21, "s_CEventValueFormat6a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "m_s16_Value1" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 12, "m_s16_Value2" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_s8_Value3" },
    { { SN64_LE32(5U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_s8_Value4" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_s8_Value5" },
    { { SN64_LE32(7U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 11, "m_s8_Value6" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat6a", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat6a", 19, "CEventValueFormat6a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(7U) }, 21, "s_CEventValueFormat7a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 11, "m_u8_Value1" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 11, "m_u8_Value2" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 11, "m_u8_Value3" },
    { { SN64_LE32(3U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 11, "m_u8_Value4" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 11, "m_u8_Value5" },
    { { SN64_LE32(5U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 11, "m_u8_Value6" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 11, "m_u8_Value7" },
    { { SN64_LE32(7U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(7U) }, SN64_LE16(0), 21, "s_CEventValueFormat7a", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(7U) }, SN64_LE16(0), 21, "s_CEventValueFormat7a", 19, "CEventValueFormat7a" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(12), SN64_LE16(0x0009), SN64_LE32(8U) }, 8, ".136fake" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 21, "s_CEventValueFormat1a", 10, "m_Format1a" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat2a", 10, "m_Format2a" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat2b", 10, "m_Format2b" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat3a", 10, "m_Format3a" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat4a", 10, "m_Format4a" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 21, "s_CEventValueFormat6a", 10, "m_Format6a" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(11), SN64_LE16(0x0008), SN64_LE32(7U) }, SN64_LE16(0), 21, "s_CEventValueFormat7a", 10, "m_Format7a" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 8, ".136fake", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 13, "s_CEventValue" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0009), SN64_LE32(8U) }, SN64_LE16(0), 8, ".136fake", 1, "u" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 13, "s_CEventValue", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 13, "s_CEventValue", 11, "CEventValue" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(28U) }, 16, "CROMEventEntry_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 8, "m_nFrame" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 8, "m_nEvent" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0003), SN64_LE32(0U) }, 7, "m_nNode" },
    { { SN64_LE32(6U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 3, "pad" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 9, "m_vOffset" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 13, "s_CEventValue", 7, "m_Value" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(28U) }, SN64_LE16(0), 16, "CROMEventEntry_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(28U) }, SN64_LE16(0), 16, "CROMEventEntry_t", 14, "CROMEventEntry" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(4U) }, 10, "CVisBits_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003F), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(1U) }, 0, 4, "Bits" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(4U) }, SN64_LE16(0), 10, "CVisBits_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CVisBits_t", 8, "CVisBits" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(16U) }, 15, "CROMCornerEnc_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 1, "x" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 1, "y" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 1, "z" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 1, "c" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(16U) }, SN64_LE16(0), 15, "CROMCornerEnc_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 15, "CROMCornerEnc_t", 13, "CROMCornerEnc" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(16U) }, 12, "CROMCorner_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 9, "m_vCorner" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 9, "m_Ceiling" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(16U) }, SN64_LE16(0), 12, "CROMCorner_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 12, "CROMCorner_t", 10, "CROMCorner" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(100U) }, 15, "CROMRegionSet_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 10, "m_FogColor" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(4U) }, 0, 12, "m_WaterColor" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 10, "m_FogStart" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 12, "m_WaterStart" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 9, "m_FarClip" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_FieldOfView" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 14, "m_WaterFarClip" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 18, "m_WaterFieldOfView" },
    { { SN64_LE32(32U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 16, "m_WaterElevation" },
    { { SN64_LE32(36U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_BlendLength" },
    { { SN64_LE32(40U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 16, "m_DeathTimeDelay" },
    { { SN64_LE32(44U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 21, "m_CameraVertEyeOffset" },
    { { SN64_LE32(48U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 22, "m_CameraMovementScaler" },
    { { SN64_LE32(52U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_JumpPadEndX" },
    { { SN64_LE32(56U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_JumpPadEndY" },
    { { SN64_LE32(60U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 13, "m_JumpPadEndZ" },
    { { SN64_LE32(64U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 15, "m_JumpPadHeight" },
    { { SN64_LE32(68U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 9, "m_dwFlags" },
    { { SN64_LE32(72U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 8, "m_WarpID" },
    { { SN64_LE32(74U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 26, "m_PressurePlateSoundNumber" },
    { { SN64_LE32(76U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 18, "m_SaveCheckpointID" },
    { { SN64_LE32(78U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 12, "m_PressureID" },
    { { SN64_LE32(80U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 16, "m_DeathHitPoints" },
    { { SN64_LE32(82U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 9, "m_wFlags2" },
    { { SN64_LE32(84U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 9, "m_wFlags3" },
    { { SN64_LE32(86U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 12, "m_wSkyLayers" },
    { { SN64_LE32(88U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 11, "m_GroundMat" },
    { { SN64_LE32(89U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 9, "m_WallMat" },
    { { SN64_LE32(90U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 9, "m_MusicID" },
    { { SN64_LE32(91U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 15, "m_AmbientSounds" },
    { { SN64_LE32(92U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 10, "m_MapColor" },
    { { SN64_LE32(93U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 17, "m_CurrentStrength" },
    { { SN64_LE32(94U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 13, "m_JumpPadTime" },
    { { SN64_LE32(95U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 19, "m_CurrentDirectionX" },
    { { SN64_LE32(96U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 19, "m_CurrentDirectionY" },
    { { SN64_LE32(97U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 19, "m_CurrentDirectionZ" },
    { { SN64_LE32(98U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 11, "m_WeatherID" },
    { { SN64_LE32(100U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(100U) }, SN64_LE16(0), 15, "CROMRegionSet_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(100U) }, SN64_LE16(0), 15, "CROMRegionSet_t", 13, "CROMRegionSet" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 12, "CROMRegion_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 12, "m_nRegionSet" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 8, "m_wFlags" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003D), SN64_LE32(6U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 9, "m_Corners" },
    { { SN64_LE32(10U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003D), SN64_LE32(6U) }, SN64_LE16(1), { SN64_LE32(3U) }, 0, 11, "m_Neighbors" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CVisBits_t", 9, "m_VisBits" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 12, "CROMRegion_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 12, "CROMRegion_t", 10, "CROMRegion" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(32U) }, 13, "CGameRegion_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 12, "m_nRegionSet" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 8, "m_wFlags" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0078), SN64_LE32(12U) }, SN64_LE16(1), { SN64_LE32(3U) }, 12, "CROMCorner_t", 10, "m_pCorners" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0078), SN64_LE32(12U) }, SN64_LE16(1), { SN64_LE32(3U) }, 13, "CGameRegion_t", 12, "m_pNeighbors" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(4U) }, SN64_LE16(0), 10, "CVisBits_t", 9, "m_VisBits" },
    { { SN64_LE32(32U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(32U) }, SN64_LE16(0), 13, "CGameRegion_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(32U) }, SN64_LE16(0), 13, "CGameRegion_t", 11, "CGameRegion" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(24U) }, 12, "CROMBounds_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 6, "m_vMin" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 6, "m_vMax" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(24U) }, SN64_LE16(0), 12, "CROMBounds_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 12, "CROMBounds_t", 10, "CROMBounds" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(16U) }, 13, "CBoundsRect_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 6, "m_MinX" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 6, "m_MinZ" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 6, "m_MaxX" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 6, "m_MaxZ" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(16U) }, SN64_LE16(0), 13, "CBoundsRect_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 13, "CBoundsRect_t", 11, "CBoundsRect" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 17, "CROMRegionBlock_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 13, "CBoundsRect_t", 12, "m_BoundsRect" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 10, "m_nRegions" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 17, "CROMRegionBlock_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 17, "CROMRegionBlock_t", 15, "CROMRegionBlock" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 16, "CROMGridBounds_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(16U) }, SN64_LE16(0), 13, "CBoundsRect_t", 12, "m_BoundsRect" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 8, "m_bEmpty" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 16, "CROMGridBounds_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 16, "CROMGridBounds_t", 14, "CROMGridBounds" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(28U) }, 14, "CInstanceHdr_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000C), SN64_LE32(0U) }, 6, "m_Type" },
    { { SN64_LE32(1U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 8, "m_nModel" },
    { { SN64_LE32(2U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 14, "m_nShadowModel" },
    { { SN64_LE32(3U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0002), SN64_LE32(0U) }, 10, "m_nTexture" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000D), SN64_LE32(0U) }, 10, "m_nObjType" },
    { { SN64_LE32(6U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003C), SN64_LE32(2U) }, SN64_LE16(1), { SN64_LE32(2U) }, 0, 7, "PADDING" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 6, "m_vPos" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(32U) }, SN64_LE16(0), 13, "CGameRegion_t", 16, "m_pCurrentRegion" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(392U) }, SN64_LE16(0), 15, "CIntelligence_t", 4, "m_pI" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(28U) }, SN64_LE16(0), 14, "CInstanceHdr_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(28U) }, SN64_LE16(0), 14, "CInstanceHdr_t", 12, "CInstanceHdr" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(80U) }, 18, "CAnimInstanceHdr_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(28U) }, SN64_LE16(0), 14, "CInstanceHdr_t", 2, "ih" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 11, "m_vVelocity" },
    { { SN64_LE32(40U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 10, "m_vCurrent" },
    { { SN64_LE32(52U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(28U) }, SN64_LE16(0), 14, "CInstanceHdr_t", 16, "m_pInstanceBelow" },
    { { SN64_LE32(56U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 11, "m_CollFlags" },
    { { SN64_LE32(60U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 16, "m_GroundMaterial" },
    { { SN64_LE32(64U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0006), SN64_LE32(0U) }, 14, "m_GroundHeight" },
    { { SN64_LE32(68U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 10, "CVector3_t", 15, "m_vGroundNormal" },
    { { SN64_LE32(80U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(80U) }, SN64_LE16(0), 18, "CAnimInstanceHdr_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(80U) }, SN64_LE16(0), 18, "CAnimInstanceHdr_t", 16, "CAnimInstanceHdr" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(8U) }, 6, "s_ISet" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 12, "m_BlockCount" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0035), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(1U) }, 0, 9, "m_Offsets" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(8U) }, SN64_LE16(0), 6, "s_ISet", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(8U) }, SN64_LE16(0), 6, "s_ISet", 5, "CISet" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(12U) }, 6, "s_USet" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 11, "m_BlockSize" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0005), SN64_LE32(0U) }, 12, "m_BlockCount" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0035), SN64_LE32(4U) }, SN64_LE16(1), { SN64_LE32(1U) }, 0, 7, "m_Array" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(12U) }, SN64_LE16(0), 6, "s_USet", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(12U) }, SN64_LE16(0), 6, "s_USet", 5, "CUSet" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(24U) }, 12, "CHeapBlock_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 9, "pFreeLast" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 9, "pFreeNext" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 9, "pUsedLast" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 9, "pUsedNext" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 4, "Used" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 4, "Free" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 10, "CHeapBlock" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20U) }, 7, "CHeap_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 8, "MemStart" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 6, "MemEnd" },
    { { SN64_LE32(8U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 9, "pFreeHead" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 9, "pFreeTail" },
    { { SN64_LE32(16U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 12, "CHeapBlock_t", 9, "pUsedHead" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20U) }, SN64_LE16(0), 7, "CHeap_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 7, "CHeap_t", 5, "CHeap" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0091), SN64_LE32(0U) }, 13, "pfnTHREADMAIN" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(32U) }, 14, "CLoaderEntry_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 8, "pAddress" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 5, "pDest" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 6, "Length" },
    { { SN64_LE32(12U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 13, "OSMesgQueue_s", 11, "pReplyQueue" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 13, "pReplyMessage" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 7, "dwFlags" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(32U) }, SN64_LE16(0), 14, "CLoaderEntry_t", 5, "pLast" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(32U) }, SN64_LE16(0), 14, "CLoaderEntry_t", 5, "pNext" },
    { { SN64_LE32(32U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(32U) }, SN64_LE16(0), 14, "CLoaderEntry_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(32U) }, SN64_LE16(0), 14, "CLoaderEntry_t", 12, "CLoaderEntry" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(20624U) }, 9, "CLoader_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(560U) }, SN64_LE16(0), 10, "OSThread_s", 6, "Thread" },
    { { SN64_LE32(560U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 13, "OSMesgQueue_s", 5, "Queue" },
    { { SN64_LE32(584U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0071), SN64_LE32(2048U) }, SN64_LE16(1), { SN64_LE32(512U) }, 0, 4, "Msgs" },
    { { SN64_LE32(2632U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 13, "OSMesgQueue_s", 12, "PiReplyQueue" },
    { { SN64_LE32(2656U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 10, "PiReplyMsg" },
    { { SN64_LE32(2664U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003F), SN64_LE32(1024U) }, SN64_LE16(1), { SN64_LE32(128U) }, 0, 5, "Stack" },
    { { SN64_LE32(3688U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0038), SN64_LE32(16896U) }, SN64_LE16(1), { SN64_LE32(528U) }, 14, "CLoaderEntry_t", 7, "Entries" },
    { { SN64_LE32(20584U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 7, "CList_t", 8, "FreeList" },
    { { SN64_LE32(20604U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(20U) }, SN64_LE16(0), 7, "CList_t", 8, "UsedList" },
    { { SN64_LE32(20624U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(20624U) }, SN64_LE16(0), 9, "CLoader_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(20624U) }, SN64_LE16(0), 9, "CLoader_t", 7, "CLoader" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0091), SN64_LE32(0U) }, 21, "pfnDECOMPRESSCALLBACK" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(40U) }, 11, "CMemEntry_t" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 5, "pData" },
    { { SN64_LE32(4U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 4, "Size" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 6, "nLocks" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 7, "dwFlags" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 3, "Age" },
    { { SN64_LE32(20U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(0U) }, SN64_LE16(0), 13, "CCacheNtry2_t", 11, "pCacheEntry" },
    { { SN64_LE32(24U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 5, "pLast" },
    { { SN64_LE32(28U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 5, "pNext" },
    { { SN64_LE32(32U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 8, "pPosLast" },
    { { SN64_LE32(36U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 8, "pPosNext" },
    { { SN64_LE32(40U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 9, "CMemEntry" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(44U) }, 13, "CCacheNtry2_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 9, "pMemEntry" },
    { { SN64_LE32(4U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(40U) }, SN64_LE16(0), 11, "CMemEntry_t", 19, "pReferencedMemEntry" },
    { { SN64_LE32(8U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 10, "pRequestID" },
    { { SN64_LE32(12U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0004), SN64_LE32(0U) }, 13, "RequestLength" },
    { { SN64_LE32(16U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 7, "dwFlags" },
    { { SN64_LE32(20U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0091), SN64_LE32(0U) }, 18, "DecompressCallback" },
    { { SN64_LE32(24U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0011), SN64_LE32(0U) }, 9, "pNotifyID" },
    { { SN64_LE32(28U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 10, "dwMemFlags" },
    { { SN64_LE32(32U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(24U) }, SN64_LE16(0), 13, "OSMesgQueue_s", 21, "pDecompressReplyQueue" },
    { { SN64_LE32(36U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(44U) }, SN64_LE16(0), 13, "CCacheNtry2_t", 5, "pNext" },
    { { SN64_LE32(40U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0018), SN64_LE32(44U) }, SN64_LE16(0), 13, "CCacheNtry2_t", 5, "pLast" },
    { { SN64_LE32(44U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(44U) }, SN64_LE16(0), 13, "CCacheNtry2_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(44U) }, SN64_LE16(0), 13, "CCacheNtry2_t", 11, "CCacheNtry2" },
    { { SN64_LE32(0U), SN64_DEF, SN64_LE16(SN64_STRUCT_TAG), SN64_LE16(0x0008), SN64_LE32(5200U) }, 15, "CDecompressor_t" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(560U) }, SN64_LE16(0), 10, "OSThread_s", 6, "Thread" },
    { { SN64_LE32(560U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0008), SN64_LE32(24U) }, SN64_LE16(0), 13, "OSMesgQueue_s", 5, "Queue" },
    { { SN64_LE32(584U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x0071), SN64_LE32(512U) }, SN64_LE16(1), { SN64_LE32(128U) }, 0, 4, "Msgs" },
    { { SN64_LE32(1096U), SN64_DEF2, SN64_LE16(SN64_MEMBER), SN64_LE16(0x003F), SN64_LE32(4096U) }, SN64_LE16(1), { SN64_LE32(512U) }, 0, 5, "Stack" },
    { { SN64_LE32(5192U), SN64_DEF, SN64_LE16(SN64_MEMBER), SN64_LE16(0x000F), SN64_LE32(0U) }, 14, "LastDecompress" },
    { { SN64_LE32(5200U), SN64_DEF2, SN64_LE16(SN64_END_STRUCT), SN64_LE16(0x0000), SN64_LE32(5200U) }, SN64_LE16(0), 15, "CDecompressor_t", 4, ".eos" },
    { { SN64_LE32(0U), SN64_DEF2, SN64_LE16(SN64_TYPEDEF), SN64_LE16(0x0008), SN64_LE32(5200U) }, SN64_LE16(0), 15, "CDecom" },
};
typedef char sn64_intelligence_type_records_size_check[(sizeof(Sn64IntelligenceTypeRecords) == 20461) ? 1 : -1];
#endif
