#ifndef UNBAKE_COMMON_TYPES_H
#define UNBAKE_COMMON_TYPES_H
#include "audio_callbacks.h"
#include "gfx.h"
#include "../types.h"
/* unbake declaration evidence: evidence_15634c5f0d54764e20fb0b72 */
#if defined(VERSION_EU) || defined(VERSION_EU_X)
#if defined(VERSION_EU_X)
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) ((eu_x_table)[language])
#else
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) ((eu_table)[language])
#endif
#else
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) (fixed)
#endif

/* unbake evidence input: LyogdW5iYWtlIGRlY2xhcmF0aW9uIGV2aWRlbmNlOiBldmlkZW5jZV8xNTYzNGM1ZjBkNTQ3NjRlMjBmYjBiNzIgKi8KI2lmIGRlZmluZWQoVkVSU0lPTl9FVSkgfHwgZGVmaW5lZChWRVJTSU9OX0VVX1gpCiNpZiBkZWZpbmVkKFZFUlNJT05fRVVfWCkKI2RlZmluZSBSV19MT0NBTElaRURfVEVYVChmaXhlZCwgZXVfdGFibGUsIGV1X3hfdGFibGUsIGxhbmd1YWdlKSAoKGV1X3hfdGFibGUpW2xhbmd1YWdlXSkKI2Vsc2UKI2RlZmluZSBSV19MT0NBTElaRURfVEVYVChmaXhlZCwgZXVfdGFibGUsIGV1X3hfdGFibGUsIGxhbmd1YWdlKSAoKGV1X3RhYmxlKVtsYW5ndWFnZV0pCiNlbmRpZgojZWxzZQojZGVmaW5lIFJXX0xPQ0FMSVpFRF9URVhUKGZpeGVkLCBldV90YWJsZSwgZXVfeF90YWJsZSwgbGFuZ3VhZ2UpIChmaXhlZCkKI2VuZGlmCg== */

struct ALADPCMBook;
typedef struct ALADPCMBook ALADPCMBook;

struct ALADPCMWaveInfo;
typedef struct ALADPCMWaveInfo ALADPCMWaveInfo;

struct ALADPCMloop;
typedef struct ALADPCMloop ALADPCMloop;

struct ALAuxBus_s;
typedef struct ALAuxBus_s ALAuxBus_s;

struct ALBank_s;
typedef struct ALBank_s ALBank_s;

struct ALCSPlayer;
typedef struct ALCSPlayer ALCSPlayer;

struct ALChanState;
typedef struct ALChanState ALChanState;

struct ALChanState10;
typedef struct ALChanState10 ALChanState10;

struct ALDelay28_2;
typedef struct ALDelay28_2 ALDelay28_2;

struct ALDelay_func_802B5B94_de;
typedef struct ALDelay_func_802B5B94_de ALDelay_func_802B5B94_de;

struct ALEnvMixer4C;
typedef struct ALEnvMixer4C ALEnvMixer4C;

struct ALEnvMixer_s;
typedef struct ALEnvMixer_s ALEnvMixer_s;

struct ALEnvelope;
typedef struct ALEnvelope ALEnvelope;

struct ALEvent10;
typedef struct ALEvent10 ALEvent10;

struct ALEvent10_2;
typedef struct ALEvent10_2 ALEvent10_2;

struct ALEventQueue;
typedef struct ALEventQueue ALEventQueue;

struct ALFilter_s14;
typedef struct ALFilter_s14 ALFilter_s14;

struct ALFilter_s14_2;
typedef struct ALFilter_s14_2 ALFilter_s14_2;

struct ALFilter_sC;
typedef struct ALFilter_sC ALFilter_sC;

struct ALFx2C;
typedef struct ALFx2C ALFx2C;

struct ALFx_func_802B5B94_de;
typedef struct ALFx_func_802B5B94_de ALFx_func_802B5B94_de;

struct ALGlobals;
typedef struct ALGlobals ALGlobals;

struct ALGlobals_func_802B5B94_de;
typedef struct ALGlobals_func_802B5B94_de ALGlobals_func_802B5B94_de;

struct ALHeap;
typedef struct ALHeap ALHeap;

struct ALInstrument;
typedef struct ALInstrument ALInstrument;

struct ALKeyMap;
typedef struct ALKeyMap ALKeyMap;

struct ALLoadFilter;
typedef struct ALLoadFilter ALLoadFilter;

struct ALLoadFilter48;
typedef struct ALLoadFilter48 ALLoadFilter48;

struct ALMIDIEvent;
typedef struct ALMIDIEvent ALMIDIEvent;

struct ALMainBus_s;
typedef struct ALMainBus_s ALMainBus_s;

struct ALNoteEvent;
typedef struct ALNoteEvent ALNoteEvent;

struct ALOscEvent;
typedef struct ALOscEvent ALOscEvent;

struct ALParam_s1C;
typedef struct ALParam_s1C ALParam_s1C;

struct ALPlayer_s;
typedef struct ALPlayer_s ALPlayer_s;

struct ALPlayer_s14;
typedef struct ALPlayer_s14 ALPlayer_s14;

struct ALRAWWaveInfo;
typedef struct ALRAWWaveInfo ALRAWWaveInfo;

struct ALRawLoop;
typedef struct ALRawLoop ALRawLoop;

struct ALResampler;
typedef struct ALResampler ALResampler;

struct ALResampler_s;
typedef struct ALResampler_s ALResampler_s;

struct ALSave;
typedef struct ALSave ALSave;

struct ALSeqMarker;
typedef struct ALSeqMarker ALSeqMarker;

struct ALSeqPlayer88;
typedef struct ALSeqPlayer88 ALSeqPlayer88;

struct ALSeqPlayer_func_802B0A90_de;
typedef struct ALSeqPlayer_func_802B0A90_de ALSeqPlayer_func_802B0A90_de;

struct ALSndPlayer_func_802B2780_de;
typedef struct ALSndPlayer_func_802B2780_de ALSndPlayer_func_802B2780_de;

union ALSndpEvent_func_802B2780_de;
typedef union ALSndpEvent_func_802B2780_de ALSndpEvent_func_802B2780_de;

struct ALSound;
typedef struct ALSound ALSound;

struct ALSoundState_func_802B2780_de;
typedef struct ALSoundState_func_802B2780_de ALSoundState_func_802B2780_de;

struct ALSound_s;
typedef struct ALSound_s ALSound_s;

struct ALSound_s_func_802B2780_de;
typedef struct ALSound_s_func_802B2780_de ALSound_s_func_802B2780_de;

struct ALSynConfig;
typedef struct ALSynConfig ALSynConfig;

struct ALSynth;
typedef struct ALSynth ALSynth;

struct ALSynth4C;
typedef struct ALSynth4C ALSynth4C;

struct ALVoiceState_s38;
typedef struct ALVoiceState_s38 ALVoiceState_s38;

struct ALVoice_s;
typedef struct ALVoice_s ALVoice_s;

struct ALVolumeEvent;
typedef struct ALVolumeEvent ALVolumeEvent;

struct ALWaveTable_s;
typedef struct ALWaveTable_s ALWaveTable_s;

struct ALWaveTable_s_func_802BE514_de;
typedef struct ALWaveTable_s_func_802BE514_de ALWaveTable_s_func_802BE514_de;

struct Access_Callback_4;
typedef struct Access_Callback_4 Access_Callback_4;

struct Access_s32_30;
typedef struct Access_s32_30 Access_s32_30;

struct Access_s32_5C;
typedef struct Access_s32_5C Access_s32_5C;

struct Access_s32_AC;
typedef struct Access_s32_AC Access_s32_AC;

struct Access_s8_E6;
typedef struct Access_s8_E6 Access_s8_E6;

struct Access_u32_0;
typedef struct Access_u32_0 Access_u32_0;

struct Access_u8_10F;
typedef struct Access_u8_10F Access_u8_10F;

struct Access_u8_123;
typedef struct Access_u8_123 Access_u8_123;

struct Access_u8_36;
typedef struct Access_u8_36 Access_u8_36;

struct Access_u8_CB;
typedef struct Access_u8_CB Access_u8_CB;

struct Access_void_30;
typedef struct Access_void_30 Access_void_30;

struct Access_void_B4;
typedef struct Access_void_B4 Access_void_B4;

struct ActorDef;
typedef struct ActorDef ActorDef;

struct Actor_func_80212D78_eu_x;
typedef struct Actor_func_80212D78_eu_x Actor_func_80212D78_eu_x;

struct Actor_func_80214624_de;
typedef struct Actor_func_80214624_de Actor_func_80214624_de;

struct Actor_func_80245D30_de;
typedef struct Actor_func_80245D30_de Actor_func_80245D30_de;

struct Actor_func_8024A7A0_de;
typedef struct Actor_func_8024A7A0_de Actor_func_8024A7A0_de;

struct Actor_func_80443844_de;
typedef struct Actor_func_80443844_de Actor_func_80443844_de;

struct Actor_func_8044560C_de;
typedef struct Actor_func_8044560C_de Actor_func_8044560C_de;

struct Angles;
typedef struct Angles Angles;

struct Angles_func_8025AB94_de;
typedef struct Angles_func_8025AB94_de Angles_func_8025AB94_de;

struct Animator;
typedef struct Animator Animator;

struct ArenaPageNode;
typedef struct ArenaPageNode ArenaPageNode;

struct ArenaPageScreen;
typedef struct ArenaPageScreen ArenaPageScreen;

struct Arg3;
typedef struct Arg3 Arg3;

struct Args;
typedef struct Args Args;

struct Attachment;
typedef struct Attachment Attachment;

struct AttachmentTable;
typedef struct AttachmentTable AttachmentTable;

struct AttackReleaseState;
typedef struct AttackReleaseState AttackReleaseState;

struct Bank_func_8044D794_de;
typedef struct Bank_func_8044D794_de Bank_func_8044D794_de;

struct Behaviour;
typedef struct Behaviour Behaviour;

struct Binding;
typedef struct Binding Binding;

struct BlinkFrame;
typedef struct BlinkFrame BlinkFrame;

struct Blinker;
typedef struct Blinker Blinker;

struct Block12;
typedef struct Block12 Block12;

struct Body;
typedef struct Body Body;

struct Box;
typedef struct Box Box;

struct BreakableHitDescriptor;
typedef struct BreakableHitDescriptor BreakableHitDescriptor;

struct BreakableHitState;
typedef struct BreakableHitState BreakableHitState;

struct Buffers;
typedef struct Buffers Buffers;

struct Bytes12;
typedef struct Bytes12 Bytes12;

struct CallbackEntry;
typedef struct CallbackEntry CallbackEntry;

struct CallbackPair;
typedef struct CallbackPair CallbackPair;

struct CallbackState114;
typedef struct CallbackState114 CallbackState114;

struct CallbackState290;
typedef struct CallbackState290 CallbackState290;

struct CallbackState48;
typedef struct CallbackState48 CallbackState48;

struct CallbackState64;
typedef struct CallbackState64 CallbackState64;

struct CallbackStateC_2;
typedef struct CallbackStateC_2 CallbackStateC_2;

struct CallbackStateC_3;
typedef struct CallbackStateC_3 CallbackStateC_3;

struct CallbackStateEC;
typedef struct CallbackStateEC CallbackStateEC;

struct CameraBlock;
typedef struct CameraBlock CameraBlock;

struct CameraRecord;
typedef struct CameraRecord CameraRecord;

struct Camera_func_8026851C_de;
typedef struct Camera_func_8026851C_de Camera_func_8026851C_de;

struct Camera_func_80401980_de;
typedef struct Camera_func_80401980_de Camera_func_80401980_de;

struct ChannelRecord;
typedef struct ChannelRecord ChannelRecord;

struct Channel_func_80430118_de;
typedef struct Channel_func_80430118_de Channel_func_80430118_de;

struct CharacterNextState;
typedef struct CharacterNextState CharacterNextState;

struct CharacterScreenCell;
typedef struct CharacterScreenCell CharacterScreenCell;

struct CharacterScreenEntry;
typedef struct CharacterScreenEntry CharacterScreenEntry;

struct CharacterScreenRow;
typedef struct CharacterScreenRow CharacterScreenRow;

struct CharacterScreenScreen;
typedef struct CharacterScreenScreen CharacterScreenScreen;

struct CharacterSelectionScreen;
typedef struct CharacterSelectionScreen CharacterSelectionScreen;

struct Clip;
typedef struct Clip Clip;

struct Context_func_80257360_de;
typedef struct Context_func_80257360_de Context_func_80257360_de;

struct Context_func_8025AB94_de;
typedef struct Context_func_8025AB94_de Context_func_8025AB94_de;

struct Controller;
typedef struct Controller Controller;

struct Controller_func_80259C5C_de;
typedef struct Controller_func_80259C5C_de Controller_func_80259C5C_de;

struct Course;
typedef struct Course Course;

struct Ctrl;
typedef struct Ctrl Ctrl;

struct Ctx_func_8028F544_de;
typedef struct Ctx_func_8028F544_de Ctx_func_8028F544_de;

struct D_800C7470_Pair;
typedef struct D_800C7470_Pair D_800C7470_Pair;

struct Def;
typedef struct Def Def;

struct Descriptor;
typedef struct Descriptor Descriptor;

struct Descriptor_func_80205F18_de;
typedef struct Descriptor_func_80205F18_de Descriptor_func_80205F18_de;

struct Descriptor_func_802504B0_de;
typedef struct Descriptor_func_802504B0_de Descriptor_func_802504B0_de;

struct Dest;
typedef struct Dest Dest;

struct Digits;
typedef struct Digits Digits;

struct Draw;
typedef struct Draw Draw;

struct EffectActor;
typedef struct EffectActor EffectActor;

struct EffectActorModel;
typedef struct EffectActorModel EffectActorModel;

struct EffectBlock;
typedef struct EffectBlock EffectBlock;

struct EffectColorParams;
typedef struct EffectColorParams EffectColorParams;

struct EffectEntry;
typedef struct EffectEntry EffectEntry;

struct EffectList;
typedef struct EffectList EffectList;

struct EffectModel;
typedef struct EffectModel EffectModel;

struct EffectMotion;
typedef struct EffectMotion EffectMotion;

struct EffectParams;
typedef struct EffectParams EffectParams;

struct EffectRender;
typedef struct EffectRender EffectRender;

struct EffectSystem;
typedef struct EffectSystem EffectSystem;

struct EffectTarget;
typedef struct EffectTarget EffectTarget;

struct Effect_func_8026851C_de;
typedef struct Effect_func_8026851C_de Effect_func_8026851C_de;

struct Effect_func_802800C0_de;
typedef struct Effect_func_802800C0_de Effect_func_802800C0_de;

struct Element_func_8041200C_de;
typedef struct Element_func_8041200C_de Element_func_8041200C_de;

struct Ent;
typedef struct Ent Ent;

struct Entity_func_80290424_de;
typedef struct Entity_func_80290424_de Entity_func_80290424_de;

struct Entity_func_8041C7F4_de;
typedef struct Entity_func_8041C7F4_de Entity_func_8041C7F4_de;

struct Entry_func_8023B9C0_eu;
typedef struct Entry_func_8023B9C0_eu Entry_func_8023B9C0_eu;

struct Entry_func_80250E70_de;
typedef struct Entry_func_80250E70_de Entry_func_80250E70_de;

struct Entry_func_80297DBC_de;
typedef struct Entry_func_80297DBC_de Entry_func_80297DBC_de;

struct Entry_func_80297EA4_de;
typedef struct Entry_func_80297EA4_de Entry_func_80297EA4_de;

struct Entry_func_80298170_de;
typedef struct Entry_func_80298170_de Entry_func_80298170_de;

struct Entry_func_80298ECC_de;
typedef struct Entry_func_80298ECC_de Entry_func_80298ECC_de;

struct Entry_func_802991D4_de;
typedef struct Entry_func_802991D4_de Entry_func_802991D4_de;

struct Entry_func_8040F580_de;
typedef struct Entry_func_8040F580_de Entry_func_8040F580_de;

struct Entry_func_80411518_de;
typedef struct Entry_func_80411518_de Entry_func_80411518_de;

struct Entry_func_804279B8_de;
typedef struct Entry_func_804279B8_de Entry_func_804279B8_de;

struct Entry_func_8044D794_de;
typedef struct Entry_func_8044D794_de Entry_func_8044D794_de;

struct Extra;
typedef struct Extra Extra;

struct FadeObjectState;
typedef struct FadeObjectState FadeObjectState;

struct FadeParameters;
typedef struct FadeParameters FadeParameters;

struct FftTables;
typedef struct FftTables FftTables;

struct FieldRow;
typedef struct FieldRow FieldRow;

struct Field_f32_10;
typedef struct Field_f32_10 Field_f32_10;

struct Field_u16_14;
typedef struct Field_u16_14 Field_u16_14;

struct Field_void_4;
typedef struct Field_void_4 Field_void_4;

struct Flagged;
typedef struct Flagged Flagged;

struct FloatState14;
typedef struct FloatState14 FloatState14;

struct FloatState144;
typedef struct FloatState144 FloatState144;

struct FloatState178;
typedef struct FloatState178 FloatState178;

struct FloatState180;
typedef struct FloatState180 FloatState180;

struct FloatState184;
typedef struct FloatState184 FloatState184;

struct FloatState188;
typedef struct FloatState188 FloatState188;

struct FloatState18C;
typedef struct FloatState18C FloatState18C;

struct FloatState190;
typedef struct FloatState190 FloatState190;

struct FloatState194;
typedef struct FloatState194 FloatState194;

struct FloatState198;
typedef struct FloatState198 FloatState198;

struct FloatState1A0;
typedef struct FloatState1A0 FloatState1A0;

struct FloatState1A4;
typedef struct FloatState1A4 FloatState1A4;

struct FloatState1A8;
typedef struct FloatState1A8 FloatState1A8;

struct FloatState1AC;
typedef struct FloatState1AC FloatState1AC;

struct FloatState1B0;
typedef struct FloatState1B0 FloatState1B0;

struct FloatState1B4;
typedef struct FloatState1B4 FloatState1B4;

struct FloatState4C;
typedef struct FloatState4C FloatState4C;

struct Floats;
typedef struct Floats Floats;

struct Font;
typedef struct Font Font;

struct FontStyle;
typedef struct FontStyle FontStyle;

struct Font_func_80257360_de;
typedef struct Font_func_80257360_de Font_func_80257360_de;

struct Frame_func_8044D794_de;
typedef struct Frame_func_8044D794_de Frame_func_8044D794_de;

struct Game1308;
typedef struct Game1308 Game1308;

struct Game1330;
typedef struct Game1330 Game1330;

struct Game1330_2;
typedef struct Game1330_2 Game1330_2;

struct GameLocalizationState;
typedef struct GameLocalizationState GameLocalizationState;

struct Game_func_8041D960_de;
typedef struct Game_func_8041D960_de Game_func_8041D960_de;

struct Globals;
typedef struct Globals Globals;

struct Globals_func_804220A8_de;
typedef struct Globals_func_804220A8_de Globals_func_804220A8_de;

struct Group_func_8044D794_de;
typedef struct Group_func_8044D794_de Group_func_8044D794_de;

struct HeadRecord;
typedef struct HeadRecord HeadRecord;

struct Header44;
typedef struct Header44 Header44;

struct Host_func_8026851C_de;
typedef struct Host_func_8026851C_de Host_func_8026851C_de;

struct HudCue;
typedef struct HudCue HudCue;

struct HudStatusShared_MatchRules;
typedef struct HudStatusShared_MatchRules HudStatusShared_MatchRules;

struct HudStatusShared_Settings;
typedef struct HudStatusShared_Settings HudStatusShared_Settings;

struct ImageHeader;
typedef struct ImageHeader ImageHeader;

struct Info_func_80426174_de;
typedef struct Info_func_80426174_de Info_func_80426174_de;

struct Init;
typedef struct Init Init;

struct InitParams_func_802B03C4_de;
typedef struct InitParams_func_802B03C4_de InitParams_func_802B03C4_de;

struct Inner;
typedef struct Inner Inner;

struct Instance;
typedef struct Instance Instance;

struct InstanceHdr;
typedef struct InstanceHdr InstanceHdr;

struct IntegerState12F8;
typedef struct IntegerState12F8 IntegerState12F8;

struct IntegerState13C;
typedef struct IntegerState13C IntegerState13C;

struct IntegerState19C;
typedef struct IntegerState19C IntegerState19C;

struct IntegerState1A8;
typedef struct IntegerState1A8 IntegerState1A8;

struct IntegerState1C4;
typedef struct IntegerState1C4 IntegerState1C4;

struct IntegerState34_2;
typedef struct IntegerState34_2 IntegerState34_2;

struct IntegerState4C;
typedef struct IntegerState4C IntegerState4C;

struct IntegerStateDC;
typedef struct IntegerStateDC IntegerStateDC;

struct InventorySlot;
typedef struct InventorySlot InventorySlot;

struct Item_func_8043C9AC_de;
typedef struct Item_func_8043C9AC_de Item_func_8043C9AC_de;

struct Item_func_80442FB0_de;
typedef struct Item_func_80442FB0_de Item_func_80442FB0_de;

struct JoinRequestItem;
typedef struct JoinRequestItem JoinRequestItem;

struct JoinRequestScreen;
typedef struct JoinRequestScreen JoinRequestScreen;

struct Key;
typedef struct Key Key;

struct Key_func_8040170C_de;
typedef struct Key_func_8040170C_de Key_func_8040170C_de;

struct Kind;
typedef struct Kind Kind;

struct Label;
typedef struct Label Label;

struct LevelSpawnLevelBlock;
typedef struct LevelSpawnLevelBlock LevelSpawnLevelBlock;

struct LevelSpawnLevelNode;
typedef struct LevelSpawnLevelNode LevelSpawnLevelNode;

struct LevelSpawnLevelObject;
typedef struct LevelSpawnLevelObject LevelSpawnLevelObject;

struct LevelSpawnLevelPlayer;
typedef struct LevelSpawnLevelPlayer LevelSpawnLevelPlayer;

struct LevelSpawnLevelRecord;
typedef struct LevelSpawnLevelRecord LevelSpawnLevelRecord;

struct LevelSpawnLevelSlot;
typedef struct LevelSpawnLevelSlot LevelSpawnLevelSlot;

struct LevelSpawnLevelSpawn;
typedef struct LevelSpawnLevelSpawn LevelSpawnLevelSpawn;

struct LevelSpawnLevelWorld;
typedef struct LevelSpawnLevelWorld LevelSpawnLevelWorld;

struct Level_func_8044B7C0_de;
typedef struct Level_func_8044B7C0_de Level_func_8044B7C0_de;

struct LightSettings;
typedef struct LightSettings LightSettings;

struct LinkTable;
typedef struct LinkTable LinkTable;

struct Link_func_802596B4_de;
typedef struct Link_func_802596B4_de Link_func_802596B4_de;

struct Link_func_80283A80_de;
typedef struct Link_func_80283A80_de Link_func_80283A80_de;

struct ListOptionsScreen;
typedef struct ListOptionsScreen ListOptionsScreen;

struct ListScreenItem;
typedef struct ListScreenItem ListScreenItem;

struct ListScreenModel;
typedef struct ListScreenModel ListScreenModel;

struct ListScreenRecord;
typedef struct ListScreenRecord ListScreenRecord;

struct ListScreenScreen;
typedef struct ListScreenScreen ListScreenScreen;

struct Loadout;
typedef struct Loadout Loadout;

struct MainMenuChoiceContext;
typedef struct MainMenuChoiceContext MainMenuChoiceContext;

struct Manager52C;
typedef struct Manager52C Manager52C;

struct Manager540;
typedef struct Manager540 Manager540;

struct Match;
typedef struct Match Match;

struct MatchMenuObjects;
typedef struct MatchMenuObjects MatchMenuObjects;

struct MatchRewardsGlobals;
typedef struct MatchRewardsGlobals MatchRewardsGlobals;

struct MatchRewardsPlayRecord;
typedef struct MatchRewardsPlayRecord MatchRewardsPlayRecord;

struct MatchRewardsRecord;
typedef struct MatchRewardsRecord MatchRewardsRecord;

struct MatchRewardsStatus;
typedef struct MatchRewardsStatus MatchRewardsStatus;

struct MatchRewardsUnlockRecord;
typedef struct MatchRewardsUnlockRecord MatchRewardsUnlockRecord;

struct MatchSetupBlock;
typedef struct MatchSetupBlock MatchSetupBlock;

struct MatchSetupName;
typedef struct MatchSetupName MatchSetupName;

struct MatchSetupPlayer;
typedef struct MatchSetupPlayer MatchSetupPlayer;

struct MatchSetupProfile;
typedef struct MatchSetupProfile MatchSetupProfile;

struct MatchSetupRecord;
typedef struct MatchSetupRecord MatchSetupRecord;

struct MatchSetupSprite;
typedef struct MatchSetupSprite MatchSetupSprite;

struct Material_func_80245D30_de;
typedef struct Material_func_80245D30_de Material_func_80245D30_de;

struct Matrix;
typedef struct Matrix Matrix;

struct Matrix_func_80213CF8_de;
typedef struct Matrix_func_80213CF8_de Matrix_func_80213CF8_de;

struct MenuGameRoot;
typedef struct MenuGameRoot MenuGameRoot;

struct MenuPanelRoot;
typedef struct MenuPanelRoot MenuPanelRoot;

struct MenuRules;
typedef struct MenuRules MenuRules;

struct MenuSettings;
typedef struct MenuSettings MenuSettings;

struct MenuState;
typedef struct MenuState MenuState;

struct Menu_func_802185D0_de;
typedef struct Menu_func_802185D0_de Menu_func_802185D0_de;

struct Menu_func_80409144_de;
typedef struct Menu_func_80409144_de Menu_func_80409144_de;

struct Menu_func_8041D134_de;
typedef struct Menu_func_8041D134_de Menu_func_8041D134_de;

struct Menu_func_8041D4E0_de;
typedef struct Menu_func_8041D4E0_de Menu_func_8041D4E0_de;

struct Menu_func_8043F294_de;
typedef struct Menu_func_8043F294_de Menu_func_8043F294_de;

struct Message_func_802AF150_de;
typedef struct Message_func_802AF150_de Message_func_802AF150_de;

struct Messages;
typedef struct Messages Messages;

struct Mid802131E0;
typedef struct Mid802131E0 Mid802131E0;

struct Mode;
typedef struct Mode Mode;

struct ModelPreviewItem;
typedef struct ModelPreviewItem ModelPreviewItem;

union ModelPreviewScreen;
typedef union ModelPreviewScreen ModelPreviewScreen;

struct ModelPreviewScreen330;
typedef struct ModelPreviewScreen330 ModelPreviewScreen330;

struct Motion;
typedef struct Motion Motion;

struct Motion_func_8025AB94_de;
typedef struct Motion_func_8025AB94_de Motion_func_8025AB94_de;

struct Mover;
typedef struct Mover Mover;

struct Mtx;
typedef struct Mtx Mtx;

struct NavigationEndpoint;
typedef struct NavigationEndpoint NavigationEndpoint;

union NavigationFlagWord;
typedef union NavigationFlagWord NavigationFlagWord;

struct NavigationNode;
typedef struct NavigationNode NavigationNode;

struct NavigationState;
typedef struct NavigationState NavigationState;

struct Node80254C10;
typedef struct Node80254C10 Node80254C10;

struct NodeList;
typedef struct NodeList NodeList;

struct Node_func_8020D364_de;
typedef struct Node_func_8020D364_de Node_func_8020D364_de;

struct Node_func_8028F544_de;
typedef struct Node_func_8028F544_de Node_func_8028F544_de;

struct Node_func_8041D134_de;
typedef struct Node_func_8041D134_de Node_func_8041D134_de;

struct Node_func_8041D4E0_de;
typedef struct Node_func_8041D4E0_de Node_func_8041D4E0_de;

struct Node_func_80430118_de;
typedef struct Node_func_80430118_de Node_func_80430118_de;

struct Node_func_804303F8_de;
typedef struct Node_func_804303F8_de Node_func_804303F8_de;

struct Note;
typedef struct Note Note;

struct OSDevMgr;
typedef struct OSDevMgr OSDevMgr;

struct OSIoMesg;
typedef struct OSIoMesg OSIoMesg;

struct OSIoMesgHdr;
typedef struct OSIoMesgHdr OSIoMesgHdr;

struct OSPiHandle_s;
typedef struct OSPiHandle_s OSPiHandle_s;

struct OSPifRam;
typedef struct OSPifRam OSPifRam;

struct OSTimer_s;
typedef struct OSTimer_s OSTimer_s;

struct Obj_func_8027ABF4_de;
typedef struct Obj_func_8027ABF4_de Obj_func_8027ABF4_de;

struct Obj_func_80283A80_de;
typedef struct Obj_func_80283A80_de Obj_func_80283A80_de;

struct Obj_func_80421BEC_de;
typedef struct Obj_func_80421BEC_de Obj_func_80421BEC_de;

struct Obj_func_8043CC10_de;
typedef struct Obj_func_8043CC10_de Obj_func_8043CC10_de;

struct Obj_func_80442EC0_de;
typedef struct Obj_func_80442EC0_de Obj_func_80442EC0_de;

struct ObjectLinks134;
typedef struct ObjectLinks134 ObjectLinks134;

struct ObjectLinks138;
typedef struct ObjectLinks138 ObjectLinks138;

struct ObjectLinks140;
typedef struct ObjectLinks140 ObjectLinks140;

struct ObjectLinks1454_2;
typedef struct ObjectLinks1454_2 ObjectLinks1454_2;

struct ObjectLinks16DC;
typedef struct ObjectLinks16DC ObjectLinks16DC;

struct ObjectLinks1E8_2;
typedef struct ObjectLinks1E8_2 ObjectLinks1E8_2;

struct ObjectLinks3C0C_2;
typedef struct ObjectLinks3C0C_2 ObjectLinks3C0C_2;

struct ObjectLinks4_4;
typedef struct ObjectLinks4_4 ObjectLinks4_4;

struct ObjectLinks8_2;
typedef struct ObjectLinks8_2 ObjectLinks8_2;

struct ObjectLinks8_3;
typedef struct ObjectLinks8_3 ObjectLinks8_3;

struct ObjectLinksB8;
typedef struct ObjectLinksB8 ObjectLinksB8;

struct ObjectLinksC_3;
typedef struct ObjectLinksC_3 ObjectLinksC_3;

struct ObjectLinksDC_2;
typedef struct ObjectLinksDC_2 ObjectLinksDC_2;

struct ObjectState11ED;
typedef struct ObjectState11ED ObjectState11ED;

struct ObjectState12C4_2;
typedef struct ObjectState12C4_2 ObjectState12C4_2;

struct ObjectState12C4_3;
typedef struct ObjectState12C4_3 ObjectState12C4_3;

struct ObjectState1454;
typedef struct ObjectState1454 ObjectState1454;

struct ObjectState149;
typedef struct ObjectState149 ObjectState149;

struct ObjectState15;
typedef struct ObjectState15 ObjectState15;

struct ObjectState180;
typedef struct ObjectState180 ObjectState180;

struct ObjectState19;
typedef struct ObjectState19 ObjectState19;

struct ObjectState19E;
typedef struct ObjectState19E ObjectState19E;

struct ObjectState1C0;
typedef struct ObjectState1C0 ObjectState1C0;

struct ObjectState1D2;
typedef struct ObjectState1D2 ObjectState1D2;

struct ObjectState1DA;
typedef struct ObjectState1DA ObjectState1DA;

struct ObjectState1E_2;
typedef struct ObjectState1E_2 ObjectState1E_2;

struct ObjectState20_2;
typedef struct ObjectState20_2 ObjectState20_2;

struct ObjectState20_3;
typedef struct ObjectState20_3 ObjectState20_3;

struct ObjectState38;
typedef struct ObjectState38 ObjectState38;

struct ObjectState40_2;
typedef struct ObjectState40_2 ObjectState40_2;

struct ObjectState44_2;
typedef struct ObjectState44_2 ObjectState44_2;

struct ObjectState523;
typedef struct ObjectState523 ObjectState523;

struct ObjectState58;
typedef struct ObjectState58 ObjectState58;

struct ObjectState95;
typedef struct ObjectState95 ObjectState95;

struct Object_func_80401980_de;
typedef struct Object_func_80401980_de Object_func_80401980_de;

struct Object_func_804220A8_de;
typedef struct Object_func_804220A8_de Object_func_804220A8_de;

struct Object_func_80443128_de;
typedef struct Object_func_80443128_de Object_func_80443128_de;

struct OptionsOpenItem;
typedef struct OptionsOpenItem OptionsOpenItem;

struct OptionsOpenScreen;
typedef struct OptionsOpenScreen OptionsOpenScreen;

struct OptionsScreen;
typedef struct OptionsScreen OptionsScreen;

struct OptionsScrollScreen;
typedef struct OptionsScrollScreen OptionsScrollScreen;

struct Other8043E458;
typedef struct Other8043E458 Other8043E458;

struct Owner104;
typedef struct Owner104 Owner104;

struct Owner_func_8025A844_de;
typedef struct Owner_func_8025A844_de Owner_func_8025A844_de;

struct Owner_func_804066BC_de;
typedef struct Owner_func_804066BC_de Owner_func_804066BC_de;

struct Owner_func_8043E494_de;
typedef struct Owner_func_8043E494_de Owner_func_8043E494_de;

struct Owner_func_8044D794_de;
typedef struct Owner_func_8044D794_de Owner_func_8044D794_de;

struct PVoice_s;
typedef struct PVoice_s PVoice_s;

struct PakNoteTextEntry;
typedef struct PakNoteTextEntry PakNoteTextEntry;

struct PakNotesMenu;
typedef struct PakNotesMenu PakNotesMenu;

struct PakNotesMenuItem;
typedef struct PakNotesMenuItem PakNotesMenuItem;

struct PakSaveContext;
typedef struct PakSaveContext PakSaveContext;

struct PakSavePakSlot;
typedef struct PakSavePakSlot PakSavePakSlot;

struct PakSavePakState;
typedef struct PakSavePakState PakSavePakState;

struct PakSearchMenu;
typedef struct PakSearchMenu PakSearchMenu;

struct PakSearchPlayer;
typedef struct PakSearchPlayer PakSearchPlayer;

struct PakSlot;
typedef struct PakSlot PakSlot;

struct PakState;
typedef struct PakState PakState;

struct PakStatusPakSaveMenu;
typedef struct PakStatusPakSaveMenu PakStatusPakSaveMenu;

struct Params_func_8025A844_de;
typedef struct Params_func_8025A844_de Params_func_8025A844_de;

struct Params_func_80283A80_de;
typedef struct Params_func_80283A80_de Params_func_80283A80_de;

struct PatrolActor;
typedef struct PatrolActor PatrolActor;

struct PatrolBot;
typedef struct PatrolBot PatrolBot;

struct PatrolPlayer;
typedef struct PatrolPlayer PatrolPlayer;

struct PatrolRouteSet;
typedef struct PatrolRouteSet PatrolRouteSet;

struct PickupGoalNodeList;
typedef struct PickupGoalNodeList PickupGoalNodeList;

struct PickupGoalObj8020EF60;
typedef struct PickupGoalObj8020EF60 PickupGoalObj8020EF60;

struct Piece;
typedef struct Piece Piece;

struct Plan;
typedef struct Plan Plan;

struct Player;
typedef struct Player Player;

struct Player1680;
typedef struct Player1680 Player1680;

struct Player16C0;
typedef struct Player16C0 Player16C0;

struct PlayerList;
typedef struct PlayerList PlayerList;

struct PlayerRankField;
typedef struct PlayerRankField PlayerRankField;

struct PlayerRankInner;
typedef struct PlayerRankInner PlayerRankInner;

struct PlayerResultsContext;
typedef struct PlayerResultsContext PlayerResultsContext;

union PlayerResultsContextValue28;
typedef union PlayerResultsContextValue28 PlayerResultsContextValue28;

struct PlayerResultsPlayer;
typedef struct PlayerResultsPlayer PlayerResultsPlayer;

struct PlayerResultsState;
typedef struct PlayerResultsState PlayerResultsState;

struct PlayerSelectionItem;
typedef struct PlayerSelectionItem PlayerSelectionItem;

struct PlayerSelectionLayout;
typedef struct PlayerSelectionLayout PlayerSelectionLayout;

struct PlayerSelectionPlayer;
typedef struct PlayerSelectionPlayer PlayerSelectionPlayer;

struct PlayerSelectionState;
typedef struct PlayerSelectionState PlayerSelectionState;

struct PlayerStatusOwner;
typedef struct PlayerStatusOwner PlayerStatusOwner;

struct PlayerStatusPlayer;
typedef struct PlayerStatusPlayer PlayerStatusPlayer;

struct Player_func_80212D78_eu_x;
typedef struct Player_func_80212D78_eu_x Player_func_80212D78_eu_x;

struct Player_func_80226950_de;
typedef struct Player_func_80226950_de Player_func_80226950_de;

struct Player_func_80229814_de;
typedef struct Player_func_80229814_de Player_func_80229814_de;

struct Player_func_80229FA0_de;
typedef struct Player_func_80229FA0_de Player_func_80229FA0_de;

struct Pool_func_802B2510_de;
typedef struct Pool_func_802B2510_de Pool_func_802B2510_de;

struct ProfileStatisticsScreen;
typedef struct ProfileStatisticsScreen ProfileStatisticsScreen;

struct Quad_func_802A1BE0_de;
typedef struct Quad_func_802A1BE0_de Quad_func_802A1BE0_de;

struct QueueEntry;
typedef struct QueueEntry QueueEntry;

struct ReadCommand;
typedef struct ReadCommand ReadCommand;

struct Rec_func_8024C92C_de;
typedef struct Rec_func_8024C92C_de Rec_func_8024C92C_de;

struct Record;
typedef struct Record Record;

struct RecordD90;
typedef struct RecordD90 RecordD90;

struct Request;
typedef struct Request Request;

struct ResourceManagerState;
typedef struct ResourceManagerState ResourceManagerState;

struct ResourceRequest;
typedef struct ResourceRequest ResourceRequest;

struct Resource_func_80294C8C_de;
typedef struct Resource_func_80294C8C_de Resource_func_80294C8C_de;

struct Resource_func_80410E1C_de;
typedef struct Resource_func_80410E1C_de Resource_func_80410E1C_de;

struct ResultsHeadingCharacter;
typedef struct ResultsHeadingCharacter ResultsHeadingCharacter;

struct ResultsHeadingName;
typedef struct ResultsHeadingName ResultsHeadingName;

struct ResultsHeadingRecord;
typedef struct ResultsHeadingRecord ResultsHeadingRecord;

struct ResultsHeadingScreen;
typedef struct ResultsHeadingScreen ResultsHeadingScreen;

struct ResultsHeadingSettings;
typedef struct ResultsHeadingSettings ResultsHeadingSettings;

struct ResultsHeadingStage;
typedef struct ResultsHeadingStage ResultsHeadingStage;

struct Rider_func_80245D30_de;
typedef struct Rider_func_80245D30_de Rider_func_80245D30_de;

struct Root802131E0;
typedef struct Root802131E0 Root802131E0;

struct Root_func_8027FF58_de;
typedef struct Root_func_8027FF58_de Root_func_8027FF58_de;

struct Root_func_8041C7F4_de;
typedef struct Root_func_8041C7F4_de Root_func_8041C7F4_de;

struct RosterEntry;
typedef struct RosterEntry RosterEntry;

struct RouteArrivalBrain;
typedef struct RouteArrivalBrain RouteArrivalBrain;

struct Rules84;
typedef struct Rules84 Rules84;

struct RulesAC;
typedef struct RulesAC RulesAC;

struct RulesAC_2;
typedef struct RulesAC_2 RulesAC_2;

struct Runtime;
typedef struct Runtime Runtime;

struct SceneState;
typedef struct SceneState SceneState;

struct Scene_func_80259784_de;
typedef struct Scene_func_80259784_de Scene_func_80259784_de;

struct ScoreTable;
typedef struct ScoreTable ScoreTable;

struct Scores;
typedef struct Scores Scores;

struct Screen;
typedef struct Screen Screen;

struct ScreenState;
typedef struct ScreenState ScreenState;

struct Screen_func_804279B8_de;
typedef struct Screen_func_804279B8_de Screen_func_804279B8_de;

struct Selection;
typedef struct Selection Selection;

struct SelectionSprite;
typedef struct SelectionSprite SelectionSprite;

struct SessionScreenGameRecords;
typedef struct SessionScreenGameRecords SessionScreenGameRecords;

struct SessionScreenRecord;
typedef struct SessionScreenRecord SessionScreenRecord;

struct SessionScreenSettings;
typedef struct SessionScreenSettings SessionScreenSettings;

struct Settings20;
typedef struct Settings20 Settings20;

struct Settings580;
typedef struct Settings580 Settings580;

struct SettingsE;
typedef struct SettingsE SettingsE;

struct Settings_func_804279B8_de;
typedef struct Settings_func_804279B8_de Settings_func_804279B8_de;

struct SharedPlayer16E4;
typedef struct SharedPlayer16E4 SharedPlayer16E4;

struct SharedPlayer16E4_2;
typedef struct SharedPlayer16E4_2 SharedPlayer16E4_2;

struct SharedPlayer_func_80209CD8_de;
typedef struct SharedPlayer_func_80209CD8_de SharedPlayer_func_80209CD8_de;

struct SharedPlayer_func_80210248_eu;
typedef struct SharedPlayer_func_80210248_eu SharedPlayer_func_80210248_eu;

struct SharedPlayer_func_8021D408_de;
typedef struct SharedPlayer_func_8021D408_de SharedPlayer_func_8021D408_de;

struct SharedPlayer_func_8021E2A0_de;
typedef struct SharedPlayer_func_8021E2A0_de SharedPlayer_func_8021E2A0_de;

struct SharedPlayer_func_8022A398_de;
typedef struct SharedPlayer_func_8022A398_de SharedPlayer_func_8022A398_de;

struct Shared_AnimState;
typedef struct Shared_AnimState Shared_AnimState;

struct Shared_Effect;
typedef struct Shared_Effect Shared_Effect;

struct Shared_Emitter;
typedef struct Shared_Emitter Shared_Emitter;

struct Shared_GlobalFlowState;
typedef struct Shared_GlobalFlowState Shared_GlobalFlowState;

struct Shared_GlobalRuntimeState;
typedef struct Shared_GlobalRuntimeState Shared_GlobalRuntimeState;

struct Shared_HudOwner;
typedef struct Shared_HudOwner Shared_HudOwner;

struct Shared_HudView;
typedef struct Shared_HudView Shared_HudView;

struct Shared_Input;
typedef struct Shared_Input Shared_Input;

struct Shared_MenuGlobal;
typedef struct Shared_MenuGlobal Shared_MenuGlobal;

struct Shared_MenuTextBuffer;
typedef struct Shared_MenuTextBuffer Shared_MenuTextBuffer;

struct Shared_ParticleColors;
typedef struct Shared_ParticleColors Shared_ParticleColors;

struct Shared_ParticleDesc;
typedef struct Shared_ParticleDesc Shared_ParticleDesc;

struct Shared_ParticleFade;
typedef struct Shared_ParticleFade Shared_ParticleFade;

struct Shared_PoseActor;
typedef struct Shared_PoseActor Shared_PoseActor;

struct Shared_PoseContext;
typedef struct Shared_PoseContext Shared_PoseContext;

struct Shared_PoseModel;
typedef struct Shared_PoseModel Shared_PoseModel;

struct Shared_PosePart;
typedef struct Shared_PosePart Shared_PosePart;

struct Shared_PosePartEntry;
typedef struct Shared_PosePartEntry Shared_PosePartEntry;

struct Shared_PosePartTable;
typedef struct Shared_PosePartTable Shared_PosePartTable;

struct Shared_PoseWorld;
typedef struct Shared_PoseWorld Shared_PoseWorld;

struct Shared_Quad;
typedef struct Shared_Quad Shared_Quad;

struct Shared_Screen;
typedef struct Shared_Screen Shared_Screen;

struct Shared_Slot;
typedef struct Shared_Slot Shared_Slot;

struct Shared_func_80261EB8_S1;
typedef struct Shared_func_80261EB8_S1 Shared_func_80261EB8_S1;

struct Shared_func_80261EB8_S2;
typedef struct Shared_func_80261EB8_S2 Shared_func_80261EB8_S2;

struct SlotCC;
typedef struct SlotCC SlotCC;

struct SlotDialog;
typedef struct SlotDialog SlotDialog;

struct Slot_func_802B2510_de;
typedef struct Slot_func_802B2510_de Slot_func_802B2510_de;

struct Slot_func_8042FB48_de;
typedef struct Slot_func_8042FB48_de Slot_func_8042FB48_de;

struct Slot_func_8044D794_de;
typedef struct Slot_func_8044D794_de Slot_func_8044D794_de;

struct Source110;
typedef struct Source110 Source110;

struct Source_func_80232F8C_de;
typedef struct Source_func_80232F8C_de Source_func_80232F8C_de;

struct Source_func_8026851C_de;
typedef struct Source_func_8026851C_de Source_func_8026851C_de;

struct Spawn;
typedef struct Spawn Spawn;

struct State1204;
typedef struct State1204 State1204;

struct State802A697C;
typedef struct State802A697C State802A697C;

struct StateBlock;
typedef struct StateBlock StateBlock;

struct StateEntry;
typedef struct StateEntry StateEntry;

struct StateFlags;
typedef struct StateFlags StateFlags;

struct StateInfo;
typedef struct StateInfo StateInfo;

struct State_func_804220A8_de;
typedef struct State_func_804220A8_de State_func_804220A8_de;

struct State_func_8042F91C_de;
typedef struct State_func_8042F91C_de State_func_8042F91C_de;

struct State_func_8043577C_de;
typedef struct State_func_8043577C_de State_func_8043577C_de;

struct State_func_8044D054_de;
typedef struct State_func_8044D054_de State_func_8044D054_de;

struct StyleNextState;
typedef struct StyleNextState StyleNextState;

struct Style_func_8043C9AC_de;
typedef struct Style_func_8043C9AC_de Style_func_8043C9AC_de;

struct Sub18;
typedef struct Sub18 Sub18;

struct TabOptionsCommitMenu;
typedef struct TabOptionsCommitMenu TabOptionsCommitMenu;

struct TabOptionsScreen;
typedef struct TabOptionsScreen TabOptionsScreen;

struct Table_func_8028CE94_de;
typedef struct Table_func_8028CE94_de Table_func_8028CE94_de;

struct Table_func_804428F8_de;
typedef struct Table_func_804428F8_de Table_func_804428F8_de;

struct Target802131E0;
typedef struct Target802131E0 Target802131E0;

struct TargetList;
typedef struct TargetList TargetList;

struct TargetPosition;
typedef struct TargetPosition TargetPosition;

struct TargetSelectionBrain;
typedef struct TargetSelectionBrain TargetSelectionBrain;

struct TargetSelectionObj;
typedef struct TargetSelectionObj TargetSelectionObj;

struct TaskSetup;
typedef struct TaskSetup TaskSetup;

struct TextBoundsContext;
typedef struct TextBoundsContext TextBoundsContext;

struct TextBoundsData;
typedef struct TextBoundsData TextBoundsData;

struct TextBoundsDescriptor;
typedef struct TextBoundsDescriptor TextBoundsDescriptor;

struct TextBoundsFont;
typedef struct TextBoundsFont TextBoundsFont;

struct TextBoundsMetrics;
typedef struct TextBoundsMetrics TextBoundsMetrics;

struct TextBoundsRecord23;
typedef struct TextBoundsRecord23 TextBoundsRecord23;

struct TextBoundsState;
typedef struct TextBoundsState TextBoundsState;

union TextBoundsStateValue4;
typedef union TextBoundsStateValue4 TextBoundsStateValue4;

struct TextBoundsText;
typedef struct TextBoundsText TextBoundsText;

struct TextLayerRect;
typedef struct TextLayerRect TextLayerRect;

struct Timer_func_80410E1C_de;
typedef struct Timer_func_80410E1C_de Timer_func_80410E1C_de;

struct Track_func_802A274C_de;
typedef struct Track_func_802A274C_de Track_func_802A274C_de;

struct Track_func_80401980_de;
typedef struct Track_func_80401980_de Track_func_80401980_de;

struct TrailNode;
typedef struct TrailNode TrailNode;

struct TrailState;
typedef struct TrailState TrailState;

struct Triple;
typedef struct Triple Triple;

struct Triple_func_802683E0_de;
typedef struct Triple_func_802683E0_de Triple_func_802683E0_de;

struct UnitMtx;
typedef struct UnitMtx UnitMtx;

struct UnlockImageMenu;
typedef struct UnlockImageMenu UnlockImageMenu;

struct UnlockImageOption;
typedef struct UnlockImageOption UnlockImageOption;

struct UnlockImageOptionPos;
typedef struct UnlockImageOptionPos UnlockImageOptionPos;

struct Value;
typedef struct Value Value;

struct Variable;
typedef struct Variable Variable;

struct Vec3;
typedef struct Vec3 Vec3;

struct Vector4f;
typedef struct Vector4f Vector4f;

struct View_func_80225940_de;
typedef struct View_func_80225940_de View_func_80225940_de;

struct View_func_80229814_de;
typedef struct View_func_80229814_de View_func_80229814_de;

struct View_func_80259C5C_de;
typedef struct View_func_80259C5C_de View_func_80259C5C_de;

struct View_func_8025AB94_de;
typedef struct View_func_8025AB94_de View_func_8025AB94_de;

struct Voice_func_8025A844_de;
typedef struct Voice_func_8025A844_de Voice_func_8025A844_de;

union Vtx10;
typedef union Vtx10 Vtx10;

struct Vtx_t;
typedef struct Vtx_t Vtx_t;

struct Vtx_tn;
typedef struct Vtx_tn Vtx_tn;

struct WeaponMenuMenu;
typedef struct WeaponMenuMenu WeaponMenuMenu;

struct WeaponMenuPlayer;
typedef struct WeaponMenuPlayer WeaponMenuPlayer;

struct WeaponMenuView;
typedef struct WeaponMenuView WeaponMenuView;

struct Wheels;
typedef struct Wheels Wheels;

struct WidgetHandler;
typedef struct WidgetHandler WidgetHandler;

struct WidgetRegisterWidget;
typedef struct WidgetRegisterWidget WidgetRegisterWidget;

struct WidgetTable;
typedef struct WidgetTable WidgetTable;

struct Widget_func_8040C6FC_de;
typedef struct Widget_func_8040C6FC_de Widget_func_8040C6FC_de;

struct Widget_func_8040C950_de;
typedef struct Widget_func_8040C950_de Widget_func_8040C950_de;

struct Window_func_80421AE8_de;
typedef struct Window_func_80421AE8_de Window_func_80421AE8_de;

struct Work56EC8;
typedef struct Work56EC8 Work56EC8;

struct World24;
typedef struct World24 World24;

struct _Pft;
typedef struct _Pft _Pft;

struct __OSContRequesFormat;
typedef struct __OSContRequesFormat __OSContRequesFormat;

struct __OSViContext;
typedef struct __OSViContext __OSViContext;

union du;
typedef union du du;

union fu;
typedef union fu fu;

struct func_80203E78_S1;
typedef struct func_80203E78_S1 func_80203E78_S1;

struct func_80204308_S3;
typedef struct func_80204308_S3 func_80204308_S3;

struct func_80204468_S3;
typedef struct func_80204468_S3 func_80204468_S3;

struct func_8020478C_S1;
typedef struct func_8020478C_S1 func_8020478C_S1;

struct func_80204EA8_S1;
typedef struct func_80204EA8_S1 func_80204EA8_S1;

struct func_80205314_S2;
typedef struct func_80205314_S2 func_80205314_S2;

struct func_80205628_S3;
typedef struct func_80205628_S3 func_80205628_S3;

struct func_802062E0_S2;
typedef struct func_802062E0_S2 func_802062E0_S2;

struct func_802077F4_S2;
typedef struct func_802077F4_S2 func_802077F4_S2;

struct func_80207B5C_S2;
typedef struct func_80207B5C_S2 func_80207B5C_S2;

struct func_80209B64_S4;
typedef struct func_80209B64_S4 func_80209B64_S4;

struct func_8020CA10_G3;
typedef struct func_8020CA10_G3 func_8020CA10_G3;

struct func_8020CC0C_S1;
typedef struct func_8020CC0C_S1 func_8020CC0C_S1;

struct func_8020D0CC_S2;
typedef struct func_8020D0CC_S2 func_8020D0CC_S2;

struct func_8020D9C0_S1;
typedef struct func_8020D9C0_S1 func_8020D9C0_S1;

struct func_8020EA10_S3;
typedef struct func_8020EA10_S3 func_8020EA10_S3;

struct func_8020F2A8_S3;
typedef struct func_8020F2A8_S3 func_8020F2A8_S3;

struct func_80210230_S1;
typedef struct func_80210230_S1 func_80210230_S1;

struct func_80212828_S7;
typedef struct func_80212828_S7 func_80212828_S7;

struct func_80219490_S2;
typedef struct func_80219490_S2 func_80219490_S2;

struct func_8021C9B4_G6;
typedef struct func_8021C9B4_G6 func_8021C9B4_G6;

struct func_8021C9B4_S2;
typedef struct func_8021C9B4_S2 func_8021C9B4_S2;

struct func_8021C9B4_S3;
typedef struct func_8021C9B4_S3 func_8021C9B4_S3;

struct func_802285C4_S1;
typedef struct func_802285C4_S1 func_802285C4_S1;

struct func_80228774_S1;
typedef struct func_80228774_S1 func_80228774_S1;

struct func_80229BE0_S2;
typedef struct func_80229BE0_S2 func_80229BE0_S2;

struct func_8022A404_S1;
typedef struct func_8022A404_S1 func_8022A404_S1;

struct func_8022BC04_S3;
typedef struct func_8022BC04_S3 func_8022BC04_S3;

struct func_8022BECC_S2;
typedef struct func_8022BECC_S2 func_8022BECC_S2;

struct func_8022C6D4_S1;
typedef struct func_8022C6D4_S1 func_8022C6D4_S1;

struct func_8022E694_S1;
typedef struct func_8022E694_S1 func_8022E694_S1;

struct func_8022EA2C_S1;
typedef struct func_8022EA2C_S1 func_8022EA2C_S1;

struct func_8022FD9C_Record;
typedef struct func_8022FD9C_Record func_8022FD9C_Record;

struct func_8022FD9C_S4;
typedef struct func_8022FD9C_S4 func_8022FD9C_S4;

struct func_8023945C_S1;
typedef struct func_8023945C_S1 func_8023945C_S1;

union func_80239C2C_S1_UF24;
typedef union func_80239C2C_S1_UF24 func_80239C2C_S1_UF24;

struct func_80239CD0_S1;
typedef struct func_80239CD0_S1 func_80239CD0_S1;

struct func_80242278_S1;
typedef struct func_80242278_S1 func_80242278_S1;

struct func_80244E48_G1;
typedef struct func_80244E48_G1 func_80244E48_G1;

struct func_80244E48_G2;
typedef struct func_80244E48_G2 func_80244E48_G2;

struct func_80246E34_S1;
typedef struct func_80246E34_S1 func_80246E34_S1;

struct func_8024795C_S2;
typedef struct func_8024795C_S2 func_8024795C_S2;

struct func_8024BF14_S2;
typedef struct func_8024BF14_S2 func_8024BF14_S2;

struct func_8024D150_S1;
typedef struct func_8024D150_S1 func_8024D150_S1;

struct func_8024D150_S2;
typedef struct func_8024D150_S2 func_8024D150_S2;

struct func_8024D274_S1;
typedef struct func_8024D274_S1 func_8024D274_S1;

struct func_8024D274_S2;
typedef struct func_8024D274_S2 func_8024D274_S2;

struct func_8024D274_S3;
typedef struct func_8024D274_S3 func_8024D274_S3;

struct func_8024D274_S4;
typedef struct func_8024D274_S4 func_8024D274_S4;

struct func_8024D388_S1;
typedef struct func_8024D388_S1 func_8024D388_S1;

struct func_8024D388_S2;
typedef struct func_8024D388_S2 func_8024D388_S2;

struct func_8024D388_S3;
typedef struct func_8024D388_S3 func_8024D388_S3;

struct func_8024D388_S4;
typedef struct func_8024D388_S4 func_8024D388_S4;

struct func_8024DED0_S2;
typedef struct func_8024DED0_S2 func_8024DED0_S2;

struct func_8024E454_S1;
typedef struct func_8024E454_S1 func_8024E454_S1;

struct func_8024E454_S2;
typedef struct func_8024E454_S2 func_8024E454_S2;

struct func_8024E454_S3;
typedef struct func_8024E454_S3 func_8024E454_S3;

struct func_8024E454_S4;
typedef struct func_8024E454_S4 func_8024E454_S4;

struct func_8024E454_S5;
typedef struct func_8024E454_S5 func_8024E454_S5;

struct func_802505CC_S1;
typedef struct func_802505CC_S1 func_802505CC_S1;

struct func_80250BD4_S1;
typedef struct func_80250BD4_S1 func_80250BD4_S1;

struct func_80254D70_S1;
typedef struct func_80254D70_S1 func_80254D70_S1;

struct func_80254D70_S2;
typedef struct func_80254D70_S2 func_80254D70_S2;

struct func_80255220_S1;
typedef struct func_80255220_S1 func_80255220_S1;

struct func_80255220_S3;
typedef struct func_80255220_S3 func_80255220_S3;

struct func_802558C0_S1;
typedef struct func_802558C0_S1 func_802558C0_S1;

struct func_80255BEC_S1;
typedef struct func_80255BEC_S1 func_80255BEC_S1;

struct func_80255D10_S1;
typedef struct func_80255D10_S1 func_80255D10_S1;

struct func_8025BB9C_S1;
typedef struct func_8025BB9C_S1 func_8025BB9C_S1;

struct func_8025BBA4_S1;
typedef struct func_8025BBA4_S1 func_8025BBA4_S1;

struct func_8025BBA4_S3;
typedef struct func_8025BBA4_S3 func_8025BBA4_S3;

struct func_8025BBA4_S4;
typedef struct func_8025BBA4_S4 func_8025BBA4_S4;

struct func_8025DA30_S1;
typedef struct func_8025DA30_S1 func_8025DA30_S1;

struct func_8025DA30_S3;
typedef struct func_8025DA30_S3 func_8025DA30_S3;

struct func_8025DBA0_S3;
typedef struct func_8025DBA0_S3 func_8025DBA0_S3;

struct func_8025E55C_S1;
typedef struct func_8025E55C_S1 func_8025E55C_S1;

struct func_8025E58C_S1;
typedef struct func_8025E58C_S1 func_8025E58C_S1;

struct func_8025E5B0_S1;
typedef struct func_8025E5B0_S1 func_8025E5B0_S1;

struct func_8026C484_S2;
typedef struct func_8026C484_S2 func_8026C484_S2;

struct func_8026E5E0_S1;
typedef struct func_8026E5E0_S1 func_8026E5E0_S1;

struct func_8026E5E0_S2;
typedef struct func_8026E5E0_S2 func_8026E5E0_S2;

struct func_8026E5E0_S3;
typedef struct func_8026E5E0_S3 func_8026E5E0_S3;

struct func_8028469C_S2;
typedef struct func_8028469C_S2 func_8028469C_S2;

union func_8028472C_S2_U118;
typedef union func_8028472C_S2_U118 func_8028472C_S2_U118;

struct func_80284AF4_G2;
typedef struct func_80284AF4_G2 func_80284AF4_G2;

struct func_8028C544_S1;
typedef struct func_8028C544_S1 func_8028C544_S1;

struct func_8028C544_S2;
typedef struct func_8028C544_S2 func_8028C544_S2;

struct func_8028C544_S3;
typedef struct func_8028C544_S3 func_8028C544_S3;

struct func_80290404_S1;
typedef struct func_80290404_S1 func_80290404_S1;

struct func_80293268_S1;
typedef struct func_80293268_S1 func_80293268_S1;

struct func_80293268_S2;
typedef struct func_80293268_S2 func_80293268_S2;

struct func_8029A838_S1;
typedef struct func_8029A838_S1 func_8029A838_S1;

struct func_802A2BE0_S1;
typedef struct func_802A2BE0_S1 func_802A2BE0_S1;

struct func_802A2E5C_S2;
typedef struct func_802A2E5C_S2 func_802A2E5C_S2;

struct func_802ADE28_S3;
typedef struct func_802ADE28_S3 func_802ADE28_S3;

struct func_802ADE28_S4;
typedef struct func_802ADE28_S4 func_802ADE28_S4;

struct func_802B54A0_S1;
typedef struct func_802B54A0_S1 func_802B54A0_S1;

struct func_802B67B0_S2;
typedef struct func_802B67B0_S2 func_802B67B0_S2;

struct func_8041C864_S1;
typedef struct func_8041C864_S1 func_8041C864_S1;

struct func_80422C20_G1;
typedef struct func_80422C20_G1 func_80422C20_G1;

struct func_80422C20_G2;
typedef struct func_80422C20_G2 func_80422C20_G2;

struct func_804302F8_S1;
typedef struct func_804302F8_S1 func_804302F8_S1;

struct func_804360F4_G1;
typedef struct func_804360F4_G1 func_804360F4_G1;

struct func_8043D2D0_S;
typedef struct func_8043D2D0_S func_8043D2D0_S;

struct func_8043DD30_S1;
typedef struct func_8043DD30_S1 func_8043DD30_S1;

struct func_8044C410_S1;
typedef struct func_8044C410_S1 func_8044C410_S1;

struct ALADPCMBook;
struct ALADPCMBook {
    s32 order;
    s32 npredictors;
    s16 book[1];
};
typedef short ADPCM_STATE[16];
struct ALADPCMloop;
struct ALADPCMloop {
    u32 start;
    u32 end;
    u32 count;
    ADPCM_STATE state;
};
struct ALADPCMWaveInfo;
struct ALADPCMWaveInfo {
    ALADPCMloop *loop;
    ALADPCMBook *book;
};
struct ALFilter_s14;
struct ALFilter_s14 {
    struct ALFilter_s14 *source;
    void *handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
};
struct ALAuxBus_s;
struct ALAuxBus_s {
    ALFilter_s14 filter;
    s32 sourceCount;
    s32 maxSources;
    ALFilter_s14 **sources;
    char fx[0x4C - 0x20];
};
struct ALEnvelope;
struct ALEnvelope {
    s32 attackTime;
    s32 decayTime;
    s32 releaseTime;
    u8 attackVolume;
    u8 decayVolume;
};
struct ALKeyMap;
struct ALKeyMap {
    u8 velocityMin;
    u8 velocityMax;
    u8 keyMin;
    u8 keyMax;
    u8 keyBase;
    s8 detune;
};
struct ALSound_s;
struct ALSound_s {
    ALEnvelope *envelope;
    ALKeyMap *keyMap;
    void *wavetable;
};
struct ALInstrument;
struct ALInstrument {
    u8 volume;
    u8 pan;
    u8 priority;
    u8 flags;
    u8 tremType;
    u8 tremRate;
    u8 tremDepth;
    u8 tremDelay;
    u8 vibType;
    u8 vibRate;
    u8 vibDepth;
    u8 vibDelay;
    s16 bendRange;
    s16 soundCount;
    ALSound_s *soundArray[1];
};
struct ALBank_s;
struct ALBank_s {
    s16 instCount;
    u8 flags;
    u8 pad;
    s32 sampleRate;
    ALInstrument *percussion;
    ALInstrument *instArray[1];
};
struct ALChanState10;
struct ALChanState10 {
    ALInstrument *instrument;
    s16 bendRange;
    u8 fxId;
    u8 pan;
    u8 priority;
    u8 vol;
    u8 fxmix;
    u8 sustain;
    f32 pitchBend;
};
struct ALMIDIEvent;
struct ALMIDIEvent {
    s32 ticks;
    u8 status;
    u8 byte1;
    u8 byte2;
    u32 duration;
};
struct Link_func_802596B4_de;
struct Link_func_802596B4_de {
    struct Link_func_802596B4_de *next;
    struct Link_func_802596B4_de *prev;
};
struct ALVoice_s;
struct ALVoice_s {
    Link_func_802596B4_de node;
    void *pvoice;
    void *table;
    void *clientPrivate;
    s16 state;
    s16 priority;
    s16 fxBus;
    s16 unityPitch;
};
struct ALNoteEvent;
struct ALVoice_s;
struct ALNoteEvent {
    struct ALVoice_s *voice;
};
struct ALVoiceState_s38;
struct ALVoiceState_s38 {
    struct ALVoiceState_s38 *next;
    ALVoice_s voice;
    ALSound_s *sound;
    s32 envEndTime;
    f32 pitch;
    f32 vibrato;
    u8 envGain;
    u8 channel;
    u8 key;
    u8 velocity;
    u8 envPhase;
    u8 phase;
    u8 tremelo;
    u8 flags;
};
struct ALOscEvent;
struct ALVoiceState_s38;
struct ALOscEvent {
    struct ALVoiceState_s38 *vs;
    void *oscState;
    u8 chan;
};
struct ALVoice_s;
struct ALVolumeEvent;
struct ALVolumeEvent {
    struct ALVoice_s *voice;
    s32 delta;
    u8 vol;
};
struct InventorySlot;
struct InventorySlot {
    u8 available;
    u8 slot;
};
struct Request;
struct Request {
    s16 type;
};
struct func_80284AF4_G2;
struct func_80284AF4_G2 {
    void * unk0;
};
struct ALEvent10;
struct ALEvent10 {
    s16 type;
    union {
        ALMIDIEvent midi;
        ALNoteEvent note;
        ALVolumeEvent vol;
        Request spvol;
        InventorySlot sppriority;
        func_80284AF4_G2 spseq;
        func_80284AF4_G2 spbank;
        ALOscEvent osc;
    } msg;
};
struct ALEventQueue;
struct ALEventQueue {
    Link_func_802596B4_de freeList;
    Link_func_802596B4_de allocList;
    s32 eventCount;
};
struct ALPlayer_s;
struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    void *handler;
    s32 callTime;
    s32 samplesLeft;
};
typedef signed int ( *ALOscInit)(void * *, float *, unsigned char, unsigned char, unsigned char, unsigned char);
typedef void ( *ALOscStop)(void *);
typedef signed int ( *ALOscUpdate)(void *, float *);
struct ALCSPlayer;
struct ALCSPlayer {
    ALPlayer_s node;
    void *drvr;
    void *target;
    s32 curTime;
    ALBank_s *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent10 nextEvent;
    ALEventQueue evtq;
    s32 frameTime;
    ALChanState10 *chanState;
    ALVoiceState_s38 *vAllocHead;
    ALVoiceState_s38 *vAllocTail;
    ALVoiceState_s38 *vFreeList;
    ALOscInit initOsc;
    ALOscUpdate updateOsc;
    ALOscStop stopOsc;
};
struct Opaque_ALLowPass_s;
typedef struct Opaque_ALLowPass_s Opaque_ALLowPass;
struct ALDelay28_2;
struct ALDelay28_2 {
    u32 input;
    u32 output;
    s16 ffcoef;
    s16 fbcoef;
    s16 gain;
    f32 rsinc;
    f32 rsval;
    s32 rsdelta;
    f32 rsgain;
    Opaque_ALLowPass *lp;
    void *rs;
};
struct Clip;
struct Clip {
    s16 mode;
    s16 frames;
};
struct ALDelay_func_802B5B94_de;
struct ALDelay_func_802B5B94_de {
    u32 input;
    u32 output;
    s16 ffcoef;
    s16 fbcoef;
    s16 gain;
    f32 rsinc;
    f32 rsval;
    s32 rsdelta;
    f32 rsgain;
    Clip *lp;
    void *rs;
};
struct ALEnvMixer4C;
struct ALEnvMixer4C {
    char pad[0x4C];
};
struct ALFilter_s14_2;
struct ALFilter_s14_2 {
    struct ALFilter_s14_2 *source;
    ALCmdHandler handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
};
struct ALEnvMixer_s;
struct ALEnvMixer_s {
    ALFilter_s14_2 filter;
    void *state;
    s16 pan;
    s16 volume;
    s16 cvolL;
    s16 cvolR;
    s16 dryamt;
    s16 wetamt;
    u16 lratl;
    s16 lratm;
    s16 ltgt;
    u16 rratl;
    s16 rratm;
    s16 rtgt;
    s32 delta;
    s32 segEnd;
    s32 first;
    void *ctrlList;
    void *ctrlTail;
    ALFilter_s14_2 **sources;
    s32 motion;
};
struct ALEvent10_2;
struct ALEvent10_2 {
    s16 type;
    union {
        s32 word[3];
    } msg;
};
struct Message_func_802AF150_de;
struct Message_func_802AF150_de {
    s16 type;
    char pad[14];
};
struct ALFilter_sC;
struct ALFilter_sC {
    struct ALFilter_sC *source;
    ALCmdHandler handler;
    ALSetParam setParam;
};
struct ALFx2C;
struct ALFx2C {
    ALFilter_s14_2 filter;
    s16 *base;
    s16 *input;
    u32 length;
    ALDelay28_2 *delay;
    u8 section_count;
    void *paramHdl;
};
struct ALDelay_func_802B5B94_de;
struct ALFx_func_802B5B94_de;
struct ALFx_func_802B5B94_de {
    ALFilter_s14 filter;
    s16 *base;
    s16 *input;
    u32 length;
    struct ALDelay_func_802B5B94_de *delay;
    u8 section_count;
    void *paramHdl;
};
struct ALPlayer_s14;
struct ALPlayer_s14 {
    struct ALPlayer_s14 *next;
    void *clientData;
    ALVoiceHandler handler;
    s32 callTime;
    s32 samplesLeft;
};
struct ALSynth4C;
struct ALSynth4C {
    ALPlayer_s14 *head;
    Link_func_802596B4_de pFreeList;
    Link_func_802596B4_de pAllocList;
    Link_func_802596B4_de pLameList;
    s32 paramSamples;
    s32 curSamples;
    void *dma;
    void *heap;
    void *paramList;
    void *mainBus;
    void *auxBus;
    ALFilter_sC *outputFilter;
    s32 numPVoices;
    s32 maxAuxBusses;
    s32 outputRate;
    s32 maxOutSamples;
};
struct ALGlobals;
struct ALGlobals {
    ALSynth4C drvr;
};
struct func_8022E694_S1;
struct func_8022E694_S1 {
    char pad0[0x44];
    s32 unk44;
};
struct ALGlobals_func_802B5B94_de;
struct ALGlobals_func_802B5B94_de {
    func_8022E694_S1 drvr;
};
struct ALHeap;
struct ALHeap {
    u8 *base;
    u8 *cur;
    s32 len;
    s32 count;
};
struct ALLoadFilter;
struct ALLoadFilter {
    char pad[0x48];
};
struct ALRawLoop;
struct ALRawLoop {
    u32 start;
    u32 end;
    u32 count;
};
struct ALRAWWaveInfo;
struct ALRAWWaveInfo {
    ALRawLoop *loop;
};
struct ALWaveTable_s;
struct ALWaveTable_s {
    u8 *base;
    s32 len;
    u8 type;
    u8 flags;
    union {
        ALADPCMWaveInfo adpcmWave;
        ALRAWWaveInfo rawWave;
    } waveInfo;
};
struct ALLoadFilter48;
struct ALLoadFilter48 {
    ALFilter_s14 filter;
    ADPCM_STATE *state;
    ADPCM_STATE *lstate;
    ALRawLoop loop;
    ALWaveTable_s *table;
    s32 bookSize;
    void *dma;
    void *dmaState;
    s32 sample;
    s32 lastsam;
    s32 first;
    s32 memin;
};
struct ALMainBus_s;
struct ALMainBus_s {
    ALFilter_s14 filter;
    s32 sourceCount;
    s32 maxSources;
    ALFilter_s14 **sources;
};
struct ALParam_s1C;
struct ALParam_s1C {
    struct ALParam_s1C *next;
    s32 delta;
    s16 type;
    s32 data;
    s32 moredata;
    s32 stillmoredata;
    s32 yetstillmoredata;
};
struct ALResampler;
struct ALResampler {
    char pad[0x34];
};
struct ALResampler_s;
struct ALResampler_s {
    ALFilter_s14_2 filter;
    void *state;
    f32 ratio;
    s32 upitch;
    f32 delta;
    s32 first;
    void *ctrlList;
    void *ctrlTail;
    s32 motion;
};
struct ALSave;
struct ALSave {
    ALFilter_s14 filter;
    s32 dramout;
    s32 first;
};
struct ALSeqMarker;
struct ALSeqMarker {
    u8 *curPtr;
    s32 lastTicks;
    s32 curTicks;
    s16 lastStatus;
};
struct Opaque_ALSeq_s;
typedef struct Opaque_ALSeq_s Opaque_ALSeq;
struct ALSeqPlayer88;
struct ALSeqPlayer88 {
    char node[0x14];
    void *drvr;
    Opaque_ALSeq *target;
    s32 curTime;
    void *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent10_2 nextEvent;
    ALEventQueue evtq;
    s32 frameTime;
    void *chanState;
    void *vAllocHead;
    void *vAllocTail;
    void *vFreeList;
    void *initOsc;
    void *updateOsc;
    void *stopOsc;
    ALSeqMarker *loopStart;
    ALSeqMarker *loopEnd;
    s32 loopCount;
};
struct ALSeq_s;
struct ALSeq_s {
    u8 *base;
    u8 *trackStart;
    u8 *curPtr;
    s32 lastTicks;
    s32 len;
    f32 qnpt;
    s16 division;
    s16 lastStatus;
};
typedef int ALMicroTime;
struct ALSeqPlayer_func_802B0A90_de;
struct ALSeq_s;
struct ALSeqPlayer_func_802B0A90_de {
    char node[0x14];
    void *drvr;
    struct ALSeq_s *target;
    ALMicroTime curTime;
    void *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent10_2 nextEvent;
    ALEventQueue evtq;
    ALMicroTime frameTime;
    void *chanState;
    void *vAllocHead;
    void *vAllocTail;
    void *vFreeList;
    void *initOsc;
    void *updateOsc;
    void *stopOsc;
    ALSeqMarker *loopStart;
    ALSeqMarker *loopEnd;
    s32 loopCount;
};
struct ALSndPlayer_func_802B2780_de;
struct ALSndPlayer_func_802B2780_de {
    ALPlayer_s node;
    ALEventQueue evtq;
    Message_func_802AF150_de nextEvent;
    func_80284AF4_G2 *drvr;
    s32 target;
    void *sndState;
    s32 maxSounds;
    s32 frameTime;
    s32 nextDelta;
    s32 curTime;
};
struct ALSound_s_func_802B2780_de;
struct ALSound_s_func_802B2780_de {
    ALEnvelope *envelope;
    void *keyMap;
    void *wavetable;
    u8 samplePan;
    u8 sampleVolume;
    u8 flags;
};
struct ALSoundState_func_802B2780_de;
struct ALSound_s_func_802B2780_de;
struct ALSoundState_func_802B2780_de {
    ALVoice_s voice;
    struct ALSound_s_func_802B2780_de *sound;
    s16 priority;
    f32 pitch;
    s32 state;
    s16 vol;
    u8 pan;
    u8 fxMix;
};
union ALSndpEvent_func_802B2780_de;
union ALSndpEvent_func_802B2780_de {
    Message_func_802AF150_de msg;
    struct {
        s16 type;
        ALSoundState_func_802B2780_de *state;
    } common;
    struct {
        s16 type;
        ALSoundState_func_802B2780_de *state;
        s16 vol;
    } vol;
    struct {
        s16 type;
        ALSoundState_func_802B2780_de *state;
        f32 pitch;
    } pitch;
    struct {
        s16 type;
        ALSoundState_func_802B2780_de *state;
        u8 pan;
    } pan;
    struct {
        s16 type;
        ALSoundState_func_802B2780_de *state;
        u8 mix;
    } fx;
};
struct ALSynConfig;
struct ALSynConfig {
    s32 maxVVoices;
    s32 maxPVoices;
    s32 maxUpdates;
    s32 maxFXbusses;
    void *dmaproc;
    ALHeap *heap;
    s32 outputRate;
    u8 fxType;
    s32 *params;
};
typedef void *( *ALDMANew)(void *);
struct ALSynth;
struct ALSynth {
    void *head;
    Link_func_802596B4_de pFreeList;
    Link_func_802596B4_de pAllocList;
    Link_func_802596B4_de pLameList;
    s32 paramSamples;
    s32 curSamples;
    ALDMANew dma;
    ALHeap *heap;
    ALParam_s1C *paramList;
    ALMainBus_s *mainBus;
    ALAuxBus_s *auxBus;
    ALFilter_s14 *outputFilter;
    s32 numPVoices;
    s32 maxAuxBusses;
    s32 outputRate;
    s32 maxOutSamples;
};
typedef void ( *SharedCallback10)(void *, void *);
struct Access_Callback_4;
struct Access_Callback_4 {
    char pad[0x4];
    SharedCallback10 field;
};
struct Access_s32_30;
struct Access_s32_30 {
    char pad[0x30];
    s32 * field;
};
struct Access_s32_5C;
struct Access_s32_5C {
    char pad[0x5C];
    s32 field;
};
struct Access_s32_AC;
struct Access_s32_AC {
    char pad[0xAC];
    s32 field;
};
struct Access_s8_E6;
struct Access_s8_E6 {
    char pad[0xE6];
    s8 field;
};
struct Access_u32_0;
struct Access_u32_0 {
    u32 field;
};
struct Access_u8_10F;
struct Access_u8_10F {
    char pad[0x10F];
    u8 field;
};
struct Access_u8_123;
struct Access_u8_123 {
    char pad[0x123];
    u8 field;
};
struct Access_u8_36;
struct Access_u8_36 {
    char pad[0x36];
    u8 field;
};
struct Access_u8_CB;
struct Access_u8_CB {
    char pad[0xCB];
    u8 field;
};
struct Access_void_30;
struct Access_void_30 {
    char pad[0x30];
    void * field;
};
struct Access_void_B4;
struct Access_void_B4 {
    char pad[0xB4];
    void * field;
};
struct func_80242278_S1;
struct func_80242278_S1 {
    char pad0[0x4];
    s8 unk4;
};
struct func_8024795C_S2;
struct func_8024795C_S2 {
    char pad0[0x5DC];
    char * unk5DC;
};
struct Record;
struct Record {
    char pad0[0x92];
    u8 team;
};
struct Triple;
struct Triple {
    s32 x;
    s32 y;
    s32 z;
};
struct InstanceHdr;
struct InstanceHdr {
    s32 w[5];
};
struct Vec3;
struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};
struct Brain_func_80212D78_eu_x;
struct Brain_func_80212D78_eu_x {
    char pad0[0x220];
    s32 unk220;
    char pad224[0xD8];
    s32 unk2FC;
};
struct Brain_func_80212D78_eu_x;
struct Player_func_80212D78_eu_x;
struct Player_func_80212D78_eu_x {
    char pad0[0x1454];
    struct Brain_func_80212D78_eu_x *brain;
};
struct Actor_func_80212D78_eu_x;
struct Player_func_80212D78_eu_x;
struct Actor_func_80212D78_eu_x {
    char pad0[0x1D8];
    struct Player_func_80212D78_eu_x *player;
};
struct Actor_func_80214624_de;
struct Runtime;
struct Actor_func_80214624_de {
    char p0[8];
    Vec3 pos;
    s32 unk14;
    s32 *unk18;
    char p1C[0x50];
    f32 unk6C;
    char p70[0x74];
    u16 unkE4;
    char pE6[0x1A];
    s32 unk100;
    char p104[0xD4];
    struct Runtime *unk1D8;
    char p1DC[0x104];
    s32 unk2E0;
};
struct Runtime {
    char p0[0x788];
    s32 unk788;
    char p78C[8];
    struct Actor_func_80214624_de *unk794;
};
struct Actor_func_80214DD4_de;
struct Controller;
struct Actor_func_80214DD4_de {
    u8 type;
    u8 pad1[7];
    Vec3 pos;
    s32 room;
    s32 *kind;
    u8 pad1C[0x54];
    f32 height;
    u8 pad74[0x70];
    u16 id;
    u8 padE6[0x1A];
    s32 flags100;
    u8 pad104[0xD4];
    struct Controller *controller;
    u8 pad1DC[0x104];
    s32 flags2E0;
};
struct Controller {
    u8 pad0[0x788];
    s32 state;
    u8 pad78C[8];
    struct Actor_func_80214DD4_de *owner;
};
struct func_8020EA10_S3;
struct func_8020EA10_S3 {
    char pad0[0x8F];
    u8 unk8F;
};
struct Actor_func_80245D30_de;
struct Actor_func_80245D30_de {
    u8 kind;
    char pad1[0x1f];
    f32 vertical;
    char pad24[4];
    Vec3 current;
    char pad34[4];
    s32 flags;
    char pad3c[0x30];
    f32 yaw;
};
struct Vector4f;
struct Vector4f {
    float x;
    float y;
    float z;
    float w;
};
struct Actor_func_8024A7A0_de;
struct Actor_func_8024A7A0_de {
    char pad0;
    s8 team;
    char pad2;
    s8 field3;
    u32 pad4;
    Vec3 position0;
    u32 pad14[2];
    Vec3 position1;
    u32 pad28[13];
    Vector4f rotation;
    char pad6C[0xB4 - 0x6C];
    s32 fieldB4;
    char padB8[0x17C - 0xB8];
    s32 mask;
    char pad180[0x2E4 - 0x180];
    s32 flags2E4;
};
struct Body;
struct Body {
    u8 pad[0x24];
    f32 speed;
};
struct Controls;
struct Controls {
    char pad0[0x80];
    s8 mode;
    char pad81[0x94 - 0x81];
    u8 team;
    u8 active;
};
struct Ctrl;
struct Ctrl {
    u8 pad[0x8F];
    u8 flag;
};
struct Held;
struct Held {
    u8 type;
    char pad1[0x100 - 0x1];
    s32 flags;
    char pad104[0x122C - 0x104];
    s32 options;
};
struct Matrix;
struct Matrix {
    f32 m[16];
};
struct func_80212828_S7;
struct func_80212828_S7 {
    char pad0[0x8];
    f32 unk8;
};
struct Mode;
struct Mode {
    char pad0[8];
    func_80212828_S7 *physics;
    char padC[12];
};
struct Model;
struct Model {
    char pad0[0x4C];
    s32 slots[8];
};
struct Profile;
struct Profile {
    u8 bonus2;
    u8 bonus0;
    u8 bonus1;
    char pad[0x18D];
};
struct Settings;
struct Settings {
    char pad0[0x78];
    s32 flag78;
    s32 pad7C;
    s32 flag80;
};
struct Shared_Body;
struct Shared_Body {
    char pad0[0xC];
    s16 kind;
    char padE[0xE6];
    f32 ceiling;
};
struct Shared_Effect;
struct Shared_Effect {
    char pad0[0xB4];
    s32 state;
};
struct Shared_Quad;
struct Shared_Quad {
    s32 w[4];
};
struct Shared_Emitter;
struct Shared_Model;
struct Shared_Emitter {
    char pad0[0x8];
    Vec3 pos;
    struct Shared_Model * model;
    char pad18[0x28];
    f32 unk40;
    char pad44[0x18];
    Shared_Quad unk5C;
    f32 unk6C;
};
struct Shared_Input;
struct Shared_Shadow;
struct Shared_Input {
    char pad0[0x10];
    struct Shared_Shadow * shadow;
    char pad14[0x10];
    s32 held;
    s32 pressed;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
};
struct Shared_Slot;
struct Shared_Slot {
    s8 owned;
    s8 pad1;
};
struct StateInfo;
struct StateInfo {
    void (*enter)(void *, void *);
    s32 pad4;
    s32 pad8;
    s32 timer;
    s32 parameter;
    s32 pad14;
};
struct View;
struct View {
    char pad0[0x29C];
    f32 viewport[4];
    char pad2AC[0x340 - 0x2AC];
    Vec3 normal;
    f32 distance;
};
struct func_8023945C_S1;
struct func_8023945C_S1 {
    char pad0[0x128];
    Vec3 unk128;
};
struct Shape_func_8021A2D4_de_2;
struct Shape_func_8021A2D4_de_2 {
    int field_0;
};
struct Rider;
struct Rider {
    char pad0[0x37];
    s8 direction;
    char pad38[0x1C];
    char frame[0x10];
    f32 throttle;
    char pad68[0x38];
    Vec3 base;
    char padAC[0x7C];
    f32 change;
};
struct Body;
struct Character;
struct Controller;
struct Controls;
struct Ctrl;
struct Held;
struct Mode;
struct Model;
struct Mount;
struct Profile;
struct Record;
struct Rider;
struct Settings;
struct SharedPlayer_func_8022A398_de;
struct Shared_Body;
struct Shared_Hud;
struct Shared_Model;
struct Shared_Profile;
struct Shared_StateInfo;
struct Shared_Voice;
struct StateInfo;
struct TeamInfo;
struct View;
struct SharedPlayer_func_8022A398_de {
    union {
        struct {
            u8 unk0[24];
        } view0_0;
        struct {
            u8 pad0[24];
        } view0_1;
        struct {
            char pad[0x3];
            u8 team;
        } view3_2;
        struct {
            char pad[0x8];
            Vec3 unk8;
        } view8_2;
        struct {
            char pad[0x8];
            Vec3 pos;
        } view8_3;
        struct {
            char pad[0x8];
            Vec3 position;
        } view8_4;
        struct {
            char pad[0x14];
            struct Shared_Model * model;
        } view14_6;
        struct { char pad[8]; s32 positionWords[3]; } positionBits;
    } views0;
    union {
        struct {
            char * unk18;
        } view18_0;
        struct {
            char * track;
        } view18_1;
        struct {
            struct Model * model;
        } view18_2;
        struct {
            struct Body * body;
        } view18_3;
        struct {
            struct Character * character;
        } view18_4;
        struct {
            struct Shared_Body * body;
        } view18_5;
    } views18;
    union {
        struct {
            u8 unk1C[344];
        } view1C_0;
        struct {
            u8 pad1[344];
        } view1C_1;
        struct {
            char pad[0x4];
            f32 velY;
        } view20_2;
        struct {
            char pad[0x1C];
            s32 unk38;
        } view38_2;
        struct {
            char pad[0x1C];
            s32 flags;
        } view38_3;
        struct {
            char pad[0x24];
            f32 unk40;
        } view40_5;
        struct {
            char pad[0x40];
            Shared_Quad unk5C;
        } view5C_6;
        struct {
            char pad[0x50];
            f32 unk6C;
        } view6C_4;
        struct {
            char pad[0x50];
            f32 heading;
        } view6C_5;
        struct {
            char pad[0x50];
            f32 yaw;
        } view6C_9;
        struct {
            char pad[0xC8];
            u16 unkE4;
        } viewE4_6;
        struct {
            char pad[0xC8];
            u16 kind;
        } viewE4_7;
        struct {
            char pad[0xE4];
            s32 unk100;
        } view100_8;
        struct {
            char pad[0xE4];
            s32 flags;
        } view100_9;
        struct {
            char pad[0xE8];
            f32 unk104;
        } view104_10;
        struct {
            char pad[0xE8];
            f32 idleTime;
        } view104_11;
        struct {
            char pad[0xEC];
            s16 anim;
        } view108_16;
        struct {
            char pad[0xF2];
            s8 unk10E;
        } view10E_12;
        struct {
            char pad[0xF2];
            s8 idle;
        } view10E_13;
        struct {
            char pad[0xF2];
            s8 replaying;
        } view10E_14;
        struct {
            char pad[0xF2];
            s8 animPending;
        } view10E_20;
        struct {
            char pad[0x154];
            char unk170[100];
        } view170_15;
        struct {
            char pad[0x154];
            char body[100];
        } view170_16;
        struct {
            char pad[0x154];
            s32 unk170;
        } view170_23;
        struct {
            char pad[0x158];
            s32 unk174;
        } view174_17;
        struct {
            char pad[0x15C];
            u8 unk178[740];
        } view178_18;
        struct {
            char pad[0x15C];
            u8 pad2[740];
        } view178_19;
        struct {
            char pad[0x1B8];
            f32 unk1D4;
        } view1D4_20;
        struct {
            char pad[0x1B8];
            f32 holdTime;
        } view1D4_21;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8022A398_de * unk1D8;
        } view1D8_22;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8022A398_de * self;
        } view1D8_23;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8022A398_de * f1D8;
        } view1D8_24;
        struct {
            char pad[0x1BC];
            void * unk1D8;
        } view1D8_32;
        struct {
            char pad[0x244];
            Vec3 unk260;
        } view260_25;
        struct {
            char pad[0x244];
            Vec3 muzzle;
        } view260_26;
        struct {
            char pad[0x2CC];
            char unk2E8[368];
        } view2E8_27;
        struct {
            char pad[0x2CC];
            char weapon[368];
        } view2E8_28;
        struct {
            char pad[0x2CC];
            Shared_Emitter emitter;
        } view2E8_37;
        struct {
            char pad[0x43C];
            char unk458[384];
        } view458_29;
        struct {
            char pad[0x43C];
            char ammo[384];
        } view458_30;
        struct {
            char pad[0x43C];
            s32 unk458;
        } view458_40;
        struct {
            char pad[0x440];
            s32 unk45C;
        } view45C_31;
        struct {
            char pad[0x444];
            u8 unk460[376];
        } view460_32;
        struct {
            char pad[0x444];
            u8 pad3[376];
        } view460_33;
        struct {
            char pad[0x468];
            struct Shared_Voice * voice;
        } view484_44;
        struct {
            char pad[0x470];
            s8 unk48C;
        } view48C_34;
        struct {
            char pad[0x470];
            s8 state;
        } view48C_35;
        struct {
            char pad[0x4A4];
            void * unk4C0;
        } view4C0_47;
        struct {
            char pad[0x507];
            s8 unk523;
        } view523_36;
        struct {
            char pad[0x507];
            s8 busy;
        } view523_37;
        struct {
            char pad[0x578];
            s32 unk594;
        } view594_38;
        struct {
            char pad[0x578];
            s32 gear;
        } view594_39;
        struct {
            char pad[0x578];
            s32 mode;
        } view594_40;
        struct {
            char pad[0x584];
            f32 unk5A0;
        } view5A0_41;
        struct {
            char pad[0x584];
            f32 charge;
        } view5A0_42;
        struct {
            char pad[0x5B4];
            s32 unk5D0;
        } view5D0_43;
        struct {
            char pad[0x5B4];
            s32 f5D0;
        } view5D0_44;
        struct {
            char pad[0x5B8];
            s32 unk5D4;
        } view5D4_45;
        struct {
            char pad[0x5B8];
            s32 slot;
        } view5D4_46;
        struct {
            char pad[0x5B8];
            s32 profile;
        } view5D4_47;
        struct {
            char pad[0x5B8];
            s32 f5D4;
        } view5D4_48;
    } views1C;
    union {
        struct {
            struct Record * unk5D8;
        } view5D8_0;
        struct {
            struct Record * record;
        } view5D8_1;
        struct {
            struct Controls * controls;
        } view5D8_2;
        struct {
            struct TeamInfo * teamInfo;
        } view5D8_3;
        struct {
            struct Ctrl * ctrl;
        } view5D8_4;
        struct {
            unsigned char * info;
        } view5D8_5;
        struct {
            struct Profile * profile;
        } view5D8_6;
        struct {
            struct Settings * settings;
        } view5D8_7;
        struct {
            s32 f5D8;
        } view5D8_8;
        struct {
            struct Shared_Profile * profile;
        } view5D8_9;
    } views5D8;
    union {
        struct {
            void * unk5DC;
        } view5DC_0;
        struct {
            void * view;
        } view5DC_1;
        struct {
            struct View * view;
        } view5DC_2;
        struct {
            u8 pad4[8];
        } view5DC_3;
        struct {
            void * entity;
        } view5DC_4;
        struct {
            struct Rider * rider;
        } view5DC_5;
        struct {
            char * storage;
        } view5DC_6;
        struct {
            char * messages;
        } view5DC_7;
        struct {
            struct Shared_Hud * hud;
        } view5DC_8;
        struct {
            char pad[0x4];
            s32 unk5E0;
        } view5E0_8;
        struct {
            char pad[0x4];
            s32 state;
        } view5E0_9;
        struct {
            char pad[0x4];
            s32 slot;
        } view5E0_10;
    } views5DC;
    union {
        struct {
            s32 unk5E4;
        } view5E4_0;
        struct {
            s32 active;
        } view5E4_1;
        struct {
            s32 health;
        } view5E4_2;
        struct {
            s32 alive;
        } view5E4_3;
        struct {
            s32 holding;
        } view5E4_4;
    } views5E4;
    union {
        struct {
            u8 unk5E8[3140];
        } view5E8_0;
        struct {
            u8 pad5[3140];
        } view5E8_1;
        struct {
            char pad[0x2];
            s16 unk5EA;
        } view5EA_2;
        struct {
            char pad[0x2];
            s16 respawns;
        } view5EA_3;
        struct {
            char pad[0x2];
            s16 runType;
        } view5EA_4;
        struct {
            char pad[0x4];
            s32 unk5EC;
        } view5EC_5;
        struct {
            char pad[0x4];
            s32 model;
        } view5EC_6;
        struct {
            char pad[0x4];
            s32 spawnPoint;
        } view5EC_7;
        struct {
            char pad[0x4];
            s32 f5EC;
        } view5EC_8;
        struct {
            char pad[0x8];
            s32 unk5F0;
        } view5F0_9;
        struct {
            char pad[0x8];
            s32 f5F0;
        } view5F0_10;
        struct {
            char pad[0xC];
            s16 unk5F4[4];
        } view5F4_11;
        struct {
            char pad[0xC];
            s16 ammo[4];
        } view5F4_12;
        struct {
            char pad[0xC];
            s16 ammo[3];
        } view5F4_13;
        struct {
            char pad[0x1A];
            Shared_Slot slots[22];
        } view602_14;
        struct {
            char pad[0x46];
            s16 unk62E;
        } view62E_13;
        struct {
            char pad[0x46];
            s16 weapon;
        } view62E_14;
        struct {
            char pad[0x46];
            s16 character;
        } view62E_17;
        struct {
            char pad[0x68];
            s16 unk650;
        } view650_15;
        struct {
            char pad[0x68];
            s16 state;
        } view650_16;
        struct {
            char pad[0x68];
            s16 action;
        } view650_17;
        struct {
            char pad[0x68];
            s16 mode;
        } view650_18;
        struct {
            char pad[0x6A];
            s16 unk652;
        } view652_19;
        struct {
            char pad[0x6A];
            s16 previous;
        } view652_20;
        struct {
            char pad[0x6A];
            s16 pad652;
        } view652_24;
        struct {
            char pad[0x6C];
            s16 prevState;
        } view654_25;
        struct {
            char pad[0x6E];
            s16 pad656;
        } view656_26;
        struct {
            char pad[0x70];
            f32 unk658;
        } view658_21;
        struct {
            char pad[0x70];
            f32 counter;
        } view658_22;
        struct {
            char pad[0x70];
            f32 stride;
        } view658_23;
        struct {
            char pad[0x70];
            f32 swimTime;
        } view658_24;
        struct {
            char pad[0x70];
            f32 stateTime;
        } view658_31;
        struct {
            char pad[0x74];
            s32 unk65C;
        } view65C_32;
        struct {
            char pad[0x78];
            s32 unk660;
        } view660_25;
        struct {
            char pad[0x78];
            s32 previousTimer;
        } view660_26;
        struct {
            char pad[0x7C];
            s32 unk664;
        } view664_27;
        struct {
            char pad[0x7C];
            s32 timer;
        } view664_28;
        struct {
            char pad[0x84];
            f32 unk66C;
        } view66C_29;
        struct {
            char pad[0x88];
            f32 unk670;
        } view670_30;
        struct {
            char pad[0x88];
            f32 shield;
        } view670_31;
        struct {
            char pad[0x90];
            f32 unk678;
        } view678_40;
        struct {
            char pad[0xA0];
            char unk688[16];
        } view688_32;
        struct {
            char pad[0xA0];
            char body[16];
        } view688_33;
        struct {
            char pad[0xA0];
            Shared_Input input;
        } view688_43;
        struct {
            char pad[0xB0];
            struct Controller * unk698;
        } view698_34;
        struct {
            char pad[0xB0];
            struct Controller * controller;
        } view698_35;
        struct {
            char pad[0xB0];
            void * controller;
        } view698_36;
        struct {
            char pad[0xB0];
            char * emitter;
        } view698_37;
        struct {
            char pad[0xB0];
            char * title;
        } view698_38;
        struct {
            char pad[0xB4];
            f32 unk69C;
        } view69C_39;
        struct {
            char pad[0xB4];
            f32 stick;
        } view69C_40;
        struct {
            char pad[0xBC];
            f32 unk6A4;
        } view6A4_41;
        struct {
            char pad[0xBC];
            f32 strafe;
        } view6A4_42;
        struct {
            char pad[0xC0];
            f32 unk6A8;
        } view6A8_43;
        struct {
            char pad[0xC0];
            f32 lift;
        } view6A8_44;
        struct {
            char pad[0xC4];
            s32 unk6AC;
        } view6AC_45;
        struct {
            char pad[0xC8];
            s32 unk6B0;
        } view6B0_46;
        struct {
            char pad[0xC8];
            s32 input;
        } view6B0_47;
        struct {
            char pad[0xC8];
            s32 state;
        } view6B0_48;
        struct {
            char pad[0xD0];
            s32 unk6B8;
        } view6B8_49;
        struct {
            char pad[0xD0];
            s32 input;
        } view6B8_50;
        struct {
            char pad[0xD8];
            f32 unk6C0;
        } view6C0_51;
        struct {
            char pad[0xD8];
            f32 climb;
        } view6C0_52;
        struct {
            char pad[0xD8];
            f32 speed;
        } view6C0_53;
        struct {
            char pad[0xD8];
            f32 velX;
        } view6C0_64;
        struct {
            char pad[0xDC];
            f32 unk6C4;
        } view6C4_54;
        struct {
            char pad[0xDC];
            f32 side;
        } view6C4_55;
        struct {
            char pad[0xDC];
            f32 velZ;
        } view6C4_67;
        struct {
            char pad[0xE0];
            f32 unk6C8;
        } view6C8_56;
        struct {
            char pad[0xE0];
            f32 speed;
        } view6C8_57;
        struct {
            char pad[0xE4];
            f32 lastVelY;
        } view6CC_70;
        struct {
            char pad[0xE8];
            s32 onGround;
        } view6D0_71;
        struct {
            char pad[0xEC];
            f32 unk6D4;
        } view6D4_58;
        struct {
            char pad[0xF0];
            f32 unk6D8;
        } view6D8_59;
        struct {
            char pad[0xF4];
            f32 unk6DC;
        } view6DC_60;
        struct {
            char pad[0xFC];
            f32 unk6E4;
        } view6E4_61;
        struct {
            char pad[0xFC];
            f32 depth;
        } view6E4_62;
        struct {
            char pad[0xFC];
            f32 airTime;
        } view6E4_77;
        struct {
            char pad[0x100];
            f32 unk6E8;
        } view6E8_63;
        struct {
            char pad[0x100];
            Vec3 unk6E8;
        } view6E8_79;
        struct {
            char pad[0x104];
            f32 unk6EC;
        } view6EC_64;
        struct {
            char pad[0x104];
            f32 height;
        } view6EC_65;
        struct {
            char pad[0x108];
            f32 unk6F0;
        } view6F0_66;
        struct {
            char pad[0x10C];
            f32 unk6F4;
        } view6F4_83;
        struct {
            char pad[0x110];
            Vec3 unk6F8;
        } view6F8_84;
        struct {
            char pad[0x11C];
            f32 unk704;
        } view704_67;
        struct {
            char pad[0x11C];
            f32 lift;
        } view704_68;
        struct {
            char pad[0x130];
            f32 unk718;
        } view718_69;
        struct {
            char pad[0x130];
            f32 crouch;
        } view718_70;
        struct {
            char pad[0x134];
            s32 unk71C;
        } view71C_89;
        struct {
            char pad[0x138];
            f32 swim;
        } view720_90;
        struct {
            char pad[0x13C];
            f32 unk724;
        } view724_71;
        struct {
            char pad[0x13C];
            f32 pitch;
        } view724_72;
        struct {
            char pad[0x140];
            f32 unk728;
        } view728_73;
        struct {
            char pad[0x140];
            f32 kickPitch;
        } view728_74;
        struct {
            char pad[0x144];
            f32 unk72C;
        } view72C_75;
        struct {
            char pad[0x144];
            f32 kickRoll;
        } view72C_76;
        struct {
            char pad[0x144];
            f32 lean;
        } view72C_77;
        struct {
            char pad[0x148];
            f32 unk730[3];
        } view730_78;
        struct {
            char pad[0x148];
            f32 sway[3];
        } view730_79;
        struct {
            char pad[0x154];
            f32 unk73C;
        } view73C_80;
        struct {
            char pad[0x154];
            f32 side;
        } view73C_81;
        struct {
            char pad[0x154];
            Vec3 weapon;
        } view73C_82;
        struct {
            char pad[0x158];
            f32 unk740;
        } view740_83;
        struct {
            char pad[0x158];
            f32 height;
        } view740_84;
        struct {
            char pad[0x15C];
            f32 unk744;
        } view744_85;
        struct {
            char pad[0x15C];
            f32 forward;
        } view744_86;
        struct {
            char pad[0x170];
            f32 unk758;
        } view758_87;
        struct {
            char pad[0x170];
            f32 bobStrength;
        } view758_88;
        struct {
            char pad[0x174];
            f32 unk75C;
        } view75C_89;
        struct {
            char pad[0x174];
            f32 bobSpeed;
        } view75C_90;
        struct {
            char pad[0x188];
            s16 unk770;
        } view770_91;
        struct {
            char pad[0x188];
            s16 nextWeapon;
        } view770_92;
        struct {
            char pad[0x188];
            s16 weapon;
        } view770_113;
        struct {
            char pad[0x18A];
            s16 pad772;
        } view772_114;
        struct {
            char pad[0x18C];
            Vec3 unk774;
        } view774_115;
        struct {
            char pad[0x198];
            f32 unk780;
        } view780_116;
        struct {
            char pad[0x19C];
            f32 unk784;
        } view784_117;
        struct {
            char pad[0x1A0];
            s32 unk788;
        } view788_93;
        struct {
            char pad[0x1A0];
            s32 icons;
        } view788_94;
        struct {
            char pad[0x1B0];
            s32 unk798;
        } view798_95;
        struct {
            char pad[0x1B0];
            s32 carried;
        } view798_96;
        struct {
            char pad[0x1B4];
            Vec3 unk79C;
        } view79C_97;
        struct {
            char pad[0x1B4];
            Vec3 carriedPosition;
        } view79C_98;
        struct {
            char pad[0x1D0];
            s32 unk7B8;
        } view7B8_99;
        struct {
            char pad[0x1D0];
            s32 target;
        } view7B8_100;
        struct {
            char pad[0x1D4];
            f32 unk7BC;
        } view7BC_101;
        struct {
            char pad[0x1D4];
            f32 timer;
        } view7BC_102;
        struct {
            char pad[0x1D8];
            Vec3 unk7C0;
        } view7C0_103;
        struct {
            char pad[0x1D8];
            Vec3 targetPosition;
        } view7C0_104;
        struct {
            char pad[0x200];
            s32 unk7E8;
        } view7E8_105;
        struct {
            char pad[0x200];
            s32 zoomed;
        } view7E8_106;
        struct {
            char pad[0x204];
            f32 unk7EC;
        } view7EC_132;
        struct {
            char pad[0x208];
            f32 unk7F0;
        } view7F0_133;
        struct {
            char pad[0x224];
            struct Mount * unk80C;
        } view80C_107;
        struct {
            char pad[0x224];
            struct Mount * mount;
        } view80C_108;
        struct {
            char pad[0x228];
            s32 unk810;
        } view810_109;
        struct {
            char pad[0x228];
            s32 kind;
        } view810_110;
        struct {
            char pad[0x22C];
            Triple unk814;
        } view814_111;
        struct {
            char pad[0x22C];
            Triple offset;
        } view814_112;
        struct {
            char pad[0x250];
            f32 unk838;
        } view838_113;
        struct {
            char pad[0x250];
            f32 rideTime;
        } view838_114;
        struct {
            char pad[0x254];
            f32 unk83C;
        } view83C_115;
        struct {
            char pad[0x254];
            f32 bump;
        } view83C_116;
        struct {
            char pad[0x258];
            s32 unk840;
        } view840_117;
        struct {
            char pad[0x258];
            s32 surfaced;
        } view840_118;
        struct {
            char pad[0x264];
            s32 unk84C;
        } view84C_149;
        struct {
            char pad[0x26C];
            f32 unk854;
        } view854_147;
        struct {
            char pad[0x274];
            s32 unk85C;
        } view85C_119;
        struct {
            char pad[0x274];
            s32 w85C;
        } view85C_120;
        struct {
            char pad[0x27C];
            s32 unk864;
        } view864_121;
        struct {
            char pad[0x27C];
            s32 f864;
        } view864_122;
        struct {
            char pad[0x280];
            s32 unk868;
        } view868_123;
        struct {
            char pad[0x280];
            s32 f868;
        } view868_124;
        struct {
            char pad[0x284];
            s32 unk86C;
        } view86C_125;
        struct {
            char pad[0x284];
            s32 parameter;
        } view86C_126;
        struct {
            char pad[0x284];
            s32 animation;
        } view86C_127;
        struct {
            char pad[0x288];
            s32 unk870;
        } view870_157;
        struct {
            char pad[0x290];
            Shared_Effect effect;
        } view878_158;
        struct {
            char pad[0x350];
            char unk938[2188];
        } view938_128;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_129;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_130;
        struct {
            char pad[0x350];
            s32 unk938;
        } view938_162;
        struct {
            char pad[0x6D0];
            s32 unkCB8;
        } viewCB8_163;
        struct {
            char pad[0x6E4];
            s32 unkCCC;
        } viewCCC_164;
        struct {
            char pad[0x758];
            s32 unkD40;
        } viewD40_165;
        struct {
            char pad[0x96C];
            s32 unkF54;
        } viewF54_131;
        struct {
            char pad[0x96C];
            s32 selection;
        } viewF54_132;
        struct {
            char pad[0x9A8];
            s32 unkF90;
        } viewF90_133;
        struct {
            char pad[0x9A8];
            s32 choice;
        } viewF90_134;
        struct {
            char pad[0xBCC];
            s32 unk11B4;
        } view11B4_135;
        struct {
            char pad[0xBCC];
            s32 locked;
        } view11B4_136;
        struct {
            char pad[0xBD0];
            s32 unk11B8;
        } view11B8_137;
        struct {
            char pad[0xBD0];
            s32 frozen;
        } view11B8_138;
        struct {
            char pad[0xBD4];
            s32 unk11BC;
        } view11BC_139;
        struct {
            char pad[0xBD4];
            s32 f11BC;
        } view11BC_140;
        struct {
            char pad[0xBD8];
            s32 unk11C0;
        } view11C0_141;
        struct {
            char pad[0xBD8];
            s32 f11C0;
        } view11C0_142;
        struct {
            char pad[0xBDC];
            f32 unk11C4;
        } view11C4_143;
        struct {
            char pad[0xBDC];
            f32 soundTime;
        } view11C4_144;
        struct {
            char pad[0xBE4];
            s32 unk11CC;
        } view11CC_145;
        struct {
            char pad[0xBE4];
            s32 f11CC;
        } view11CC_146;
        struct {
            char pad[0xBF0];
            f32 unk11D8;
        } view11D8_147;
        struct {
            char pad[0xBF0];
            f32 recoil;
        } view11D8_148;
        struct {
            char pad[0xBF0];
            f32 stun;
        } view11D8_149;
        struct {
            char pad[0xBF4];
            f32 unk11DC;
        } view11DC_185;
        struct {
            char pad[0xBF8];
            f32 unk11E0;
        } view11E0_186;
        struct {
            char pad[0xC00];
            s32 unk11E8;
        } view11E8_150;
        struct {
            char pad[0xC00];
            s32 f11E8;
        } view11E8_151;
        struct {
            char pad[0xC04];
            f32 unk11EC;
        } view11EC_189;
        struct {
            char pad[0xC28];
            s32 unk1210;
        } view1210_152;
        struct {
            char pad[0xC28];
            s32 marker;
        } view1210_153;
        struct {
            char pad[0xC2C];
            s32 unk1214;
        } view1214_154;
        struct {
            char pad[0xC2C];
            s32 marker;
        } view1214_155;
        struct {
            char pad[0xC2C];
            s32 markerShown;
        } view1214_156;
        struct {
            char pad[0xC30];
            s32 unk1218;
        } view1218_157;
        struct {
            char pad[0xC30];
            s32 f1218;
        } view1218_158;
        struct {
            char pad[0xC34];
            s32 unk121C;
        } view121C_159;
        struct {
            char pad[0xC34];
            s32 f121C;
        } view121C_160;
        struct {
            char pad[0xC38];
            s32 unk1220;
        } view1220_161;
        struct {
            char pad[0xC38];
            s32 f1220;
        } view1220_162;
        struct { char pad[0xE]; s16 charge; } chargeView;
        struct { char pad[0x11F4 - 0x5E8]; f32 spin; s32 frame; } rapidFireView;
    } views5E8;
    union {
        struct {
            u32 unk122C;
        } view122C_0;
        struct {
            u32 flags;
        } view122C_1;
        struct {
            s32 options;
        } view122C_2;
        struct {
            s32 f122C;
        } view122C_3;
        struct {
            s32 fxFlags;
        } view122C_4;
    } views122C;
    f32 fxTime;
    f32 fxSpeed;
    s32 fxStage;
    char pad123C[0x4];
    f32 unk1240;
    f32 unk1244;
    char pad1248[0x7C];
    union {
        struct {
            s32 unk12C4;
        } view12C4_0;
        struct {
            s32 f12C4;
        } view12C4_1;
    } views12C4;
    union {
        struct {
            s32 unk12C8;
        } view12C8_0;
        struct {
            s32 f12C8;
        } view12C8_1;
    } views12C8;
    union {
        struct {
            s32 unk12CC[8];
        } view12CC_0;
        struct {
            s32 splitsA[8];
        } view12CC_1;
    } views12CC;
    s32 unk12EC;
    char pad12F0[0x4];
    union {
        struct {
            s32 unk12F4[8];
        } view12F4_0;
        struct {
            s32 splitsB[8];
        } view12F4_1;
    } views12F4;
    char pad1314[0x20];
    union {
        struct {
            s32 unk1334;
        } view1334_0;
        struct {
            s32 f1334;
        } view1334_1;
    } views1334;
    union {
        struct {
            s32 unk1338;
        } view1338_0;
        struct {
            s32 f1338;
        } view1338_1;
    } views1338;
    union {
        struct {
            s32 unk133C;
        } view133C_0;
        struct {
            s32 laps;
        } view133C_1;
        struct {
            s32 lives;
        } view133C_2;
    } views133C;
    union {
        struct {
            s32 unk1340;
        } view1340_0;
        struct {
            s32 stalls;
        } view1340_1;
        struct {
            s32 timer;
        } view1340_2;
        struct {
            s32 respawnTimer;
        } view1340_3;
    } views1340;
    char pad1344[0x70];
    union {
        struct {
            struct StateInfo * unk13B4;
        } view13B4_0;
        struct {
            struct StateInfo * states;
        } view13B4_1;
        struct {
            struct Mode * unk13B4;
        } view13B4_2;
        struct {
            void * character;
        } view13B4_3;
        struct {
            s32 f13B4;
        } view13B4_4;
        struct {
            struct Shared_StateInfo * states;
        } view13B4_5;
    } views13B4;
    char pad13B8[0x10];
    union {
        struct {
            s32 unk13C8;
        } view13C8_0;
        struct {
            s32 w13C8;
        } view13C8_1;
        struct {
            s32 f13C8;
        } view13C8_2;
    } views13C8;
    char pad13CC[0x8];
    s32 unk13D4;
    union {
        struct {
            struct Held * unk13D8;
        } view13D8_0;
        struct {
            struct Held * held;
        } view13D8_1;
    } views13D8;
    char pad13DC[0xC];
    s32 messageIndex;
    char pad13EC[0x64];
    union {
        struct {
            s32 unk1450;
        } view1450_0;
        struct {
            s32 computer;
        } view1450_1;
        struct {
            s32 infinite;
        } view1450_2;
        struct {
            s32 unlimited;
        } view1450_3;
        struct {
            s32 uncounted;
        } view1450_4;
        struct {
            s32 f1450;
        } view1450_5;
    } views1450;
    union {
        struct {
            s32 unk1454;
        } view1454_0;
        struct {
            s32 f1454;
        } view1454_1;
    } views1454;
    char pad1458[0xC];
    union {
        struct {
            Vec3 unk1464;
        } view1464_0;
        struct {
            Vec3 aim;
        } view1464_1;
    } views1464;
    char pad1470[0x10];
    union {
        struct {
            Matrix unk1480[2];
        } view1480_0;
        struct {
            Matrix beams[2];
        } view1480_1;
    } views1480;
    union {
        struct {
            Matrix unk1500[2];
        } view1500_0;
        struct {
            Matrix lasers[2];
        } view1500_1;
    } views1500;
    union {
        struct {
            Matrix unk1580[2];
        } view1580_0;
        struct {
            Matrix dots[2];
        } view1580_1;
    } views1580;
    char pad1600[0xD4];
    union {
        struct {
            s32 unk16D4;
        } view16D4_0;
        struct {
            s32 f16D4;
        } view16D4_1;
    } views16D4;
    u16 unk16D8;
    char pad16DA[0x6];
    union {
        struct {
            struct SharedPlayer_func_8022A398_de * unk16E0;
        } view16E0_0;
        struct {
            struct SharedPlayer_func_8022A398_de * next;
        } view16E0_1;
        struct {
            struct SharedPlayer_func_8022A398_de * next;
        } view16E0_2;
    } views16E0;
};
struct Owner_func_804441F4_de;
struct Owner_func_804441F4_de {
    char pad[0x5D8];
    char *name;
};
struct Angles;
struct Angles {
    u16 heading;
    u16 pitch;
    u16 target;
    s16 steps;
};
struct Angles_func_8025AB94_de;
struct Angles_func_8025AB94_de {
    u16 heading;
    u16 pitch;
    u16 target;
    s16 steps;
    s16 delay;
    s16 pad0A;
};
struct Animator;
struct Animator {
    s32 unk0;
    s32 mode;
    f32 time;
    f32 *loop;
    f32 *script;
    f32 value;
    f32 valueFrom;
    f32 valueTo;
    f32 valueDuration;
    f32 alpha;
    f32 alphaFrom;
    f32 alphaTo;
    f32 colourDuration;
    f32 rgb[3];
    char pad40[4];
    f32 rgbFrom[3];
    char pad50[4];
    f32 rgbTo[3];
};
struct ArenaPageNode;
struct ArenaPageNode {
    char pad0[0x10];
    u8 alpha;
    char pad11[5];
    s16 unk_16;
    char pad18[2];
    s16 unk_1A;
};
struct ArenaPageScreen;
struct ArenaPageScreen {
    void *list;
    void *title;
    ArenaPageNode *header;
    s32 unk_C;
    char pad10[4];
    s32 unk_14;
    char pad18[4];
};
struct func_8024DED0_S2;
struct func_8024DED0_S2 {
    char pad0[0x4C];
    int unk4C;
};
struct Arg3;
struct Arg3 {
    s8 value;
    u8 pad[3];
};
struct Args;
struct Args {
    u32 words[10];
};
struct ResourceManagerState;
struct ResourceManagerState {
    s32 active;
    s32 count;
};
struct Attachment;
struct Attachment {
    char pad0[2];
    u16 type;
    char pad4[4];
    Triple offset;
    char pad14[0];
    ResourceManagerState params;
};
struct AttachmentTable;
struct AttachmentTable {
    s32 stride;
    u8 pad4[0x6A];
    u8 bytes[1];
};
struct AttackReleaseState;
struct AttackReleaseState {
    char pad0[0x16];
    s16 unk_16;
    s16 unk_18;
};
struct Entry_func_80405338_de;
struct Entry_func_80405338_de {
    char data[32];
};
struct Bank_func_8044D794_de;
struct Entry_func_80405338_de;
struct Bank_func_8044D794_de {
    s32 unk0;
    s32 count;
    struct Entry_func_80405338_de items[1];
};
struct Shape_typemap_165;
struct Shape_typemap_165 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
};
struct Binding;
struct Binding {
    int pad0;
    int type;
    char pad8[16];
    void *(*storage)(void);
};
struct BlinkFrame;
struct BlinkFrame {
    u8 pad0[3];
    u8 value;
};
struct Shape_func_80299E74_de_2;
struct Shape_func_80299E74_de_2 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Blinker;
struct Shape_func_80299E74_de_2;
struct Blinker {
    u8 pad0[0x44];
    s32 blinking;
    s32 count;
    BlinkFrame frames[5];
    s32 timers[5];
    s32 frame;
    struct Shape_func_80299E74_de_2 *sprite;
    s32 delay;
    u8 pad80[3];
    u8 base;
    s32 active;
};
struct Block12;
struct Block12 {
    u8 bytes[12];
};
struct func_80204468_S3;
struct func_80204468_S3 {
    char pad0[0x14];
    int unk14;
};
struct Box;
struct Box {
    Vec3 min;
    Vec3 max;
};
struct BreakableHitDescriptor;
struct BreakableHitDescriptor {
    char pad0[0x4];
    f32 unk_4;
    s8 unk_8;
};
struct BreakableHitState;
struct BreakableHitState {
    char pad0[0x40];
    f32 unk_40;
    char pad40[0x64 - 0x40 - sizeof(f32)];
    f32 unk_64;
    char pad64[0xCA - 0x64 - sizeof(f32)];
    s8 unk_CA;
    s8 unk_CB;
};
struct func_80255BEC_S1;
struct func_80255BEC_S1 {
    char pad0[0x8];
    void * unk8;
};
struct Buffers;
struct Buffers {
    s32 ready;
    func_80284AF4_G2 *list;
    func_80284AF4_G2 *work;
    func_80284AF4_G2 *frames[3];
    func_80284AF4_G2 *depth;
    func_80284AF4_G2 *zwork;
};
struct Bytes12;
struct Bytes12 {
    char bytes[12];
};
struct func_8021C9B4_S3;
struct func_8021C9B4_S3 {
    char pad0[0xC];
    s16 unkC;
};
struct Shape_typemap_13;
struct Shape_typemap_13 {
    int field_0;
    int field_4;
};
struct Shape_typemap_13;
struct Triple;
typedef void ( *SharedCallback14)(void *, void *, signed int, struct Triple, struct Shape_typemap_13);
struct CallbackEntry;
struct CallbackEntry {
    SharedCallback14 callback;
    s32 unused;
};
typedef void ( *PrimaryCallback)(signed int, signed int, void *);
typedef void ( *SecondaryCallback)(void *);
struct CallbackPair;
struct CallbackPair {
    PrimaryCallback primary;
    SecondaryCallback secondary;
};
typedef void ( *VoidCallback)(void);
struct CallbackState114;
struct CallbackState114 {
    char pad0[0x110];
    VoidCallback callback;
};
struct CallbackState290;
struct CallbackState290 {
    char pad0[0x74];
    char unk_74;
    char pad74[0x28C - 0x74 - sizeof(char)];
    SharedCallback10 callback;
};
struct CallbackState48;
struct CallbackState48 {
    char pad0[0x10];
    VoidCallback callback;
    char pad10[0x44 - 0x10 - sizeof(VoidCallback)];
    int unk_44;
};
struct CallbackState64;
struct CallbackState64 {
    int unk_0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk_4;
    char pad4[0xC - 0x4 - sizeof(int)];
    VoidCallback callback;
    char padC[0x38 - 0xC - sizeof(VoidCallback)];
    int unk_38;
    char pad38[0x3C - 0x38 - sizeof(int)];
    int unk_3C;
    char pad3C[0x60 - 0x3C - sizeof(int)];
    int unk_60;
};
struct CallbackStateC_2;
struct CallbackStateC_2 {
    char pad0[0x8];
    VoidCallback callback;
};
typedef void ( *SharedCallback8)(void *, void *);
struct CallbackStateC_3;
struct CallbackStateC_3 {
    char pad0[0x8];
    SharedCallback8 callback;
};
typedef void ( *ContextCallback)(void *);
struct CallbackStateEC;
struct CallbackStateEC {
    char pad0[0xE0];
    s32 unk_E0;
    char padE0[0xE4 - 0xE0 - sizeof(s32)];
    ContextCallback callback;
    char padE4[0xE8 - 0xE4 - sizeof(ContextCallback)];
    VoidCallback callback_E8;
};
struct Floats;
struct Floats {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
};
struct CameraRecord;
struct CameraRecord {
    Floats first;
    char tail[0x54 - sizeof(Floats)];
};
struct CameraBlock;
struct CameraBlock {
    char pad[0xF38];
    CameraRecord records[8];
};
struct Camera_func_8026851C_de;
struct Camera_func_8026851C_de {
    char pad0[0xE4];
    Vec3 position;
    Vec3 offset;
};
struct Camera_func_80401980_de;
struct Camera_func_80401980_de {
    char pad[0x28];
    f32 distance;
    f32 pitch;
    char pad30[8];
    Vec3 position;
};
struct Rec_func_8024C92C_de;
struct Rec_func_8024C92C_de {
    s32 x;
    s32 y;
    s32 z;
    s32 pad0;
    s32 pad1;
};
struct CaptionScreen;
struct Rec_func_8024C92C_de;
struct CaptionScreen {
    char pad0[156];
    struct Rec_func_8024C92C_de rows[2];
    char padC4[4];
    char text[192];
    s32 row;
    char pad18C[52];
    s32 visible;
};
struct ChannelRecord;
struct ChannelRecord {
    char bytes[0xB68];
};
struct Channel_func_80430118_de;
struct Channel_func_80430118_de {
    char pad[0x58];
    s32 state;
    s32 mode;
    char tail[0xBA0-0x60];
    s32 status;
    s32 counter;
};
struct Label;
struct Label {
    char pad0[0x38];
    char *text;
};
struct CharacterNextState;
struct CharacterNextState {
    char a[0x28];
    s32 unk_28;
    Label *unk_2C;
    char text[1];
};
struct CharacterScreenCell;
struct CharacterScreenCell {
    u16 id;
    u16 pad;
};
struct MatchSetupSprite;
struct MatchSetupSprite {
    char pad0[0x10];
    u8 alpha;
    char pad11[0x14 - 0x11];
    u16 x;
    char pad16[0x18 - 0x16];
    s16 width;
};
struct CharacterScreenEntry;
struct MatchSetupSprite;
struct CharacterScreenEntry {
    char pad0[0x4A8];
    s32 unk_4A8;
    s32 column;
    char pad4B0[0x4C8 - 0x4B0];
    struct MatchSetupSprite *item;
    s32 mode;
};
struct CharacterScreenRow;
struct CharacterScreenRow {
    s32 pad;
    f32 scale[4];
    f32 distance[4];
    Vec3 position[4];
    s32 light[4];
    char tail[12];
};
struct CharacterScreenEntry;
struct CharacterScreenScreen;
struct MatchSetupSprite;
struct CharacterScreenScreen {
    s32 window;
    s32 unk_4;
    struct CharacterScreenEntry entries[4];
    struct MatchSetupSprite *left;
    s32 leftStep;
    struct MatchSetupSprite *right;
    s32 rightStep;
    s32 unk_1358;
    s32 unk_135C;
    s32 unk_1360;
    struct MatchSetupSprite *unk_1364;
    s32 unk_1368;
};
struct SelectionSprite;
struct SelectionSprite {
    char p[12];
    short unkC;
    char pe[2];
    u8 unk10;
    char p11[3];
    short unk14;
    short unk16;
};
struct CharacterSelectionScreen;
struct SelectionSprite;
struct CharacterSelectionScreen {
    int unk0;
    int unk4;
    struct SelectionSprite *unk8;
    int unkC;
    int unk10;
    int unk14;
    char p18[0x1310];
    struct SelectionSprite *unk1328;
    u16 unk132C;
    u16 unk132E;
    struct SelectionSprite *unk1330;
    u16 unk1334;
    u16 unk1336;
    int unk1338;
    int unk133C;
    int unk1340;
    struct SelectionSprite *unk1344;
    struct SelectionSprite *unk1348;
    char p134c[3];
    u8 unk134F;
    int unk1350;
    int unk1354;
};
struct func_802B67B0_S2;
struct func_802B67B0_S2 {
    char pad0[0xE];
    s16 unkE;
};
struct Matrix_func_80213CF8_de;
struct Matrix_func_80213CF8_de {
    f32 m[4][4];
};
struct Font_func_80257360_de;
struct Font_func_80257360_de {
    char pad0[4];
    struct Font_func_80257360_de *next;
    char pad8[4];
    struct Font_func_80257360_de *child;
};
struct MenuRules;
struct MenuRules {
    char pad0[0x1C];
    s32 locked;
};
struct Context_func_80257360_de;
struct Font_func_80257360_de;
struct Context_func_80257360_de {
    char pad0[0x24];
    s32 field24;
    s32 field28;
    char *field2C;
    char pad30[0x7C - 0x30];
    struct Font_func_80257360_de *font;
    struct Font_func_80257360_de *resource;
    char list[0x110 - 0x84];
    MenuRules lock;
    char pad130[0x138 - 0x130];
    char view[0x1D64 - 0x138];
    char panel[0x1D6C - 0x1D64];
    s32 field1D6C;
    char pad1D70[0x1DA8 - 0x1D70];
    char frames[0x10];
    char menu[0x2B88 - 0x1DB8];
    s32 field2B88;
    s16 field2B8C;
    char pad2B8E[6];
    u8 field2B94;
    char pad2B95[3];
    s32 field2B98;
    s32 field2B9C;
    f32 red;
    f32 green;
    f32 blue;
    s32 field2BAC;
    s32 field2BB0;
    s32 field2BB4;
    s32 field2BB8;
    f32 alpha;
    char dialog[1];
};
struct Context_func_8025AB94_de;
struct Context_func_8025AB94_de {
    char pad0[0x84];
    char channels[0xDC - 0x84];
    s16 slots[16];
    char padFC[0x104 - 0xFC];
    s32 frame;
};
struct Controller_func_80259C5C_de;
struct Controller_func_80259C5C_de {
    char pad0[6];
    u16 flags;
    char pad8[2];
    s16 preset;
    char padC[4];
    s16 yaw;
};
struct Course;
struct Course {
    char pad0[0x28];
    u8 laps;
};
struct Node_func_8028F544_de;
struct Node_func_8028F544_de {
    struct Node_func_8028F544_de *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct Ctx_func_8028F544_de;
struct Node_func_8028F544_de;
struct Ctx_func_8028F544_de {
    char p0[0x2E4];
    struct Node_func_8028F544_de *unk2E4;
    struct Node_func_8028F544_de *unk2E8;
    s32 unk2EC;
    s32 unk2F0;
    char p1[0xC];
    s32 unk300;
};
struct D_800C7470_Pair;
struct D_800C7470_Pair {
    f32 first;
    f32 second;
};
struct Source110;
struct Source110 {
    char pad0[0x100];
    u32 flags;
    f32 limit;
    s16 current_state;
    s16 previous_state;
    s16 counter;
    s8 state_changed;
};
struct Dest;
struct Source110;
struct StateEntry;
struct Dest {
    u32 flags;
    char pad4[0x2C];
    StateEntry *entry;
    s8 state;
    s8 old_state;
    char pad36[2];
    u32 old_entry_flags;
    u32 entry_flags;
    char pad40[0x80];
    f32 scale;
    f32 entry_scale;
    s16 result;
    s8 state_result;
    u8 count;
};
typedef void *( *StateCallback)(struct Source110 *, struct Dest *);
struct StateEntry {
    char pad0[0x10];
    StateCallback callback;
    f32 scale;
    s32 threshold;
    u32 flags;
};
struct func_80205628_S3;
struct func_80205628_S3 {
    char pad0[0xC];
    s32 unkC;
};
struct Digits;
struct Digits {
    char c[4];
};
struct Draw;
struct Draw {
    char pad0[0xC];
    void *model;
};
struct EffectActorModel;
struct EffectActorModel {
    u32 flags;
    char pad4[0x10];
    s32 unk14;
};
struct EffectActor;
struct EffectActorModel;
struct EffectActor {
    u8 type;
    char pad1[7];
    Vec3 pos;
    char pad14[0x48];
    u32 flags;
    union {
        Matrix_func_80213CF8_de matrices[2];
        struct {
            char pad[0x54];
            Matrix_func_80213CF8_de *matrixArray;
            char padB8[0x18];
            void *owner;
        } link;
    } u60;
    char padE0[0x20];
    u32 unk100;
    char pad104[0x14];
    struct EffectActorModel *model;
    char pad11C[0x38];
    f32 unk154;
    f32 unk158;
    char pad15C[0x18];
    Vec3 unk174;
    char pad180[0x50];
    s8 unk1D0;
    char pad1D1[7];
    s32 unk1D8;
};
struct EffectColorParams;
struct EffectColorParams {
    u8 rgb0[3];
    u8 rgb1[3];
    char pad6[6];
    s8 hueRange;
    s8 unkD;
    s8 unkE;
};
struct EffectModel;
struct EffectModel {
    char pad0[0x94];
    u16 unk94;
};
struct EffectMotion;
struct EffectMotion {
    CharacterScreenCell unk0;
    CharacterScreenCell speed;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
};
struct EffectParams;
struct EffectParams {
    s16 lifeBase;
    s16 lifeRange;
    s8 chance;
    s8 unk5;
    s8 countBase;
    s8 countRange;
    s8 listIndex;
    char pad9[2];
    s8 unkB;
    char padC;
    s8 unkD;
    s8 unkE;
};
struct EffectColorParams;
struct EffectEntry;
struct EffectModel;
struct EffectMotion;
struct EffectParams;
struct EffectEntry {
    u32 flags;
    s16 unk4;
    s8 unk6;
    s8 unk7;
    s8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    s16 sound;
    char padE[4];
    u8 playerMask;
    char pad13;
    s32 unk14;
    struct EffectModel *model;
    CharacterScreenCell *offset;
    CharacterScreenCell *unk20;
    CharacterScreenCell *unk24;
    CharacterScreenCell *direction;
    CharacterScreenCell *unk2C;
    struct EffectMotion *motion;
    struct EffectColorParams *color;
    struct EffectParams *params;
};
struct EffectBlock;
struct EffectBlock {
    s32 unk0;
    s32 count;
    EffectEntry entries[1];
};
struct EffectRender;
struct EffectRender {
    u32 flags;
    s8 unk4;
    s8 unk5;
    s8 unk6;
    char pad7;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
};
struct EffectActor;
struct EffectEntry;
struct EffectList;
struct Effect_func_802800C0_de;
struct EffectList {
    struct Effect_func_802800C0_de *head;
    struct Effect_func_802800C0_de *tail;
    char pad8[0xC];
};
struct Effect_func_802800C0_de {
    char pad0[4];
    u16 kind;
    char pad6[2];
    Vec3 pos;
    s32 unk14;
    char pad18[4];
    Vec3 velocity;
    char pad28[0x28];
    Vec3 unk50;
    u32 flags;
    char pad60[0xB0];
    s32 unk110;
    s32 unk114;
    struct EffectEntry *entry;
    u32 unk11C;
    char pad120[4];
    void *ownerId;
    struct EffectActor *source;
    struct EffectActor *owner;
    s32 *refCount;
    s32 unk134;
    s32 unk138;
    s32 unk13C;
    f32 unk140;
    f32 unk144;
    f32 unk148;
    s16 life;
    u8 unk14E;
    s8 unk14F;
    f32 unk150[6];
    Vec3 unk168;
    Vec3 direction;
    f32 unk180[6];
    f32 alpha;
    f32 unk19C[6];
    EffectRender render;
    s8 mode;
    u8 unk1D1;
    u8 rgb0[3];
    u8 rgb1[3];
    u8 unk1D8;
    u8 unk1D9;
    char pad1DA[6];
    f32 unk1E0;
    struct EffectList *list;
    char pad1E8[4];
    struct Effect_func_802800C0_de *next;
    s32 unk1F0;
    struct Effect_func_802800C0_de *groupNext;
};
struct EffectSystem;
struct Effect_func_802800C0_de;
struct EffectSystem {
    char pad0[0xFC00];
    EffectList free;
    EffectList groups;
    EffectList lists[3];
    s32 resource;
    struct Effect_func_802800C0_de *last;
};
struct EffectActor;
struct EffectTarget;
struct EffectTarget {
    struct EffectActor *actor;
    char pad4[4];
    Vec3 pos;
    s32 matrixIndex;
    char pad18[0x66];
    u8 unk7E;
    char pad7F[0x89];
};
struct Effect_func_8026851C_de;
struct Effect_func_8026851C_de {
    char pad0[0x6C];
    f32 scale;
    char pad70[0x1D8 - 0x70];
    s32 target;
    char pad1DC[0x2A0 - 0x1DC];
    Vec3 offset;
    char pad2AC[0x11E8 - 0x2AC];
    struct Effect_func_8026851C_de *child;
};
struct Element_func_8041200C_de;
struct Element_func_8041200C_de {
    char unk_0[1180];
};
struct Ent;
struct Ent {
    u32 kind;
    char pad4[0x24];
    f32 unk28;
    char pad2C[4];
    f32 unk30;
    f32 unk34;
    char pad38[0x18];
    f32 unk50;
    f32 unk54;
    f32 unk58;
    char pad5C[0x90];
    f32 unkEC;
    f32 unkF0;
};
struct Entity_func_80290424_de;
struct Entity_func_80290424_de {
    char p0[8];
    f32 unk8;
    f32 unkC;
    f32 unk10;
    int p14;
    ResourceManagerState *unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    char p28[0x154];
    f32 unk17C;
    f32 unk180;
    f32 unk184;
    f32 unk188;
    f32 unk18C;
    f32 unk190;
    char p194[0x38];
    f32 unk1CC;
};
struct Entity_func_8041C7F4_de;
struct Entity_func_8041C7F4_de {
    char p0[8];
    Vec3 pos;
    char p14[0x58];
    f32 scale;
    char p70[0x9e];
    signed char flag;
    char p10f[0x31];
    Box bounds;
    Box oldbounds;
    char p170[0x54];
    Vec3 saved;
};
struct Shape_func_802764D4_de_2;
struct Shape_func_802764D4_de_2 {
    int field_0;
    int field_4;
};
struct Entry_func_8023B9C0_eu;
struct Entry_func_8023B9C0_eu {
    u16 id;
    u8 team;
    u8 slot;
};
struct Entry_func_80250E70_de;
struct Entry_func_80250E70_de {
    char pad[12];
    s32 value;
    char tail[24];
};
struct Entry_func_80298ECC_de;
struct Entry_func_80298ECC_de {
    void *object;
    s32 field4;
    s32 field8;
    s32 fieldC;
    s32 field10;
    s32 field14;
    s32 field18;
};
struct Entry_func_804279B8_de;
struct Entry_func_804279B8_de {
    char pad[0x80];
    s8 kind;
    char tail[0x15];
};
struct func_80209B64_S4;
struct func_80209B64_S4 {
    char pad0[0x5D8];
    void * unk5D8;
};
struct Entry_func_8044D794_de;
struct Entry_func_8044D794_de {
    char pad0[4];
    struct Entry_func_8044D794_de *next;
    s32 handle;
};
struct Extra;
struct Extra {
    s32 id;
    f32 scale;
};
struct FadeObjectState;
struct FadeObjectState {
    u8 reserved[0x40];
    f32 progress;
};
struct FadeParameters;
struct FadeParameters {
    u32 mode;
    f32 scale;
};
struct FftTables;
struct FftTables {
    f32 *sines;
    f32 *cosines;
    s32 *order;
    s32 size;
};
struct FieldRow;
struct FieldRow {
    s32 value;
    char pad[8];
};
struct Field_f32_10;
struct Field_f32_10 {
    char pad[0x10];
    f32 value;
};
struct Field_u16_14;
struct Field_u16_14 {
    char pad[0x14];
    u16 value;
};
struct Field_void_4;
struct Field_void_4 {
    char pad[0x4];
    void * value;
};
struct FloatState14;
struct FloatState14 {
    char pad0[0x8];
    f32 unk_8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk_10;
};
struct FloatState144;
struct FloatState144 {
    unsigned char padding[320];
    f32 unk_140;
};
struct FloatState178;
struct FloatState178 {
    unsigned char padding[372];
    f32 unk_174;
};
struct FloatState180;
struct FloatState180 {
    unsigned char padding[380];
    f32 unk_17C;
};
struct FloatState184;
struct FloatState184 {
    unsigned char padding[384];
    f32 unk_180;
};
struct FloatState188;
struct FloatState188 {
    unsigned char padding[388];
    f32 unk_184;
};
struct FloatState18C;
struct FloatState18C {
    unsigned char padding[392];
    f32 unk_188;
};
struct FloatState190;
struct FloatState190 {
    unsigned char padding[396];
    f32 unk_18C;
};
struct FloatState194;
struct FloatState194 {
    unsigned char padding[400];
    f32 unk_190;
};
struct FloatState198;
struct FloatState198 {
    unsigned char padding[404];
    f32 unk_194;
};
struct FloatState1A0;
struct FloatState1A0 {
    unsigned char padding[412];
    f32 unk_19C;
};
struct FloatState1A4;
struct FloatState1A4 {
    unsigned char padding[416];
    f32 unk_1A0;
};
struct FloatState1A8;
struct FloatState1A8 {
    unsigned char padding[420];
    f32 unk_1A4;
};
struct FloatState1AC;
struct FloatState1AC {
    unsigned char padding[424];
    f32 unk_1A8;
};
struct FloatState1B0;
struct FloatState1B0 {
    unsigned char padding[428];
    f32 unk_1AC;
};
struct FloatState1B4;
struct FloatState1B4 {
    unsigned char padding[432];
    f32 unk_1B0;
};
struct FloatState4C;
struct FloatState4C {
    char pad0[0x48];
    f32 unk_48;
};
struct FontStyle;
struct FontStyle {
    char pad0[0xA0];
    s32 envR;
    s32 envG;
    s32 envB;
    s32 primR;
    s32 primG;
    s32 primB;
    f32 width;
    f32 height;
};
struct func_80205314_S2;
struct func_80205314_S2 {
    char pad0[0x2C];
    int unk2C;
};
struct FrameSequence;
struct func_80205314_S2;
struct FrameSequence {
    char pad0[0x44];
    struct func_80205314_S2 *target;
    s32 *frames;
    s32 frame;
    s32 count;
    s32 elapsed;
    s32 duration;
    s32 flags;
    s32 loops;
};
struct Slot_func_8044D794_de;
struct Slot_func_8044D794_de {
    s32 item;
    char pad4[0x34];
};
struct Frame_func_8044D794_de;
struct Frame_func_8044D794_de {
    s32 unk0;
    s32 count;
    char pad8[0xC];
    Slot_func_8044D794_de slots[1];
};
struct Rules84;
struct Rules84 {
    char pad0[0x14];
    f32 timeLeft;
    s32 scoreLimit;
    s32 unk_1C;
    char pad20[0x24 - 0x20];
    s32 teamGame;
    s32 unk_28;
    s32 teamScore[5];
    s32 teamPoints[5];
    s32 fragTag;
    s32 tagLimit;
    char pad5C[0x6C - 0x5C];
    s32 roundLength;
    char pad70[0x78 - 0x70];
    s32 unk_78;
    s32 pointTarget;
    s32 unk_80;
};
struct SettingsE;
struct SettingsE {
    char pad0[0xD];
    u8 players;
};
struct Game1308;
struct Game1308 {
    char pad0[0xCAC];
    SettingsE settings;
    char padCBA[0x1284 - 0xCBA];
    Rules84 rules;
};
struct RulesAC;
struct RulesAC {
    char pad0[0x18];
    s32 scoreLimit;
    char pad1C[0x24 - 0x1C];
    s32 teamGame;
    char pad28[0x2C - 0x28];
    s32 teamScore[5];
    char pad40[0xA8 - 0x40];
    s32 humanWon;
};
struct RosterEntry;
struct RosterEntry {
    char pad0[0x78];
    u8 active;
    char pad79[0x92 - 0x79];
    u8 team;
    char pad93[0x96 - 0x93];
};
struct Settings580;
struct Settings580 {
    char pad0[0xD];
    u8 trialKind;
    char padE[0xD0 - 0xE];
    RosterEntry roster[8];
};
struct Game1330;
struct Game1330 {
    char pad0[0xCAC];
    Settings580 settings;
    char pad122C[0x1284 - 0x122C];
    RulesAC rules;
};
struct RulesAC_2;
struct RulesAC_2 {
    char pad0[0x40];
    s32 teamPoints[5];
    char pad54[0x7C - 0x54];
    s32 pointTarget;
    char pad80[0xA8 - 0x80];
    s32 humanWon;
};
struct Game1330_2;
struct Game1330_2 {
    char pad0[0xCAC];
    Settings580 settings;
    char pad122C[0x1284 - 0x122C];
    RulesAC_2 rules;
};
struct GameLocalizationState;
struct GameLocalizationState {
    u8 reserved[0x581];
    u8 language;
};
struct MenuSettings;
struct MenuSettings {
    u8 padding[0x581];
    u8 language;
};
struct Game_func_8041D960_de;
struct Game_func_8041D960_de {
    char pad0[0x17C1];
    u8 language;
};
struct Game_func_80422960_de;
struct Game_func_80422960_de {
    char pad0[0x3C];
    s32 next;
    char pad40[0xD8 - 0x40];
    s32 selection;
};
struct Settings20;
struct Settings20 {
    s32 flags;
    char pad4[0xD - 0x4];
    u8 trialKind;
    char padE[0x1D - 0xE];
    u8 replay;
};
struct func_8025BB9C_S1;
struct func_8025BB9C_S1 {
    char pad0[0xA8];
    int unkA8;
};
struct Match;
struct Match {
    Settings20 settings;
    char padSettings[0x5D8 - sizeof(Settings20)];
    func_8025BB9C_S1 rules;
};
struct Globals;
struct Globals {
    char pad0[0x1288];
    Match match;
};
struct Object_func_804220A8_de;
struct Object_func_804220A8_de {
    char pad0[0x6C];
    float width;
    float height;
    char pad74[0x228];
    float a;
    float b;
    float c;
    float d;
};
struct Globals_func_804220A8_de;
struct Object_func_804220A8_de;
struct Globals_func_804220A8_de {
    struct Object_func_804220A8_de *object;
    char pad4[0x88];
    float width;
    float height;
};
struct Piece;
struct Piece {
    char pad0[0x14];
    s32 tag;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
};
struct Group_func_8044D794_de;
struct Group_func_8044D794_de {
    s32 unk0;
    s32 count;
    Piece pieces[1];
};
struct func_80229BE0_S2;
struct func_80229BE0_S2 {
    char pad0[0x80];
    s8 unk80;
};
struct HeadRecord;
struct HeadRecord {
    void *head;
    char rest[0x10];
};
struct Header44;
struct Header44 {
    s32 words[11];
};
struct Header_func_8025B5F0_de;
struct Header_func_8025B5F0_de {
    char pad[0x102];
    s16 local;
};
struct Record_func_8043E2D8_de;
struct Record_func_8043E2D8_de {
    char pad[0x83];
    u8 value;
};
struct Owner_func_8043E2D8_de;
struct Record_func_8043E2D8_de;
struct Owner_func_8043E2D8_de {
    char pad[0x5D8];
    struct Record_func_8043E2D8_de *record;
};
struct Holder_func_8043E2D8_de;
struct Owner_func_8043E2D8_de;
struct func_80242278_S1;
struct Holder_func_8043E2D8_de {
    char pad[0x1C];
    struct Owner_func_8043E2D8_de *owner;
    struct func_80242278_S1 *mode;
};
struct Effect_func_8026851C_de;
struct Host_func_8026851C_de;
struct Host_func_8026851C_de {
    unsigned char type;
    char pad1[0x100 - 1];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    struct Effect_func_8026851C_de *partner;
};
struct HudCue;
struct HudCue {
    s32 handle;
    s32 ambient;
    s32 cue0;
    s32 cue1;
    char pad10[4];
    s32 unk14;
    s32 state;
};
struct HudStatusShared_MatchRules;
struct HudStatusShared_MatchRules {
    char pad0[0x20];
    s32 hideHud;
    s32 teams;
    char pad28[0x4];
    s32 teamScores[5];
    s32 squadScores[5];
    s32 countRule;
    char pad58[0x20];
    s32 squads;
    char pad7C[0x1C];
    s32 markers;
};
struct ListScreenRecord;
struct ListScreenRecord {
    char pad0[0x78];
    u8 active;
    char pad79[0x18];
    u8 out;
    char pad92[0x4];
};
struct HudStatusShared_Settings;
struct HudStatusShared_Settings {
    s32 flags;
    s32 selection;
    char pad8[0x5];
    u8 trialKind;
    char padE[0x8];
    u8 hudFade;
    char pad17[0x6];
    u8 hudShown;
    char pad1E[0xB2];
    ListScreenRecord roster[8];
    char pad580[0x1];
    u8 language;
    char pad582[0x32];
    s32 state;
    char pad5B8[0x20];
    HudStatusShared_MatchRules rules;
    char pad674[0xC];
    s32 humanWon;
};
struct ImageHeader;
struct ImageHeader {
    char pad0[2];
    unsigned char widthShift;
    unsigned char heightShift;
    char pad4[0x1D - 4];
    unsigned char scale;
    char pad1E[0x21 - 0x1E];
    unsigned char width;
    unsigned char height;
    unsigned char format;
    char data[1];
};
struct Image;
struct ImageHeader;
struct Image {
    char pad0[8];
    struct ImageHeader *header;
    s32 fieldC;
    s32 field10;
    char pad14[0x3C - 0x14];
    s32 flags;
};
struct Init;
struct Init {
    s32 id;
    Vec3 position;
    f32 radius;
    u16 kind;
    u16 index;
    u16 flags;
    u16 extra;
    u16 model;
    s8 angle;
};
struct InitParams_func_802B03C4_de;
struct InitParams_func_802B03C4_de {
    s32 count38;
    s32 count1C;
    u8 kind;
    u8 flags;
    u8 pad0A[2];
    s32 context;
    s32 value10;
    s32 value14;
    s32 value18;
};
struct IntegerState12F8;
struct IntegerState12F8 {
    unsigned char padding_0[4812];
    s32 unk_12CC;
    unsigned char padding_12D0[36];
    s32 unk_12F4;
};
struct IntegerState13C;
struct IntegerState13C {
    unsigned char padding[312];
    s32 unk_138;
};
struct IntegerState19C;
struct IntegerState19C {
    unsigned char padding[408];
    s32 unk_198;
};
struct IntegerState1A8;
struct IntegerState1A8 {
    unsigned char padding[420];
    s32 unk_1A4;
};
struct IntegerState1C4;
struct IntegerState1C4 {
    unsigned char padding[448];
    s32 unk_1C0;
};
struct IntegerState34_2;
struct IntegerState34_2 {
    unsigned char padding[48];
    s32 unk_30;
};
struct IntegerState4C;
struct IntegerState4C {
    char pad0[0x48];
    int unk_48;
};
struct IntegerStateDC;
struct IntegerStateDC {
    char pad0[0x4];
    s32 unk_4;
    char pad4[0xD8 - 0x4 - sizeof(s32)];
    s32 unk_D8;
};
struct ItemDef;
struct ItemDef {
    char pad[0x20];
    s16 type;
    s16 index;
};
struct Item_func_8042B4D4_de;
struct Item_func_8042B4D4_de {
    char pad[0x10];
    u8 alpha;
    char pad11[0x14 - 0x11];
    s16 x;
};
struct func_8028469C_S2;
struct func_8028469C_S2 {
    char pad0[0x38];
    void * unk38;
};
struct Item_func_8043C9AC_de;
struct Item_func_8043C9AC_de {
    char pad0[0x14];
    s32 x;
    char pad18[8];
    s32 y;
};
struct Binding;
struct Item_func_80442FB0_de;
struct Item_func_80442FB0_de {
    char pad[20];
    struct Binding *binding;
};
struct JoinRequestItem;
struct JoinRequestItem {
    char pad[0x10];
    u8 alpha;
    char pad11[0x2C - 0x11];
    s32 image;
    char pad30[0x38 - 0x30];
    char *text;
};
struct JoinRequestScreen;
struct JoinRequestScreen {
    char pad0[0x8];
    void *rows[3];
    char pad14[0x1C - 0x14];
    s32 last;
};
struct Key;
struct Key {
    char pad0[0x14];
};
struct Key_func_8040170C_de;
struct Key_func_8040170C_de {
    char pad0[0xC];
    f32 value;
    f32 time;
};
struct LevelSpawnLevelObject;
struct LevelSpawnLevelObject {
    char pad0[8];
    Vec3 pos;
    char pad14[4];
    s32 *kind;
    char pad1C[0x1D8 - 0x1C];
    struct LevelSpawnLevelObject *target;
    char pad1DC[0x2E8 - 0x1DC];
};
struct LevelSpawnLevelBlock;
struct LevelSpawnLevelBlock {
    s32 size;
    s32 count;
    LevelSpawnLevelObject objects[1];
};
struct LevelSpawnLevelRecord;
struct LevelSpawnLevelRecord {
    s32 pad0;
    Vec3 pos;
    char pad10[0x20 - 0x10];
    u16 zone;
    u16 id;
    s16 angle;
    char pad26[0x28 - 0x26];
};
struct LevelSpawnLevelNode;
struct LevelSpawnLevelNode {
    s32 pad0;
    s32 count;
    LevelSpawnLevelRecord records[1];
};
struct LevelSpawnLevelPlayer;
struct LevelSpawnLevelPlayer {
    char pad0[0x1450];
    s32 isBot;
    char pad1454[0x16E8 - 0x1454];
};
struct LevelSpawnLevelSlot;
struct LevelSpawnLevelSlot {
    char pad0[0x80];
    s8 kind;
    char pad81[0x96 - 0x81];
};
struct LevelSpawnLevelSpawn;
struct LevelSpawnLevelSpawn {
    Vec3 pos;
    f32 angle;
    u16 pad10;
    u16 zone;
};
struct LevelSpawnLevelWorld;
struct LevelSpawnLevelWorld {
    char pad0[0x138];
    LevelSpawnLevelObject *objects;
    s32 placed;
    s32 count;
    char pad144[0xF58 - 0x144];
    s32 fF58;
    char padF5C[0x1B40C - 0xF5C];
    s32 group;
    char pad1B410[0x1B41C - 0x1B410];
    s32 haveSpawns;
    char spawnBuf[0x1B434 - 0x1B420];
    s32 spawnSet;
    char pad1B438[0x1B614 - 0x1B438];
    s32 f1B614;
    s32 f1B618;
    s32 f1B61C;
};
struct Level_func_8044B7C0_de;
struct Level_func_8044B7C0_de {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    char pad30[4];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    char pad40[48];
    s32 unk70;
    char pad74[4];
    s32 unk78;
    char pad7C[4];
    void *unk80;
    void *unk84;
    s32 unk88;
    char pad8C[4];
    s32 unk90;
    s32 unk94;
    s32 unk98;
    s32 unk9C;
    s32 unkA0;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
    void *unkB4;
    char padB8[56];
    s32 unkF0;
    s32 unkF4;
    s32 unkF8;
    s32 unkFC;
    char pad100[12];
    void *unk10C;
    char pad110[16];
    s32 unk120;
    s32 unk124;
    char pad128[111072];
    s32 unk1B308;
    char pad1B30C[16];
    s32 unk1B31C;
    char pad1B320[236];
    s32 unk1B40C;
    char pad1B410[516];
    s32 unk1B614;
    s32 unk1B618;
    s32 unk1B61C;
    char pad1B620[64];
    s32 unk1B660;
    char pad1B664[64];
    s32 unk1B6A4;
    char pad1B6A8[4];
    s32 unk1B6AC;
};
struct Params_func_80283A80_de;
struct Params_func_80283A80_de {
    char pad[16];
    u16 accel;
    u16 limit;
};
struct Link_func_80283A80_de;
struct Params_func_80283A80_de;
struct Link_func_80283A80_de {
    char pad[48];
    struct Params_func_80283A80_de *params;
};
struct ListOptionsScreen;
struct ListOptionsScreen {
    void *widget;
    s32 unk_4;
    void *panelA;
    void *panelB;
    void *listB;
    void *listA;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    void *window;
};
struct ListScreenItem;
struct ListScreenItem {
    char pad0[0x10];
    u8 alpha;
    char pad11[3];
    s16 x;
    char pad16[2];
    s16 width;
};
struct ListScreenModel;
struct ListScreenModel {
    char data[0xC0];
};
struct ListScreenScreen;
struct ListScreenScreen {
    s32 window;
    char pad4[0x8 - 0x4];
    ListScreenModel models[5];
    s32 list;
    ListScreenItem *left;
    s32 leftCount;
    ListScreenItem *right;
    s32 rightCount;
    s32 unk_3DC;
    s32 unk_3E0;
    s32 text3E4;
    ListScreenItem *unk_3E8;
    ListScreenItem *label;
    ListScreenItem *unk_3F0;
    char text[0x434 - 0x3F4];
    s32 category;
    s32 selection;
    ListScreenItem *item;
    ListScreenItem *unk_440;
    ListScreenItem *unk_444;
    ListScreenItem *unk_448;
    ListScreenItem *unk_44C;
    ListScreenItem *unk_450;
    ListScreenItem *unk_454;
    ListScreenItem *unk_458;
    s32 unk_45C;
    s32 unk_460;
    s32 unk_464;
    s32 unk_468;
    s32 unk_46C;
};
struct Slot_func_8042DC04_de;
struct Slot_func_8042DC04_de {
    char pad0[0x78];
    u8 active;
    char pad79[6];
    u8 index;
    char pad80[0x16];
};
struct MainMenuChoiceContext;
struct Slot_func_8042DC04_de;
struct MainMenuChoiceContext {
    char pad0[0xD0];
    struct Slot_func_8042DC04_de unk_D0;
};
typedef signed int ( *SharedCallback16)(signed int, signed int, signed int, signed int);
struct Manager52C;
struct Manager52C {
    SharedCallback16 callback;
    s32 index;
    s32 lowIndex;
    Entry_func_80298ECC_de *entries;
    char pad10[0x510];
    s32 dispatching;
    s32 pad524;
    s32 blockedValue;
};
typedef void ( *SharedCallback15)(signed int, signed int, signed int, signed int);
struct Manager540;
struct Manager540 {
    SharedCallback15 callback;
    s32 index;
    s32 lowIndex;
    void *entries;
    char pad10[0x520];
    s32 field530;
    char pad534[8];
    void *field53C;
};
struct MatchMenuObjects;
struct MatchMenuObjects {
    char pad0[0x17F0];
    s32 transition;
};
struct MatchRewardsStatus;
struct MatchRewardsStatus {
    s16 wins;
    s16 losses;
    s16 score;
    char pad6[0xA - 0x6];
    s16 kills;
    char padC[0x78 - 0xC];
    u8 active;
    char pad79[0x91 - 0x79];
    u8 out;
    char pad92[0x96 - 0x92];
};
struct func_8020D9C0_S1;
struct func_8020D9C0_S1 {
    char pad0[0x14];
    f32 unk14;
};
struct MatchRewardsGlobals;
struct MatchRewardsGlobals {
    char pad0[0x24];
    s8 laps;
    s8 players;
    char pad26[0xD0 - 0x26];
    MatchRewardsStatus status[8];
    char pad580[0x5D8 - 0x580];
    func_8020D9C0_S1 rules;
};
struct MatchRewardsPlayRecord;
struct MatchRewardsPlayRecord {
    u8 plays[0x24];
    char pad24[0x190 - 0x24];
};
struct MatchRewardsRecord;
struct MatchRewardsRecord {
    char pad0[0x26];
    u8 plays[0x24];
    u8 unlocks[0x6C - 0x4A];
    s32 total1;
    char pad70[0x74 - 0x70];
    s32 total2;
    char pad78[0x190 - 0x78];
};
struct MatchRewardsUnlockRecord;
struct MatchRewardsUnlockRecord {
    u8 bits[0x190];
};
struct MatchSetupName;
struct MatchSetupName {
    char pad0[0x28];
    u8 code[0x14];
    u8 text[0xA];
};
struct MatchSetupRecord;
struct MatchSetupRecord {
    char pad0[0x190];
};
struct MatchSetupPlayer;
struct MatchSetupPlayer {
    s32 state;
    s32 sub;
    s32 next;
    s32 menu;
    MatchSetupSprite *sprite;
    s32 back;
    MatchSetupRecord records[4];
    MatchSetupName names[16];
    u8 codes[3][0xA];
    char padAD6[0xAD8 - 0xAD6];
    s32 slot;
    char padADC[0xAEC - 0xADC];
    s32 choice;
    s32 used[4];
    s32 notes[4];
    char padB10[0xB28 - 0xB10];
    s32 port;
    s32 record;
    s32 host;
    char padB34[0xB64 - 0xB34];
    s32 profile;
};
struct MatchSetupBlock;
struct MatchSetupBlock {
    s32 screen;
    s32 menu;
    char setup[0x24 - 0x8];
    s32 music;
    MatchSetupSprite *title;
    s32 counts[4];
    MatchSetupSprite *top;
    s32 topStep;
    MatchSetupSprite *bottom;
    s32 bottomStep;
    s32 ready;
    s32 slots;
    s32 mode;
    MatchSetupPlayer players[4];
    Triple links[4];
    char pad2E28[0x3470 - 0x2E28];
    s32 focus;
};
struct MatchSetupProfile;
struct MatchSetupProfile {
    char pad0[0xD];
    s8 owner;
    s8 dropped;
    char padF[0x190 - 0xF];
};
struct Material_func_80245D30_de;
struct Material_func_80245D30_de {
    char pad0[0x52];
    u16 flags;
    char pad54[9];
    u8 strength;
    char pad5e[1];
    s8 x;
    s8 y;
    s8 z;
};
struct MenuGameRoot;
struct MenuGameRoot {
    u8 prefix[0x48];
    Game_func_8041D960_de game;
};
struct MenuPanelRoot;
struct MenuPanelRoot {
    char pad0[0xE0];
    s32 window;
};
struct Shared_HudView;
struct Shared_HudView {
    char pad0[0x24];
    s32 flags;
    char pad28[0x274];
    f32 width;
    f32 height;
    f32 x;
    f32 y;
};
struct MenuState;
struct MenuState {
    u8 enabled;
    char pad1[0x5AF - 1];
    u8 active[4];
};
struct Menu_func_802185D0_de;
struct Menu_func_802185D0_de {
    s32 active;
    s32 pad4;
    f32 open;
    char padC[0x14 - 0xC];
    f32 phase;
    char pad18[0x6C - 0x18];
    s32 cursor;
};
struct Menu_func_80409144_de;
struct Menu_func_80409144_de {
    char pad0[0x1C];
    void *player;
    func_80242278_S1 *slot;
    char *prompt;
};
struct Node_func_8041D134_de;
struct Node_func_8041D134_de {
    char pad0[0x10];
    u8 style;
    char pad11[0x14 - 0x11];
    u16 x;
    u16 y;
};
struct Menu_func_8041D134_de;
struct Node_func_8041D134_de;
struct Menu_func_8041D134_de {
    char pad0[4];
    void *handle;
    char pad8[0xC8 - 8];
    struct Node_func_8041D134_de *left;
    char padCC[2];
    u16 leftStep;
    struct Node_func_8041D134_de *right;
    char padD4[2];
    u16 rightStep;
    s32 state;
    s32 timer;
    s32 fade;
    struct Node_func_8041D134_de *groupA;
    struct Node_func_8041D134_de *cursor;
    struct Node_func_8041D134_de *focus;
    char padF0[4];
    struct Node_func_8041D134_de *groupB;
    s32 styleStep;
    s32 styleValue;
    struct Node_func_8041D134_de *groupC;
    char pad104[3];
    u8 alphaStep;
    s32 clock;
};
struct Node_func_8041D4E0_de;
struct Node_func_8041D4E0_de {
    u8 pad0[0xC];
    s16 unkC;
};
struct Menu_func_8041D4E0_de;
struct Node_func_8041D4E0_de;
struct Menu_func_8041D4E0_de {
    u8 pad0[0xEC];
    struct Node_func_8041D4E0_de *unkEC;
    u8 pad_F0[0x10C - 0xF0];
    s32 unk10C;
};
struct Variable;
struct Variable {
    int unk0;
    unsigned int unk4;
    float unk8;
    float unkC;
    float unk10;
    int unk14;
    void *(*unk18)();
};
struct Menu_func_8043F294_de;
struct Variable;
struct Menu_func_8043F294_de {
    char pad[0x14];
    struct Variable *unk14;
};
struct Target802131E0;
struct Target802131E0 {
    u8 pad0[0x220];
    s32 unk220;
    u8 pad224[0x2FC - 0x224];
    s32 unk2FC;
    u8 pad300[0x320 - 0x300];
    s32 unk320;
};
struct Mid802131E0;
struct Target802131E0;
struct Mid802131E0 {
    u8 pad0[0x1454];
    struct Target802131E0 *unk1454;
};
struct ModelPreviewItem;
struct ModelPreviewItem {
    char pad[0x10];
    u8 alpha;
    char pad11[0x38 - 0x11];
    s32 image;
};
struct func_80255D10_S1;
struct func_80255D10_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};
union ModelPreviewScreen;
union ModelPreviewScreen {
    struct { char pad0[0x20]; void *window; char pad24[0x78]; func_80255D10_S1 rows[10]; char padAfter[0x188 - 0x9C - 10 * sizeof(func_80255D10_S1)]; s32 selected; };
    struct { char padC8[0xC8]; char modelWorkspace; };
};
struct ModelPreviewScreen330;
struct ModelPreviewScreen330 {
    char pad[0x20];
    char view[0xE0 - 0x20];
    void *window;
    char padE4[0x32C - 0xE4];
    s32 model;
};
struct Motion;
struct Motion {
    char pad0[0x14];
    f32 heading;
    char pad18[0x48 - 0x18];
    f32 rate1;
    f32 rate2;
};
struct Motion_func_8025AB94_de;
struct Motion_func_8025AB94_de {
    char pad0[0x14];
    f32 heading;
    char pad18[0x24 - 0x18];
    f32 factor;
};
struct Mover;
struct Mover {
    s32 active;
    s32 *script;
    s32 state;
    s32 wait;
    f32 x;
    f32 y;
    f32 targetX;
    f32 targetY;
    f32 velX;
    f32 velY;
    f32 accelX;
    f32 accelY;
    f32 rate;
};
struct Mtx;
struct Mtx {
    Vec3 right;
    f32 m03;
    Vec3 up;
    f32 m13;
    Vec3 forward;
    f32 m23;
    f32 m30;
    f32 m31;
    f32 m32;
    f32 m33;
};
struct func_80204EA8_S1;
struct func_80204EA8_S1 {
    char pad0[0x8];
    Triple unk8;
};
struct NavigationEndpoint;
struct NavigationEndpoint {
    char pad0[0x40];
    func_80204EA8_S1 * unk_40;
    Triple pos;
};
union NavigationFlagWord;
union NavigationFlagWord {
    s32 v0;
    u16 v1;
};
struct NavigationNode;
struct NavigationNode {
    Triple pos;
    NavigationFlagWord unk_C;
};
struct Body;
struct Character;
struct Controller;
struct Controls;
struct Ctrl;
struct Held;
struct Mode;
struct Model;
struct Mount;
struct Profile;
struct Record;
struct Rider;
struct Settings;
struct SharedPlayer_func_80209CD8_de;
struct Shared_Body;
struct Shared_Hud;
struct Shared_Model;
struct Shared_Profile;
struct Shared_StateInfo;
struct Shared_Voice;
struct StateInfo;
struct TeamInfo;
struct View;
struct SharedPlayer_func_80209CD8_de {
    union {
        struct {
            u8 unk0[24];
        } view0_0;
        struct {
            u8 pad0[24];
        } view0_1;
        struct {
            char pad[0x3];
            u8 team;
        } view3_2;
        struct {
            char pad[0x8];
            Vec3 unk8;
        } view8_2;
        struct {
            char pad[0x8];
            Vec3 pos;
        } view8_3;
        struct {
            char pad[0x8];
            Vec3 position;
        } view8_4;
        struct {
            char pad[0x14];
            struct Shared_Model * model;
        } view14_6;
        struct { char pad[8]; s32 positionWords[3]; } positionBits;
    } views0;
    union {
        struct {
            char * unk18;
        } view18_0;
        struct {
            char * track;
        } view18_1;
        struct {
            struct Model * model;
        } view18_2;
        struct {
            struct Body * body;
        } view18_3;
        struct {
            struct Character * character;
        } view18_4;
        struct {
            struct Shared_Body * body;
        } view18_5;
    } views18;
    union {
        struct {
            u8 unk1C[344];
        } view1C_0;
        struct {
            u8 pad1[344];
        } view1C_1;
        struct {
            char pad[0x4];
            f32 velY;
        } view20_2;
        struct {
            char pad[0x1C];
            s32 unk38;
        } view38_2;
        struct {
            char pad[0x1C];
            s32 flags;
        } view38_3;
        struct {
            char pad[0x24];
            f32 unk40;
        } view40_5;
        struct {
            char pad[0x40];
            Shared_Quad unk5C;
        } view5C_6;
        struct {
            char pad[0x50];
            f32 unk6C;
        } view6C_4;
        struct {
            char pad[0x50];
            f32 heading;
        } view6C_5;
        struct {
            char pad[0x50];
            f32 yaw;
        } view6C_9;
        struct {
            char pad[0xC8];
            u16 unkE4;
        } viewE4_6;
        struct {
            char pad[0xC8];
            u16 kind;
        } viewE4_7;
        struct {
            char pad[0xE4];
            s32 unk100;
        } view100_8;
        struct {
            char pad[0xE4];
            s32 flags;
        } view100_9;
        struct {
            char pad[0xE8];
            f32 unk104;
        } view104_10;
        struct {
            char pad[0xE8];
            f32 idleTime;
        } view104_11;
        struct {
            char pad[0xEC];
            s16 anim;
        } view108_16;
        struct {
            char pad[0xF2];
            s8 unk10E;
        } view10E_12;
        struct {
            char pad[0xF2];
            s8 idle;
        } view10E_13;
        struct {
            char pad[0xF2];
            s8 replaying;
        } view10E_14;
        struct {
            char pad[0xF2];
            s8 animPending;
        } view10E_20;
        struct {
            char pad[0x154];
            char unk170[100];
        } view170_15;
        struct {
            char pad[0x154];
            char body[100];
        } view170_16;
        struct {
            char pad[0x154];
            s32 unk170;
        } view170_23;
        struct {
            char pad[0x158];
            s32 unk174;
        } view174_17;
        struct {
            char pad[0x15C];
            u8 unk178[740];
        } view178_18;
        struct {
            char pad[0x15C];
            u8 pad2[740];
        } view178_19;
        struct {
            char pad[0x1B8];
            f32 unk1D4;
        } view1D4_20;
        struct {
            char pad[0x1B8];
            f32 holdTime;
        } view1D4_21;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_80209CD8_de * unk1D8;
        } view1D8_22;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_80209CD8_de * self;
        } view1D8_23;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_80209CD8_de * f1D8;
        } view1D8_24;
        struct {
            char pad[0x1BC];
            void * unk1D8;
        } view1D8_32;
        struct {
            char pad[0x244];
            Vec3 unk260;
        } view260_25;
        struct {
            char pad[0x244];
            Vec3 muzzle;
        } view260_26;
        struct {
            char pad[0x2CC];
            char unk2E8[368];
        } view2E8_27;
        struct {
            char pad[0x2CC];
            char weapon[368];
        } view2E8_28;
        struct {
            char pad[0x2CC];
            Shared_Emitter emitter;
        } view2E8_37;
        struct {
            char pad[0x43C];
            char unk458[384];
        } view458_29;
        struct {
            char pad[0x43C];
            char ammo[384];
        } view458_30;
        struct {
            char pad[0x43C];
            s32 unk458;
        } view458_40;
        struct {
            char pad[0x440];
            s32 unk45C;
        } view45C_31;
        struct {
            char pad[0x444];
            u8 unk460[376];
        } view460_32;
        struct {
            char pad[0x444];
            u8 pad3[376];
        } view460_33;
        struct {
            char pad[0x468];
            struct Shared_Voice * voice;
        } view484_44;
        struct {
            char pad[0x470];
            s8 unk48C;
        } view48C_34;
        struct {
            char pad[0x470];
            s8 state;
        } view48C_35;
        struct {
            char pad[0x4A4];
            void * unk4C0;
        } view4C0_47;
        struct {
            char pad[0x507];
            s8 unk523;
        } view523_36;
        struct {
            char pad[0x507];
            s8 busy;
        } view523_37;
        struct {
            char pad[0x578];
            s32 unk594;
        } view594_38;
        struct {
            char pad[0x578];
            s32 gear;
        } view594_39;
        struct {
            char pad[0x578];
            s32 mode;
        } view594_40;
        struct {
            char pad[0x584];
            f32 unk5A0;
        } view5A0_41;
        struct {
            char pad[0x584];
            f32 charge;
        } view5A0_42;
        struct {
            char pad[0x5B4];
            s32 unk5D0;
        } view5D0_43;
        struct {
            char pad[0x5B4];
            s32 f5D0;
        } view5D0_44;
        struct {
            char pad[0x5B8];
            s32 unk5D4;
        } view5D4_45;
        struct {
            char pad[0x5B8];
            s32 slot;
        } view5D4_46;
        struct {
            char pad[0x5B8];
            s32 profile;
        } view5D4_47;
        struct {
            char pad[0x5B8];
            s32 f5D4;
        } view5D4_48;
    } views1C;
    union {
        struct {
            struct Record * unk5D8;
        } view5D8_0;
        struct {
            struct Record * record;
        } view5D8_1;
        struct {
            struct Controls * controls;
        } view5D8_2;
        struct {
            struct TeamInfo * teamInfo;
        } view5D8_3;
        struct {
            struct Ctrl * ctrl;
        } view5D8_4;
        struct {
            unsigned char * info;
        } view5D8_5;
        struct {
            struct Profile * profile;
        } view5D8_6;
        struct {
            struct Settings * settings;
        } view5D8_7;
        struct {
            s32 f5D8;
        } view5D8_8;
        struct {
            struct Shared_Profile * profile;
        } view5D8_9;
    } views5D8;
    union {
        struct {
            void * unk5DC;
        } view5DC_0;
        struct {
            void * view;
        } view5DC_1;
        struct {
            struct View * view;
        } view5DC_2;
        struct {
            u8 pad4[8];
        } view5DC_3;
        struct {
            void * entity;
        } view5DC_4;
        struct {
            struct Rider * rider;
        } view5DC_5;
        struct {
            char * storage;
        } view5DC_6;
        struct {
            char * messages;
        } view5DC_7;
        struct {
            struct Shared_Hud * hud;
        } view5DC_8;
        struct {
            char pad[0x4];
            s32 unk5E0;
        } view5E0_8;
        struct {
            char pad[0x4];
            s32 state;
        } view5E0_9;
        struct {
            char pad[0x4];
            s32 slot;
        } view5E0_10;
    } views5DC;
    union {
        struct {
            s32 unk5E4;
        } view5E4_0;
        struct {
            s32 active;
        } view5E4_1;
        struct {
            s32 health;
        } view5E4_2;
        struct {
            s32 alive;
        } view5E4_3;
        struct {
            s32 holding;
        } view5E4_4;
    } views5E4;
    union {
        struct {
            u8 unk5E8[3140];
        } view5E8_0;
        struct {
            u8 pad5[3140];
        } view5E8_1;
        struct {
            char pad[0x2];
            s16 unk5EA;
        } view5EA_2;
        struct {
            char pad[0x2];
            s16 respawns;
        } view5EA_3;
        struct {
            char pad[0x2];
            s16 runType;
        } view5EA_4;
        struct {
            char pad[0x4];
            s32 unk5EC;
        } view5EC_5;
        struct {
            char pad[0x4];
            s32 model;
        } view5EC_6;
        struct {
            char pad[0x4];
            s32 spawnPoint;
        } view5EC_7;
        struct {
            char pad[0x4];
            s32 f5EC;
        } view5EC_8;
        struct {
            char pad[0x8];
            s32 unk5F0;
        } view5F0_9;
        struct {
            char pad[0x8];
            s32 f5F0;
        } view5F0_10;
        struct {
            char pad[0xC];
            s16 unk5F4[4];
        } view5F4_11;
        struct {
            char pad[0xC];
            s16 ammo[4];
        } view5F4_12;
        struct {
            char pad[0xC];
            s16 ammo[3];
        } view5F4_13;
        struct {
            char pad[0x1A];
            Shared_Slot slots[22];
        } view602_14;
        struct {
            char pad[0x46];
            s16 unk62E;
        } view62E_13;
        struct {
            char pad[0x46];
            s16 weapon;
        } view62E_14;
        struct {
            char pad[0x46];
            s16 character;
        } view62E_17;
        struct {
            char pad[0x68];
            s16 unk650;
        } view650_15;
        struct {
            char pad[0x68];
            s16 state;
        } view650_16;
        struct {
            char pad[0x68];
            s16 action;
        } view650_17;
        struct {
            char pad[0x68];
            s16 mode;
        } view650_18;
        struct {
            char pad[0x6A];
            s16 unk652;
        } view652_19;
        struct {
            char pad[0x6A];
            s16 previous;
        } view652_20;
        struct {
            char pad[0x6A];
            s16 pad652;
        } view652_24;
        struct {
            char pad[0x6C];
            s16 prevState;
        } view654_25;
        struct {
            char pad[0x6E];
            s16 pad656;
        } view656_26;
        struct {
            char pad[0x70];
            f32 unk658;
        } view658_21;
        struct {
            char pad[0x70];
            f32 counter;
        } view658_22;
        struct {
            char pad[0x70];
            f32 stride;
        } view658_23;
        struct {
            char pad[0x70];
            f32 swimTime;
        } view658_24;
        struct {
            char pad[0x70];
            f32 stateTime;
        } view658_31;
        struct {
            char pad[0x74];
            s32 unk65C;
        } view65C_32;
        struct {
            char pad[0x78];
            s32 unk660;
        } view660_25;
        struct {
            char pad[0x78];
            s32 previousTimer;
        } view660_26;
        struct {
            char pad[0x7C];
            s32 unk664;
        } view664_27;
        struct {
            char pad[0x7C];
            s32 timer;
        } view664_28;
        struct {
            char pad[0x84];
            f32 unk66C;
        } view66C_29;
        struct {
            char pad[0x88];
            f32 unk670;
        } view670_30;
        struct {
            char pad[0x88];
            f32 shield;
        } view670_31;
        struct {
            char pad[0x90];
            f32 unk678;
        } view678_40;
        struct {
            char pad[0xA0];
            char unk688[16];
        } view688_32;
        struct {
            char pad[0xA0];
            char body[16];
        } view688_33;
        struct {
            char pad[0xA0];
            Shared_Input input;
        } view688_43;
        struct {
            char pad[0xB0];
            struct Controller * unk698;
        } view698_34;
        struct {
            char pad[0xB0];
            struct Controller * controller;
        } view698_35;
        struct {
            char pad[0xB0];
            void * controller;
        } view698_36;
        struct {
            char pad[0xB0];
            char * emitter;
        } view698_37;
        struct {
            char pad[0xB0];
            char * title;
        } view698_38;
        struct {
            char pad[0xB4];
            f32 unk69C;
        } view69C_39;
        struct {
            char pad[0xB4];
            f32 stick;
        } view69C_40;
        struct {
            char pad[0xBC];
            f32 unk6A4;
        } view6A4_41;
        struct {
            char pad[0xBC];
            f32 strafe;
        } view6A4_42;
        struct {
            char pad[0xC0];
            f32 unk6A8;
        } view6A8_43;
        struct {
            char pad[0xC0];
            f32 lift;
        } view6A8_44;
        struct {
            char pad[0xC4];
            s32 unk6AC;
        } view6AC_45;
        struct {
            char pad[0xC8];
            s32 unk6B0;
        } view6B0_46;
        struct {
            char pad[0xC8];
            s32 input;
        } view6B0_47;
        struct {
            char pad[0xC8];
            s32 state;
        } view6B0_48;
        struct {
            char pad[0xD0];
            s32 unk6B8;
        } view6B8_49;
        struct {
            char pad[0xD0];
            s32 input;
        } view6B8_50;
        struct {
            char pad[0xD8];
            f32 unk6C0;
        } view6C0_51;
        struct {
            char pad[0xD8];
            f32 climb;
        } view6C0_52;
        struct {
            char pad[0xD8];
            f32 speed;
        } view6C0_53;
        struct {
            char pad[0xD8];
            f32 velX;
        } view6C0_64;
        struct {
            char pad[0xDC];
            f32 unk6C4;
        } view6C4_54;
        struct {
            char pad[0xDC];
            f32 side;
        } view6C4_55;
        struct {
            char pad[0xDC];
            f32 velZ;
        } view6C4_67;
        struct {
            char pad[0xE0];
            f32 unk6C8;
        } view6C8_56;
        struct {
            char pad[0xE0];
            f32 speed;
        } view6C8_57;
        struct {
            char pad[0xE4];
            f32 lastVelY;
        } view6CC_70;
        struct {
            char pad[0xE8];
            s32 onGround;
        } view6D0_71;
        struct {
            char pad[0xEC];
            f32 unk6D4;
        } view6D4_58;
        struct {
            char pad[0xF0];
            f32 unk6D8;
        } view6D8_59;
        struct {
            char pad[0xF4];
            f32 unk6DC;
        } view6DC_60;
        struct {
            char pad[0xFC];
            f32 unk6E4;
        } view6E4_61;
        struct {
            char pad[0xFC];
            f32 depth;
        } view6E4_62;
        struct {
            char pad[0xFC];
            f32 airTime;
        } view6E4_77;
        struct {
            char pad[0x100];
            f32 unk6E8;
        } view6E8_63;
        struct {
            char pad[0x100];
            Vec3 unk6E8;
        } view6E8_79;
        struct {
            char pad[0x104];
            f32 unk6EC;
        } view6EC_64;
        struct {
            char pad[0x104];
            f32 height;
        } view6EC_65;
        struct {
            char pad[0x108];
            f32 unk6F0;
        } view6F0_66;
        struct {
            char pad[0x10C];
            f32 unk6F4;
        } view6F4_83;
        struct {
            char pad[0x110];
            Vec3 unk6F8;
        } view6F8_84;
        struct {
            char pad[0x11C];
            f32 unk704;
        } view704_67;
        struct {
            char pad[0x11C];
            f32 lift;
        } view704_68;
        struct {
            char pad[0x130];
            f32 unk718;
        } view718_69;
        struct {
            char pad[0x130];
            f32 crouch;
        } view718_70;
        struct {
            char pad[0x134];
            s32 unk71C;
        } view71C_89;
        struct {
            char pad[0x138];
            f32 swim;
        } view720_90;
        struct {
            char pad[0x13C];
            f32 unk724;
        } view724_71;
        struct {
            char pad[0x13C];
            f32 pitch;
        } view724_72;
        struct {
            char pad[0x140];
            f32 unk728;
        } view728_73;
        struct {
            char pad[0x140];
            f32 kickPitch;
        } view728_74;
        struct {
            char pad[0x144];
            f32 unk72C;
        } view72C_75;
        struct {
            char pad[0x144];
            f32 kickRoll;
        } view72C_76;
        struct {
            char pad[0x144];
            f32 lean;
        } view72C_77;
        struct {
            char pad[0x148];
            f32 unk730[3];
        } view730_78;
        struct {
            char pad[0x148];
            f32 sway[3];
        } view730_79;
        struct {
            char pad[0x154];
            f32 unk73C;
        } view73C_80;
        struct {
            char pad[0x154];
            f32 side;
        } view73C_81;
        struct {
            char pad[0x154];
            Vec3 weapon;
        } view73C_82;
        struct {
            char pad[0x158];
            f32 unk740;
        } view740_83;
        struct {
            char pad[0x158];
            f32 height;
        } view740_84;
        struct {
            char pad[0x15C];
            f32 unk744;
        } view744_85;
        struct {
            char pad[0x15C];
            f32 forward;
        } view744_86;
        struct {
            char pad[0x170];
            f32 unk758;
        } view758_87;
        struct {
            char pad[0x170];
            f32 bobStrength;
        } view758_88;
        struct {
            char pad[0x174];
            f32 unk75C;
        } view75C_89;
        struct {
            char pad[0x174];
            f32 bobSpeed;
        } view75C_90;
        struct {
            char pad[0x188];
            s16 unk770;
        } view770_91;
        struct {
            char pad[0x188];
            s16 nextWeapon;
        } view770_92;
        struct {
            char pad[0x188];
            s16 weapon;
        } view770_113;
        struct {
            char pad[0x18A];
            s16 pad772;
        } view772_114;
        struct {
            char pad[0x18C];
            Vec3 unk774;
        } view774_115;
        struct {
            char pad[0x198];
            f32 unk780;
        } view780_116;
        struct {
            char pad[0x19C];
            f32 unk784;
        } view784_117;
        struct {
            char pad[0x1A0];
            s32 unk788;
        } view788_93;
        struct {
            char pad[0x1A0];
            s32 icons;
        } view788_94;
        struct {
            char pad[0x1B0];
            s32 unk798;
        } view798_95;
        struct {
            char pad[0x1B0];
            s32 carried;
        } view798_96;
        struct {
            char pad[0x1B4];
            Vec3 unk79C;
        } view79C_97;
        struct {
            char pad[0x1B4];
            Vec3 carriedPosition;
        } view79C_98;
        struct {
            char pad[0x1D0];
            s32 unk7B8;
        } view7B8_99;
        struct {
            char pad[0x1D0];
            s32 target;
        } view7B8_100;
        struct {
            char pad[0x1D4];
            f32 unk7BC;
        } view7BC_101;
        struct {
            char pad[0x1D4];
            f32 timer;
        } view7BC_102;
        struct {
            char pad[0x1D8];
            Vec3 unk7C0;
        } view7C0_103;
        struct {
            char pad[0x1D8];
            Vec3 targetPosition;
        } view7C0_104;
        struct {
            char pad[0x200];
            s32 unk7E8;
        } view7E8_105;
        struct {
            char pad[0x200];
            s32 zoomed;
        } view7E8_106;
        struct {
            char pad[0x204];
            f32 unk7EC;
        } view7EC_132;
        struct {
            char pad[0x208];
            f32 unk7F0;
        } view7F0_133;
        struct {
            char pad[0x224];
            struct Mount * unk80C;
        } view80C_107;
        struct {
            char pad[0x224];
            struct Mount * mount;
        } view80C_108;
        struct {
            char pad[0x228];
            s32 unk810;
        } view810_109;
        struct {
            char pad[0x228];
            s32 kind;
        } view810_110;
        struct {
            char pad[0x22C];
            Triple unk814;
        } view814_111;
        struct {
            char pad[0x22C];
            Triple offset;
        } view814_112;
        struct {
            char pad[0x250];
            f32 unk838;
        } view838_113;
        struct {
            char pad[0x250];
            f32 rideTime;
        } view838_114;
        struct {
            char pad[0x254];
            f32 unk83C;
        } view83C_115;
        struct {
            char pad[0x254];
            f32 bump;
        } view83C_116;
        struct {
            char pad[0x258];
            s32 unk840;
        } view840_117;
        struct {
            char pad[0x258];
            s32 surfaced;
        } view840_118;
        struct {
            char pad[0x264];
            s32 unk84C;
        } view84C_149;
        struct {
            char pad[0x26C];
            f32 unk854;
        } view854_147;
        struct {
            char pad[0x274];
            s32 unk85C;
        } view85C_119;
        struct {
            char pad[0x274];
            s32 w85C;
        } view85C_120;
        struct {
            char pad[0x27C];
            s32 unk864;
        } view864_121;
        struct {
            char pad[0x27C];
            s32 f864;
        } view864_122;
        struct {
            char pad[0x280];
            s32 unk868;
        } view868_123;
        struct {
            char pad[0x280];
            s32 f868;
        } view868_124;
        struct {
            char pad[0x284];
            s32 unk86C;
        } view86C_125;
        struct {
            char pad[0x284];
            s32 parameter;
        } view86C_126;
        struct {
            char pad[0x284];
            s32 animation;
        } view86C_127;
        struct {
            char pad[0x288];
            s32 unk870;
        } view870_157;
        struct {
            char pad[0x290];
            Shared_Effect effect;
        } view878_158;
        struct {
            char pad[0x350];
            char unk938[2188];
        } view938_128;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_129;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_130;
        struct {
            char pad[0x350];
            s32 unk938;
        } view938_162;
        struct {
            char pad[0x6D0];
            s32 unkCB8;
        } viewCB8_163;
        struct {
            char pad[0x6E4];
            s32 unkCCC;
        } viewCCC_164;
        struct {
            char pad[0x758];
            s32 unkD40;
        } viewD40_165;
        struct {
            char pad[0x96C];
            s32 unkF54;
        } viewF54_131;
        struct {
            char pad[0x96C];
            s32 selection;
        } viewF54_132;
        struct {
            char pad[0x9A8];
            s32 unkF90;
        } viewF90_133;
        struct {
            char pad[0x9A8];
            s32 choice;
        } viewF90_134;
        struct {
            char pad[0xBCC];
            s32 unk11B4;
        } view11B4_135;
        struct {
            char pad[0xBCC];
            s32 locked;
        } view11B4_136;
        struct {
            char pad[0xBD0];
            s32 unk11B8;
        } view11B8_137;
        struct {
            char pad[0xBD0];
            s32 frozen;
        } view11B8_138;
        struct {
            char pad[0xBD4];
            s32 unk11BC;
        } view11BC_139;
        struct {
            char pad[0xBD4];
            s32 f11BC;
        } view11BC_140;
        struct {
            char pad[0xBD8];
            s32 unk11C0;
        } view11C0_141;
        struct {
            char pad[0xBD8];
            s32 f11C0;
        } view11C0_142;
        struct {
            char pad[0xBDC];
            f32 unk11C4;
        } view11C4_143;
        struct {
            char pad[0xBDC];
            f32 soundTime;
        } view11C4_144;
        struct {
            char pad[0xBE4];
            s32 unk11CC;
        } view11CC_145;
        struct {
            char pad[0xBE4];
            s32 f11CC;
        } view11CC_146;
        struct {
            char pad[0xBF0];
            f32 unk11D8;
        } view11D8_147;
        struct {
            char pad[0xBF0];
            f32 recoil;
        } view11D8_148;
        struct {
            char pad[0xBF0];
            f32 stun;
        } view11D8_149;
        struct {
            char pad[0xBF4];
            f32 unk11DC;
        } view11DC_185;
        struct {
            char pad[0xBF8];
            f32 unk11E0;
        } view11E0_186;
        struct {
            char pad[0xC00];
            s32 unk11E8;
        } view11E8_150;
        struct {
            char pad[0xC00];
            s32 f11E8;
        } view11E8_151;
        struct {
            char pad[0xC04];
            f32 unk11EC;
        } view11EC_189;
        struct {
            char pad[0xC28];
            s32 unk1210;
        } view1210_152;
        struct {
            char pad[0xC28];
            s32 marker;
        } view1210_153;
        struct {
            char pad[0xC2C];
            s32 unk1214;
        } view1214_154;
        struct {
            char pad[0xC2C];
            s32 marker;
        } view1214_155;
        struct {
            char pad[0xC2C];
            s32 markerShown;
        } view1214_156;
        struct {
            char pad[0xC30];
            s32 unk1218;
        } view1218_157;
        struct {
            char pad[0xC30];
            s32 f1218;
        } view1218_158;
        struct {
            char pad[0xC34];
            s32 unk121C;
        } view121C_159;
        struct {
            char pad[0xC34];
            s32 f121C;
        } view121C_160;
        struct {
            char pad[0xC38];
            s32 unk1220;
        } view1220_161;
        struct {
            char pad[0xC38];
            s32 f1220;
        } view1220_162;
        struct { char pad[0xE]; s16 charge; } chargeView;
        struct { char pad[0x11F4 - 0x5E8]; f32 spin; s32 frame; } rapidFireView;
    } views5E8;
    union {
        struct {
            u32 unk122C;
        } view122C_0;
        struct {
            u32 flags;
        } view122C_1;
        struct {
            s32 options;
        } view122C_2;
        struct {
            s32 f122C;
        } view122C_3;
        struct {
            s32 fxFlags;
        } view122C_4;
    } views122C;
    f32 fxTime;
    f32 fxSpeed;
    s32 fxStage;
    char pad123C[0x4];
    f32 unk1240;
    f32 unk1244;
    char pad1248[0x7C];
    union {
        struct {
            s32 unk12C4;
        } view12C4_0;
        struct {
            s32 f12C4;
        } view12C4_1;
    } views12C4;
    union {
        struct {
            s32 unk12C8;
        } view12C8_0;
        struct {
            s32 f12C8;
        } view12C8_1;
    } views12C8;
    union {
        struct {
            s32 unk12CC[8];
        } view12CC_0;
        struct {
            s32 splitsA[8];
        } view12CC_1;
    } views12CC;
    s32 unk12EC;
    char pad12F0[0x4];
    union {
        struct {
            s32 unk12F4[8];
        } view12F4_0;
        struct {
            s32 splitsB[8];
        } view12F4_1;
    } views12F4;
    char pad1314[0x20];
    union {
        struct {
            s32 unk1334;
        } view1334_0;
        struct {
            s32 f1334;
        } view1334_1;
    } views1334;
    union {
        struct {
            s32 unk1338;
        } view1338_0;
        struct {
            s32 f1338;
        } view1338_1;
    } views1338;
    union {
        struct {
            s32 unk133C;
        } view133C_0;
        struct {
            s32 laps;
        } view133C_1;
        struct {
            s32 lives;
        } view133C_2;
    } views133C;
    union {
        struct {
            s32 unk1340;
        } view1340_0;
        struct {
            s32 stalls;
        } view1340_1;
        struct {
            s32 timer;
        } view1340_2;
        struct {
            s32 respawnTimer;
        } view1340_3;
    } views1340;
    char pad1344[0x70];
    union {
        struct {
            struct StateInfo * unk13B4;
        } view13B4_0;
        struct {
            struct StateInfo * states;
        } view13B4_1;
        struct {
            struct Mode * unk13B4;
        } view13B4_2;
        struct {
            void * character;
        } view13B4_3;
        struct {
            s32 f13B4;
        } view13B4_4;
        struct {
            struct Shared_StateInfo * states;
        } view13B4_5;
    } views13B4;
    char pad13B8[0x10];
    union {
        struct {
            s32 unk13C8;
        } view13C8_0;
        struct {
            s32 w13C8;
        } view13C8_1;
        struct {
            s32 f13C8;
        } view13C8_2;
    } views13C8;
    char pad13CC[0x8];
    s32 unk13D4;
    union {
        struct {
            struct Held * unk13D8;
        } view13D8_0;
        struct {
            struct Held * held;
        } view13D8_1;
    } views13D8;
    char pad13DC[0xC];
    s32 messageIndex;
    char pad13EC[0x64];
    union {
        struct {
            s32 unk1450;
        } view1450_0;
        struct {
            s32 computer;
        } view1450_1;
        struct {
            s32 infinite;
        } view1450_2;
        struct {
            s32 unlimited;
        } view1450_3;
        struct {
            s32 uncounted;
        } view1450_4;
        struct {
            s32 f1450;
        } view1450_5;
    } views1450;
    union {
        struct {
            s32 unk1454;
        } view1454_0;
        struct {
            s32 f1454;
        } view1454_1;
    } views1454;
    char pad1458[0xC];
    union {
        struct {
            Vec3 unk1464;
        } view1464_0;
        struct {
            Vec3 aim;
        } view1464_1;
    } views1464;
    char pad1470[0x10];
    union {
        struct {
            Matrix unk1480[2];
        } view1480_0;
        struct {
            Matrix beams[2];
        } view1480_1;
    } views1480;
    union {
        struct {
            Matrix unk1500[2];
        } view1500_0;
        struct {
            Matrix lasers[2];
        } view1500_1;
    } views1500;
    union {
        struct {
            Matrix unk1580[2];
        } view1580_0;
        struct {
            Matrix dots[2];
        } view1580_1;
    } views1580;
    char pad1600[0xD4];
    union {
        struct {
            s32 unk16D4;
        } view16D4_0;
        struct {
            s32 f16D4;
        } view16D4_1;
    } views16D4;
    u16 unk16D8;
    char pad16DA[0x6];
    union {
        struct {
            struct SharedPlayer_func_80209CD8_de * unk16E0;
        } view16E0_0;
        struct {
            struct SharedPlayer_func_80209CD8_de * next;
        } view16E0_1;
        struct {
            struct SharedPlayer_func_80209CD8_de * next;
        } view16E0_2;
    } views16E0;
};
struct NavigationState;
struct NavigationState {
    SharedPlayer_func_80209CD8_de * unk_0;
    s32 unk_4;
    s32 unk_8;
    s32 unk_C;
    char padC[0x4];
    s32 unk_14;
    s32 unk_18;
    char pad18[0x10];
    Triple pos;
    char pad34[0x178];
    Triple home;
    char pad1B8[0x144];
    s32 unk_300;
    s32 unk_304;
    s32 unk_308;
    s32 unk_30C;
    s32 unk_310;
    s32 unk_314;
    char pad314[0x14];
    s32 unk_32C;
};
struct Node80254C10;
struct Node80254C10 {
    u32 start;
    u32 end;
    s32 unk_8;
    u32 flags;
    char pad10[0x14];
    struct Node80254C10 *next;
};
struct NodeEvent;
struct NodeEvent {
    s32 words[10];
};
struct NodeList;
struct NodeList {
    u8 pad0[0xC];
    s32 count;
};
struct Node_func_8020D364_de;
struct Node_func_8020D364_de {
    u16 id;
    u8 pad2[2];
    u8 kind;
};
struct Node_func_8042D9E8_de;
struct Node_func_8042D9E8_de {
    char pad0[0x10];
    u8 unk10;
    char pad14[0x38 - 0x11];
    void *unk38;
};
struct Node_func_80430118_de;
struct Node_func_80430118_de {
    char pad[0x30];
    struct Node_func_80430118_de *next;
};
struct Node_func_804303F8_de;
struct Node_func_804303F8_de {
    char pad[0x2C];
    struct Node_func_804303F8_de *next;
};
struct Note;
struct Note {
    char label[0x28];
    char name[0x14];
    char size[0xA];
};
struct Opaque_OSMesgQueue;
typedef struct Opaque_OSMesgQueue Opaque_OSMesgQueue;
struct Opaque_OSThread;
typedef struct Opaque_OSThread Opaque_OSThread;
struct OSDevMgr;
struct OSDevMgr {
    u32 active;
    Opaque_OSThread *thread;
    Opaque_OSMesgQueue *cmdQueue;
    Opaque_OSMesgQueue *evtQueue;
    Opaque_OSMesgQueue *acsQueue;
    s32 (*dma)(s32, u32, void *, u32);
    s32 (*edma)(void *, s32, u32, void *, u32);
};
struct OSIoMesgHdr;
struct OSIoMesgHdr {
    u16 type;
    u8 pri;
    u8 status;
    Opaque_OSMesgQueue *retQueue;
};
struct OSIoMesg;
struct OSIoMesg {
    OSIoMesgHdr hdr;
    void *dramAddr;
    u32 devAddr;
    u32 size;
    void *piHandle;
};
struct OSPiHandle_s;
struct OSPiHandle_s {
    struct OSPiHandle_s *next;
    u8 type;
    u8 latency;
    u8 pageSize;
    u8 relDuration;
    u8 pulse;
    u8 domain;
    u32 baseAddress;
    u32 speed;
    u8 transferInfo[0x60];
};
struct OSPifRam;
struct OSPifRam {
    u32 ramarray[15];
    u32 pifstatus;
};
struct OSTimer_s;
struct OSTimer_s {
    struct OSTimer_s *next;
    struct OSTimer_s *prev;
    u64 interval;
    u64 value;
    Opaque_OSMesgQueue *mq;
    void * msg;
};
struct func_8022EA2C_S1;
struct func_8022EA2C_S1 {
    char pad0[0x2];
    u16 unk2;
};
struct Player;
struct Player {
    char pad0[8];
    Vec3 pos;
};
struct Obj_func_8027ABF4_de;
struct Obj_func_8027ABF4_de {
    char pad[28];
    Vec3 velocity;
    char gap[0x118 - 40];
    Link_func_80283A80_de *link;
    char gap2[0x134 - 0x11c];
    Player *target;
    char gap3[0x140 - 0x138];
    f32 distance;
    char gap4[0x174 - 0x144];
    Vec3 direction;
};
struct Link_func_80283A80_de;
struct Obj_func_80283A80_de;
struct Obj_func_80283A80_de {
    char pad[28];
    Vec3 velocity;
    char gap[0x118-40];
    struct Link_func_80283A80_de *link;
    char gap2[0x174-0x11c];
    Vec3 direction;
};
struct Obj_func_802B20D4_de;
struct Obj_func_802B20D4_de {
    char pad18[0x18];
    s16 field18;
};
struct Obj_func_8043CC10_de;
struct Obj_func_8043CC10_de {
    char pad[0x14];
    u8 **unk14;
};
struct Value;
struct Value {
    s32 pad;
    u32 kind;
    char gap[16];
    void *(*get)(void);
};
struct Obj_func_80442EC0_de;
struct Value;
struct Obj_func_80442EC0_de {
    char pad[20];
    struct Value *value;
};
struct Object6C;
struct Object6C {
    char pad[0x6C];
    s32 value;
};
struct ObjectLinks134;
struct ObjectLinks134 {
    unsigned char padding[304];
    s32 * unk_130;
};
struct ObjectLinks138;
struct ObjectLinks138 {
    unsigned char padding[308];
    void * unk_134;
};
struct ObjectLinks140;
struct ObjectLinks140 {
    char pad0[0x30];
    void * unk_30;
    char pad30[0x34 - 0x30 - sizeof(void*)];
    s8 unk_34;
    char pad34[0x13C - 0x34 - sizeof(s8)];
    f32 unk_13C;
};
struct ObjectLinks1454_2;
struct ObjectLinks1454_2 {
    char pad0[0x3];
    s8 unk_3;
    char pad3[0x18 - 0x3 - sizeof(s8)];
    void * unk_18;
    char pad18[0x50 - 0x18 - sizeof(void*)];
    f32 unk_50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk_54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk_58;
    char pad58[0x174 - 0x58 - sizeof(f32)];
    s32 unk_174;
    char pad174[0x5D4 - 0x174 - sizeof(s32)];
    s32 unk_5D4;
    char pad5D4[0x5D8 - 0x5D4 - sizeof(s32)];
    char * unk_5D8;
    char pad5D8[0x5E0 - 0x5D8 - sizeof(char*)];
    s32 unk_5E0;
    char pad5E0[0x5E4 - 0x5E0 - sizeof(s32)];
    s32 unk_5E4;
    char pad5E4[0x1450 - 0x5E4 - sizeof(s32)];
    s32 unk_1450;
};
struct ObjectLinks16DC;
struct ObjectLinks16DC {
    char pad0[0x3];
    u8 unk_3;
    char pad3[0x1D8 - 0x3 - sizeof(u8)];
    char * unk_1D8;
    char pad1D8[0x5D0 - 0x1D8 - sizeof(char*)];
    s32 unk_5D0;
    char pad5D0[0x5D4 - 0x5D0 - sizeof(s32)];
    s32 unk_5D4;
    char pad5D4[0x5D8 - 0x5D4 - sizeof(s32)];
    char * unk_5D8;
    char pad5D8[0x5EC - 0x5D8 - sizeof(char*)];
    s32 unk_5EC;
    char pad5EC[0x5F0 - 0x5EC - sizeof(s32)];
    s32 unk_5F0;
    char pad5F0[0x864 - 0x5F0 - sizeof(s32)];
    s32 unk_864;
    char pad864[0x868 - 0x864 - sizeof(s32)];
    s32 unk_868;
    char pad868[0x11BC - 0x868 - sizeof(s32)];
    s32 unk_11BC;
    char pad11BC[0x11C0 - 0x11BC - sizeof(s32)];
    s32 unk_11C0;
    char pad11C0[0x11CC - 0x11C0 - sizeof(s32)];
    s32 unk_11CC;
    char pad11CC[0x11E8 - 0x11CC - sizeof(s32)];
    s32 unk_11E8;
    char pad11E8[0x1218 - 0x11E8 - sizeof(s32)];
    s32 unk_1218;
    char pad1218[0x121C - 0x1218 - sizeof(s32)];
    s32 unk_121C;
    char pad121C[0x1220 - 0x121C - sizeof(s32)];
    s32 unk_1220;
    char pad1220[0x122C - 0x1220 - sizeof(s32)];
    s32 unk_122C;
    char pad122C[0x12C4 - 0x122C - sizeof(s32)];
    s32 unk_12C4;
    char pad12C4[0x12C8 - 0x12C4 - sizeof(s32)];
    s32 unk_12C8;
    char pad12C8[0x1334 - 0x12C8 - sizeof(s32)];
    s32 unk_1334;
    char pad1334[0x1338 - 0x1334 - sizeof(s32)];
    s32 unk_1338;
    char pad1338[0x13B4 - 0x1338 - sizeof(s32)];
    s32 * unk_13B4;
    char pad13B4[0x13C8 - 0x13B4 - sizeof(s32*)];
    s32 unk_13C8;
    char pad13C8[0x1450 - 0x13C8 - sizeof(s32)];
    s32 unk_1450;
    char pad1450[0x1454 - 0x1450 - sizeof(s32)];
    void * unk_1454;
    char pad1454[0x16D4 - 0x1454 - sizeof(void*)];
    s32 unk_16D4;
    char pad16D4[0x16D8 - 0x16D4 - sizeof(s32)];
    s16 unk_16D8;
};
struct ObjectLinks1E8_2;
struct ObjectLinks1E8_2 {
    unsigned char padding[484];
    void * unk_1E4;
};
struct ObjectLinks3C0C_2;
struct ObjectLinks3C0C_2 {
    unsigned char padding[15368];
    void * volatile link;
};
struct ObjectLinks4_4;
struct func_80205628_S3;
struct ObjectLinks4_4 {
    struct func_80205628_S3 * unk_0;
};
struct ObjectLinks8_2;
struct ObjectLinks8_2 {
    unsigned char padding[4];
    Link_func_802596B4_de * volatile unk_4;
};
struct ObjectLinks8_3;
struct ObjectLinks8_3 {
    unsigned char padding[4];
    s32 * unk_4;
};
struct ObjectLinksB8;
struct ObjectLinksB8 {
    unsigned char padding[180];
    void * unk_B4;
};
struct ObjectLinksC_3;
struct ObjectLinksC_3 {
    unsigned char padding[8];
    s32 * unk_8;
};
struct ObjectLinksDC_2;
struct ObjectLinksDC_2 {
    unsigned char padding[216];
    s32 * unk_D8;
};
struct ObjectState11ED;
struct ObjectState11ED {
    char pad0[0xC];
    char unk_C;
    char padC[0x20 - 0xC - sizeof(char)];
    char unk_20;
    char pad20[0xF24 - 0x20 - sizeof(char)];
    char unk_F24;
    char padF24[0x11D8 - 0xF24 - sizeof(char)];
    char unk_11D8;
    char pad11D8[0x11EC - 0x11D8 - sizeof(char)];
    char unk_11EC;
};
struct ObjectState12C4_2;
struct ObjectState12C4_2 {
    char pad0[0x170];
    char unk_170;
    char pad170[0x12C0 - 0x170 - sizeof(char)];
    f32 unk_12C0;
};
struct ObjectState12C4_3;
struct ObjectState12C4_3 {
    char pad0[0x170];
    char unk_170;
    char pad170[0x174 - 0x170 - sizeof(char)];
    s32 unk_174;
    char pad174[0x12C0 - 0x174 - sizeof(s32)];
    f32 unk_12C0;
};
struct ObjectState1454;
struct ObjectState1454 {
    char pad0[0x658];
    f32 unk_658;
    char pad658[0x6AC - 0x658 - sizeof(f32)];
    s32 unk_6AC;
    char pad6AC[0x1450 - 0x6AC - sizeof(s32)];
    s32 unk_1450;
};
struct ObjectState149;
struct ObjectState149 {
    unsigned char padding_0[328];
    u8 unk_148;
};
struct ObjectState15;
struct ObjectState15 {
    unsigned char padding[20];
    unsigned char tail[1];
};
struct ObjectState180;
struct ObjectState180 {
    unsigned char padding[372];
    Triple unk_174;
};
struct ObjectState19;
struct ObjectState19 {
    unsigned char padding[24];
    s8 unk_18;
};
struct ObjectState19E;
struct ObjectState19E {
    unsigned char padding[412];
    u16 unk_19C;
};
struct ObjectState1C0;
struct ObjectState1C0 {
    unsigned char padding[424];
    Box unk_1A8;
};
struct ObjectState1D2;
struct ObjectState1D2 {
    unsigned char padding[465];
    u8 unk_1D1;
};
struct ObjectState1DA;
struct ObjectState1DA {
    unsigned char padding[473];
    u8 unk_1D9;
};
struct ObjectState1E_2;
struct ObjectState1E_2 {
    char pad0[0x1D];
    u8 unk_1D;
};
struct ObjectState20_2;
struct ObjectState20_2 {
    char pad0[0x4];
    s32 unk_4;
    s32 unk_8;
    f32 unk_C;
    f32 unk_10;
    s32 unk_14;
    char pad14[0x4];
    s32 unk_1C;
};
struct ObjectState20_3;
struct ObjectState20_3 {
    char pad0[0x16];
    s16 unk_16;
    char pad16[0x6];
    s16 unk_1E;
};
struct ObjectState38;
struct ObjectState38 {
    unsigned char padding[54];
    s16 unk_36;
};
struct ObjectState40_2;
struct ObjectState40_2 {
    char pad0[0x30];
    f32 unk_30;
    f32 unk_34;
    char pad34[0x4];
    s32 unk_3C;
};
struct ObjectState44_2;
struct ObjectState44_2 {
    char pad0[0x2C];
    Floats unk_2C;
};
struct ObjectState523;
struct ObjectState523 {
    unsigned char padding_0[1312];
    u8 unk_520;
    u8 unk_521;
    u8 unk_522;
};
struct ObjectState58;
struct ObjectState58 {
    char pad0[0x18];
    Floats unk_18;
    char pad18[0x40 - 0x18 - sizeof(Floats)];
    Floats unk_40;
};
struct UnitMtx;
struct UnitMtx {
    s32 m[16];
};
struct ObjectState95;
struct ObjectState95 {
    unsigned char padding_0[128];
    s8 unk_80;
    unsigned char padding_81[14];
    u8 unk_8F;
    unsigned char padding_90[4];
    u8 unk_94;
};
struct StateFlags;
struct StateFlags {
    u16 value;
    u16 flags;
};
struct Table_func_8028CE94_de;
struct Table_func_8028CE94_de {
    s32 stride;
    s32 count;
    char data[1];
};
struct Object_func_80401980_de;
struct Object_func_80401980_de {
    s32 header[2];
    Vec3 position;
    char pad14[0x58];
    f32 yaw;
};
struct Object_func_80443128_de;
struct Object_func_80443128_de {
    char pad[0x140];
    Box view[1];
};
struct OptionsOpenItem;
struct OptionsOpenItem {
    char pad0[0x1A];
    s16 color;
};
struct OptionsOpenItem;
struct OptionsOpenScreen;
struct OptionsOpenScreen {
    void *title;
    void *list;
    void *window;
    void *buttons[4];
    char pad1C[0x20 - 0x1C];
    struct OptionsOpenItem *cursor;
    char pad24[0x28 - 0x24];
    s32 unk_28;
    s32 unk_2C;
    char pad30[0x34 - 0x30];
    s32 unk_34;
    s32 full;
};
struct OptionsScreen;
struct OptionsScreen {
    s32 screen;
    s32 label;
    s32 slider;
    s32 list0;
    s32 list1;
    s32 list2;
    u8 padding18[8];
    s32 selection;
    s32 state;
};
struct Label;
struct OptionsScrollScreen;
struct OptionsScrollScreen {
    void *title;
    void *list;
    void *window;
    void *buttons[4];
    char pad1C[0x20 - 0x1C];
    struct Label *cursor;
    char pad24[0x28 - 0x24];
    s32 delay;
    s32 unk_2C;
    s32 pos;
    s32 done;
    s32 full;
};
struct Owner;
struct Owner {
    char pad0[0x18];
    char *track;
};
struct Owner104;
struct Owner104 {
    char pad0[0x102];
    unsigned short flags;
};
struct Owner_func_8025A844_de;
struct Owner_func_8025A844_de {
    char pad0[0x84];
    char sound[0x58];
    s16 samples[20];
    char pad2[0x2B98 - 0xDC - 40];
    void *listener;
};
struct Owner_func_8025B5F0_de;
struct Owner_func_8025B5F0_de {
    char pad[0x84];
    char sound[0x58];
    s16 samples[20];
    char pad2[(0x104 - 0xDC) - 40];
    s32 key;
};
struct Entry_func_8044D794_de;
struct Owner_func_8044D794_de;
struct Owner_func_8044D794_de {
    char pad0[0x6C];
    void *unk6C;
    char pad70[0xC];
    void *unk7C;
    char pad80[0x1158];
    struct Entry_func_8044D794_de *active;
    char pad11DC[0x10];
    struct Entry_func_8044D794_de *spare;
};
struct Opaque_ALVoice_s;
struct PVoice_s;
struct PVoice_s {
    Link_func_802596B4_de node;
    struct Opaque_ALVoice_s *vvoice;
    ALFilter_s14 *channelKnob;
    ALLoadFilter decoder;
    ALResampler resampler;
    ALEnvMixer4C envmixer;
    s32 offset;
};
struct PakNoteTextEntry;
struct PakNoteTextEntry {
    s32 id;
    char pad4[0x10];
    u8 **text;
};
struct PakNotesMenuItem;
struct PakNotesMenuItem {
    char pad0[8];
    u32 flags;
    char padC[0x1C];
};
struct PakNotesMenu;
struct PakNotesMenu {
    char pad0[0xC];
    PakNotesMenuItem *items;
    char pad10[0x10];
    func_80242278_S1 *owner;
};
struct PakSaveContext;
struct PakSaveContext {
    char pad0[0x2E28];
    char unk_2E28;
};
struct PakSavePakSlot;
struct PakSavePakSlot {
    s32 state;
    char pad04[0x10];
    s32 saveState;
    char record[0xB4C];
    s32 checksum;
};
struct PakSavePakState;
struct PakSavePakState {
    char pad0[0x58];
    PakSavePakSlot slots[4];
    char pad2DF8[0x30];
    char buffer[0x640];
    s32 checksum;
    s32 crc;
};
struct PakSearchPlayer;
struct PakSearchPlayer {
    char pad0[0x5D8];
};
struct PakSearchMenu;
struct PakSearchMenu {
    char pad0[0x1C];
    PakSearchPlayer *player;
    func_80242278_S1 *slot;
};
struct PakSlot;
struct PakSlot {
    s32 state;
    char pad4[8];
    void *menu;
    char pad10[0x648];
    Note notes[16];
    char pad0AB8[0xA];
    char used[0xA];
    char free[0xA];
    char pad0AD6[2];
    s32 cursor;
    s32 scroll;
    void *items[3];
    char pad0AEC[0x7C];
};
struct PakState;
struct PakState {
    char pad0[0x58];
    PakSlot slots[4];
};
struct PakStatusPakSaveMenu;
struct PakStatusPakSaveMenu {
    char pad0[0x14];
    char *text;
    char pad18[4];
    SharedPlayer_func_80209CD8_de *player;
    func_80242278_S1 *slot;
};
struct Params_func_8025A844_de;
struct Params_func_8025A844_de {
    char pad0[0x18];
    s16 pan;
    char pad1A[0x1A];
};
struct PatrolBot;
struct PatrolBot {
    u8 pad0[4];
    s32 node;
    u8 pad8[4];
    s32 goal;
    u8 pad10[0x214];
    s32 route;
    s32 routePos;
};
struct PatrolPlayer;
struct PatrolPlayer {
    u8 pad0[0x1454];
    PatrolBot *bot;
};
struct PatrolActor;
struct PatrolActor {
    u8 pad0[0x1D8];
    PatrolPlayer *player;
};
struct PatrolRouteSet;
struct PatrolRouteSet {
    u8 pad0[0x7C];
    s32 *routeCount;
};
struct PickupGoalNodeList;
struct PickupGoalNodeList {
    u8 pad0[0x18];
    u32 selected;
};
struct PickupGoalObj8020EF60;
struct PickupGoalObj8020EF60 {
    u8 pad0[4];
    s32 unk_4;
    u8 pad8[4];
    u32 unk_C;
    u8 pad10[4];
    s32 history[4];
    u8 pad24[0x44];
    s32 unk_68;
    u8 pad6C[0x50];
    u32 unk_BC;
};
struct Actor_func_80214624_de;
struct Plan;
struct Plan {
    s32 p0;
    s32 unk4;
    char p8[0x28];
    func_80205628_S3 *unk30;
    char p34[0x34];
    struct Actor_func_80214624_de *unk68;
    char p6C[0x14];
    struct Actor_func_80214624_de *unk80;
    s32 unk84;
    s32 p88;
    f32 unk8C;
    f32 unk90;
    signed char unk94;
    char p95[0x1B];
    Vec3 pos;
    s32 unkBC;
};
struct Player1680;
struct Player1680 {
    char pad0[0x5DC];
    func_8023945C_S1 *mount;
    char pad5E0[0x1640 - 0x5E0];
    Mtx views[1];
};
struct Player16C0;
struct Player16C0 {
    char pad0[0x5E4];
    s32 alive;
    char pad5E8[0x1640 - 0x5E8];
    UnitMtx markers[2];
};
struct Player_func_80226950_de;
struct Player_func_80226950_de {
    char pad0[0x1454];
    char *state;
    char pad1458[0x16E8 - 0x1458];
};
struct PlayerList;
struct Player_func_80226950_de;
struct PlayerList {
    void **handle;
    struct Player_func_80226950_de *players;
    int count;
};
struct PlayerRankInner;
struct PlayerRankInner {
    char pad[0x10];
    char **text;
};
struct PlayerRankField;
struct PlayerRankField {
    char pad[0x18];
    PlayerRankInner *field;
};
union PlayerResultsContextValue28;
union PlayerResultsContextValue28 {
    char v0;
    u8 v1;
};
struct PlayerResultsContext;
struct PlayerResultsContext {
    char pad0[0x28];
    PlayerResultsContextValue28 unk_28;
    char pad28[0x32 - 0x28 - sizeof(PlayerResultsContextValue28)];
    PlayerResultsContextValue28 unk_32;
    char pad32[0x3C - 0x32 - sizeof(PlayerResultsContextValue28)];
    PlayerResultsContextValue28 unk_3C;
    char pad3C[0x46 - 0x3C - sizeof(PlayerResultsContextValue28)];
    char unk_46;
};
struct PlayerResultsPlayer;
struct PlayerResultsPlayer {
    s16 unk_0;
    s16 unk_2;
    s16 unk_4;
    s16 unk_6;
    s16 unk_8;
    char p[118];
    s8 unk_80;
};
struct PlayerResultsState;
struct PlayerResultsState {
    char p[16];
    u8 unk_10;
    char q[15];
    s32 unk_20;
    char r[8];
    s32 unk_2C;
    char a[8];
    void *unk_38;
    char b[88];
    s32 unk_94;
    s32 unk_98;
};
struct PlayerSelectionItem;
struct PlayerSelectionItem {
    char pad0[0x10];
    u8 alpha;
    char pad11[3];
    s16 x;
    s16 y;
    s16 w;
};
struct PlayerSelectionLayout;
struct PlayerSelectionLayout {
    s32 kind;
    u16 pad4[3];
    u16 title;
    func_8022EA2C_S1 cells[3];
    func_8022EA2C_S1 options[3];
};
struct PlayerSelectionPlayer;
struct PlayerSelectionPlayer {
    PlayerSelectionItem *highlight;
    s32 unk_4;
    s32 kind;
    s32 unk_C;
    s32 choice;
    char pad14[4];
    char model[0x4C0 - 0x18];
    s32 unk_4C0;
    s32 pad4C4;
};
struct PlayerSelectionState;
struct PlayerSelectionState {
    void *screen;
    s32 unk_4;
    PlayerSelectionPlayer players[4];
    PlayerSelectionItem *header;
    s32 headerStep;
    PlayerSelectionItem *footer;
    s32 footerStep;
    s32 phase;
    s32 timer;
    s32 prompt;
    PlayerSelectionItem *promptItem;
    PlayerSelectionItem *pulse;
    s32 pulseStep;
    s32 clock;
    s32 result;
};
struct PlayerStatusPlayer;
struct PlayerStatusPlayer {
    char pad0[0x5D8];
    char *record;
    char pad5DC[0x12EC - 0x5DC];
    struct PlayerStatusPlayer *partner;
    unsigned int mode;
};
struct PlayerStatusOwner;
struct PlayerStatusOwner {
    char pad0[0x1C];
    PlayerStatusPlayer *player;
};
struct View_func_80229814_de;
struct View_func_80229814_de {
    char pad0[0x544];
    s32 flash;
    char pad548[0x54D - 0x548];
    u8 level;
};
struct Player_func_80229814_de;
struct View_func_80229814_de;
struct Player_func_80229814_de {
    char pad0[0x100];
    s32 flags;
    char pad104[0x2E8 - 0x104];
    char weapon[0x458 - 0x2E8];
    char ammo[0x5D8 - 0x458];
    func_80229BE0_S2 *controls;
    struct View_func_80229814_de *view;
    char pad5E0[0x5E4 - 0x5E0];
    s32 holding;
    char pad5E8[0x670 - 0x5E8];
    f32 shield;
    char pad674[0x11D8 - 0x674];
    f32 stun;
    char pad11DC[0x1210 - 0x11DC];
    s32 marker;
    s32 markerShown;
    char pad1218[0x122C - 0x1218];
    s32 options;
};
struct Slot_func_802B2510_de;
struct Slot_func_802B2510_de {
    char pad0[0x1C];
    void *owner;
    s16 state;
    char pad22[2];
    f32 value;
    s32 timer;
    s16 amount;
    u8 flags;
    u8 extra;
};
struct Pool_func_802B2510_de;
struct Slot_func_802B2510_de;
struct Pool_func_802B2510_de {
    char pad0[0x40];
    struct Slot_func_802B2510_de *slots;
    s32 count;
};
struct ProfileStatisticsScreen;
struct ProfileStatisticsScreen {
    void *handle;
    char pad4[0x10C - 4];
    s32 index;
    char kills[0x32];
    char wins[0x32];
    char deaths[0x32];
    char score[0x32];
    char count[0x32];
};
struct Quad_func_802A1BE0_de;
struct Quad_func_802A1BE0_de {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
};
struct QueueEntry;
struct QueueEntry {
    s16 type;
    s8 subtype;
    s8 pad03;
    s32 arg6;
    s32 arg4;
    s32 arg3;
    s32 arg5;
    s32 zero14;
};
struct ReadCommand;
struct ReadCommand {
    u8 byte;
    u8 pad01[3];
    u32 unused;
};
struct Owner_func_8025B5F0_de;
struct SlotCC;
struct SlotCC {
    s32 index;
    s32 state;
    s32 used;
    char pad0[4];
    s32 key;
    char pad1[0x26];
    s16 id;
    char pad1b[0x14];
    s32 flag;
    char pad2[0x50];
    s32 mode;
    s32 value;
    s32 active;
    struct Owner_func_8025B5F0_de *owner;
    char pad3[0x18];
};
struct Header_func_8025B5F0_de;
struct RecordD90;
struct RecordD90 {
    struct Header_func_8025B5F0_de *header;
    SlotCC slots[17];
};
struct func_8021846C_S3;
struct func_8021846C_S3 {
    char pad0[0xB0];
    s32 unkB0;
};
struct Record_func_80439C80_de;
struct Record_func_80439C80_de {
    s32 count;
    char pad4[0x34 - 4];
    s32 handle;
};
struct ResourceRequest;
struct ResourceRequest {
    u8 reserved[0x14];
    void (*dispatch)(s32 argument, ResourceRequest *request);
    s32 argument;
    u8 reserved1C[4];
    void *replyQueue;
};
struct Resource_func_80294C8C_de;
struct Resource_func_80294C8C_de {
    s32 **handle;
    s32 unk4;
    u32 flags;
};
struct ResultsHeadingName;
struct ResultsHeadingName {
    char *text;
};
struct ResultsHeadingCharacter;
struct ResultsHeadingName;
struct ResultsHeadingCharacter {
    struct ResultsHeadingName *name;
    char pad4[0x70 - 4];
};
struct ResultsHeadingRecord;
struct ResultsHeadingRecord {
    char pad0[0x94];
    s32 times[(0x190 - 0x94) / 4];
};
struct ResultsHeadingScreen;
struct ResultsHeadingScreen {
    char pad0[0x970];
    void *window;
    char pad974[0x9A0 - 0x974];
    char heading[0x32];
    char time[0x32];
    char padA04[0xA44 - 0xA04];
    s32 stage;
    char padA48[0xA5C - 0xA48];
    s32 record;
};
struct LevelSpawnLevelSlot;
struct ResultsHeadingSettings;
struct ResultsHeadingSettings {
    char pad0[0xD];
    u8 players;
    char padE[0xD0 - 0xE];
    struct LevelSpawnLevelSlot status[4];
};
struct ResultsHeadingStage;
struct ResultsHeadingStage {
    char pad0[0x24];
    u8 time;
};
struct Rider_func_80245D30_de;
struct Rider_func_80245D30_de {
    char pad0[0x38];
    s32 flags;
    char pad3c[0x30];
    f32 yaw;
};
struct Mid802131E0;
struct Root802131E0;
struct Root802131E0 {
    u8 pad0[0x1D8];
    struct Mid802131E0 *unk1D8;
};
struct Root_func_8027FF58_de;
struct Root_func_8027FF58_de {
    char pad[0xFC28];
    HeadRecord heads[3];
};
struct Root_func_8041C7F4_de;
struct Root_func_8041C7F4_de {
    char p0[0x190];
    Entity_func_8041C7F4_de obj;
    char p360[0x118];
    int active;
    char p47c[0x10];
    Vec3 pos;
    f32 scale;
    int refresh;
    int angle;
};
struct RouteArrivalBrain;
struct RouteArrivalBrain {
    char pad0[0xC];
    s32 node;
    char pad10[0x64 - 0x10];
    void *target;
};
struct SceneState;
struct SceneState {
    u8 pad00[0xF];
    u8 actor_byte;
    u8 pad10[0xC0];
    Vec3 direction;
};
struct Window_func_80421AE8_de;
struct Window_func_80421AE8_de {
    u8 pad0[0x10];
    s8 unk10;
};
struct ScreenState;
struct Window_func_80421AE8_de;
struct ScreenState {
    s32 screen;
    s32 label;
    struct Window_func_80421AE8_de *window;
    s32 state;
};
struct Screen_func_80422960_de;
struct Screen_func_80422960_de {
    char pad0[0x1C];
    s32 choice;
    char pad20[0x60 - 0x20];
    s32 mode;
    s32 arena;
};
struct Item_func_8042B4D4_de;
struct Screen_func_80426918_de;
struct Screen_func_80426918_de {
    char pad0[0x978];
    struct Item_func_8042B4D4_de *left;
    char pad97C[2];
    u16 leftSpeed;
    struct Item_func_8042B4D4_de *right;
    char pad984[2];
    u16 rightSpeed;
    s32 state;
    s32 timer;
    void *prompt;
    void *button;
    char pad998[0xA48 - 0x998];
    struct Item_func_8042B4D4_de *pulse;
    char padA4C[4];
    struct Item_func_8042B4D4_de *banner;
    s32 clock;
    s32 requested;
};
struct Screen_func_804279B8_de;
struct Screen_func_804279B8_de {
    char pad[0xA44];
    s32 record;
    char padA48[0x14];
    s32 player;
};
struct Screen_func_8042972C_de;
struct Screen_func_8042972C_de {
    char pad0[0x1C];
    void *selectWidget;
    void *cursorWidget;
    void *widget24;
    void *widget28;
    void *widget2C;
    void *widget30;
    void *widget34;
    s32 countCap;
    s32 countDefault;
};
struct Selection;
struct Selection {
    u8 pad0[0x1BC];
    s32 stage;
    s32 selection;
    u8 pad1C4[4];
    s32 matches;
};
struct SessionScreenRecord;
struct SessionScreenRecord {
    char pad0[0x78];
    s8 unk_78;
    char pad79[0x96 - 0x79];
};
struct SessionScreenGameRecords;
struct SessionScreenGameRecords {
    char pad0[0x48];
    char unk_48[0x1310];
    SessionScreenRecord records[8];
};
struct SessionScreenSettings;
struct SessionScreenSettings {
    char pad0[0x24];
    s8 unk_24;
    s8 unk_25;
};
struct Settings_func_804279B8_de;
struct Settings_func_804279B8_de {
    char pad[13];
    u8 mode;
    char padE[0xC2];
    Entry_func_804279B8_de entries[4];
};
struct Shape_D_800D3F18;
struct Shape_D_800D3F18 {
    unsigned char padding_0[4];
    int field_4;
};
struct Shape_D_800E58E8;
struct Shape_D_800E58E8 {
    unsigned char padding_0[4];
    int field_4;
};
struct Shape_D_8013EFE8;
struct Shape_D_8013EFE8 {
    unsigned char padding_0[108];
    float field_6C;
    float field_70;
    unsigned char padding_74[180];
    float field_128;
    unsigned char padding_12C[4];
    float field_130;
    unsigned char padding_134[360];
    float field_29C;
    float field_2A0;
    float field_2A4;
    float field_2A8;
};
struct Shape_D_80140FE8;
struct Shape_D_80140FE8 {
    unsigned char padding_0[108];
    float field_6C;
    float field_70;
    unsigned char padding_74[180];
    float field_128;
    unsigned char padding_12C[4];
    float field_130;
    unsigned char padding_134[360];
    float field_29C;
    float field_2A0;
    float field_2A4;
    float field_2A8;
};
struct Shape_D_801487B4_2;
struct Shape_D_801487B4_2 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
};
struct Shape_D_8014AFE8;
struct Shape_D_8014AFE8 {
    unsigned char padding_0[108];
    float field_6C;
    float field_70;
    unsigned char padding_74[180];
    float field_128;
    unsigned char padding_12C[4];
    float field_130;
    unsigned char padding_134[360];
    float field_29C;
    float field_2A0;
    float field_2A4;
    float field_2A8;
};
struct Shape_D_801527B4_2;
struct Shape_D_801527B4_2 {
    int field_0;
    unsigned char padding_4[964];
    unsigned char unknown_3C8[4];
    int field_3CC;
    unsigned char unknown_3D0[4];
    int field_3D4;
    unsigned char unknown_3D8[4];
    int field_3DC;
    unsigned char unknown_3E0[4];
    unsigned char unknown_3E4[4];
    unsigned char unknown_3E8[4];
    int field_3EC;
    int field_3F0;
    unsigned char padding_3F4[64];
    int field_434;
    int field_438;
    int field_43C;
    int field_440;
    int field_444;
    int field_448;
    int field_44C;
    int field_450;
    int field_454;
    unsigned char unknown_458[4];
    int field_45C;
    unsigned char unknown_460[4];
    int field_464;
    int field_468;
    int field_46C;
};
struct Shape_D_801587B4_2;
struct Shape_D_801587B4_2 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_func_80203278_de;
struct Shape_func_80203278_de {
    int field_0;
    unsigned char padding_4[16];
    unsigned char unknown_14[4];
    unsigned char padding_18[112];
    unsigned char unknown_88[4];
    unsigned char padding_8C[16];
    unsigned char unknown_9C[4];
    unsigned char padding_A0[16];
    unsigned char unknown_B0[4];
    unsigned char unknown_B4[4];
    unsigned char padding_B8[12];
    unsigned char unknown_C4[4];
    unsigned char padding_C8[16];
    unsigned char unknown_D8[4];
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    int field_E4;
    unsigned char unknown_E8[4];
    int field_EC;
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    unsigned char unknown_100[4];
};
struct Shape_func_80205720_de;
struct Shape_func_80205720_de {
    unsigned char field_0;
    unsigned char field_1;
    unsigned char padding_2[31];
    unsigned char field_21;
    unsigned char field_22;
    unsigned char field_23;
    unsigned char field_24;
    unsigned char padding_25[3];
    unsigned char field_28;
};
/* Shape_func_80206A20_de: partial shape; common base param:func_802079B0_de:r4; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_80206DD4_de: partial shape; common base field:param:func_802079B0_de:r4:24; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_802079B0_de_2;
struct Shape_func_802079B0_de_2 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
    unsigned char padding_70[1292];
    unsigned char unknown_57C[4];
    unsigned char unknown_580[4];
    unsigned char padding_584[12];
    unsigned char unknown_590[4];
};
struct Shape_func_802079B0_de_4;
struct Shape_func_802079B0_de_4 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_func_802079B0_de_6;
struct Shape_func_802079B0_de_6 {
    unsigned char padding_0[28];
    int field_1C;
    unsigned char padding_20[192];
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char padding_F4[556];
    int field_320;
    int field_324;
    int field_328;
    int field_32C;
};
/* Shape_func_80209C5C_de: partial shape; common base field:field:param:func_80210248_eu:r4:0:1496; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_80209C5C_de_2: partial shape; common base field:param:func_80210248_eu:r4:0; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_80209C5C_de_3: partial shape; common base param:func_80210248_eu:r4; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8020AF9C_de;
struct Shape_func_8020AF9C_de {
    void * field_0;
    int field_4;
    void * field_8;
    int field_C;
    void * field_10;
    unsigned char padding_14[4];
    int field_18;
    float field_1C;
    unsigned char unknown_20[4];
    void * field_24;
};
struct Shape_func_8020AF9C_de_3;
struct Shape_func_8020AF9C_de_3 {
    int field_0;
};
struct Shape_func_8020BC50_de;
struct Shape_func_8020BC50_de {
    int field_0;
};
/* Shape_func_8020D364_de: partial shape; common base param:func_8020D364_de:r4; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8020D364_de_2;
struct Shape_func_8020D364_de_2 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    int field_2C;
};
/* Shape_func_8020DC10_de: partial shape; common base param:func_80210198_eu:r4; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8020DC60_de: partial shape; common base field:param:func_80210198_eu:r4:0; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_80210198_eu_2;
struct Shape_func_80210198_eu_2 {
    int field_0;
    unsigned char padding_4[964];
    unsigned char unknown_3C8[4];
    int field_3CC;
    unsigned char unknown_3D0[4];
    int field_3D4;
    unsigned char unknown_3D8[4];
    int field_3DC;
    unsigned char unknown_3E0[4];
    unsigned char unknown_3E4[4];
    unsigned char unknown_3E8[4];
    int field_3EC;
    int field_3F0;
    unsigned char padding_3F4[64];
    int field_434;
    int field_438;
    int field_43C;
    int field_440;
    int field_444;
    int field_448;
    int field_44C;
    int field_450;
    int field_454;
    unsigned char unknown_458[4];
    int field_45C;
    unsigned char unknown_460[4];
    int field_464;
    int field_468;
    int field_46C;
};
struct Shape_func_80210248_eu_2;
struct Shape_func_80210248_eu_2 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
};
/* Shape_func_80212670_de: partial shape; common base field:field:field:param:func_80212948_de:r4:472:5204:100; size unknown; common-base owner return type is incomplete or conflicting */
/* Shape_func_80212670_de_2: partial shape; common base field:field:param:func_80212948_de:r4:472:5204; size unknown; common-base owner return type is incomplete or conflicting */
struct Shape_func_80212948_de_3;
struct Shape_func_80212948_de_3 {
    int field_0;
    int field_4;
    unsigned char padding_8[28];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char padding_2C[16];
    int field_3C;
    unsigned char unknown_40[4];
    int field_44;
    unsigned char unknown_48[4];
    int field_4C;
    unsigned char unknown_50[4];
    int field_54;
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char padding_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char padding_70[2912];
    unsigned char unknown_BD0[4];
    unsigned char padding_BD4[2916];
    unsigned char unknown_1738[4];
    unsigned char padding_173C[2916];
    unsigned char unknown_22A0[4];
    unsigned char padding_22A4[2900];
    int field_2DF8;
    unsigned char padding_2DFC[1644];
    int field_3468;
    int field_346C;
    unsigned char unknown_3470[4];
};
struct Shape_func_80217630_de;
struct Shape_func_80217630_de {
    unsigned char unknown_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
    unsigned char unknown_20[4];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    unsigned char unknown_30[4];
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char unknown_48[4];
    unsigned char unknown_4C[4];
    unsigned char unknown_50[4];
    unsigned char unknown_54[4];
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char unknown_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char unknown_70[4];
    unsigned char unknown_74[4];
};
/* Shape_func_8021A2D4_de: partial shape; common base field:field:param:func_8021A2D4_de:r4:472:1496; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8021A2D4_de_11;
struct Shape_func_8021A2D4_de_11 {
    unsigned char padding_0[4];
    int field_4;
};
/* Shape_func_8021A2D4_de_3: partial shape; common base field:param:func_8021A2D4_de:r4:472; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8021A2D4_de_4;
struct Shape_func_8021A2D4_de_4 {
    int field_0;
    unsigned char padding_4[16];
    unsigned char unknown_14[4];
    unsigned char padding_18[112];
    unsigned char unknown_88[4];
    unsigned char padding_8C[16];
    unsigned char unknown_9C[4];
    unsigned char padding_A0[16];
    unsigned char unknown_B0[4];
    unsigned char unknown_B4[4];
    unsigned char padding_B8[12];
    unsigned char unknown_C4[4];
    unsigned char padding_C8[16];
    unsigned char unknown_D8[4];
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    int field_E4;
    unsigned char unknown_E8[4];
    int field_EC;
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    unsigned char unknown_100[4];
};
/* Shape_func_8021A2D4_de_5: partial shape; common base param:func_8021A2D4_de:r6; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8021A2D4_de_6;
struct Shape_func_8021A2D4_de_6 {
    int field_0;
};
struct Shape_func_8021A2D4_de_9;
struct Shape_func_8021A2D4_de_9 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
/* Shape_func_8021C45C_de: partial shape; common base field:param:func_8022E260_de:r4:472; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8021D774_de;
struct Shape_func_8021D774_de {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    unsigned char padding_1C[228];
    int field_100;
};
struct Shape_func_80220ED4_de;
struct Shape_func_80220ED4_de {
    unsigned char field_0;
    unsigned char padding_1[19];
    int field_14;
    void * field_18;
    float field_1C;
    float field_20;
    float field_24;
    unsigned char padding_28[140];
    int field_B4;
    int field_B8;
    unsigned char padding_BC[68];
    int field_100;
    unsigned char padding_104[108];
    int field_170;
    int field_174;
    unsigned char padding_178[36];
    unsigned short field_19C;
    unsigned char padding_19E[7];
    unsigned char unknown_1A5[1];
    unsigned char padding_1A6[42];
    int field_1D0;
    unsigned char padding_1D4[180];
    int field_288;
    unsigned char padding_28C[4440];
    int field_13E4;
};
struct Shape_func_80222FE0_de;
struct Shape_func_80222FE0_de {
    int field_0;
};
/* Shape_func_80223E34_de: partial shape; common base param:func_80224408_de:r4; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_80223E34_de_2: partial shape; common base param:func_80224408_de:r5; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_80224408_de_2;
struct Shape_func_80224408_de_2 {
    void * field_0;
    void * field_4;
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
};
struct Shape_func_80226A34_de;
struct Shape_func_80226A34_de {
    int field_0;
    int field_4;
    unsigned char padding_8[24];
    int field_20;
    unsigned char padding_24[28];
    int field_40;
};
/* Shape_func_80228E60_eu: partial shape; common base field:param:func_802321C8_de:r4:472; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8022B184_de: partial shape; common base field:param:func_8023334C_de:r4:472; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8022BC14_de: partial shape; common base field:param:func_8022FC20_de:r4:472; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8022CB5C_de: partial shape; common base param:func_8022CB5C_de:r4; size unknown; common-base owner parameter types are incomplete or conflicting */
struct Shape_func_8022CB5C_de_2;
struct Shape_func_8022CB5C_de_2 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    unsigned char unknown_2C[4];
    int field_30;
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
    int field_54;
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
};
struct Shape_func_8022CB5C_de_4;
struct Shape_func_8022CB5C_de_4 {
    int field_0;
    int field_4;
    unsigned char unknown_8[4];
    int field_C;
    int field_10;
    unsigned char unknown_14[4];
    int field_18;
    unsigned char unknown_1C[4];
    float field_20;
    float field_24;
    float field_28;
    float field_2C;
    float field_30;
    float field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    unsigned char unknown_4C[4];
    int field_50;
    int field_54;
    int field_58;
    unsigned char unknown_5C[4];
    int field_60;
    float field_64;
    unsigned char padding_68[8];
    int field_70;
    int field_74;
    unsigned char padding_78[40];
    float field_A0;
    float field_A4;
    int field_A8;
    int field_AC;
    int field_B0;
    int field_B4;
    unsigned char unknown_B8[4];
    unsigned char unknown_BC[4];
    unsigned char unknown_C0[4];
    unsigned char unknown_C4[4];
    unsigned char unknown_C8[4];
    unsigned char unknown_CC[4];
    unsigned char unknown_D0[4];
    unsigned char unknown_D4[4];
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    unsigned char unknown_EC[4];
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    unsigned char unknown_FC[4];
    float field_100;
    int field_104;
    float field_108;
    float field_10C;
    float field_110;
    float field_114;
    unsigned char padding_118[200];
    int field_1E0;
};
/* Shape_func_8022CDBC_de: partial shape; common base param:func_8022CDBC_de:r5; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8022CDBC_de_2;
struct Shape_func_8022CDBC_de_2 {
    unsigned char padding_0[4];
    short field_4;
    short field_6;
    unsigned char unknown_8[2];
    short field_A;
    unsigned char padding_C[8];
    int field_14;
    int field_18;
};
struct Shape_func_8022E260_de_2;
struct Shape_func_8022E260_de_2 {
    unsigned char padding_0[272];
    int field_110;
    int field_114;
};
struct Shape_func_8022E260_de_4;
struct Shape_func_8022E260_de_4 {
    unsigned char padding_0[28];
    int field_1C;
};
struct Shape_func_8022E260_de_6;
struct Shape_func_8022E260_de_6 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    unsigned char padding_1C[228];
    int field_100;
};
struct Shape_func_8022E260_de_8;
struct Shape_func_8022E260_de_8 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
    unsigned char padding_70[1292];
    unsigned char unknown_57C[4];
    unsigned char unknown_580[4];
    unsigned char padding_584[12];
    unsigned char unknown_590[4];
};
struct Shape_func_8022E290_de;
struct Shape_func_8022E290_de {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
    unsigned char padding_70[1292];
    unsigned char unknown_57C[4];
    unsigned char unknown_580[4];
    unsigned char padding_584[12];
    unsigned char unknown_590[4];
    unsigned char padding_594[64];
    int field_5D4;
    unsigned char padding_5D8[232];
    unsigned char unknown_6C0[4];
    unsigned char unknown_6C4[4];
    unsigned char unknown_6C8[4];
    unsigned char unknown_6CC[4];
    unsigned char unknown_6D0[4];
    unsigned char unknown_6D4[4];
    unsigned char unknown_6D8[4];
    unsigned char unknown_6DC[4];
    unsigned char padding_6E0[4];
    unsigned char unknown_6E4[4];
    unsigned char unknown_6E8[4];
    unsigned char unknown_6EC[4];
    unsigned char unknown_6F0[4];
    unsigned char padding_6F4[4];
    unsigned char unknown_6F8[4];
    unsigned char unknown_6FC[4];
    unsigned char unknown_700[4];
    unsigned char padding_704[4];
    unsigned char unknown_708[4];
    unsigned char unknown_70C[4];
    unsigned char unknown_710[4];
    unsigned char unknown_714[4];
    unsigned char padding_718[12];
    unsigned char unknown_724[4];
    unsigned char unknown_728[4];
    unsigned char unknown_72C[4];
    unsigned char unknown_730[4];
    unsigned char unknown_734[4];
    unsigned char unknown_738[4];
    unsigned char unknown_73C[4];
    float field_740;
    float field_744;
    float field_748;
    float field_74C;
    float field_750;
    float field_754;
    unsigned char unknown_758[4];
    unsigned char unknown_75C[4];
    unsigned char padding_760[32];
    float field_780;
    float field_784;
    unsigned char padding_788[2604];
    unsigned char unknown_11B4[4];
    unsigned char unknown_11B8[4];
    unsigned char padding_11BC[660];
    int field_1450;
};
struct Shape_func_8022FC20_de_2;
struct Shape_func_8022FC20_de_2 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
};
/* Shape_func_80232744_de: partial shape; common base param:func_80267D70_de:r5; size unknown; common-base owner parameter types are incomplete or conflicting */
struct Shape_func_8023334C_de_2;
struct Shape_func_8023334C_de_2 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    int field_18;
};
struct Shape_func_80235AE0_de;
struct Shape_func_80235AE0_de {
    unsigned char padding_0[272];
    int field_110;
    int field_114;
};
struct Shape_func_80236F1C_de;
struct Shape_func_80236F1C_de {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    unsigned char padding_10[16];
    int field_20;
    unsigned char padding_24[12];
    int field_30;
    unsigned char padding_34[1324];
    unsigned char unknown_560[1];
    unsigned char unknown_561[1];
    unsigned char unknown_562[1];
    unsigned char padding_563[2337];
    int field_E84;
    unsigned char padding_E88[156];
    int field_F24;
    unsigned char padding_F28[688];
    int field_11D8;
    unsigned char padding_11DC[20];
    int field_11F0;
    unsigned char padding_11F4[12];
    int field_1200;
};
struct Shape_func_80239770_de;
struct Shape_func_80239770_de {
    unsigned char padding_0[12];
    float field_C;
    float field_10;
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
    unsigned char unknown_20[4];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    float field_30;
    float field_34;
    float field_38;
    float field_3C;
};
struct Shape_func_8023BD34_de;
struct Shape_func_8023BD34_de {
    unsigned char unknown_0[4];
};
struct Shape_func_8023C1F0_de;
struct Shape_func_8023C1F0_de {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
};
struct Shape_func_8023C1F0_de_2;
struct Shape_func_8023C1F0_de_2 {
    unsigned char unknown_0[4];
};
struct Shape_func_8023C1F0_de_3;
struct Shape_func_8023C1F0_de_3 {
    int field_0;
    int field_4;
    unsigned short field_8;
    unsigned char padding_A[2];
    int field_C;
};
struct Shape_func_80244D70_de;
struct Shape_func_80244D70_de {
    int field_0;
    int field_4;
    unsigned char unknown_8[4];
    int field_C;
    int field_10;
    unsigned char unknown_14[4];
    int field_18;
    unsigned char unknown_1C[4];
    float field_20;
    float field_24;
    float field_28;
    float field_2C;
    float field_30;
    float field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    unsigned char unknown_4C[4];
    int field_50;
    int field_54;
    int field_58;
    unsigned char unknown_5C[4];
    int field_60;
    float field_64;
    unsigned char padding_68[8];
    int field_70;
    int field_74;
    unsigned char padding_78[40];
    float field_A0;
    float field_A4;
    int field_A8;
    int field_AC;
    int field_B0;
    int field_B4;
    unsigned char unknown_B8[4];
    unsigned char unknown_BC[4];
    unsigned char unknown_C0[4];
    unsigned char unknown_C4[4];
    unsigned char unknown_C8[4];
    unsigned char unknown_CC[4];
    unsigned char unknown_D0[4];
    unsigned char unknown_D4[4];
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    unsigned char unknown_EC[4];
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    unsigned char unknown_FC[4];
    float field_100;
    int field_104;
    float field_108;
    float field_10C;
    float field_110;
    float field_114;
    unsigned char padding_118[200];
    int field_1E0;
};
struct Shape_func_80244E58_de;
struct Shape_func_80244E58_de {
    unsigned char padding_0[108];
    float field_6C;
    float field_70;
    unsigned char padding_74[180];
    float field_128;
    unsigned char padding_12C[4];
    float field_130;
    unsigned char padding_134[360];
    float field_29C;
    float field_2A0;
    float field_2A4;
    float field_2A8;
};
/* Shape_func_8024A3B0_de: partial shape; common base field:param:func_8021A2D4_de:r6:12; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8024A5A8_de: partial shape; common base field:param:func_8024A5A8_de:r7:12; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8024BD08_de: partial shape; common base field:param:func_8024BD08_de:r4:20; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8024BD08_de_2;
struct Shape_func_8024BD08_de_2 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
/* Shape_func_8024D264_de: partial shape; common base param:func_80299E74_de:r16; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_80254E30_de;
struct Shape_func_80254E30_de {
    unsigned char padding_0[16];
    unsigned char unknown_10[4];
};
struct Shape_func_80255630_de;
struct Shape_func_80255630_de {
    unsigned char unknown_0[4];
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char unknown_10[4];
};
struct Shape_func_80257360_de;
struct Shape_func_80257360_de {
    unsigned char padding_0[36];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    unsigned char padding_30[76];
    void * field_7C;
    void * field_80;
    unsigned char padding_84[84];
    unsigned char unknown_D8[4];
    unsigned char padding_DC[38];
    unsigned char unknown_102[2];
    int field_104;
    unsigned char unknown_108[4];
    int field_10C;
    unsigned char padding_110[28];
    int field_12C;
    unsigned char padding_130[4];
    int field_134;
    unsigned char padding_138[7220];
    unsigned char unknown_1D6C[4];
    unsigned char padding_1D70[3544];
    int field_2B48;
    int field_2B4C;
    unsigned char unknown_2B50[4];
    int field_2B54;
    unsigned char unknown_2B58[4];
    unsigned char unknown_2B5C[4];
    unsigned char unknown_2B60[4];
    unsigned char unknown_2B64[4];
    unsigned char padding_2B68[8];
    unsigned char unknown_2B70[4];
    unsigned char unknown_2B74[4];
    unsigned char unknown_2B78[4];
    unsigned char unknown_2B7C[4];
    unsigned char unknown_2B80[4];
    unsigned char unknown_2B84[4];
    unsigned char unknown_2B88[4];
    unsigned char unknown_2B8C[2];
    unsigned char padding_2B8E[2];
    unsigned char unknown_2B90[4];
    unsigned char unknown_2B94[1];
    unsigned char padding_2B95[3];
    unsigned char unknown_2B98[4];
    float field_2B9C;
    float field_2BA0;
    float field_2BA4;
    float field_2BA8;
    int field_2BAC;
    unsigned char unknown_2BB0[4];
    int field_2BB4;
    unsigned char unknown_2BB8[4];
    float field_2BBC;
};
struct Shape_func_802627A0_de;
struct Shape_func_802627A0_de {
    unsigned char padding_0[24320];
    int field_5F00;
    unsigned char padding_5F04[32];
    int field_5F24;
};
struct Shape_func_802627A0_de_2;
struct Shape_func_802627A0_de_2 {
    unsigned char padding_0[752];
    unsigned char unknown_2F0[4];
};
struct Shape_func_80267D70_de_2;
struct Shape_func_80267D70_de_2 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    int field_2C;
};
struct Shape_func_80268A40_de;
struct Shape_func_80268A40_de {
    int field_0;
    unsigned char padding_4[16];
    int field_14;
};
/* Shape_func_802764D4_de: partial shape; common base param:func_802764D4_de:r4; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8027A948_de: partial shape; common base field:field:param:func_8027ABF4_de:r4:280:48; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8027A948_de_2: partial shape; common base field:param:func_8027ABF4_de:r4:280; size unknown; common-base owner ABI is incomplete or conflicting */
/* Shape_func_8027A948_de_3: partial shape; common base param:func_8027ABF4_de:r4; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_8027ABF4_de_4;
struct Shape_func_8027ABF4_de_4 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
};
struct Shape_func_8027ABF4_de_6;
struct Shape_func_8027ABF4_de_6 {
    unsigned char padding_0[108];
    float field_6C;
    float field_70;
    unsigned char padding_74[180];
    float field_128;
    unsigned char padding_12C[4];
    float field_130;
    unsigned char padding_134[360];
    float field_29C;
    float field_2A0;
    float field_2A4;
    float field_2A8;
};
struct Shape_func_8027CC20_de;
struct Shape_func_8027CC20_de {
    int field_0;
};
struct Shape_func_802800C0_de;
struct Shape_func_802800C0_de {
    unsigned char padding_0[64512];
    int field_FC00;
    unsigned char padding_FC04[16];
    int field_FC14;
    unsigned char padding_FC18[36];
    int field_FC3C;
    unsigned char padding_FC40[16];
    int field_FC50;
    unsigned char padding_FC54[16];
    int field_FC64;
    int field_FC68;
};
struct Shape_func_80285F58_de;
struct Shape_func_80285F58_de {
    int field_0;
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char unknown_1C[4];
    int field_20;
    int field_24;
    unsigned char unknown_28[4];
    int field_2C;
    unsigned char padding_30[4];
    unsigned char unknown_34[4];
    int field_38;
    int field_3C;
    unsigned char padding_40[4];
    int field_44;
    int field_48;
    unsigned char padding_4C[4];
    int field_50;
    int field_54;
    unsigned char padding_58[4];
    int field_5C;
    unsigned char padding_60[12];
    int field_6C;
    int field_70;
    unsigned char padding_74[4];
    int field_78;
    int field_7C;
    int field_80;
    unsigned char unknown_84[4];
    unsigned char unknown_88[4];
    unsigned char padding_8C[4];
    unsigned char unknown_90[4];
    void * field_94;
    unsigned char unknown_98[4];
    void * field_9C;
    void * field_A0;
    void * field_A4;
    void * field_A8;
    void * field_AC;
    unsigned char unknown_B0[4];
    unsigned char unknown_B4[4];
    unsigned char padding_B8[56];
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    unsigned char unknown_FC[4];
    unsigned char padding_100[12];
    unsigned char unknown_10C[4];
    unsigned char padding_110[16];
    unsigned char unknown_120[4];
    unsigned char unknown_124[4];
    unsigned char padding_128[16];
    int field_138;
    unsigned char padding_13C[4];
    int field_140;
    unsigned char padding_144[3736];
    int field_FDC;
    unsigned char padding_FE0[480];
    int field_11C0;
    int field_11C4;
    int field_11C8;
    int field_11CC;
    int field_11D0;
    int field_11D4;
    unsigned char padding_11D8[4];
    void * field_11DC;
    unsigned char padding_11E0[12];
    int field_11EC;
    unsigned char padding_11F0[788];
    int field_1504;
    unsigned char padding_1508[105984];
    unsigned char unknown_1B308[4];
    unsigned char padding_1B30C[16];
    unsigned char unknown_1B31C[4];
    unsigned char padding_1B320[236];
    int field_1B40C;
    unsigned char unknown_1B410[4];
    unsigned char unknown_1B414[4];
    unsigned char unknown_1B418[4];
    unsigned char unknown_1B41C[4];
    unsigned char padding_1B420[20];
    unsigned char unknown_1B434[4];
    unsigned char unknown_1B438[4];
    unsigned char unknown_1B43C[4];
    unsigned char unknown_1B440[4];
    unsigned char unknown_1B444[4];
    unsigned char unknown_1B448[4];
    unsigned char unknown_1B44C[4];
    unsigned char padding_1B450[452];
    unsigned char unknown_1B614[4];
    unsigned char unknown_1B618[4];
    unsigned char unknown_1B61C[4];
    unsigned char padding_1B620[64];
    unsigned char unknown_1B660[4];
    unsigned char padding_1B664[64];
    unsigned char unknown_1B6A4[4];
    unsigned char padding_1B6A8[4];
    unsigned char unknown_1B6AC[4];
};
struct Shape_func_8028B21C_de;
struct Shape_func_8028B21C_de {
    unsigned char padding_0[4];
    int field_4;
};
struct Shape_func_8028F754_de;
struct Shape_func_8028F754_de {
    unsigned char unknown_0[2];
    unsigned char padding_2[30];
    unsigned char unknown_20[2];
    unsigned char padding_22[702];
    int field_2E0;
    unsigned char unknown_2E4[4];
    unsigned char unknown_2E8[4];
    unsigned char unknown_2EC[4];
    unsigned char unknown_2F0[4];
    unsigned char unknown_2F4[4];
    unsigned char unknown_2F8[4];
    unsigned char unknown_2FC[4];
    unsigned char unknown_300[4];
};
struct Shape_func_80291208_de;
struct Shape_func_80291208_de {
    unsigned char padding_0[960];
    void * field_3C0;
    int field_3C4;
    unsigned char padding_3C8[156765];
    unsigned char field_26825;
    unsigned char padding_26826[1418];
    float field_26DB0;
    unsigned char unknown_26DB4[4];
    int field_26DB8;
    int field_26DBC;
    unsigned char field_26DC0;
    unsigned char field_26DC1;
    unsigned char padding_26DC2[2];
    float field_26DC4;
    unsigned char unknown_26DC8[4];
    unsigned char unknown_26DCC[4];
    unsigned char unknown_26DD0[4];
    int field_26DD4;
    unsigned char unknown_26DD8[4];
    unsigned char unknown_26DDC[4];
};
struct Shape_func_8029192C_de;
struct Shape_func_8029192C_de {
    unsigned char padding_0[280];
    unsigned char unknown_118[4];
};
struct Shape_func_8029192C_de_2;
struct Shape_func_8029192C_de_2 {
    unsigned char padding_0[32];
    unsigned char unknown_20[4];
    unsigned char padding_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    unsigned char unknown_30[4];
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char unknown_48[4];
    unsigned char unknown_4C[4];
    unsigned char unknown_50[4];
    unsigned char unknown_54[4];
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char unknown_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char unknown_70[4];
    unsigned char unknown_74[4];
    unsigned char padding_78[16];
    unsigned char unknown_88[4];
    unsigned char padding_8C[4];
    unsigned char unknown_90[4];
    unsigned char unknown_94[4];
    unsigned char unknown_98[4];
    unsigned char unknown_9C[4];
    unsigned char unknown_A0[4];
    unsigned char unknown_A4[4];
    unsigned char unknown_A8[4];
    unsigned char unknown_AC[4];
    unsigned char unknown_B0[4];
    unsigned char unknown_B4[4];
    unsigned char unknown_B8[4];
    unsigned char unknown_BC[4];
    unsigned char unknown_C0[4];
    unsigned char unknown_C4[4];
    unsigned char unknown_C8[4];
    unsigned char unknown_CC[4];
    unsigned char unknown_D0[4];
    unsigned char unknown_D4[4];
    unsigned char unknown_D8[4];
    unsigned char unknown_DC[4];
    unsigned char padding_E0[48];
    int field_110;
    int field_114;
    int field_118;
    int field_11C;
    int field_120;
    unsigned char unknown_124[4];
    int field_128;
};
struct Shape_func_80295B00_us_rev1;
struct Shape_func_80295B00_us_rev1 {
    unsigned char field_0;
    unsigned char padding_1[1];
    unsigned char field_2;
    unsigned char field_3;
};
struct Shape_func_80296CD0_de;
struct Shape_func_80296CD0_de {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char unknown_18[4];
    unsigned char padding_1C[1284];
    int field_520;
    unsigned char unknown_524[4];
    int field_528;
    int field_52C;
    int field_530;
    int field_534;
    int field_538;
    int field_53C;
    int field_540;
};
struct Shape_func_8029A558_de;
struct Shape_func_8029A558_de {
    int field_0;
};
struct Shape_func_802A42F4_de;
struct Shape_func_802A42F4_de {
    int field_0;
    unsigned char padding_4[9604];
    unsigned char unknown_2588[4];
    unsigned char unknown_258C[4];
    unsigned char padding_2590[20376];
    int field_7528;
    unsigned char padding_752C[104];
    int field_7594;
    unsigned char padding_7598[8208];
    int field_95A8;
    unsigned char padding_95AC[12];
    int field_95B8;
};
struct Shape_func_802AA730_de;
struct Shape_func_802AA730_de {
    unsigned char padding_0[60];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char padding_48[60];
    unsigned char unknown_84[4];
    unsigned char unknown_88[4];
    unsigned char unknown_8C[4];
};
/* Shape_func_802AFB6C_de: partial shape; common base param:func_802AFB6C_de:r4; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_802AFB6C_de_2;
struct Shape_func_802AFB6C_de_2 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
/* Shape_func_802B0A90_de: partial shape; common base param:func_802B0A90_de:r4; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_802B0A90_de_2;
struct Shape_func_802B0A90_de_2 {
    unsigned char padding_0[8];
    short field_8;
};
/* Shape_func_802B18E4_de: partial shape; common base param:func_802B18E4_de:r4; size unknown; common-base owner parameter types are incomplete or conflicting */
struct Shape_func_802B18E4_de_2;
struct Shape_func_802B18E4_de_2 {
    int field_0;
    unsigned char padding_4[24];
    int field_1C;
    int field_20;
    unsigned char padding_24[8];
    int field_2C;
    unsigned char padding_30[8];
    void * field_38;
    unsigned char padding_3C[12];
    int field_48;
};
/* Shape_func_802B1FE8_de: partial shape; common base param:func_802B1FE8_de:r4; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_802B1FE8_de_2;
struct Shape_func_802B1FE8_de_2 {
    unsigned char padding_0[20];
    unsigned char unknown_14[2];
};
struct Shape_func_802B1FE8_de_4;
struct Shape_func_802B1FE8_de_4 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char padding_24[4];
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
};
/* Shape_func_802B23C4_de: partial shape; common base field:param:func_802B1FE8_de:r4:8; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_802B2FB0_de;
struct Shape_func_802B2FB0_de {
    int field_0;
    unsigned char padding_4[16];
    int field_14;
    unsigned char padding_18[4];
    int field_1C;
    int field_20;
    unsigned char padding_24[8];
    int field_2C;
    unsigned char padding_30[8];
    void * field_38;
    unsigned char padding_3C[8];
    float field_44;
    int field_48;
};
struct Shape_func_802B31F0_de;
struct Shape_func_802B31F0_de {
    unsigned char unknown_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
    unsigned char unknown_20[4];
    int field_24;
    unsigned char unknown_28[4];
    int field_2C;
    int field_30;
    int field_34;
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char unknown_48[4];
};
/* Shape_func_802B3770_de: partial shape; common base param:func_802B24A0_de:r5; size unknown; common-base owner parameter types are incomplete or conflicting */
struct Shape_func_802B3EDC_de;
struct Shape_func_802B3EDC_de {
    unsigned char padding_0[20];
    int field_14;
    unsigned char unknown_18[4];
    int field_1C;
};
struct Shape_func_802B4454_de;
struct Shape_func_802B4454_de {
    unsigned char padding_0[20];
    int field_14;
    unsigned char unknown_18[4];
    int field_1C;
};
struct Shape_func_802B57F0_de_2;
struct Shape_func_802B57F0_de_2 {
    int field_0;
    int field_4;
};
/* Shape_func_802B93B0_de: partial shape; common base global:D_801487B4; size unknown; overlapping, negative or inconsistent observed storage intervals */
struct Shape_func_802B9A04_eu_x;
struct Shape_func_802B9A04_eu_x {
    unsigned short field_0;
    unsigned char unknown_2[2];
    int field_4;
    int field_8;
    int field_C;
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char padding_18[8];
    int field_20;
    float field_24;
    unsigned short field_28;
    unsigned char padding_2A[2];
    int field_2C;
};
struct Shape_func_802BA210_de;
struct Shape_func_802BA210_de {
    unsigned char padding_0[4];
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
};
struct Shape_func_802BB160_de;
struct Shape_func_802BB160_de {
    unsigned char padding_0[4];
    int field_4;
    unsigned char padding_8[8];
    unsigned char unknown_10[2];
    unsigned char padding_12[6];
    int field_18;
    unsigned char padding_1C[124];
    unsigned char unknown_98[8];
    unsigned char unknown_A0[8];
    unsigned char unknown_A8[8];
    unsigned char unknown_B0[8];
    unsigned char unknown_B8[8];
    unsigned char unknown_C0[8];
    unsigned char unknown_C8[8];
    unsigned char unknown_D0[8];
    unsigned char padding_D8[16];
    unsigned char unknown_E8[8];
    unsigned char unknown_F0[8];
    unsigned char unknown_F8[8];
    unsigned char unknown_100[8];
    unsigned char padding_108[16];
    int field_118;
    unsigned char unknown_11C[4];
    unsigned char padding_120[8];
    int field_128;
    unsigned char unknown_12C[4];
    double field_130;
    double field_138;
    double field_140;
    unsigned char padding_148[8];
    double field_150;
    double field_158;
    double field_160;
    double field_168;
    double field_170;
    double field_178;
    double field_180;
    double field_188;
    double field_190;
    double field_198;
    double field_1A0;
    double field_1A8;
    double field_1B0;
    double field_1B8;
    double field_1C0;
    double field_1C8;
    double field_1D0;
    double field_1D8;
    double field_1E0;
    double field_1E8;
    double field_1F0;
    double field_1F8;
    double field_200;
    double field_208;
    double field_210;
    double field_218;
    double field_220;
    double field_228;
};
struct Shape_func_802BB5F0_de;
struct Shape_func_802BB5F0_de {
    unsigned char padding_0[4];
    int field_4;
};
struct Shape_func_802BB6C0_de;
struct Shape_func_802BB6C0_de {
    int field_0;
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
};
struct Shape_func_804009F4_de;
struct Shape_func_804009F4_de {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
};
struct Shape_func_80402FB4_de;
struct Shape_func_80402FB4_de {
    int field_0;
};
/* Shape_func_80407290_de: partial shape; common base field:param:func_804082FC_de:r5:32; size unknown; common-base owner parameter types are incomplete or conflicting */
/* Shape_func_80407290_de_2: partial shape; common base param:func_804082FC_de:r5; size unknown; common-base owner parameter types are incomplete or conflicting */
struct Shape_func_80407748_de;
struct Shape_func_80407748_de {
    int field_0;
    int field_4;
    float field_8;
    float field_C;
    float field_10;
    float field_14;
    unsigned char padding_18[4];
    int field_1C;
    unsigned char padding_20[2];
    short field_22;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
};
/* Shape_func_804122CC_de: partial shape; common base param:func_80412634_de:r4; size unknown; common-base owner parameter types are incomplete or conflicting */
struct Shape_func_80412634_de_2;
struct Shape_func_80412634_de_2 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_func_804136D8_de;
struct Shape_func_804136D8_de {
    unsigned char field_0;
    unsigned char padding_1[3];
    short field_4;
    short field_6;
    unsigned char unknown_8[2];
    short field_A;
    unsigned char padding_C[8];
    int field_14;
    int field_18;
};
struct Shape_func_804137F8_de;
struct Shape_func_804137F8_de {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_func_80413B54_de;
struct Shape_func_80413B54_de {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_func_8041BE90_de;
struct Shape_func_8041BE90_de {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
};
struct Shape_func_8041CEA8_us;
struct Shape_func_8041CEA8_us {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_8041CEA8_us_2;
struct Shape_func_8041CEA8_us_2 {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_8041CEA8_us_3;
struct Shape_func_8041CEA8_us_3 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_func_8041CEA8_us_4;
struct Shape_func_8041CEA8_us_4 {
    int field_0;
    int field_4;
    unsigned char padding_8[192];
    int field_C8;
    unsigned char unknown_CC[4];
    int field_D0;
    unsigned char unknown_D4[4];
    int field_D8;
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    unsigned char unknown_E4[4];
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    int field_100;
    unsigned char unknown_104[4];
    int field_108;
    int field_10C;
};
struct Shape_func_8041D134_de;
struct Shape_func_8041D134_de {
    unsigned char padding_0[12];
    short field_C;
    unsigned char padding_E[2];
    unsigned char unknown_10[1];
};
struct Shape_func_8041DF44_de;
struct Shape_func_8041DF44_de {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    int field_14;
    unsigned char unknown_18[4];
    int field_1C;
};
struct Shape_func_8041F228_de;
struct Shape_func_8041F228_de {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_8041F228_de_2;
struct Shape_func_8041F228_de_2 {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_8041F228_de_3;
struct Shape_func_8041F228_de_3 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_func_8041F228_de_4;
struct Shape_func_8041F228_de_4 {
    int field_0;
    int field_4;
    unsigned char padding_8[4896];
    int field_1328;
    unsigned char unknown_132C[4];
    int field_1330;
    unsigned char unknown_1334[4];
    int field_1338;
    unsigned char unknown_133C[4];
    unsigned char unknown_1340[4];
    unsigned char unknown_1344[4];
    int field_1348;
    unsigned char unknown_134C[4];
    unsigned char unknown_1350[4];
    unsigned char unknown_1354[4];
};
struct Shape_func_80420E20_de;
struct Shape_func_80420E20_de {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char padding_24[4];
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
};
struct Shape_func_80421AE8_de;
struct Shape_func_80421AE8_de {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_func_80422340_de;
struct Shape_func_80422340_de {
    unsigned char padding_0[32];
    int field_20;
};
struct Shape_func_804224DC_de;
struct Shape_func_804224DC_de {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_804224DC_de_2;
struct Shape_func_804224DC_de_2 {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_804224DC_de_3;
struct Shape_func_804224DC_de_3 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    unsigned char unknown_2C[4];
    int field_30;
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
    int field_54;
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
};
struct Shape_func_8042250C_us_rev1;
struct Shape_func_8042250C_us_rev1 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char padding_18[8];
    int field_20;
    unsigned char unknown_24[4];
};
struct Shape_func_80422C58_eu;
struct Shape_func_80422C58_eu {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
};
struct Shape_func_80423A40_de;
struct Shape_func_80423A40_de {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    int field_18;
};
struct Shape_func_80426304_de;
struct Shape_func_80426304_de {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_80426304_de_2;
struct Shape_func_80426304_de_2 {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_80426304_de_3;
struct Shape_func_80426304_de_3 {
    unsigned char padding_0[2416];
    int field_970;
    unsigned char unknown_974[4];
    int field_978;
    unsigned char unknown_97C[4];
    int field_980;
    unsigned char unknown_984[4];
    int field_988;
    unsigned char unknown_98C[4];
    unsigned char unknown_990[4];
    unsigned char unknown_994[4];
    int field_998;
    unsigned char unknown_99C[4];
    unsigned char padding_9A0[164];
    int field_A44;
    int field_A48;
    unsigned char unknown_A4C[4];
    int field_A50;
    int field_A54;
    unsigned char unknown_A58[4];
    int field_A5C;
    int field_A60;
    int field_A64;
    int field_A68;
    int field_A6C;
    int field_A70;
};
struct Shape_func_80426918_de;
struct Shape_func_80426918_de {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_func_80426CE4_de;
struct Shape_func_80426CE4_de {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_func_80426CE4_de_2;
struct Shape_func_80426CE4_de_2 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Shape_func_804291D0_de;
struct Shape_func_804291D0_de {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
};
struct Shape_func_80429A24_de;
struct Shape_func_80429A24_de {
    int field_0;
    unsigned char padding_4[964];
    unsigned char unknown_3C8[4];
    int field_3CC;
    unsigned char unknown_3D0[4];
    int field_3D4;
    unsigned char unknown_3D8[4];
    int field_3DC;
    unsigned char unknown_3E0[4];
    unsigned char unknown_3E4[4];
    unsigned char unknown_3E8[4];
    int field_3EC;
    int field_3F0;
    unsigned char padding_3F4[64];
    int field_434;
    int field_438;
    int field_43C;
    int field_440;
    int field_444;
    int field_448;
    int field_44C;
    int field_450;
    int field_454;
    unsigned char unknown_458[4];
    int field_45C;
    unsigned char unknown_460[4];
    int field_464;
    int field_468;
    int field_46C;
};
struct Shape_func_80429FF0_de;
struct Shape_func_80429FF0_de {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_func_80429FF0_de_2;
struct Shape_func_80429FF0_de_2 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Shape_func_8042A2B0_de;
struct Shape_func_8042A2B0_de {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_func_8042A990_de;
struct Shape_func_8042A990_de {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_func_8042B4D4_de;
struct Shape_func_8042B4D4_de {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_func_8042B4D4_de_2;
struct Shape_func_8042B4D4_de_2 {
    unsigned char padding_0[20];
    unsigned char unknown_14[2];
};
struct Shape_func_8042BB60_de;
struct Shape_func_8042BB60_de {
    unsigned char padding_0[28];
    int field_1C;
    unsigned char padding_20[192];
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char padding_F4[556];
    int field_320;
    int field_324;
    int field_328;
    int field_32C;
};
struct Shape_func_8042D9E8_de;
struct Shape_func_8042D9E8_de {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[12];
    int field_20;
};
struct Shape_func_8042EF4C_de;
struct Shape_func_8042EF4C_de {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_8042EF4C_de_2;
struct Shape_func_8042EF4C_de_2 {
    unsigned char padding_0[20];
    unsigned short field_14;
    unsigned char padding_16[2];
    short field_18;
};
struct Shape_func_8042EF4C_de_3;
struct Shape_func_8042EF4C_de_3 {
    int field_0;
    int field_4;
    unsigned char padding_8[28];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char padding_2C[16];
    int field_3C;
    unsigned char unknown_40[4];
    int field_44;
    unsigned char unknown_48[4];
    int field_4C;
    unsigned char unknown_50[4];
    int field_54;
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char padding_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char padding_70[2912];
    unsigned char unknown_BD0[4];
    unsigned char padding_BD4[2916];
    unsigned char unknown_1738[4];
    unsigned char padding_173C[2916];
    unsigned char unknown_22A0[4];
    unsigned char padding_22A4[2900];
    int field_2DF8;
    unsigned char padding_2DFC[1644];
    int field_3468;
    int field_346C;
    unsigned char unknown_3470[4];
};
struct Shape_func_80435E20_de;
struct Shape_func_80435E20_de {
    unsigned char padding_0[28];
    int field_1C;
};
struct Shape_func_804364E4_de;
struct Shape_func_804364E4_de {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    int field_2C;
};
struct Shape_func_804368F8_de;
struct Shape_func_804368F8_de {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
};
struct Shape_func_80436C94_de;
struct Shape_func_80436C94_de {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_func_80437114_de;
struct Shape_func_80437114_de {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_func_80437304_de;
struct Shape_func_80437304_de {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
};
struct Shape_func_80437718_de;
struct Shape_func_80437718_de {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_func_80437A48_de;
struct Shape_func_80437A48_de {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
    int field_94;
    int field_98;
    unsigned char unknown_9C[4];
    unsigned char padding_A0[12];
    unsigned char unknown_AC[4];
    unsigned char unknown_B0[4];
    unsigned char padding_B4[212];
    int field_188;
    unsigned char padding_18C[52];
    int field_1C0;
};
struct Shape_func_80438F0C_de;
struct Shape_func_80438F0C_de {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    unsigned char unknown_18[4];
};
struct Shape_func_80439240_de;
struct Shape_func_80439240_de {
    int field_0;
    int field_4;
};
struct Shape_func_804394DC_de;
struct Shape_func_804394DC_de {
    int field_0;
    int field_4;
};
struct Shape_func_80439EC4_de;
struct Shape_func_80439EC4_de {
    int field_0;
    int field_4;
    unsigned char padding_8[4928];
    int field_1348;
    unsigned char unknown_134C[4];
    int field_1350;
    unsigned char unknown_1354[4];
    int field_1358;
    unsigned char unknown_135C[4];
    unsigned char unknown_1360[4];
    unsigned char unknown_1364[4];
    unsigned char unknown_1368[4];
};
struct Shape_func_8043C688_de_2;
struct Shape_func_8043C688_de_2 {
    void * field_0;
    void * field_4;
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
};
/* Shape_func_804402DC_de: partial shape; common base param:func_804404A8_de:r5; size unknown; common-base owner ABI is incomplete or conflicting */
struct Shape_func_804404A8_de_2;
struct Shape_func_804404A8_de_2 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    unsigned char unknown_2C[4];
    int field_30;
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
    unsigned char padding_54[4];
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
};
/* Shape_func_80443EC0_de: partial shape; common base address:D_80142208_de; size unknown; overlapping, negative or inconsistent observed storage intervals */
struct Shape_typemap;
struct Shape_typemap {
    unsigned short field_0;
    unsigned char unknown_2[2];
    int field_4;
    int field_8;
    int field_C;
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char padding_18[8];
    int field_20;
    float field_24;
    unsigned short field_28;
    unsigned char padding_2A[2];
    int field_2C;
};
struct Shape_typemap_10;
struct Shape_typemap_10 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
    unsigned char padding_70[1292];
    unsigned char unknown_57C[4];
    unsigned char unknown_580[4];
    unsigned char padding_584[12];
    unsigned char unknown_590[4];
};
struct Shape_typemap_100;
struct Shape_typemap_100 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_101;
struct Shape_typemap_101 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_102;
struct Shape_typemap_102 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_103;
struct Shape_typemap_103 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_104;
struct Shape_typemap_104 {
    unsigned char padding_0[272];
    int field_110;
    int field_114;
};
struct Shape_typemap_105;
struct Shape_typemap_105 {
    unsigned char padding_0[272];
    int field_110;
    int field_114;
};
struct Shape_typemap_106;
struct Shape_typemap_106 {
    unsigned char padding_0[4];
    int field_4;
};
struct Shape_typemap_107;
struct Shape_typemap_107 {
    unsigned char padding_0[28];
    int field_1C;
};
struct Shape_typemap_108;
struct Shape_typemap_108 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_109;
struct Shape_typemap_109 {
    void * field_0;
    void * field_4;
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
};
struct Shape_typemap_11;
struct Shape_typemap_11 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    int field_18;
};
struct Shape_typemap_110;
struct Shape_typemap_110 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
};
struct Shape_typemap_111;
struct Shape_typemap_111 {
    unsigned char padding_0[4];
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
};
struct Shape_typemap_112;
struct Shape_typemap_112 {
    int field_0;
};
struct Shape_typemap_113;
struct Shape_typemap_113 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
};
struct Shape_typemap_115;
struct Shape_typemap_115 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
};
struct Shape_typemap_116;
struct Shape_typemap_116 {
    int field_0;
    int field_4;
    unsigned char padding_8[4896];
    int field_1328;
    unsigned char unknown_132C[4];
    int field_1330;
    unsigned char unknown_1334[4];
    int field_1338;
    unsigned char unknown_133C[4];
    unsigned char unknown_1340[4];
    unsigned char unknown_1344[4];
    int field_1348;
    unsigned char unknown_134C[4];
    unsigned char unknown_1350[4];
    unsigned char unknown_1354[4];
};
struct Shape_typemap_117;
struct Shape_typemap_117 {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_typemap_118;
struct Shape_typemap_118 {
    int field_0;
    int field_4;
};
struct Shape_typemap_119;
struct Shape_typemap_119 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_12;
struct Shape_typemap_12 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    unsigned char unknown_2C[4];
    int field_30;
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
    int field_54;
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
};
struct Shape_typemap_120;
struct Shape_typemap_120 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    float field_1C;
    float field_20;
    float field_24;
    unsigned char padding_28[140];
    int field_B4;
    int field_B8;
    unsigned char padding_BC[68];
    int field_100;
    unsigned char padding_104[108];
    int field_170;
    int field_174;
    unsigned char padding_178[45];
    unsigned char unknown_1A5[1];
    unsigned char padding_1A6[226];
    int field_288;
    unsigned char padding_28C[4440];
    int field_13E4;
};
struct Shape_typemap_121;
struct Shape_typemap_121 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_122;
struct Shape_typemap_122 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
    int field_94;
    int field_98;
    unsigned char unknown_9C[4];
    unsigned char padding_A0[12];
    unsigned char unknown_AC[4];
    unsigned char unknown_B0[4];
    unsigned char padding_B4[212];
    int field_188;
    unsigned char padding_18C[52];
    int field_1C0;
};
struct Shape_typemap_123;
struct Shape_typemap_123 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
};
struct Shape_typemap_124;
struct Shape_typemap_124 {
    unsigned char unknown_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
    unsigned char unknown_20[4];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    unsigned char unknown_30[4];
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char unknown_48[4];
    unsigned char unknown_4C[4];
    unsigned char unknown_50[4];
    unsigned char unknown_54[4];
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char unknown_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char unknown_70[4];
    unsigned char unknown_74[4];
};
struct Shape_typemap_125;
struct Shape_typemap_125 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
    int field_94;
    int field_98;
    unsigned char unknown_9C[4];
    unsigned char padding_A0[16];
    unsigned char unknown_B0[4];
    unsigned char padding_B4[212];
    int field_188;
    unsigned char padding_18C[52];
    int field_1C0;
};
struct Shape_typemap_126;
struct Shape_typemap_126 {
    unsigned char unknown_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
    unsigned char unknown_20[4];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    unsigned char unknown_30[4];
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char unknown_48[4];
    unsigned char unknown_4C[4];
    unsigned char unknown_50[4];
    unsigned char unknown_54[4];
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char unknown_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char unknown_70[4];
    unsigned char unknown_74[4];
};
struct Shape_typemap_127;
struct Shape_typemap_127 {
    int field_0;
};
struct Shape_typemap_128;
struct Shape_typemap_128 {
    int field_0;
    int field_4;
    unsigned char padding_8[192];
    int field_C8;
    unsigned char unknown_CC[4];
    int field_D0;
    unsigned char unknown_D4[4];
    int field_D8;
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    unsigned char unknown_E4[4];
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    int field_100;
    unsigned char unknown_104[4];
    int field_108;
    int field_10C;
};
struct Shape_typemap_129;
struct Shape_typemap_129 {
    unsigned char padding_0[28];
    int field_1C;
    unsigned char padding_20[192];
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char padding_F4[556];
    int field_320;
    int field_324;
    int field_328;
    int field_32C;
};
struct Shape_typemap_130;
struct Shape_typemap_130 {
    unsigned char padding_0[20];
    unsigned char unknown_14[2];
};
struct Shape_typemap_131;
struct Shape_typemap_131 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Shape_typemap_132;
struct Shape_typemap_132 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_133;
struct Shape_typemap_133 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    unsigned char unknown_18[4];
};
struct Shape_typemap_134;
struct Shape_typemap_134 {
    int field_0;
};
struct Shape_typemap_135;
struct Shape_typemap_135 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
    int field_94;
    int field_98;
    unsigned char unknown_9C[4];
    unsigned char padding_A0[12];
    unsigned char unknown_AC[4];
    unsigned char unknown_B0[4];
    unsigned char padding_B4[212];
    int field_188;
    unsigned char padding_18C[52];
    int field_1C0;
};
struct Shape_typemap_136;
struct Shape_typemap_136 {
    unsigned char padding_0[108];
    float field_6C;
    float field_70;
    unsigned char padding_74[180];
    float field_128;
    unsigned char padding_12C[4];
    float field_130;
    unsigned char padding_134[360];
    float field_29C;
    float field_2A0;
    float field_2A4;
    float field_2A8;
};
struct Shape_typemap_137;
struct Shape_typemap_137 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_138;
struct Shape_typemap_138 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_139;
struct Shape_typemap_139 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_140;
struct Shape_typemap_140 {
    int field_0;
    int field_4;
};
struct Shape_typemap_141;
struct Shape_typemap_141 {
    int field_0;
};
struct Shape_typemap_142;
struct Shape_typemap_142 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    float field_1C;
    float field_20;
    float field_24;
    unsigned char padding_28[140];
    int field_B4;
    int field_B8;
    unsigned char padding_BC[68];
    int field_100;
    unsigned char padding_104[108];
    int field_170;
    int field_174;
    unsigned char padding_178[45];
    unsigned char unknown_1A5[1];
    unsigned char padding_1A6[226];
    int field_288;
    unsigned char padding_28C[4440];
    int field_13E4;
};
struct Shape_typemap_143;
struct Shape_typemap_143 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
};
struct Shape_typemap_144;
struct Shape_typemap_144 {
    int field_0;
};
struct Shape_typemap_145;
struct Shape_typemap_145 {
    int field_0;
    int field_4;
    unsigned short field_8;
    unsigned char padding_A[2];
    int field_C;
};
struct Shape_typemap_146;
struct Shape_typemap_146 {
    int field_0;
    int field_4;
    unsigned char padding_8[68];
    int field_4C;
    unsigned char unknown_50[4];
    int field_54;
    unsigned char padding_58[11680];
    int field_2DF8;
    unsigned char padding_2DFC[1644];
    int field_3468;
    int field_346C;
    unsigned char unknown_3470[4];
};
struct Shape_typemap_147;
struct Shape_typemap_147 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_148;
struct Shape_typemap_148 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    int field_18;
};
struct Shape_typemap_149;
struct Shape_typemap_149 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
};
struct Shape_typemap_15;
struct Shape_typemap_15 {
    unsigned char padding_0[4];
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
};
struct Shape_typemap_150;
struct Shape_typemap_150 {
    unsigned char padding_0[272];
    int field_110;
    int field_114;
};
struct Shape_typemap_151;
struct Shape_typemap_151 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_152;
struct Shape_typemap_152 {
    void * field_0;
    void * field_4;
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
};
struct Shape_typemap_153;
struct Shape_typemap_153 {
    unsigned char field_0;
    unsigned char field_1;
    unsigned char padding_2[31];
    unsigned char field_21;
    unsigned char field_22;
    unsigned char field_23;
    unsigned char field_24;
    unsigned char padding_25[3];
    unsigned char field_28;
};
struct Shape_typemap_154;
struct Shape_typemap_154 {
    int field_0;
    unsigned char padding_4[964];
    unsigned char unknown_3C8[4];
    int field_3CC;
    unsigned char unknown_3D0[4];
    int field_3D4;
    unsigned char unknown_3D8[4];
    int field_3DC;
    unsigned char unknown_3E0[4];
    unsigned char unknown_3E4[4];
    unsigned char unknown_3E8[4];
    int field_3EC;
    int field_3F0;
    unsigned char padding_3F4[64];
    int field_434;
    int field_438;
    int field_43C;
    int field_440;
    int field_444;
    int field_448;
    int field_44C;
    int field_450;
    int field_454;
    unsigned char unknown_458[4];
    int field_45C;
    unsigned char unknown_460[4];
    int field_464;
    int field_468;
    int field_46C;
};
struct Shape_typemap_155;
struct Shape_typemap_155 {
    unsigned char field_0;
    unsigned char field_1;
    unsigned char padding_2[31];
    unsigned char field_21;
    unsigned char field_22;
    unsigned char field_23;
    unsigned char field_24;
    unsigned char padding_25[3];
    unsigned char field_28;
};
struct Shape_typemap_156;
struct Shape_typemap_156 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    int field_14;
    unsigned char unknown_18[4];
    int field_1C;
};
struct Shape_typemap_157;
struct Shape_typemap_157 {
    int field_0;
    int field_4;
    unsigned char padding_8[4928];
    int field_1348;
    unsigned char unknown_134C[4];
    int field_1350;
    unsigned char unknown_1354[4];
    int field_1358;
    unsigned char unknown_135C[4];
    unsigned char unknown_1360[4];
    unsigned char unknown_1364[4];
    unsigned char unknown_1368[4];
};
struct Shape_typemap_158;
struct Shape_typemap_158 {
    int field_0;
    int field_4;
    unsigned char padding_8[208];
    int field_D8;
    unsigned char unknown_DC[4];
    unsigned char padding_E0[8];
    void * field_E8;
    int field_EC;
    void * field_F0;
    unsigned char padding_F4[20];
    int field_108;
    int field_10C;
};
struct Shape_typemap_159;
struct Shape_typemap_159 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    unsigned char unknown_2C[4];
    int field_30;
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    int field_40;
    int field_44;
    int field_48;
    int field_4C;
    int field_50;
    int field_54;
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
};
struct Shape_typemap_16;
struct Shape_typemap_16 {
    int field_0;
    int field_4;
    float field_8;
    float field_C;
    float field_10;
    float field_14;
    unsigned char padding_18[4];
    int field_1C;
    unsigned char padding_20[2];
    short field_22;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
};
struct Shape_typemap_160;
struct Shape_typemap_160 {
    int field_0;
    unsigned char padding_4[24];
    int field_1C;
    int field_20;
    unsigned char padding_24[8];
    int field_2C;
    unsigned char padding_30[8];
    void * field_38;
    unsigned char padding_3C[12];
    int field_48;
};
struct Shape_typemap_161;
struct Shape_typemap_161 {
    int field_0;
    int field_4;
    unsigned char unknown_8[4];
    int field_C;
    int field_10;
    unsigned char unknown_14[4];
    int field_18;
    unsigned char unknown_1C[4];
    float field_20;
    float field_24;
    float field_28;
    float field_2C;
    float field_30;
    float field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    unsigned char unknown_4C[4];
    int field_50;
    int field_54;
    int field_58;
    unsigned char unknown_5C[4];
    int field_60;
    float field_64;
    unsigned char padding_68[8];
    int field_70;
    int field_74;
    unsigned char padding_78[40];
    float field_A0;
    float field_A4;
    int field_A8;
    int field_AC;
    int field_B0;
    int field_B4;
    unsigned char unknown_B8[4];
    unsigned char unknown_BC[4];
    unsigned char unknown_C0[4];
    unsigned char unknown_C4[4];
    unsigned char unknown_C8[4];
    unsigned char unknown_CC[4];
    unsigned char unknown_D0[4];
    unsigned char unknown_D4[4];
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    unsigned char unknown_EC[4];
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    unsigned char unknown_FC[4];
    float field_100;
    int field_104;
    float field_108;
    float field_10C;
    float field_110;
    float field_114;
    unsigned char padding_118[200];
    int field_1E0;
};
struct Shape_typemap_162;
struct Shape_typemap_162 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
    unsigned char padding_70[1292];
    unsigned char unknown_57C[4];
    unsigned char unknown_580[4];
    unsigned char padding_584[12];
    unsigned char unknown_590[4];
};
struct Shape_typemap_163;
struct Shape_typemap_163 {
    int field_0;
    unsigned char padding_4[4];
    void * field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    int field_18;
};
struct Shape_typemap_164;
struct Shape_typemap_164 {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_typemap_166;
struct Shape_typemap_166 {
    unsigned char padding_0[4];
    short field_4;
    short field_6;
    unsigned char unknown_8[2];
    short field_A;
    unsigned char padding_C[8];
    int field_14;
    int field_18;
};
struct Shape_typemap_167;
struct Shape_typemap_167 {
    int field_0;
    int field_4;
    unsigned char unknown_8[4];
    int field_C;
    int field_10;
    unsigned char unknown_14[4];
    int field_18;
    unsigned char unknown_1C[4];
    float field_20;
    float field_24;
    float field_28;
    float field_2C;
    float field_30;
    float field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    unsigned char unknown_4C[4];
    int field_50;
    int field_54;
    int field_58;
    unsigned char unknown_5C[4];
    int field_60;
    float field_64;
    unsigned char padding_68[8];
    int field_70;
    int field_74;
    unsigned char padding_78[40];
    float field_A0;
    float field_A4;
    int field_A8;
    int field_AC;
    int field_B0;
    int field_B4;
    unsigned char unknown_B8[4];
    unsigned char unknown_BC[4];
    unsigned char unknown_C0[4];
    unsigned char unknown_C4[4];
    unsigned char unknown_C8[4];
    unsigned char unknown_CC[4];
    unsigned char unknown_D0[4];
    unsigned char unknown_D4[4];
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    unsigned char unknown_EC[4];
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    unsigned char unknown_FC[4];
    float field_100;
    int field_104;
    float field_108;
    float field_10C;
    float field_110;
    float field_114;
    unsigned char padding_118[200];
    int field_1E0;
};
struct Shape_typemap_168;
struct Shape_typemap_168 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
};
struct Shape_typemap_169;
struct Shape_typemap_169 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_17;
struct Shape_typemap_17 {
    unsigned char unknown_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
    unsigned char unknown_20[4];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    unsigned char unknown_30[4];
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char unknown_48[4];
    unsigned char unknown_4C[4];
    unsigned char unknown_50[4];
    unsigned char unknown_54[4];
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char unknown_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char unknown_70[4];
    unsigned char unknown_74[4];
};
struct Shape_typemap_170;
struct Shape_typemap_170 {
    unsigned short field_0;
    unsigned char unknown_2[2];
    int field_4;
    int field_8;
    int field_C;
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char padding_18[8];
    int field_20;
    float field_24;
    unsigned short field_28;
    unsigned char padding_2A[2];
    int field_2C;
};
struct Shape_typemap_171;
struct Shape_typemap_171 {
    unsigned char padding_0[2416];
    int field_970;
    unsigned char unknown_974[4];
    int field_978;
    unsigned char unknown_97C[4];
    int field_980;
    unsigned char unknown_984[4];
    int field_988;
    unsigned char unknown_98C[4];
    unsigned char unknown_990[4];
    unsigned char unknown_994[4];
    int field_998;
    unsigned char unknown_99C[4];
    unsigned char padding_9A0[164];
    int field_A44;
    int field_A48;
    unsigned char unknown_A4C[4];
    int field_A50;
    int field_A54;
    unsigned char unknown_A58[4];
    int field_A5C;
    int field_A60;
    int field_A64;
    int field_A68;
    int field_A6C;
    int field_A70;
};
struct Shape_typemap_172;
struct Shape_typemap_172 {
    int field_0;
    unsigned char padding_4[16];
    unsigned char unknown_14[4];
    unsigned char padding_18[112];
    unsigned char unknown_88[4];
    unsigned char padding_8C[16];
    unsigned char unknown_9C[4];
    unsigned char padding_A0[16];
    unsigned char unknown_B0[4];
    unsigned char unknown_B4[4];
    unsigned char padding_B8[12];
    unsigned char unknown_C4[4];
    unsigned char padding_C8[16];
    unsigned char unknown_D8[4];
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    int field_E4;
    unsigned char unknown_E8[4];
    int field_EC;
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    unsigned char unknown_100[4];
};
struct Shape_typemap_173;
struct Shape_typemap_173 {
    int field_0;
    unsigned char padding_4[24];
    int field_1C;
    int field_20;
    unsigned char padding_24[8];
    int field_2C;
    unsigned char padding_30[8];
    void * field_38;
    unsigned char padding_3C[12];
    int field_48;
};
struct Shape_typemap_174;
struct Shape_typemap_174 {
    int field_0;
    unsigned char padding_4[4];
    void * field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[12];
    int field_20;
};
struct Shape_typemap_175;
struct Shape_typemap_175 {
    int field_0;
    int field_4;
    unsigned char padding_8[28];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char padding_2C[16];
    int field_3C;
    unsigned char unknown_40[4];
    int field_44;
    unsigned char unknown_48[4];
    int field_4C;
    unsigned char unknown_50[4];
    int field_54;
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char padding_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char padding_70[2912];
    unsigned char unknown_BD0[4];
    unsigned char padding_BD4[2916];
    unsigned char unknown_1738[4];
    unsigned char padding_173C[2916];
    unsigned char unknown_22A0[4];
    unsigned char padding_22A4[2900];
    int field_2DF8;
    unsigned char padding_2DFC[1644];
    int field_3468;
    int field_346C;
    unsigned char unknown_3470[4];
};
struct Shape_typemap_176;
struct Shape_typemap_176 {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_typemap_177;
struct Shape_typemap_177 {
    int field_0;
};
struct Shape_typemap_178;
struct Shape_typemap_178 {
    int field_0;
    int field_4;
    unsigned char padding_8[4896];
    int field_1328;
    unsigned char unknown_132C[4];
    int field_1330;
    unsigned char unknown_1334[4];
    int field_1338;
    unsigned char unknown_133C[4];
    unsigned char unknown_1340[4];
    unsigned char unknown_1344[4];
    int field_1348;
    unsigned char unknown_134C[4];
    unsigned char unknown_1350[4];
    unsigned char unknown_1354[4];
};
struct Shape_typemap_179;
struct Shape_typemap_179 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char padding_24[4];
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
};
struct Shape_typemap_18;
struct Shape_typemap_18 {
    unsigned char padding_0[12];
    short field_C;
    unsigned char padding_E[2];
    unsigned char unknown_10[1];
};
struct Shape_typemap_180;
struct Shape_typemap_180 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_181;
struct Shape_typemap_181 {
    int field_0;
};
struct Shape_typemap_182;
struct Shape_typemap_182 {
    int field_0;
    int field_4;
};
struct Shape_typemap_183;
struct Shape_typemap_183 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    unsigned char unknown_18[4];
};
struct Shape_typemap_184;
struct Shape_typemap_184 {
    unsigned char padding_0[28];
    int field_1C;
    unsigned char padding_20[192];
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char padding_F4[556];
    int field_320;
    int field_324;
    int field_328;
    int field_32C;
};
struct Shape_typemap_185;
struct Shape_typemap_185 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
};
struct Shape_typemap_186;
struct Shape_typemap_186 {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_typemap_187;
struct Shape_typemap_187 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_188;
struct Shape_typemap_188 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Shape_typemap_189;
struct Shape_typemap_189 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_19;
struct Shape_typemap_19 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
};
struct Shape_typemap_190;
struct Shape_typemap_190 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    unsigned char unknown_18[4];
};
struct Shape_typemap_191;
struct Shape_typemap_191 {
    unsigned char field_0;
    unsigned char field_1;
    unsigned char padding_2[31];
    unsigned char field_21;
    unsigned char field_22;
    unsigned char field_23;
    unsigned char field_24;
    unsigned char padding_25[3];
    unsigned char field_28;
};
struct Shape_typemap_192;
struct Shape_typemap_192 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Shape_typemap_193;
struct Shape_typemap_193 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_194;
struct Shape_typemap_194 {
    int field_0;
};
struct Shape_typemap_195;
struct Shape_typemap_195 {
    unsigned char padding_0[16];
    unsigned char unknown_10[4];
};
struct Shape_typemap_196;
struct Shape_typemap_196 {
    unsigned char field_0;
    unsigned char field_1;
    unsigned char padding_2[31];
    unsigned char field_21;
    unsigned char field_22;
    unsigned char field_23;
    unsigned char field_24;
    unsigned char padding_25[3];
    unsigned char field_28;
};
struct Shape_typemap_197;
struct Shape_typemap_197 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_198;
struct Shape_typemap_198 {
    int field_0;
    int field_4;
    float field_8;
    float field_C;
    float field_10;
    float field_14;
    unsigned char padding_18[4];
    int field_1C;
    unsigned char padding_20[2];
    short field_22;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
};
struct Shape_typemap_199;
struct Shape_typemap_199 {
    unsigned char unknown_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
    unsigned char unknown_20[4];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    unsigned char unknown_30[4];
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char unknown_48[4];
    unsigned char unknown_4C[4];
    unsigned char unknown_50[4];
    unsigned char unknown_54[4];
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char unknown_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char unknown_70[4];
    unsigned char unknown_74[4];
};
struct Shape_typemap_2;
struct Shape_typemap_2 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    unsigned char padding_1C[228];
    int field_100;
};
struct Shape_typemap_20;
struct Shape_typemap_20 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
};
struct Shape_typemap_200;
struct Shape_typemap_200 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_201;
struct Shape_typemap_201 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    unsigned char padding_1C[228];
    int field_100;
};
struct Shape_typemap_202;
struct Shape_typemap_202 {
    unsigned char padding_0[4];
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
};
struct Shape_typemap_203;
struct Shape_typemap_203 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_204;
struct Shape_typemap_204 {
    unsigned short field_0;
    unsigned char unknown_2[2];
    int field_4;
    int field_8;
    int field_C;
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char padding_18[8];
    int field_20;
    float field_24;
    unsigned short field_28;
    unsigned char padding_2A[2];
    int field_2C;
};
struct Shape_typemap_205;
struct Shape_typemap_205 {
    int field_0;
    int field_4;
    unsigned char padding_8[4928];
    int field_1348;
    unsigned char unknown_134C[4];
    int field_1350;
    unsigned char unknown_1354[4];
    int field_1358;
    unsigned char unknown_135C[4];
    unsigned char unknown_1360[4];
    unsigned char unknown_1364[4];
    unsigned char unknown_1368[4];
};
struct Shape_typemap_206;
struct Shape_typemap_206 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    float field_1C;
    float field_20;
    float field_24;
    unsigned char padding_28[140];
    int field_B4;
    int field_B8;
    unsigned char padding_BC[68];
    int field_100;
    unsigned char padding_104[108];
    int field_170;
    int field_174;
    unsigned char padding_178[45];
    unsigned char unknown_1A5[1];
    unsigned char padding_1A6[226];
    int field_288;
    unsigned char padding_28C[4440];
    int field_13E4;
};
struct Shape_typemap_207;
struct Shape_typemap_207 {
    int field_0;
    int field_4;
};
struct Shape_typemap_208;
struct Shape_typemap_208 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char padding_24[4];
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
};
struct Shape_typemap_209;
struct Shape_typemap_209 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_210;
struct Shape_typemap_210 {
    int field_0;
    int field_4;
    unsigned short field_8;
    unsigned char padding_A[2];
    int field_C;
};
struct Shape_typemap_211;
struct Shape_typemap_211 {
    int field_0;
    int field_4;
    float field_8;
    float field_C;
    float field_10;
    float field_14;
    unsigned char padding_18[4];
    int field_1C;
    unsigned char padding_20[2];
    short field_22;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
};
struct Shape_typemap_212;
struct Shape_typemap_212 {
    int field_0;
    int field_4;
    unsigned char padding_8[28];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char padding_2C[16];
    int field_3C;
    unsigned char unknown_40[4];
    int field_44;
    unsigned char unknown_48[4];
    int field_4C;
    unsigned char unknown_50[4];
    int field_54;
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char padding_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char padding_70[2912];
    unsigned char unknown_BD0[4];
    unsigned char padding_BD4[2916];
    unsigned char unknown_1738[4];
    unsigned char padding_173C[2916];
    unsigned char unknown_22A0[4];
    unsigned char padding_22A4[2900];
    int field_2DF8;
    unsigned char padding_2DFC[1644];
    int field_3468;
    int field_346C;
    unsigned char unknown_3470[4];
};
struct Shape_typemap_213;
struct Shape_typemap_213 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
    unsigned char padding_70[1292];
    unsigned char unknown_57C[4];
    unsigned char unknown_580[4];
    unsigned char padding_584[12];
    unsigned char unknown_590[4];
};
struct Shape_typemap_214;
struct Shape_typemap_214 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_215;
struct Shape_typemap_215 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
};
struct Shape_typemap_216;
struct Shape_typemap_216 {
    int field_0;
    int field_4;
    float field_8;
    float field_C;
    float field_10;
    float field_14;
    unsigned char padding_18[4];
    int field_1C;
    unsigned char padding_20[2];
    short field_22;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
};
struct Shape_typemap_217;
struct Shape_typemap_217 {
    int field_0;
    int field_4;
    unsigned char padding_8[4896];
    int field_1328;
    unsigned char unknown_132C[4];
    int field_1330;
    unsigned char unknown_1334[4];
    int field_1338;
    unsigned char unknown_133C[4];
    unsigned char unknown_1340[4];
    unsigned char unknown_1344[4];
    int field_1348;
    unsigned char unknown_134C[4];
    unsigned char unknown_1350[4];
    unsigned char unknown_1354[4];
};
struct Shape_typemap_218;
struct Shape_typemap_218 {
    unsigned char padding_0[20];
    unsigned char unknown_14[2];
};
struct Shape_typemap_219;
struct Shape_typemap_219 {
    unsigned short field_0;
    unsigned char unknown_2[2];
    int field_4;
    int field_8;
    int field_C;
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char padding_18[8];
    int field_20;
    float field_24;
    unsigned short field_28;
    unsigned char padding_2A[2];
    int field_2C;
};
struct Shape_typemap_22;
struct Shape_typemap_22 {
    unsigned char padding_0[4];
    int field_4;
    unsigned char padding_8[8];
    unsigned char unknown_10[2];
    unsigned char padding_12[6];
    int field_18;
    unsigned char padding_1C[124];
    unsigned char unknown_98[8];
    unsigned char unknown_A0[8];
    unsigned char unknown_A8[8];
    unsigned char unknown_B0[8];
    unsigned char unknown_B8[8];
    unsigned char unknown_C0[8];
    unsigned char unknown_C8[8];
    unsigned char unknown_D0[8];
    unsigned char padding_D8[16];
    unsigned char unknown_E8[8];
    unsigned char unknown_F0[8];
    unsigned char unknown_F8[8];
    unsigned char unknown_100[8];
    unsigned char padding_108[16];
    int field_118;
    unsigned char unknown_11C[4];
    unsigned char padding_120[8];
    int field_128;
    unsigned char unknown_12C[4];
    double field_130;
    double field_138;
    double field_140;
    unsigned char padding_148[8];
    double field_150;
    double field_158;
    double field_160;
    double field_168;
    double field_170;
    double field_178;
    double field_180;
    double field_188;
    double field_190;
    double field_198;
    double field_1A0;
    double field_1A8;
    double field_1B0;
    double field_1B8;
    double field_1C0;
    double field_1C8;
    double field_1D0;
    double field_1D8;
    double field_1E0;
    double field_1E8;
    double field_1F0;
    double field_1F8;
    double field_200;
    double field_208;
    double field_210;
    double field_218;
    double field_220;
    double field_228;
};
struct Shape_typemap_220;
struct Shape_typemap_220 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    float field_1C;
    float field_20;
    float field_24;
    unsigned char padding_28[140];
    int field_B4;
    int field_B8;
    unsigned char padding_BC[68];
    int field_100;
    unsigned char padding_104[108];
    int field_170;
    int field_174;
    unsigned char padding_178[45];
    unsigned char unknown_1A5[1];
    unsigned char padding_1A6[226];
    int field_288;
    unsigned char padding_28C[4440];
    int field_13E4;
};
struct Shape_typemap_221;
struct Shape_typemap_221 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
};
struct Shape_typemap_222;
struct Shape_typemap_222 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_223;
struct Shape_typemap_223 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char padding_18[8];
    int field_20;
    unsigned char unknown_24[4];
};
struct Shape_typemap_224;
struct Shape_typemap_224 {
    unsigned char padding_0[4];
    short field_4;
    short field_6;
    unsigned char unknown_8[2];
    short field_A;
    unsigned char padding_C[8];
    int field_14;
    int field_18;
};
struct Shape_typemap_225;
struct Shape_typemap_225 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
    int field_94;
    int field_98;
    unsigned char unknown_9C[4];
    unsigned char padding_A0[12];
    unsigned char unknown_AC[4];
    unsigned char unknown_B0[4];
    unsigned char padding_B4[212];
    int field_188;
    unsigned char padding_18C[52];
    int field_1C0;
};
struct Shape_typemap_226;
struct Shape_typemap_226 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[12];
    int field_20;
};
struct Shape_typemap_227;
struct Shape_typemap_227 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_228;
struct Shape_typemap_228 {
    unsigned char padding_0[4];
    short field_4;
    short field_6;
    unsigned char unknown_8[2];
    short field_A;
    unsigned char padding_C[8];
    int field_14;
    int field_18;
};
struct Shape_typemap_229;
struct Shape_typemap_229 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
    unsigned char padding_11[51];
    void * field_44;
};
struct Shape_typemap_23;
struct Shape_typemap_23 {
    unsigned char padding_0[4];
    int field_4;
    unsigned char padding_8[8];
    unsigned char unknown_10[2];
    unsigned char padding_12[6];
    int field_18;
    unsigned char padding_1C[124];
    unsigned char unknown_98[8];
    unsigned char unknown_A0[8];
    unsigned char unknown_A8[8];
    unsigned char unknown_B0[8];
    unsigned char unknown_B8[8];
    unsigned char unknown_C0[8];
    unsigned char unknown_C8[8];
    unsigned char unknown_D0[8];
    unsigned char padding_D8[16];
    unsigned char unknown_E8[8];
    unsigned char unknown_F0[8];
    unsigned char unknown_F8[8];
    unsigned char unknown_100[8];
    unsigned char padding_108[16];
    int field_118;
    unsigned char unknown_11C[4];
    unsigned char padding_120[8];
    int field_128;
    unsigned char unknown_12C[4];
    double field_130;
    double field_138;
    double field_140;
    unsigned char padding_148[8];
    double field_150;
    double field_158;
    double field_160;
    double field_168;
    double field_170;
    double field_178;
    double field_180;
    double field_188;
    double field_190;
    double field_198;
    double field_1A0;
    double field_1A8;
    double field_1B0;
    double field_1B8;
    double field_1C0;
    double field_1C8;
    double field_1D0;
    double field_1D8;
    double field_1E0;
    double field_1E8;
    double field_1F0;
    double field_1F8;
    double field_200;
    double field_208;
    double field_210;
    double field_218;
    double field_220;
    double field_228;
};
struct Shape_typemap_230;
struct Shape_typemap_230 {
    int field_0;
    unsigned char padding_4[4];
    void * field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_231;
struct Shape_typemap_231 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    int field_2C;
};
struct Shape_typemap_232;
struct Shape_typemap_232 {
    unsigned char padding_0[12];
    short field_C;
    unsigned char padding_E[2];
    unsigned char unknown_10[1];
};
struct Shape_typemap_233;
struct Shape_typemap_233 {
    int field_0;
    int field_4;
    unsigned char padding_8[4928];
    int field_1348;
    unsigned char unknown_134C[4];
    int field_1350;
    unsigned char unknown_1354[4];
    int field_1358;
    unsigned char unknown_135C[4];
    unsigned char unknown_1360[4];
    unsigned char unknown_1364[4];
    unsigned char unknown_1368[4];
};
struct Shape_typemap_234;
struct Shape_typemap_234 {
    unsigned char field_0;
    unsigned char field_1;
    unsigned char padding_2[31];
    unsigned char field_21;
    unsigned char field_22;
    unsigned char field_23;
    unsigned char field_24;
    unsigned char padding_25[3];
    unsigned char field_28;
};
struct Shape_typemap_235;
struct Shape_typemap_235 {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_typemap_236;
struct Shape_typemap_236 {
    unsigned char padding_0[12];
    short field_C;
    unsigned char padding_E[2];
    unsigned char unknown_10[1];
};
struct Shape_typemap_237;
struct Shape_typemap_237 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
};
struct Shape_typemap_238;
struct Shape_typemap_238 {
    unsigned char padding_0[272];
    int field_110;
    int field_114;
};
struct Shape_typemap_239;
struct Shape_typemap_239 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_24;
struct Shape_typemap_24 {
    unsigned char padding_0[2416];
    int field_970;
    unsigned char padding_974[20];
    unsigned char unknown_988[4];
    unsigned char padding_98C[12];
    int field_998;
    unsigned char padding_99C[168];
    int field_A44;
    int field_A48;
    unsigned char padding_A4C[4];
    void * field_A50;
    unsigned char padding_A54[8];
    int field_A5C;
    int field_A60;
    int field_A64;
    unsigned char unknown_A68[4];
    unsigned char unknown_A6C[4];
};
struct Shape_typemap_240;
struct Shape_typemap_240 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_241;
struct Shape_typemap_241 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_242;
struct Shape_typemap_242 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
    int field_94;
    int field_98;
    unsigned char unknown_9C[4];
    unsigned char padding_A0[16];
    unsigned char unknown_B0[4];
    unsigned char padding_B4[212];
    int field_188;
    unsigned char padding_18C[52];
    int field_1C0;
};
struct Shape_typemap_243;
struct Shape_typemap_243 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
};
struct Shape_typemap_244;
struct Shape_typemap_244 {
    unsigned char padding_0[16];
    unsigned char unknown_10[4];
};
struct Shape_typemap_245;
struct Shape_typemap_245 {
    unsigned char padding_0[28];
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
};
struct Shape_typemap_246;
struct Shape_typemap_246 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_247;
struct Shape_typemap_247 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_248;
struct Shape_typemap_248 {
    int field_0;
    int field_4;
    float field_8;
    float field_C;
    float field_10;
    float field_14;
    unsigned char padding_18[4];
    int field_1C;
    unsigned char padding_20[2];
    short field_22;
    int field_24;
    unsigned char padding_28[104];
    int field_90;
};
struct Shape_typemap_249;
struct Shape_typemap_249 {
    unsigned char padding_0[16];
    unsigned char unknown_10[4];
};
struct Shape_typemap_25;
struct Shape_typemap_25 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char unknown_18[4];
    unsigned char padding_1C[1284];
    int field_520;
    unsigned char unknown_524[4];
    int field_528;
    int field_52C;
    int field_530;
    int field_534;
    int field_538;
    int field_53C;
    int field_540;
};
struct Shape_typemap_250;
struct Shape_typemap_250 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char unknown_18[4];
    unsigned char padding_1C[1284];
    int field_520;
    unsigned char unknown_524[4];
    int field_528;
    int field_52C;
    int field_530;
    int field_534;
    int field_538;
    int field_53C;
    int field_540;
};
struct Shape_typemap_251;
struct Shape_typemap_251 {
    int field_0;
};
struct Shape_typemap_252;
struct Shape_typemap_252 {
    int field_0;
    int field_4;
    unsigned char padding_8[192];
    int field_C8;
    unsigned char unknown_CC[4];
    int field_D0;
    unsigned char unknown_D4[4];
    int field_D8;
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    unsigned char unknown_E4[4];
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    int field_100;
    unsigned char unknown_104[4];
    int field_108;
    int field_10C;
};
struct Shape_typemap_253;
struct Shape_typemap_253 {
    int field_0;
    unsigned char padding_4[16];
    unsigned char unknown_14[4];
    unsigned char padding_18[112];
    unsigned char unknown_88[4];
    unsigned char padding_8C[16];
    unsigned char unknown_9C[4];
    unsigned char padding_A0[16];
    unsigned char unknown_B0[4];
    unsigned char unknown_B4[4];
    unsigned char padding_B8[12];
    unsigned char unknown_C4[4];
    unsigned char padding_C8[16];
    unsigned char unknown_D8[4];
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    int field_E4;
    unsigned char unknown_E8[4];
    int field_EC;
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    unsigned char unknown_100[4];
};
struct Shape_typemap_254;
struct Shape_typemap_254 {
    int field_0;
    int field_4;
    unsigned short field_8;
    unsigned char padding_A[2];
    int field_C;
};
struct Shape_typemap_255;
struct Shape_typemap_255 {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_typemap_256;
struct Shape_typemap_256 {
    unsigned char padding_0[12];
    short field_C;
    unsigned char padding_E[2];
    unsigned char unknown_10[1];
};
struct Shape_typemap_257;
struct Shape_typemap_257 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
};
struct Shape_typemap_258;
struct Shape_typemap_258 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_259;
struct Shape_typemap_259 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
};
struct Shape_typemap_26;
struct Shape_typemap_26 {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_typemap_260;
struct Shape_typemap_260 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_261;
struct Shape_typemap_261 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[12];
    int field_20;
};
struct Shape_typemap_262;
struct Shape_typemap_262 {
    unsigned char padding_0[12];
    short field_C;
    unsigned char padding_E[2];
    unsigned char unknown_10[1];
};
struct Shape_typemap_263;
struct Shape_typemap_263 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    int field_14;
    unsigned char unknown_18[4];
    int field_1C;
};
struct Shape_typemap_264;
struct Shape_typemap_264 {
    int field_0;
    unsigned char padding_4[24];
    int field_1C;
    int field_20;
    unsigned char padding_24[8];
    int field_2C;
    unsigned char padding_30[8];
    void * field_38;
    unsigned char padding_3C[12];
    int field_48;
};
struct Shape_typemap_265;
struct Shape_typemap_265 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    unsigned char unknown_18[4];
};
struct Shape_typemap_266;
struct Shape_typemap_266 {
    int field_0;
    int field_4;
    unsigned char padding_8[4928];
    int field_1348;
    unsigned char unknown_134C[4];
    int field_1350;
    unsigned char unknown_1354[4];
    int field_1358;
    unsigned char unknown_135C[4];
    unsigned char unknown_1360[4];
    unsigned char unknown_1364[4];
    unsigned char unknown_1368[4];
};
struct Shape_typemap_267;
struct Shape_typemap_267 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_268;
struct Shape_typemap_268 {
    unsigned char padding_0[4];
    int field_4;
    unsigned char padding_8[8];
    unsigned char unknown_10[2];
    unsigned char padding_12[6];
    int field_18;
    unsigned char padding_1C[124];
    unsigned char unknown_98[8];
    unsigned char unknown_A0[8];
    unsigned char unknown_A8[8];
    unsigned char unknown_B0[8];
    unsigned char unknown_B8[8];
    unsigned char unknown_C0[8];
    unsigned char unknown_C8[8];
    unsigned char unknown_D0[8];
    unsigned char padding_D8[16];
    unsigned char unknown_E8[8];
    unsigned char unknown_F0[8];
    unsigned char unknown_F8[8];
    unsigned char unknown_100[8];
    unsigned char padding_108[16];
    int field_118;
    unsigned char unknown_11C[4];
    unsigned char padding_120[8];
    int field_128;
    unsigned char unknown_12C[4];
    double field_130;
    double field_138;
    double field_140;
    unsigned char padding_148[8];
    double field_150;
    double field_158;
    double field_160;
    double field_168;
    double field_170;
    double field_178;
    double field_180;
    double field_188;
    double field_190;
    double field_198;
    double field_1A0;
    double field_1A8;
    double field_1B0;
    double field_1B8;
    double field_1C0;
    double field_1C8;
    double field_1D0;
    double field_1D8;
    double field_1E0;
    double field_1E8;
    double field_1F0;
    double field_1F8;
    double field_200;
    double field_208;
    double field_210;
    double field_218;
    double field_220;
    double field_228;
};
struct Shape_typemap_269;
struct Shape_typemap_269 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[12];
    int field_20;
};
struct Shape_typemap_27;
struct Shape_typemap_27 {
    unsigned short field_0;
    unsigned char unknown_2[2];
    int field_4;
    int field_8;
    int field_C;
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char padding_18[8];
    int field_20;
    float field_24;
    unsigned short field_28;
    unsigned char padding_2A[2];
    int field_2C;
};
struct Shape_typemap_270;
struct Shape_typemap_270 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_271;
struct Shape_typemap_271 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_272;
struct Shape_typemap_272 {
    int field_0;
    int field_4;
};
struct Shape_typemap_273;
struct Shape_typemap_273 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
};
struct Shape_typemap_274;
struct Shape_typemap_274 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char unknown_18[4];
    unsigned char padding_1C[1284];
    int field_520;
    unsigned char unknown_524[4];
    int field_528;
    int field_52C;
    int field_530;
    int field_534;
    int field_538;
    int field_53C;
    int field_540;
};
struct Shape_typemap_275;
struct Shape_typemap_275 {
    unsigned char padding_0[28];
    int field_1C;
    unsigned char padding_20[192];
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char padding_F4[556];
    int field_320;
    int field_324;
    int field_328;
    int field_32C;
};
struct Shape_typemap_276;
struct Shape_typemap_276 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_277;
struct Shape_typemap_277 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    int field_14;
    unsigned char unknown_18[4];
    int field_1C;
};
struct Shape_typemap_278;
struct Shape_typemap_278 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
};
struct Shape_typemap_279;
struct Shape_typemap_279 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[12];
    int field_20;
};
struct Shape_typemap_28;
struct Shape_typemap_28 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    int field_18;
};
struct Shape_typemap_280;
struct Shape_typemap_280 {
    unsigned char padding_0[28];
    int field_1C;
};
struct Shape_typemap_281;
struct Shape_typemap_281 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
};
struct Shape_typemap_282;
struct Shape_typemap_282 {
    unsigned char padding_0[32];
    int field_20;
};
struct Shape_typemap_283;
struct Shape_typemap_283 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    int field_14;
    unsigned char unknown_18[4];
    int field_1C;
};
struct Shape_typemap_284;
struct Shape_typemap_284 {
    int field_0;
    int field_4;
    unsigned char unknown_8[4];
    int field_C;
    int field_10;
    unsigned char unknown_14[4];
    int field_18;
    unsigned char unknown_1C[4];
    float field_20;
    float field_24;
    float field_28;
    float field_2C;
    float field_30;
    float field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    unsigned char unknown_4C[4];
    int field_50;
    int field_54;
    int field_58;
    unsigned char unknown_5C[4];
    int field_60;
    float field_64;
    unsigned char padding_68[8];
    int field_70;
    int field_74;
    unsigned char padding_78[40];
    float field_A0;
    float field_A4;
    int field_A8;
    int field_AC;
    int field_B0;
    int field_B4;
    unsigned char unknown_B8[4];
    unsigned char unknown_BC[4];
    unsigned char unknown_C0[4];
    unsigned char unknown_C4[4];
    unsigned char unknown_C8[4];
    unsigned char unknown_CC[4];
    unsigned char unknown_D0[4];
    unsigned char unknown_D4[4];
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    unsigned char unknown_EC[4];
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    unsigned char unknown_FC[4];
    float field_100;
    int field_104;
    float field_108;
    float field_10C;
    float field_110;
    float field_114;
    unsigned char padding_118[200];
    int field_1E0;
};
struct Shape_typemap_285;
struct Shape_typemap_285 {
    unsigned char padding_0[32];
    int field_20;
};
struct Shape_typemap_286;
struct Shape_typemap_286 {
    int field_0;
    unsigned char padding_4[964];
    unsigned char unknown_3C8[4];
    int field_3CC;
    unsigned char unknown_3D0[4];
    int field_3D4;
    unsigned char unknown_3D8[4];
    int field_3DC;
    unsigned char unknown_3E0[4];
    unsigned char unknown_3E4[4];
    unsigned char unknown_3E8[4];
    int field_3EC;
    int field_3F0;
    unsigned char padding_3F4[64];
    int field_434;
    int field_438;
    int field_43C;
    int field_440;
    int field_444;
    int field_448;
    int field_44C;
    int field_450;
    int field_454;
    unsigned char unknown_458[4];
    int field_45C;
    unsigned char unknown_460[4];
    int field_464;
    int field_468;
    int field_46C;
};
struct Shape_typemap_287;
struct Shape_typemap_287 {
    unsigned char unknown_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
    unsigned char unknown_20[4];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char unknown_2C[4];
    unsigned char unknown_30[4];
    unsigned char unknown_34[4];
    unsigned char unknown_38[4];
    unsigned char unknown_3C[4];
    unsigned char unknown_40[4];
    unsigned char unknown_44[4];
    unsigned char unknown_48[4];
    unsigned char unknown_4C[4];
    unsigned char unknown_50[4];
    unsigned char unknown_54[4];
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char unknown_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char unknown_70[4];
    unsigned char unknown_74[4];
};
struct Shape_typemap_29;
struct Shape_typemap_29 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_3;
struct Shape_typemap_3 {
    int field_0;
};
struct Shape_typemap_31;
struct Shape_typemap_31 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char unknown_18[4];
    unsigned char padding_1C[1284];
    int field_520;
    unsigned char unknown_524[4];
    int field_528;
    int field_52C;
    int field_530;
    int field_534;
    int field_538;
    int field_53C;
    int field_540;
};
struct Shape_typemap_32;
struct Shape_typemap_32 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char padding_18[8];
    int field_20;
    unsigned char unknown_24[4];
};
struct Shape_typemap_33;
struct Shape_typemap_33 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
};
struct Shape_typemap_34;
struct Shape_typemap_34 {
    void * field_0;
    void * field_4;
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    unsigned char unknown_14[4];
    unsigned char unknown_18[4];
    unsigned char unknown_1C[4];
};
struct Shape_typemap_35;
struct Shape_typemap_35 {
    unsigned char padding_0[4];
    short field_4;
    short field_6;
    unsigned char unknown_8[2];
    short field_A;
    unsigned char padding_C[8];
    int field_14;
    int field_18;
};
struct Shape_typemap_36;
struct Shape_typemap_36 {
    int field_0;
    unsigned char padding_4[984];
    int field_3DC;
    unsigned char unknown_3E0[4];
    unsigned char padding_3E4[8];
    int field_3EC;
    int field_3F0;
    unsigned char padding_3F4[64];
    int field_434;
    int field_438;
    int field_43C;
    int field_440;
    int field_444;
    int field_448;
    void * field_44C;
    int field_450;
    int field_454;
    unsigned char padding_458[4];
    int field_45C;
    unsigned char padding_460[4];
    int field_464;
    int field_468;
    int field_46C;
};
struct Shape_typemap_37;
struct Shape_typemap_37 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_38;
struct Shape_typemap_38 {
    unsigned char padding_0[8];
    short field_8;
};
struct Shape_typemap_39;
struct Shape_typemap_39 {
    int field_0;
    int field_4;
    unsigned short field_8;
    unsigned char padding_A[2];
    int field_C;
};
struct Shape_typemap_4;
struct Shape_typemap_4 {
    int field_0;
    unsigned char padding_4[4];
    int field_8;
    int field_C;
};
struct Shape_typemap_40;
struct Shape_typemap_40 {
    unsigned char padding_0[4];
    int field_4;
    unsigned char padding_8[8];
    unsigned char unknown_10[2];
    unsigned char padding_12[6];
    int field_18;
    unsigned char padding_1C[124];
    unsigned char unknown_98[8];
    unsigned char unknown_A0[8];
    unsigned char unknown_A8[8];
    unsigned char unknown_B0[8];
    unsigned char unknown_B8[8];
    unsigned char unknown_C0[8];
    unsigned char unknown_C8[8];
    unsigned char unknown_D0[8];
    unsigned char padding_D8[16];
    unsigned char unknown_E8[8];
    unsigned char unknown_F0[8];
    unsigned char unknown_F8[8];
    unsigned char unknown_100[8];
    unsigned char padding_108[16];
    int field_118;
    unsigned char unknown_11C[4];
    unsigned char padding_120[8];
    int field_128;
    unsigned char unknown_12C[4];
    double field_130;
    double field_138;
    double field_140;
    unsigned char padding_148[8];
    double field_150;
    double field_158;
    double field_160;
    double field_168;
    double field_170;
    double field_178;
    double field_180;
    double field_188;
    double field_190;
    double field_198;
    double field_1A0;
    double field_1A8;
    double field_1B0;
    double field_1B8;
    double field_1C0;
    double field_1C8;
    double field_1D0;
    double field_1D8;
    double field_1E0;
    double field_1E8;
    double field_1F0;
    double field_1F8;
    double field_200;
    double field_208;
    double field_210;
    double field_218;
    double field_220;
    double field_228;
};
struct Shape_typemap_41;
struct Shape_typemap_41 {
    unsigned char padding_0[28];
    int field_1C;
    unsigned char padding_20[192];
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char padding_F4[556];
    int field_320;
    int field_324;
    int field_328;
    int field_32C;
};
struct Shape_typemap_42;
struct Shape_typemap_42 {
    unsigned char padding_0[4];
    int field_4;
    unsigned char padding_8[8];
    unsigned char unknown_10[2];
    unsigned char padding_12[6];
    int field_18;
    unsigned char padding_1C[124];
    unsigned char unknown_98[8];
    unsigned char unknown_A0[8];
    unsigned char unknown_A8[8];
    unsigned char unknown_B0[8];
    unsigned char unknown_B8[8];
    unsigned char unknown_C0[8];
    unsigned char unknown_C8[8];
    unsigned char unknown_D0[8];
    unsigned char padding_D8[16];
    unsigned char unknown_E8[8];
    unsigned char unknown_F0[8];
    unsigned char unknown_F8[8];
    unsigned char unknown_100[8];
    unsigned char padding_108[16];
    int field_118;
    unsigned char unknown_11C[4];
    unsigned char padding_120[8];
    int field_128;
    unsigned char unknown_12C[4];
    double field_130;
    double field_138;
    double field_140;
    unsigned char padding_148[8];
    double field_150;
    double field_158;
    double field_160;
    double field_168;
    double field_170;
    double field_178;
    double field_180;
    double field_188;
    double field_190;
    double field_198;
    double field_1A0;
    double field_1A8;
    double field_1B0;
    double field_1B8;
    double field_1C0;
    double field_1C8;
    double field_1D0;
    double field_1D8;
    double field_1E0;
    double field_1E8;
    double field_1F0;
    double field_1F8;
    double field_200;
    double field_208;
    double field_210;
    double field_218;
    double field_220;
    double field_228;
};
struct Shape_typemap_43;
struct Shape_typemap_43 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_44;
struct Shape_typemap_44 {
    int field_0;
    int field_4;
};
struct Shape_typemap_45;
struct Shape_typemap_45 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_46;
struct Shape_typemap_46 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    float field_1C;
    float field_20;
    float field_24;
    unsigned char padding_28[140];
    int field_B4;
    int field_B8;
    unsigned char padding_BC[68];
    int field_100;
    unsigned char padding_104[108];
    int field_170;
    int field_174;
    unsigned char padding_178[45];
    unsigned char unknown_1A5[1];
    unsigned char padding_1A6[226];
    int field_288;
    unsigned char padding_28C[4440];
    int field_13E4;
};
struct Shape_typemap_47;
struct Shape_typemap_47 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
};
struct Shape_typemap_48;
struct Shape_typemap_48 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Shape_typemap_49;
struct Shape_typemap_49 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char padding_18[8];
    int field_20;
    unsigned char unknown_24[4];
};
struct Shape_typemap_5;
struct Shape_typemap_5 {
    unsigned char padding_0[2416];
    int field_970;
    unsigned char unknown_974[4];
    int field_978;
    unsigned char unknown_97C[4];
    int field_980;
    unsigned char unknown_984[4];
    int field_988;
    unsigned char unknown_98C[4];
    unsigned char unknown_990[4];
    unsigned char unknown_994[4];
    int field_998;
    unsigned char unknown_99C[4];
    unsigned char padding_9A0[164];
    int field_A44;
    int field_A48;
    unsigned char unknown_A4C[4];
    int field_A50;
    int field_A54;
    unsigned char unknown_A58[4];
    int field_A5C;
    int field_A60;
    int field_A64;
    int field_A68;
    int field_A6C;
    int field_A70;
};
struct Shape_typemap_50;
struct Shape_typemap_50 {
    unsigned char padding_0[32];
    int field_20;
};
struct Shape_typemap_51;
struct Shape_typemap_51 {
    int field_0;
    int field_4;
    unsigned char padding_8[192];
    int field_C8;
    unsigned char unknown_CC[4];
    int field_D0;
    unsigned char unknown_D4[4];
    int field_D8;
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    unsigned char unknown_E4[4];
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    int field_100;
    unsigned char unknown_104[4];
    int field_108;
    int field_10C;
};
struct Shape_typemap_52;
struct Shape_typemap_52 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char unknown_18[4];
    unsigned char padding_1C[1284];
    int field_520;
    unsigned char unknown_524[4];
    int field_528;
    int field_52C;
    int field_530;
    int field_534;
    int field_538;
    int field_53C;
    int field_540;
};
struct Shape_typemap_53;
struct Shape_typemap_53 {
    unsigned char padding_0[56];
    unsigned char unknown_38[4];
};
struct Shape_typemap_54;
struct Shape_typemap_54 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_55;
struct Shape_typemap_55 {
    unsigned char padding_0[16];
    unsigned char unknown_10[4];
};
struct Shape_typemap_56;
struct Shape_typemap_56 {
    int field_0;
    int field_4;
    unsigned char padding_8[28];
    unsigned char unknown_24[4];
    unsigned char unknown_28[4];
    unsigned char padding_2C[16];
    int field_3C;
    unsigned char unknown_40[4];
    int field_44;
    unsigned char unknown_48[4];
    int field_4C;
    unsigned char unknown_50[4];
    int field_54;
    unsigned char unknown_58[4];
    unsigned char unknown_5C[4];
    unsigned char unknown_60[4];
    unsigned char padding_64[4];
    unsigned char unknown_68[4];
    unsigned char unknown_6C[4];
    unsigned char padding_70[2912];
    unsigned char unknown_BD0[4];
    unsigned char padding_BD4[2916];
    unsigned char unknown_1738[4];
    unsigned char padding_173C[2916];
    unsigned char unknown_22A0[4];
    unsigned char padding_22A4[2900];
    int field_2DF8;
    unsigned char padding_2DFC[1644];
    int field_3468;
    int field_346C;
    unsigned char unknown_3470[4];
};
struct Shape_typemap_57;
struct Shape_typemap_57 {
    unsigned char field_0;
    unsigned char padding_1[1];
    unsigned char field_2;
    unsigned char field_3;
};
struct Shape_typemap_58;
struct Shape_typemap_58 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    int field_2C;
};
struct Shape_typemap_59;
struct Shape_typemap_59 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
};
struct Shape_typemap_6;
struct Shape_typemap_6 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
};
struct Shape_typemap_60;
struct Shape_typemap_60 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_61;
struct Shape_typemap_61 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char padding_24[4];
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
};
struct Shape_typemap_62;
struct Shape_typemap_62 {
    int field_0;
    unsigned char padding_4[16];
    unsigned char unknown_14[4];
    unsigned char padding_18[112];
    unsigned char unknown_88[4];
    unsigned char padding_8C[16];
    unsigned char unknown_9C[4];
    unsigned char padding_A0[16];
    unsigned char unknown_B0[4];
    unsigned char unknown_B4[4];
    unsigned char padding_B8[12];
    unsigned char unknown_C4[4];
    unsigned char padding_C8[16];
    unsigned char unknown_D8[4];
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    int field_E4;
    unsigned char unknown_E8[4];
    int field_EC;
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    unsigned char unknown_100[4];
};
struct Shape_typemap_63;
struct Shape_typemap_63 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    unsigned char padding_C[4];
    int field_10;
    int field_14;
    unsigned char padding_18[8];
    int field_20;
    unsigned char unknown_24[4];
};
struct Shape_typemap_64;
struct Shape_typemap_64 {
    unsigned char padding_0[4];
    unsigned char unknown_4[4];
    unsigned char unknown_8[4];
    unsigned char unknown_C[4];
    unsigned char unknown_10[4];
    int field_14;
    unsigned char unknown_18[4];
    int field_1C;
};
struct Shape_typemap_65;
struct Shape_typemap_65 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_66;
struct Shape_typemap_66 {
    unsigned char unknown_0[4];
};
struct Shape_typemap_67;
struct Shape_typemap_67 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char unknown_24[4];
    int field_28;
    int field_2C;
};
struct Shape_typemap_68;
struct Shape_typemap_68 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_69;
struct Shape_typemap_69 {
    unsigned char padding_0[16];
    unsigned char unknown_10[4];
};
struct Shape_typemap_7;
struct Shape_typemap_7 {
    int field_0;
};
struct Shape_typemap_70;
struct Shape_typemap_70 {
    int field_0;
    int field_4;
    unsigned short field_8;
    unsigned char padding_A[2];
    int field_C;
};
struct Shape_typemap_72;
struct Shape_typemap_72 {
    unsigned char padding_0[20];
    unsigned char unknown_14[2];
};
struct Shape_typemap_73;
struct Shape_typemap_73 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
};
struct Shape_typemap_74;
struct Shape_typemap_74 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Shape_typemap_75;
struct Shape_typemap_75 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_76;
struct Shape_typemap_76 {
    unsigned char padding_0[4];
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
};
struct Shape_typemap_77;
struct Shape_typemap_77 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_78;
struct Shape_typemap_78 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    unsigned char padding_10[4];
    int field_14;
    unsigned char unknown_18[4];
};
struct Shape_typemap_79;
struct Shape_typemap_79 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    unsigned char padding_1C[228];
    int field_100;
};
struct Shape_typemap_8;
struct Shape_typemap_8 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
};
struct Shape_typemap_80;
struct Shape_typemap_80 {
    int field_0;
};
struct Shape_typemap_81;
struct Shape_typemap_81 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    unsigned char padding_1C[4];
    int field_20;
    unsigned char padding_24[4];
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
};
struct Shape_typemap_82;
struct Shape_typemap_82 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct Shape_typemap_83;
struct Shape_typemap_83 {
    int field_0;
    int field_4;
    unsigned char padding_8[4896];
    int field_1328;
    unsigned char unknown_132C[4];
    int field_1330;
    unsigned char unknown_1334[4];
    int field_1338;
    unsigned char unknown_133C[4];
    unsigned char unknown_1340[4];
    unsigned char unknown_1344[4];
    int field_1348;
    unsigned char unknown_134C[4];
    unsigned char unknown_1350[4];
    unsigned char unknown_1354[4];
};
struct Shape_typemap_84;
struct Shape_typemap_84 {
    int field_0;
    int field_4;
    unsigned char unknown_8[4];
    int field_C;
    int field_10;
    unsigned char unknown_14[4];
    int field_18;
    unsigned char unknown_1C[4];
    float field_20;
    float field_24;
    float field_28;
    float field_2C;
    float field_30;
    float field_34;
    int field_38;
    int field_3C;
    int field_40;
    int field_44;
    int field_48;
    unsigned char unknown_4C[4];
    int field_50;
    int field_54;
    int field_58;
    unsigned char unknown_5C[4];
    int field_60;
    float field_64;
    unsigned char padding_68[8];
    int field_70;
    int field_74;
    unsigned char padding_78[40];
    float field_A0;
    float field_A4;
    int field_A8;
    int field_AC;
    int field_B0;
    int field_B4;
    unsigned char unknown_B8[4];
    unsigned char unknown_BC[4];
    unsigned char unknown_C0[4];
    unsigned char unknown_C4[4];
    unsigned char unknown_C8[4];
    unsigned char unknown_CC[4];
    unsigned char unknown_D0[4];
    unsigned char unknown_D4[4];
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    unsigned char unknown_EC[4];
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    unsigned char unknown_FC[4];
    float field_100;
    int field_104;
    float field_108;
    float field_10C;
    float field_110;
    float field_114;
    unsigned char padding_118[200];
    int field_1E0;
};
struct Shape_typemap_85;
struct Shape_typemap_85 {
    int field_0;
    unsigned char padding_4[4];
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    unsigned char padding_18[8];
    int field_20;
};
struct Shape_typemap_86;
struct Shape_typemap_86 {
    unsigned char field_0;
    unsigned char padding_1[23];
    void * field_18;
    unsigned char padding_1C[228];
    int field_100;
};
struct Shape_typemap_87;
struct Shape_typemap_87 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Shape_typemap_88;
struct Shape_typemap_88 {
    unsigned char padding_0[20];
    unsigned char unknown_14[2];
};
struct Shape_typemap_89;
struct Shape_typemap_89 {
    int field_0;
    int field_4;
    unsigned char padding_8[4896];
    int field_1328;
    unsigned char unknown_132C[4];
    int field_1330;
    unsigned char unknown_1334[4];
    int field_1338;
    unsigned char unknown_133C[4];
    unsigned char unknown_1340[4];
    unsigned char unknown_1344[4];
    int field_1348;
    unsigned char unknown_134C[4];
    unsigned char unknown_1350[4];
    unsigned char unknown_1354[4];
};
struct Shape_typemap_9;
struct Shape_typemap_9 {
    int field_0;
    unsigned char padding_4[24];
    int field_1C;
    int field_20;
    unsigned char padding_24[8];
    int field_2C;
    unsigned char padding_30[8];
    void * field_38;
    unsigned char padding_3C[12];
    int field_48;
};
struct Shape_typemap_90;
struct Shape_typemap_90 {
    unsigned char padding_0[28];
    int field_1C;
};
struct Shape_typemap_91;
struct Shape_typemap_91 {
    int field_0;
    unsigned char padding_4[16];
    unsigned char unknown_14[4];
    unsigned char padding_18[112];
    unsigned char unknown_88[4];
    unsigned char padding_8C[16];
    unsigned char unknown_9C[4];
    unsigned char padding_A0[16];
    unsigned char unknown_B0[4];
    unsigned char unknown_B4[4];
    unsigned char padding_B8[12];
    unsigned char unknown_C4[4];
    unsigned char padding_C8[16];
    unsigned char unknown_D8[4];
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    int field_E4;
    unsigned char unknown_E8[4];
    int field_EC;
    unsigned char unknown_F0[4];
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    unsigned char unknown_100[4];
};
struct Shape_typemap_92;
struct Shape_typemap_92 {
    unsigned char padding_0[8];
    int field_8;
    int field_C;
    int field_10;
    unsigned char padding_14[88];
    float field_6C;
};
struct Shape_typemap_93;
struct Shape_typemap_93 {
    int field_0;
};
struct Shape_typemap_94;
struct Shape_typemap_94 {
    unsigned char padding_0[4];
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
};
struct Shape_typemap_95;
struct Shape_typemap_95 {
    int field_0;
    unsigned char unknown_4[4];
    int field_8;
    int field_C;
    int field_10;
};
struct Shape_typemap_96;
struct Shape_typemap_96 {
    unsigned char padding_0[2416];
    int field_970;
    unsigned char padding_974[20];
    int field_988;
    unsigned char padding_98C[12];
    int field_998;
    unsigned char padding_99C[168];
    int field_A44;
    int field_A48;
    unsigned char padding_A4C[4];
    void * field_A50;
    int field_A54;
    unsigned char unknown_A58[4];
    int field_A5C;
    int field_A60;
    int field_A64;
    int field_A68;
    int field_A6C;
    int field_A70;
};
struct Shape_typemap_97;
struct Shape_typemap_97 {
    int field_0;
    int field_4;
    unsigned char padding_8[2408];
    int field_970;
    unsigned char unknown_974[4];
    int field_978;
    unsigned char unknown_97C[4];
    int field_980;
    unsigned char unknown_984[4];
    int field_988;
    unsigned char unknown_98C[4];
    unsigned char unknown_990[4];
    unsigned char unknown_994[4];
    int field_998;
    unsigned char unknown_99C[4];
    unsigned char padding_9A0[164];
    int field_A44;
    int field_A48;
    unsigned char unknown_A4C[4];
    int field_A50;
    int field_A54;
    unsigned char unknown_A58[4];
    int field_A5C;
    int field_A60;
    int field_A64;
    int field_A68;
    int field_A6C;
    int field_A70;
    unsigned char padding_A74[2276];
    int field_1358;
    unsigned char unknown_135C[4];
    unsigned char padding_1360[8];
    unsigned char unknown_1368[4];
};
struct Shape_typemap_98;
struct Shape_typemap_98 {
    int field_0;
    int field_4;
    unsigned char padding_8[192];
    int field_C8;
    unsigned char unknown_CC[4];
    int field_D0;
    unsigned char unknown_D4[4];
    int field_D8;
    unsigned char unknown_DC[4];
    unsigned char unknown_E0[4];
    unsigned char unknown_E4[4];
    int field_E8;
    int field_EC;
    int field_F0;
    unsigned char unknown_F4[4];
    unsigned char unknown_F8[4];
    int field_FC;
    int field_100;
    unsigned char unknown_104[4];
    int field_108;
    int field_10C;
};
struct Shape_typemap_99;
struct Shape_typemap_99 {
    unsigned char padding_0[16];
    unsigned char unknown_10[1];
};
struct func_8022E3B4_S3;
struct func_8022E3B4_S3 {
    char pad0[0x4];
    s16 unk4;
};
struct Opaque_Body;
struct Opaque_Character;
struct Opaque_Controller;
struct Opaque_Ctrl;
struct Opaque_Held;
struct Opaque_Mode;
struct Opaque_Model;
struct Opaque_Mount;
struct Opaque_Profile;
struct Opaque_Record;
struct Opaque_Rider;
struct Opaque_Shared_Body;
struct Opaque_Shared_Hud;
struct Opaque_Shared_Model;
struct Opaque_Shared_Profile;
struct Opaque_Shared_StateInfo;
struct Opaque_Shared_Voice;
struct Opaque_StateInfo;
struct Opaque_TeamInfo;
struct Opaque_View;
struct Settings580;
struct SharedPlayer16E4;
struct func_8022E3B4_S3;
struct SharedPlayer16E4 {
    union {
        struct {
            u8 unk_0[24];
        } view0_0;
        struct {
            u8 pad0[24];
        } view0_1;
        struct {
            char pad[0x3];
            u8 team;
        } view3_2;
        struct {
            char pad[0x8];
            Vec3 unk_8;
        } view8_2;
        struct {
            char pad[0x8];
            Vec3 pos;
        } view8_3;
        struct {
            char pad[0x8];
            Vec3 position;
        } view8_4;
        struct {
            char pad[0x14];
            struct Opaque_Shared_Model * model;
        } view14_6;
        struct { char pad[8]; s32 positionWords[3]; } positionBits;
    } views0;
    union {
        struct {
            char * unk_0;
        } view18_0;
        struct {
            char * track;
        } view18_1;
        struct {
            struct Opaque_Model * model;
        } view18_2;
        struct {
            struct Opaque_Body * body;
        } view18_3;
        struct {
            struct Opaque_Character * character;
        } view18_4;
        struct {
            struct Opaque_Shared_Body * body;
        } view18_5;
    } views18;
    union {
        struct {
            u8 unk_0[344];
        } view1C_0;
        struct {
            u8 pad1[344];
        } view1C_1;
        struct {
            char pad[0x4];
            f32 velY;
        } view20_2;
        struct {
            char pad[0x1C];
            s32 unk_1C;
        } view38_2;
        struct {
            char pad[0x1C];
            s32 flags;
        } view38_3;
        struct {
            char pad[0x24];
            f32 unk_24;
        } view40_5;
        struct {
            char pad[0x40];
            Shared_Quad unk_40;
        } view5C_6;
        struct {
            char pad[0x50];
            f32 unk_50;
        } view6C_4;
        struct {
            char pad[0x50];
            f32 heading;
        } view6C_5;
        struct {
            char pad[0x50];
            f32 yaw;
        } view6C_9;
        struct {
            char pad[0xC8];
            u16 unk_C8;
        } viewE4_6;
        struct {
            char pad[0xC8];
            u16 kind;
        } viewE4_7;
        struct {
            char pad[0xE4];
            s32 unk_E4;
        } view100_8;
        struct {
            char pad[0xE4];
            s32 flags;
        } view100_9;
        struct {
            char pad[0xE8];
            f32 unk_E8;
        } view104_10;
        struct {
            char pad[0xE8];
            f32 idleTime;
        } view104_11;
        struct {
            char pad[0xEC];
            s16 anim;
        } view108_16;
        struct {
            char pad[0xF2];
            s8 unk_F2;
        } view10E_12;
        struct {
            char pad[0xF2];
            s8 idle;
        } view10E_13;
        struct {
            char pad[0xF2];
            s8 replaying;
        } view10E_14;
        struct {
            char pad[0xF2];
            s8 animPending;
        } view10E_20;
        struct {
            char pad[0x154];
            char unk_154[100];
        } view170_15;
        struct {
            char pad[0x154];
            char body[100];
        } view170_16;
        struct {
            char pad[0x154];
            s32 unk_154;
        } view170_23;
        struct {
            char pad[0x158];
            s32 unk_158;
        } view174_17;
        struct {
            char pad[0x15C];
            u8 unk_15C[740];
        } view178_18;
        struct {
            char pad[0x15C];
            u8 pad2[740];
        } view178_19;
        struct {
            char pad[0x1B8];
            f32 unk_1B8;
        } view1D4_20;
        struct {
            char pad[0x1B8];
            f32 holdTime;
        } view1D4_21;
        struct {
            char pad[0x1BC];
            struct SharedPlayer16E4 * unk_1BC;
        } view1D8_22;
        struct {
            char pad[0x1BC];
            struct SharedPlayer16E4 * self;
        } view1D8_23;
        struct {
            char pad[0x1BC];
            struct SharedPlayer16E4 * f1D8;
        } view1D8_24;
        struct {
            char pad[0x1BC];
            void * unk_1BC;
        } view1D8_32;
        struct {
            char pad[0x244];
            Vec3 unk_244;
        } view260_25;
        struct {
            char pad[0x244];
            Vec3 muzzle;
        } view260_26;
        struct {
            char pad[0x2CC];
            char unk_2CC[368];
        } view2E8_27;
        struct {
            char pad[0x2CC];
            char weapon[368];
        } view2E8_28;
        struct {
            char pad[0x2CC];
            Shared_Emitter emitter;
        } view2E8_37;
        struct {
            char pad[0x43C];
            char unk_43C[384];
        } view458_29;
        struct {
            char pad[0x43C];
            char ammo[384];
        } view458_30;
        struct {
            char pad[0x43C];
            s32 unk_43C;
        } view458_40;
        struct {
            char pad[0x440];
            s32 unk_440;
        } view45C_31;
        struct {
            char pad[0x444];
            u8 unk_444[376];
        } view460_32;
        struct {
            char pad[0x444];
            u8 pad3[376];
        } view460_33;
        struct {
            char pad[0x468];
            struct Opaque_Shared_Voice * voice;
        } view484_44;
        struct {
            char pad[0x470];
            s8 unk_470;
        } view48C_34;
        struct {
            char pad[0x470];
            s8 state;
        } view48C_35;
        struct {
            char pad[0x4A4];
            void * unk_4A4;
        } view4C0_47;
        struct {
            char pad[0x507];
            s8 unk_507;
        } view523_36;
        struct {
            char pad[0x507];
            s8 busy;
        } view523_37;
        struct {
            char pad[0x578];
            s32 unk_578;
        } view594_38;
        struct {
            char pad[0x578];
            s32 gear;
        } view594_39;
        struct {
            char pad[0x578];
            s32 mode;
        } view594_40;
        struct {
            char pad[0x584];
            f32 unk_584;
        } view5A0_41;
        struct {
            char pad[0x584];
            f32 charge;
        } view5A0_42;
        struct {
            char pad[0x5B4];
            s32 unk_5B4;
        } view5D0_43;
        struct {
            char pad[0x5B4];
            s32 f5D0;
        } view5D0_44;
        struct {
            char pad[0x5B8];
            s32 unk_5B8;
        } view5D4_45;
        struct {
            char pad[0x5B8];
            s32 slot;
        } view5D4_46;
        struct {
            char pad[0x5B8];
            s32 profile;
        } view5D4_47;
        struct {
            char pad[0x5B8];
            s32 f5D4;
        } view5D4_48;
    } views1C;
    union {
        struct {
            struct Opaque_Record * unk_0;
        } view5D8_0;
        struct {
            struct Opaque_Record * record;
        } view5D8_1;
        struct {
            struct func_8022E3B4_S3 * controls;
        } view5D8_2;
        struct {
            struct Opaque_TeamInfo * teamInfo;
        } view5D8_3;
        struct {
            struct Opaque_Ctrl * ctrl;
        } view5D8_4;
        struct {
            unsigned char * info;
        } view5D8_5;
        struct {
            struct Opaque_Profile * profile;
        } view5D8_6;
        struct {
            struct Settings580 * settings;
        } view5D8_7;
        struct {
            s32 f5D8;
        } view5D8_8;
        struct {
            struct Opaque_Shared_Profile * profile;
        } view5D8_9;
    } views5D8;
    union {
        struct {
            void * unk_0;
        } view5DC_0;
        struct {
            void * view;
        } view5DC_1;
        struct {
            struct Opaque_View * view;
        } view5DC_2;
        struct {
            u8 pad4[8];
        } view5DC_3;
        struct {
            void * entity;
        } view5DC_4;
        struct {
            struct Opaque_Rider * rider;
        } view5DC_5;
        struct {
            char * storage;
        } view5DC_6;
        struct {
            char * messages;
        } view5DC_7;
        struct {
            struct Opaque_Shared_Hud * hud;
        } view5DC_8;
        struct {
            char pad[0x4];
            s32 unk_4;
        } view5E0_8;
        struct {
            char pad[0x4];
            s32 state;
        } view5E0_9;
        struct {
            char pad[0x4];
            s32 slot;
        } view5E0_10;
    } views5DC;
    union {
        struct {
            s32 unk_0;
        } view5E4_0;
        struct {
            s32 active;
        } view5E4_1;
        struct {
            s32 health;
        } view5E4_2;
        struct {
            s32 alive;
        } view5E4_3;
        struct {
            s32 holding;
        } view5E4_4;
    } views5E4;
    union {
        struct {
            u8 unk_0[3140];
        } view5E8_0;
        struct {
            u8 pad5[3140];
        } view5E8_1;
        struct {
            char pad[0x2];
            s16 unk_2;
        } view5EA_2;
        struct {
            char pad[0x2];
            s16 respawns;
        } view5EA_3;
        struct {
            char pad[0x2];
            s16 runType;
        } view5EA_4;
        struct {
            char pad[0x4];
            s32 unk_4;
        } view5EC_5;
        struct {
            char pad[0x4];
            s32 model;
        } view5EC_6;
        struct {
            char pad[0x4];
            s32 spawnPoint;
        } view5EC_7;
        struct {
            char pad[0x4];
            s32 f5EC;
        } view5EC_8;
        struct {
            char pad[0x8];
            s32 unk_8;
        } view5F0_9;
        struct {
            char pad[0x8];
            s32 f5F0;
        } view5F0_10;
        struct {
            char pad[0xC];
            s16 unk_C[4];
        } view5F4_11;
        struct {
            char pad[0xC];
            s16 ammo[4];
        } view5F4_12;
        struct {
            char pad[0xC];
            s16 ammo[3];
        } view5F4_13;
        struct {
            char pad[0x1A];
            Shared_Slot slots[22];
        } view602_14;
        struct {
            char pad[0x46];
            s16 unk_46;
        } view62E_13;
        struct {
            char pad[0x46];
            s16 weapon;
        } view62E_14;
        struct {
            char pad[0x46];
            s16 character;
        } view62E_17;
        struct {
            char pad[0x68];
            s16 unk_68;
        } view650_15;
        struct {
            char pad[0x68];
            s16 state;
        } view650_16;
        struct {
            char pad[0x68];
            s16 action;
        } view650_17;
        struct {
            char pad[0x68];
            s16 mode;
        } view650_18;
        struct {
            char pad[0x6A];
            s16 unk_6A;
        } view652_19;
        struct {
            char pad[0x6A];
            s16 previous;
        } view652_20;
        struct {
            char pad[0x6A];
            s16 pad652;
        } view652_24;
        struct {
            char pad[0x6C];
            s16 prevState;
        } view654_25;
        struct {
            char pad[0x6E];
            s16 pad656;
        } view656_26;
        struct {
            char pad[0x70];
            f32 unk_70;
        } view658_21;
        struct {
            char pad[0x70];
            f32 counter;
        } view658_22;
        struct {
            char pad[0x70];
            f32 stride;
        } view658_23;
        struct {
            char pad[0x70];
            f32 swimTime;
        } view658_24;
        struct {
            char pad[0x70];
            f32 stateTime;
        } view658_31;
        struct {
            char pad[0x74];
            s32 unk_74;
        } view65C_32;
        struct {
            char pad[0x78];
            s32 unk_78;
        } view660_25;
        struct {
            char pad[0x78];
            s32 previousTimer;
        } view660_26;
        struct {
            char pad[0x7C];
            s32 unk_7C;
        } view664_27;
        struct {
            char pad[0x7C];
            s32 timer;
        } view664_28;
        struct {
            char pad[0x84];
            f32 unk_84;
        } view66C_29;
        struct {
            char pad[0x88];
            f32 unk_88;
        } view670_30;
        struct {
            char pad[0x88];
            f32 shield;
        } view670_31;
        struct {
            char pad[0x90];
            f32 unk_90;
        } view678_40;
        struct {
            char pad[0xA0];
            char unk_A0[16];
        } view688_32;
        struct {
            char pad[0xA0];
            char body[16];
        } view688_33;
        struct {
            char pad[0xA0];
            Shared_Input input;
        } view688_43;
        struct {
            char pad[0xB0];
            struct Opaque_Controller * unk_B0;
        } view698_34;
        struct {
            char pad[0xB0];
            struct Opaque_Controller * controller;
        } view698_35;
        struct {
            char pad[0xB0];
            void * controller;
        } view698_36;
        struct {
            char pad[0xB0];
            char * emitter;
        } view698_37;
        struct {
            char pad[0xB0];
            char * title;
        } view698_38;
        struct {
            char pad[0xB4];
            f32 unk_B4;
        } view69C_39;
        struct {
            char pad[0xB4];
            f32 stick;
        } view69C_40;
        struct {
            char pad[0xBC];
            f32 unk_BC;
        } view6A4_41;
        struct {
            char pad[0xBC];
            f32 strafe;
        } view6A4_42;
        struct {
            char pad[0xC0];
            f32 unk_C0;
        } view6A8_43;
        struct {
            char pad[0xC0];
            f32 lift;
        } view6A8_44;
        struct {
            char pad[0xC4];
            s32 unk_C4;
        } view6AC_45;
        struct {
            char pad[0xC8];
            s32 unk_C8;
        } view6B0_46;
        struct {
            char pad[0xC8];
            s32 input;
        } view6B0_47;
        struct {
            char pad[0xC8];
            s32 state;
        } view6B0_48;
        struct {
            char pad[0xD0];
            s32 unk_D0;
        } view6B8_49;
        struct {
            char pad[0xD0];
            s32 input;
        } view6B8_50;
        struct {
            char pad[0xD8];
            f32 unk_D8;
        } view6C0_51;
        struct {
            char pad[0xD8];
            f32 climb;
        } view6C0_52;
        struct {
            char pad[0xD8];
            f32 speed;
        } view6C0_53;
        struct {
            char pad[0xD8];
            f32 velX;
        } view6C0_64;
        struct {
            char pad[0xDC];
            f32 unk_DC;
        } view6C4_54;
        struct {
            char pad[0xDC];
            f32 side;
        } view6C4_55;
        struct {
            char pad[0xDC];
            f32 velZ;
        } view6C4_67;
        struct {
            char pad[0xE0];
            f32 unk_E0;
        } view6C8_56;
        struct {
            char pad[0xE0];
            f32 speed;
        } view6C8_57;
        struct {
            char pad[0xE4];
            f32 lastVelY;
        } view6CC_70;
        struct {
            char pad[0xE8];
            s32 onGround;
        } view6D0_71;
        struct {
            char pad[0xEC];
            f32 unk_EC;
        } view6D4_58;
        struct {
            char pad[0xF0];
            f32 unk_F0;
        } view6D8_59;
        struct {
            char pad[0xF4];
            f32 unk_F4;
        } view6DC_60;
        struct {
            char pad[0xFC];
            f32 unk_FC;
        } view6E4_61;
        struct {
            char pad[0xFC];
            f32 depth;
        } view6E4_62;
        struct {
            char pad[0xFC];
            f32 airTime;
        } view6E4_77;
        struct {
            char pad[0x100];
            f32 unk_100;
        } view6E8_63;
        struct {
            char pad[0x100];
            Vec3 unk_100;
        } view6E8_79;
        struct {
            char pad[0x104];
            f32 unk_104;
        } view6EC_64;
        struct {
            char pad[0x104];
            f32 height;
        } view6EC_65;
        struct {
            char pad[0x108];
            f32 unk_108;
        } view6F0_66;
        struct {
            char pad[0x10C];
            f32 unk_10C;
        } view6F4_83;
        struct {
            char pad[0x110];
            Vec3 unk_110;
        } view6F8_84;
        struct {
            char pad[0x11C];
            f32 unk_11C;
        } view704_67;
        struct {
            char pad[0x11C];
            f32 lift;
        } view704_68;
        struct {
            char pad[0x130];
            f32 unk_130;
        } view718_69;
        struct {
            char pad[0x130];
            f32 crouch;
        } view718_70;
        struct {
            char pad[0x134];
            s32 unk_134;
        } view71C_89;
        struct {
            char pad[0x138];
            f32 swim;
        } view720_90;
        struct {
            char pad[0x13C];
            f32 unk_13C;
        } view724_71;
        struct {
            char pad[0x13C];
            f32 pitch;
        } view724_72;
        struct {
            char pad[0x140];
            f32 unk_140;
        } view728_73;
        struct {
            char pad[0x140];
            f32 kickPitch;
        } view728_74;
        struct {
            char pad[0x144];
            f32 unk_144;
        } view72C_75;
        struct {
            char pad[0x144];
            f32 kickRoll;
        } view72C_76;
        struct {
            char pad[0x144];
            f32 lean;
        } view72C_77;
        struct {
            char pad[0x148];
            f32 unk_148[3];
        } view730_78;
        struct {
            char pad[0x148];
            f32 sway[3];
        } view730_79;
        struct {
            char pad[0x154];
            f32 unk_154;
        } view73C_80;
        struct {
            char pad[0x154];
            f32 side;
        } view73C_81;
        struct {
            char pad[0x154];
            Vec3 weapon;
        } view73C_82;
        struct {
            char pad[0x158];
            f32 unk_158;
        } view740_83;
        struct {
            char pad[0x158];
            f32 height;
        } view740_84;
        struct {
            char pad[0x15C];
            f32 unk_15C;
        } view744_85;
        struct {
            char pad[0x15C];
            f32 forward;
        } view744_86;
        struct {
            char pad[0x170];
            f32 unk_170;
        } view758_87;
        struct {
            char pad[0x170];
            f32 bobStrength;
        } view758_88;
        struct {
            char pad[0x174];
            f32 unk_174;
        } view75C_89;
        struct {
            char pad[0x174];
            f32 bobSpeed;
        } view75C_90;
        struct {
            char pad[0x188];
            s16 unk_188;
        } view770_91;
        struct {
            char pad[0x188];
            s16 nextWeapon;
        } view770_92;
        struct {
            char pad[0x188];
            s16 weapon;
        } view770_113;
        struct {
            char pad[0x18A];
            s16 pad772;
        } view772_114;
        struct {
            char pad[0x18C];
            Vec3 unk_18C;
        } view774_115;
        struct {
            char pad[0x198];
            f32 unk_198;
        } view780_116;
        struct {
            char pad[0x19C];
            f32 unk_19C;
        } view784_117;
        struct {
            char pad[0x1A0];
            s32 unk_1A0;
        } view788_93;
        struct {
            char pad[0x1A0];
            s32 icons;
        } view788_94;
        struct {
            char pad[0x1B0];
            s32 unk_1B0;
        } view798_95;
        struct {
            char pad[0x1B0];
            s32 carried;
        } view798_96;
        struct {
            char pad[0x1B4];
            Vec3 unk_1B4;
        } view79C_97;
        struct {
            char pad[0x1B4];
            Vec3 carriedPosition;
        } view79C_98;
        struct {
            char pad[0x1D0];
            s32 unk_1D0;
        } view7B8_99;
        struct {
            char pad[0x1D0];
            s32 target;
        } view7B8_100;
        struct {
            char pad[0x1D4];
            f32 unk_1D4;
        } view7BC_101;
        struct {
            char pad[0x1D4];
            f32 timer;
        } view7BC_102;
        struct {
            char pad[0x1D8];
            Vec3 unk_1D8;
        } view7C0_103;
        struct {
            char pad[0x1D8];
            Vec3 targetPosition;
        } view7C0_104;
        struct {
            char pad[0x200];
            s32 unk_200;
        } view7E8_105;
        struct {
            char pad[0x200];
            s32 zoomed;
        } view7E8_106;
        struct {
            char pad[0x204];
            f32 unk_204;
        } view7EC_132;
        struct {
            char pad[0x208];
            f32 unk_208;
        } view7F0_133;
        struct {
            char pad[0x224];
            struct Opaque_Mount * unk_224;
        } view80C_107;
        struct {
            char pad[0x224];
            struct Opaque_Mount * mount;
        } view80C_108;
        struct {
            char pad[0x228];
            s32 unk_228;
        } view810_109;
        struct {
            char pad[0x228];
            s32 kind;
        } view810_110;
        struct {
            char pad[0x22C];
            Triple unk_22C;
        } view814_111;
        struct {
            char pad[0x22C];
            Triple offset;
        } view814_112;
        struct {
            char pad[0x250];
            f32 unk_250;
        } view838_113;
        struct {
            char pad[0x250];
            f32 rideTime;
        } view838_114;
        struct {
            char pad[0x254];
            f32 unk_254;
        } view83C_115;
        struct {
            char pad[0x254];
            f32 bump;
        } view83C_116;
        struct {
            char pad[0x258];
            s32 unk_258;
        } view840_117;
        struct {
            char pad[0x258];
            s32 surfaced;
        } view840_118;
        struct {
            char pad[0x264];
            s32 unk_264;
        } view84C_149;
        struct {
            char pad[0x26C];
            f32 unk_26C;
        } view854_147;
        struct {
            char pad[0x274];
            s32 unk_274;
        } view85C_119;
        struct {
            char pad[0x274];
            s32 w85C;
        } view85C_120;
        struct {
            char pad[0x27C];
            s32 unk_27C;
        } view864_121;
        struct {
            char pad[0x27C];
            s32 f864;
        } view864_122;
        struct {
            char pad[0x280];
            s32 unk_280;
        } view868_123;
        struct {
            char pad[0x280];
            s32 f868;
        } view868_124;
        struct {
            char pad[0x284];
            s32 unk_284;
        } view86C_125;
        struct {
            char pad[0x284];
            s32 parameter;
        } view86C_126;
        struct {
            char pad[0x284];
            s32 animation;
        } view86C_127;
        struct {
            char pad[0x288];
            s32 unk_288;
        } view870_157;
        struct {
            char pad[0x290];
            Shared_Effect effect;
        } view878_158;
        struct {
            char pad[0x350];
            char unk_350[2188];
        } view938_128;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_129;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_130;
        struct {
            char pad[0x350];
            s32 unk_350;
        } view938_162;
        struct {
            char pad[0x6D0];
            s32 unk_6D0;
        } viewCB8_163;
        struct {
            char pad[0x6E4];
            s32 unk_6E4;
        } viewCCC_164;
        struct {
            char pad[0x758];
            s32 unk_758;
        } viewD40_165;
        struct {
            char pad[0x96C];
            s32 unk_96C;
        } viewF54_131;
        struct {
            char pad[0x96C];
            s32 selection;
        } viewF54_132;
        struct {
            char pad[0x9A8];
            s32 unk_9A8;
        } viewF90_133;
        struct {
            char pad[0x9A8];
            s32 choice;
        } viewF90_134;
        struct {
            char pad[0xBCC];
            s32 unk_BCC;
        } view11B4_135;
        struct {
            char pad[0xBCC];
            s32 locked;
        } view11B4_136;
        struct {
            char pad[0xBD0];
            s32 unk_BD0;
        } view11B8_137;
        struct {
            char pad[0xBD0];
            s32 frozen;
        } view11B8_138;
        struct {
            char pad[0xBD4];
            s32 unk_BD4;
        } view11BC_139;
        struct {
            char pad[0xBD4];
            s32 f11BC;
        } view11BC_140;
        struct {
            char pad[0xBD8];
            s32 unk_BD8;
        } view11C0_141;
        struct {
            char pad[0xBD8];
            s32 f11C0;
        } view11C0_142;
        struct {
            char pad[0xBDC];
            f32 unk_BDC;
        } view11C4_143;
        struct {
            char pad[0xBDC];
            f32 soundTime;
        } view11C4_144;
        struct {
            char pad[0xBE4];
            s32 unk_BE4;
        } view11CC_145;
        struct {
            char pad[0xBE4];
            s32 f11CC;
        } view11CC_146;
        struct {
            char pad[0xBF0];
            f32 unk_BF0;
        } view11D8_147;
        struct {
            char pad[0xBF0];
            f32 recoil;
        } view11D8_148;
        struct {
            char pad[0xBF0];
            f32 stun;
        } view11D8_149;
        struct {
            char pad[0xBF4];
            f32 unk_BF4;
        } view11DC_185;
        struct {
            char pad[0xBF8];
            f32 unk_BF8;
        } view11E0_186;
        struct {
            char pad[0xC00];
            s32 unk_C00;
        } view11E8_150;
        struct {
            char pad[0xC00];
            s32 f11E8;
        } view11E8_151;
        struct {
            char pad[0xC04];
            f32 unk_C04;
        } view11EC_189;
        struct {
            char pad[0xC28];
            s32 unk_C28;
        } view1210_152;
        struct {
            char pad[0xC28];
            s32 marker;
        } view1210_153;
        struct {
            char pad[0xC2C];
            s32 unk_C2C;
        } view1214_154;
        struct {
            char pad[0xC2C];
            s32 marker;
        } view1214_155;
        struct {
            char pad[0xC2C];
            s32 markerShown;
        } view1214_156;
        struct {
            char pad[0xC30];
            s32 unk_C30;
        } view1218_157;
        struct {
            char pad[0xC30];
            s32 f1218;
        } view1218_158;
        struct {
            char pad[0xC34];
            s32 unk_C34;
        } view121C_159;
        struct {
            char pad[0xC34];
            s32 f121C;
        } view121C_160;
        struct {
            char pad[0xC38];
            s32 unk_C38;
        } view1220_161;
        struct {
            char pad[0xC38];
            s32 f1220;
        } view1220_162;
        struct { char pad[0xE]; s16 charge; } chargeView;
        struct { char pad[0x11F4 - 0x5E8]; f32 spin; s32 frame; } rapidFireView;
    } views5E8;
    union {
        struct {
            u32 unk_0;
        } view122C_0;
        struct {
            u32 flags;
        } view122C_1;
        struct {
            s32 options;
        } view122C_2;
        struct {
            s32 f122C;
        } view122C_3;
        struct {
            s32 fxFlags;
        } view122C_4;
    } views122C;
    f32 fxTime;
    f32 fxSpeed;
    s32 fxStage;
    char pad123C[0x4];
    f32 unk_1240;
    f32 unk_1244;
    char pad1248[0x7C];
    union {
        struct {
            s32 unk_0;
        } view12C4_0;
        struct {
            s32 f12C4;
        } view12C4_1;
    } views12C4;
    union {
        struct {
            s32 unk_0;
        } view12C8_0;
        struct {
            s32 f12C8;
        } view12C8_1;
    } views12C8;
    union {
        struct {
            s32 unk_0[8];
        } view12CC_0;
        struct {
            s32 splitsA[8];
        } view12CC_1;
    } views12CC;
    s32 unk_12EC;
    char pad12F0[0x4];
    union {
        struct {
            s32 unk_0[8];
        } view12F4_0;
        struct {
            s32 splitsB[8];
        } view12F4_1;
    } views12F4;
    char pad1314[0x20];
    union {
        struct {
            s32 unk_0;
        } view1334_0;
        struct {
            s32 f1334;
        } view1334_1;
    } views1334;
    union {
        struct {
            s32 unk_0;
        } view1338_0;
        struct {
            s32 f1338;
        } view1338_1;
    } views1338;
    union {
        struct {
            s32 unk_0;
        } view133C_0;
        struct {
            s32 laps;
        } view133C_1;
        struct {
            s32 lives;
        } view133C_2;
    } views133C;
    union {
        struct {
            s32 unk_0;
        } view1340_0;
        struct {
            s32 stalls;
        } view1340_1;
        struct {
            s32 timer;
        } view1340_2;
        struct {
            s32 respawnTimer;
        } view1340_3;
    } views1340;
    char pad1344[0x70];
    union {
        struct {
            struct Opaque_StateInfo * unk_0;
        } view13B4_0;
        struct {
            struct Opaque_StateInfo * states;
        } view13B4_1;
        struct {
            struct Opaque_Mode * unk_0;
        } view13B4_2;
        struct {
            void * character;
        } view13B4_3;
        struct {
            s32 f13B4;
        } view13B4_4;
        struct {
            struct Opaque_Shared_StateInfo * states;
        } view13B4_5;
    } views13B4;
    char pad13B8[0x10];
    union {
        struct {
            s32 unk_0;
        } view13C8_0;
        struct {
            s32 w13C8;
        } view13C8_1;
        struct {
            s32 f13C8;
        } view13C8_2;
    } views13C8;
    char pad13CC[0x8];
    s32 unk_13D4;
    union {
        struct {
            struct Opaque_Held * unk_0;
        } view13D8_0;
        struct {
            struct Opaque_Held * held;
        } view13D8_1;
    } views13D8;
    char pad13DC[0xC];
    s32 messageIndex;
    char pad13EC[0x64];
    union {
        struct {
            s32 unk_0;
        } view1450_0;
        struct {
            s32 computer;
        } view1450_1;
        struct {
            s32 infinite;
        } view1450_2;
        struct {
            s32 unlimited;
        } view1450_3;
        struct {
            s32 uncounted;
        } view1450_4;
        struct {
            s32 f1450;
        } view1450_5;
    } views1450;
    union {
        struct {
            s32 unk_0;
        } view1454_0;
        struct {
            s32 f1454;
        } view1454_1;
    } views1454;
    char pad1458[0xC];
    union {
        struct {
            Vec3 unk_0;
        } view1464_0;
        struct {
            Vec3 aim;
        } view1464_1;
    } views1464;
    char pad1470[0x10];
    union {
        struct {
            Matrix unk_0[2];
        } view1480_0;
        struct {
            Matrix beams[2];
        } view1480_1;
    } views1480;
    union {
        struct {
            Matrix unk_0[2];
        } view1500_0;
        struct {
            Matrix lasers[2];
        } view1500_1;
    } views1500;
    union {
        struct {
            Matrix unk_0[2];
        } view1580_0;
        struct {
            Matrix dots[2];
        } view1580_1;
    } views1580;
    char pad1600[0xD4];
    union {
        struct {
            s32 unk_0;
        } view16D4_0;
        struct {
            s32 f16D4;
        } view16D4_1;
    } views16D4;
    u16 unk_16D8;
    char pad16DA[0x6];
    union {
        struct {
            struct SharedPlayer16E4 * unk_0;
        } view16E0_0;
        struct {
            struct SharedPlayer16E4 * next;
        } view16E0_1;
        struct {
            struct SharedPlayer16E4 * next;
        } view16E0_2;
    } views16E0;
};
struct Opaque_BodyView;
struct Opaque_CharacterView;
struct Opaque_ControllerView;
struct Opaque_CtrlView;
struct Opaque_HeldView;
struct Opaque_ModeView;
struct Opaque_ModelView;
struct Opaque_MountView;
struct Opaque_ProfileView;
struct Opaque_RecordView;
struct Opaque_RiderView;
struct Opaque_Shared_BodyView;
struct Opaque_Shared_HudView;
struct Opaque_Shared_ModelView;
struct Opaque_Shared_ProfileView;
struct Opaque_Shared_StateInfoView;
struct Opaque_Shared_VoiceView;
struct Opaque_StateInfoView;
struct Opaque_TeamInfoView;
struct Opaque_ViewView;
struct Settings20;
struct SharedPlayer16E4_2;
struct func_8020EA10_S3;
struct SharedPlayer16E4_2 {
    union {
        struct {
            u8 unk_0[24];
        } view0_0;
        struct {
            u8 pad0[24];
        } view0_1;
        struct {
            char pad[0x3];
            u8 team;
        } view3_2;
        struct {
            char pad[0x8];
            Vec3 unk_8;
        } view8_2;
        struct {
            char pad[0x8];
            Vec3 pos;
        } view8_3;
        struct {
            char pad[0x8];
            Vec3 position;
        } view8_4;
        struct {
            char pad[0x14];
            struct Opaque_Shared_ModelView * model;
        } view14_6;
        struct { char pad[8]; s32 positionWords[3]; } positionBits;
    } views0;
    union {
        struct {
            char * unk_0;
        } view18_0;
        struct {
            char * track;
        } view18_1;
        struct {
            struct Opaque_ModelView * model;
        } view18_2;
        struct {
            struct Opaque_BodyView * body;
        } view18_3;
        struct {
            struct Opaque_CharacterView * character;
        } view18_4;
        struct {
            struct Opaque_Shared_BodyView * body;
        } view18_5;
    } views18;
    union {
        struct {
            u8 unk_0[344];
        } view1C_0;
        struct {
            u8 pad1[344];
        } view1C_1;
        struct {
            char pad[0x4];
            f32 velY;
        } view20_2;
        struct {
            char pad[0x1C];
            s32 unk_1C;
        } view38_2;
        struct {
            char pad[0x1C];
            s32 flags;
        } view38_3;
        struct {
            char pad[0x24];
            f32 unk_24;
        } view40_5;
        struct {
            char pad[0x40];
            Shared_Quad unk_40;
        } view5C_6;
        struct {
            char pad[0x50];
            f32 unk_50;
        } view6C_4;
        struct {
            char pad[0x50];
            f32 heading;
        } view6C_5;
        struct {
            char pad[0x50];
            f32 yaw;
        } view6C_9;
        struct {
            char pad[0xC8];
            u16 unk_C8;
        } viewE4_6;
        struct {
            char pad[0xC8];
            u16 kind;
        } viewE4_7;
        struct {
            char pad[0xE4];
            s32 unk_E4;
        } view100_8;
        struct {
            char pad[0xE4];
            s32 flags;
        } view100_9;
        struct {
            char pad[0xE8];
            f32 unk_E8;
        } view104_10;
        struct {
            char pad[0xE8];
            f32 idleTime;
        } view104_11;
        struct {
            char pad[0xEC];
            s16 anim;
        } view108_16;
        struct {
            char pad[0xF2];
            s8 unk_F2;
        } view10E_12;
        struct {
            char pad[0xF2];
            s8 idle;
        } view10E_13;
        struct {
            char pad[0xF2];
            s8 replaying;
        } view10E_14;
        struct {
            char pad[0xF2];
            s8 animPending;
        } view10E_20;
        struct {
            char pad[0x154];
            char unk_154[100];
        } view170_15;
        struct {
            char pad[0x154];
            char body[100];
        } view170_16;
        struct {
            char pad[0x154];
            s32 unk_154;
        } view170_23;
        struct {
            char pad[0x158];
            s32 unk_158;
        } view174_17;
        struct {
            char pad[0x15C];
            u8 unk_15C[740];
        } view178_18;
        struct {
            char pad[0x15C];
            u8 pad2[740];
        } view178_19;
        struct {
            char pad[0x1B8];
            f32 unk_1B8;
        } view1D4_20;
        struct {
            char pad[0x1B8];
            f32 holdTime;
        } view1D4_21;
        struct {
            char pad[0x1BC];
            struct SharedPlayer16E4_2 * unk_1BC;
        } view1D8_22;
        struct {
            char pad[0x1BC];
            struct SharedPlayer16E4_2 * self;
        } view1D8_23;
        struct {
            char pad[0x1BC];
            struct SharedPlayer16E4_2 * f1D8;
        } view1D8_24;
        struct {
            char pad[0x1BC];
            void * unk_1BC;
        } view1D8_32;
        struct {
            char pad[0x244];
            Vec3 unk_244;
        } view260_25;
        struct {
            char pad[0x244];
            Vec3 muzzle;
        } view260_26;
        struct {
            char pad[0x2CC];
            char unk_2CC[368];
        } view2E8_27;
        struct {
            char pad[0x2CC];
            char weapon[368];
        } view2E8_28;
        struct {
            char pad[0x2CC];
            Shared_Emitter emitter;
        } view2E8_37;
        struct {
            char pad[0x43C];
            char unk_43C[384];
        } view458_29;
        struct {
            char pad[0x43C];
            char ammo[384];
        } view458_30;
        struct {
            char pad[0x43C];
            s32 unk_43C;
        } view458_40;
        struct {
            char pad[0x440];
            s32 unk_440;
        } view45C_31;
        struct {
            char pad[0x444];
            u8 unk_444[376];
        } view460_32;
        struct {
            char pad[0x444];
            u8 pad3[376];
        } view460_33;
        struct {
            char pad[0x468];
            struct Opaque_Shared_VoiceView * voice;
        } view484_44;
        struct {
            char pad[0x470];
            s8 unk_470;
        } view48C_34;
        struct {
            char pad[0x470];
            s8 state;
        } view48C_35;
        struct {
            char pad[0x4A4];
            void * unk_4A4;
        } view4C0_47;
        struct {
            char pad[0x507];
            s8 unk_507;
        } view523_36;
        struct {
            char pad[0x507];
            s8 busy;
        } view523_37;
        struct {
            char pad[0x578];
            s32 unk_578;
        } view594_38;
        struct {
            char pad[0x578];
            s32 gear;
        } view594_39;
        struct {
            char pad[0x578];
            s32 mode;
        } view594_40;
        struct {
            char pad[0x584];
            f32 unk_584;
        } view5A0_41;
        struct {
            char pad[0x584];
            f32 charge;
        } view5A0_42;
        struct {
            char pad[0x5B4];
            s32 unk_5B4;
        } view5D0_43;
        struct {
            char pad[0x5B4];
            s32 f5D0;
        } view5D0_44;
        struct {
            char pad[0x5B8];
            s32 unk_5B8;
        } view5D4_45;
        struct {
            char pad[0x5B8];
            s32 slot;
        } view5D4_46;
        struct {
            char pad[0x5B8];
            s32 profile;
        } view5D4_47;
        struct {
            char pad[0x5B8];
            s32 f5D4;
        } view5D4_48;
    } views1C;
    union {
        struct {
            struct Opaque_RecordView * unk_0;
        } view5D8_0;
        struct {
            struct Opaque_RecordView * record;
        } view5D8_1;
        struct {
            struct func_8020EA10_S3 * controls;
        } view5D8_2;
        struct {
            struct Opaque_TeamInfoView * teamInfo;
        } view5D8_3;
        struct {
            struct Opaque_CtrlView * ctrl;
        } view5D8_4;
        struct {
            unsigned char * info;
        } view5D8_5;
        struct {
            struct Opaque_ProfileView * profile;
        } view5D8_6;
        struct {
            struct Settings20 * settings;
        } view5D8_7;
        struct {
            s32 f5D8;
        } view5D8_8;
        struct {
            struct Opaque_Shared_ProfileView * profile;
        } view5D8_9;
    } views5D8;
    union {
        struct {
            void * unk_0;
        } view5DC_0;
        struct {
            void * view;
        } view5DC_1;
        struct {
            struct Opaque_ViewView * view;
        } view5DC_2;
        struct {
            u8 pad4[8];
        } view5DC_3;
        struct {
            void * entity;
        } view5DC_4;
        struct {
            struct Opaque_RiderView * rider;
        } view5DC_5;
        struct {
            char * storage;
        } view5DC_6;
        struct {
            char * messages;
        } view5DC_7;
        struct {
            struct Opaque_Shared_HudView * hud;
        } view5DC_8;
        struct {
            char pad[0x4];
            s32 unk_4;
        } view5E0_8;
        struct {
            char pad[0x4];
            s32 state;
        } view5E0_9;
        struct {
            char pad[0x4];
            s32 slot;
        } view5E0_10;
    } views5DC;
    union {
        struct {
            s32 unk_0;
        } view5E4_0;
        struct {
            s32 active;
        } view5E4_1;
        struct {
            s32 health;
        } view5E4_2;
        struct {
            s32 alive;
        } view5E4_3;
        struct {
            s32 holding;
        } view5E4_4;
    } views5E4;
    union {
        struct {
            u8 unk_0[3140];
        } view5E8_0;
        struct {
            u8 pad5[3140];
        } view5E8_1;
        struct {
            char pad[0x2];
            s16 unk_2;
        } view5EA_2;
        struct {
            char pad[0x2];
            s16 respawns;
        } view5EA_3;
        struct {
            char pad[0x2];
            s16 runType;
        } view5EA_4;
        struct {
            char pad[0x4];
            s32 unk_4;
        } view5EC_5;
        struct {
            char pad[0x4];
            s32 model;
        } view5EC_6;
        struct {
            char pad[0x4];
            s32 spawnPoint;
        } view5EC_7;
        struct {
            char pad[0x4];
            s32 f5EC;
        } view5EC_8;
        struct {
            char pad[0x8];
            s32 unk_8;
        } view5F0_9;
        struct {
            char pad[0x8];
            s32 f5F0;
        } view5F0_10;
        struct {
            char pad[0xC];
            s16 unk_C[4];
        } view5F4_11;
        struct {
            char pad[0xC];
            s16 ammo[4];
        } view5F4_12;
        struct {
            char pad[0xC];
            s16 ammo[3];
        } view5F4_13;
        struct {
            char pad[0x1A];
            Shared_Slot slots[22];
        } view602_14;
        struct {
            char pad[0x46];
            s16 unk_46;
        } view62E_13;
        struct {
            char pad[0x46];
            s16 weapon;
        } view62E_14;
        struct {
            char pad[0x46];
            s16 character;
        } view62E_17;
        struct {
            char pad[0x68];
            s16 unk_68;
        } view650_15;
        struct {
            char pad[0x68];
            s16 state;
        } view650_16;
        struct {
            char pad[0x68];
            s16 action;
        } view650_17;
        struct {
            char pad[0x68];
            s16 mode;
        } view650_18;
        struct {
            char pad[0x6A];
            s16 unk_6A;
        } view652_19;
        struct {
            char pad[0x6A];
            s16 previous;
        } view652_20;
        struct {
            char pad[0x6A];
            s16 pad652;
        } view652_24;
        struct {
            char pad[0x6C];
            s16 prevState;
        } view654_25;
        struct {
            char pad[0x6E];
            s16 pad656;
        } view656_26;
        struct {
            char pad[0x70];
            f32 unk_70;
        } view658_21;
        struct {
            char pad[0x70];
            f32 counter;
        } view658_22;
        struct {
            char pad[0x70];
            f32 stride;
        } view658_23;
        struct {
            char pad[0x70];
            f32 swimTime;
        } view658_24;
        struct {
            char pad[0x70];
            f32 stateTime;
        } view658_31;
        struct {
            char pad[0x74];
            s32 unk_74;
        } view65C_32;
        struct {
            char pad[0x78];
            s32 unk_78;
        } view660_25;
        struct {
            char pad[0x78];
            s32 previousTimer;
        } view660_26;
        struct {
            char pad[0x7C];
            s32 unk_7C;
        } view664_27;
        struct {
            char pad[0x7C];
            s32 timer;
        } view664_28;
        struct {
            char pad[0x84];
            f32 unk_84;
        } view66C_29;
        struct {
            char pad[0x88];
            f32 unk_88;
        } view670_30;
        struct {
            char pad[0x88];
            f32 shield;
        } view670_31;
        struct {
            char pad[0x90];
            f32 unk_90;
        } view678_40;
        struct {
            char pad[0xA0];
            char unk_A0[16];
        } view688_32;
        struct {
            char pad[0xA0];
            char body[16];
        } view688_33;
        struct {
            char pad[0xA0];
            Shared_Input input;
        } view688_43;
        struct {
            char pad[0xB0];
            struct Opaque_ControllerView * unk_B0;
        } view698_34;
        struct {
            char pad[0xB0];
            struct Opaque_ControllerView * controller;
        } view698_35;
        struct {
            char pad[0xB0];
            void * controller;
        } view698_36;
        struct {
            char pad[0xB0];
            char * emitter;
        } view698_37;
        struct {
            char pad[0xB0];
            char * title;
        } view698_38;
        struct {
            char pad[0xB4];
            f32 unk_B4;
        } view69C_39;
        struct {
            char pad[0xB4];
            f32 stick;
        } view69C_40;
        struct {
            char pad[0xBC];
            f32 unk_BC;
        } view6A4_41;
        struct {
            char pad[0xBC];
            f32 strafe;
        } view6A4_42;
        struct {
            char pad[0xC0];
            f32 unk_C0;
        } view6A8_43;
        struct {
            char pad[0xC0];
            f32 lift;
        } view6A8_44;
        struct {
            char pad[0xC4];
            s32 unk_C4;
        } view6AC_45;
        struct {
            char pad[0xC8];
            s32 unk_C8;
        } view6B0_46;
        struct {
            char pad[0xC8];
            s32 input;
        } view6B0_47;
        struct {
            char pad[0xC8];
            s32 state;
        } view6B0_48;
        struct {
            char pad[0xD0];
            s32 unk_D0;
        } view6B8_49;
        struct {
            char pad[0xD0];
            s32 input;
        } view6B8_50;
        struct {
            char pad[0xD8];
            f32 unk_D8;
        } view6C0_51;
        struct {
            char pad[0xD8];
            f32 climb;
        } view6C0_52;
        struct {
            char pad[0xD8];
            f32 speed;
        } view6C0_53;
        struct {
            char pad[0xD8];
            f32 velX;
        } view6C0_64;
        struct {
            char pad[0xDC];
            f32 unk_DC;
        } view6C4_54;
        struct {
            char pad[0xDC];
            f32 side;
        } view6C4_55;
        struct {
            char pad[0xDC];
            f32 velZ;
        } view6C4_67;
        struct {
            char pad[0xE0];
            f32 unk_E0;
        } view6C8_56;
        struct {
            char pad[0xE0];
            f32 speed;
        } view6C8_57;
        struct {
            char pad[0xE4];
            f32 lastVelY;
        } view6CC_70;
        struct {
            char pad[0xE8];
            s32 onGround;
        } view6D0_71;
        struct {
            char pad[0xEC];
            f32 unk_EC;
        } view6D4_58;
        struct {
            char pad[0xF0];
            f32 unk_F0;
        } view6D8_59;
        struct {
            char pad[0xF4];
            f32 unk_F4;
        } view6DC_60;
        struct {
            char pad[0xFC];
            f32 unk_FC;
        } view6E4_61;
        struct {
            char pad[0xFC];
            f32 depth;
        } view6E4_62;
        struct {
            char pad[0xFC];
            f32 airTime;
        } view6E4_77;
        struct {
            char pad[0x100];
            f32 unk_100;
        } view6E8_63;
        struct {
            char pad[0x100];
            Vec3 unk_100;
        } view6E8_79;
        struct {
            char pad[0x104];
            f32 unk_104;
        } view6EC_64;
        struct {
            char pad[0x104];
            f32 height;
        } view6EC_65;
        struct {
            char pad[0x108];
            f32 unk_108;
        } view6F0_66;
        struct {
            char pad[0x10C];
            f32 unk_10C;
        } view6F4_83;
        struct {
            char pad[0x110];
            Vec3 unk_110;
        } view6F8_84;
        struct {
            char pad[0x11C];
            f32 unk_11C;
        } view704_67;
        struct {
            char pad[0x11C];
            f32 lift;
        } view704_68;
        struct {
            char pad[0x130];
            f32 unk_130;
        } view718_69;
        struct {
            char pad[0x130];
            f32 crouch;
        } view718_70;
        struct {
            char pad[0x134];
            s32 unk_134;
        } view71C_89;
        struct {
            char pad[0x138];
            f32 swim;
        } view720_90;
        struct {
            char pad[0x13C];
            f32 unk_13C;
        } view724_71;
        struct {
            char pad[0x13C];
            f32 pitch;
        } view724_72;
        struct {
            char pad[0x140];
            f32 unk_140;
        } view728_73;
        struct {
            char pad[0x140];
            f32 kickPitch;
        } view728_74;
        struct {
            char pad[0x144];
            f32 unk_144;
        } view72C_75;
        struct {
            char pad[0x144];
            f32 kickRoll;
        } view72C_76;
        struct {
            char pad[0x144];
            f32 lean;
        } view72C_77;
        struct {
            char pad[0x148];
            f32 unk_148[3];
        } view730_78;
        struct {
            char pad[0x148];
            f32 sway[3];
        } view730_79;
        struct {
            char pad[0x154];
            f32 unk_154;
        } view73C_80;
        struct {
            char pad[0x154];
            f32 side;
        } view73C_81;
        struct {
            char pad[0x154];
            Vec3 weapon;
        } view73C_82;
        struct {
            char pad[0x158];
            f32 unk_158;
        } view740_83;
        struct {
            char pad[0x158];
            f32 height;
        } view740_84;
        struct {
            char pad[0x15C];
            f32 unk_15C;
        } view744_85;
        struct {
            char pad[0x15C];
            f32 forward;
        } view744_86;
        struct {
            char pad[0x170];
            f32 unk_170;
        } view758_87;
        struct {
            char pad[0x170];
            f32 bobStrength;
        } view758_88;
        struct {
            char pad[0x174];
            f32 unk_174;
        } view75C_89;
        struct {
            char pad[0x174];
            f32 bobSpeed;
        } view75C_90;
        struct {
            char pad[0x188];
            s16 unk_188;
        } view770_91;
        struct {
            char pad[0x188];
            s16 nextWeapon;
        } view770_92;
        struct {
            char pad[0x188];
            s16 weapon;
        } view770_113;
        struct {
            char pad[0x18A];
            s16 pad772;
        } view772_114;
        struct {
            char pad[0x18C];
            Vec3 unk_18C;
        } view774_115;
        struct {
            char pad[0x198];
            f32 unk_198;
        } view780_116;
        struct {
            char pad[0x19C];
            f32 unk_19C;
        } view784_117;
        struct {
            char pad[0x1A0];
            s32 unk_1A0;
        } view788_93;
        struct {
            char pad[0x1A0];
            s32 icons;
        } view788_94;
        struct {
            char pad[0x1B0];
            s32 unk_1B0;
        } view798_95;
        struct {
            char pad[0x1B0];
            s32 carried;
        } view798_96;
        struct {
            char pad[0x1B4];
            Vec3 unk_1B4;
        } view79C_97;
        struct {
            char pad[0x1B4];
            Vec3 carriedPosition;
        } view79C_98;
        struct {
            char pad[0x1D0];
            s32 unk_1D0;
        } view7B8_99;
        struct {
            char pad[0x1D0];
            s32 target;
        } view7B8_100;
        struct {
            char pad[0x1D4];
            f32 unk_1D4;
        } view7BC_101;
        struct {
            char pad[0x1D4];
            f32 timer;
        } view7BC_102;
        struct {
            char pad[0x1D8];
            Vec3 unk_1D8;
        } view7C0_103;
        struct {
            char pad[0x1D8];
            Vec3 targetPosition;
        } view7C0_104;
        struct {
            char pad[0x200];
            s32 unk_200;
        } view7E8_105;
        struct {
            char pad[0x200];
            s32 zoomed;
        } view7E8_106;
        struct {
            char pad[0x204];
            f32 unk_204;
        } view7EC_132;
        struct {
            char pad[0x208];
            f32 unk_208;
        } view7F0_133;
        struct {
            char pad[0x224];
            struct Opaque_MountView * unk_224;
        } view80C_107;
        struct {
            char pad[0x224];
            struct Opaque_MountView * mount;
        } view80C_108;
        struct {
            char pad[0x228];
            s32 unk_228;
        } view810_109;
        struct {
            char pad[0x228];
            s32 kind;
        } view810_110;
        struct {
            char pad[0x22C];
            Triple unk_22C;
        } view814_111;
        struct {
            char pad[0x22C];
            Triple offset;
        } view814_112;
        struct {
            char pad[0x250];
            f32 unk_250;
        } view838_113;
        struct {
            char pad[0x250];
            f32 rideTime;
        } view838_114;
        struct {
            char pad[0x254];
            f32 unk_254;
        } view83C_115;
        struct {
            char pad[0x254];
            f32 bump;
        } view83C_116;
        struct {
            char pad[0x258];
            s32 unk_258;
        } view840_117;
        struct {
            char pad[0x258];
            s32 surfaced;
        } view840_118;
        struct {
            char pad[0x264];
            s32 unk_264;
        } view84C_149;
        struct {
            char pad[0x26C];
            f32 unk_26C;
        } view854_147;
        struct {
            char pad[0x274];
            s32 unk_274;
        } view85C_119;
        struct {
            char pad[0x274];
            s32 w85C;
        } view85C_120;
        struct {
            char pad[0x27C];
            s32 unk_27C;
        } view864_121;
        struct {
            char pad[0x27C];
            s32 f864;
        } view864_122;
        struct {
            char pad[0x280];
            s32 unk_280;
        } view868_123;
        struct {
            char pad[0x280];
            s32 f868;
        } view868_124;
        struct {
            char pad[0x284];
            s32 unk_284;
        } view86C_125;
        struct {
            char pad[0x284];
            s32 parameter;
        } view86C_126;
        struct {
            char pad[0x284];
            s32 animation;
        } view86C_127;
        struct {
            char pad[0x288];
            s32 unk_288;
        } view870_157;
        struct {
            char pad[0x290];
            Shared_Effect effect;
        } view878_158;
        struct {
            char pad[0x350];
            char unk_350[2188];
        } view938_128;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_129;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_130;
        struct {
            char pad[0x350];
            s32 unk_350;
        } view938_162;
        struct {
            char pad[0x6D0];
            s32 unk_6D0;
        } viewCB8_163;
        struct {
            char pad[0x6E4];
            s32 unk_6E4;
        } viewCCC_164;
        struct {
            char pad[0x758];
            s32 unk_758;
        } viewD40_165;
        struct {
            char pad[0x96C];
            s32 unk_96C;
        } viewF54_131;
        struct {
            char pad[0x96C];
            s32 selection;
        } viewF54_132;
        struct {
            char pad[0x9A8];
            s32 unk_9A8;
        } viewF90_133;
        struct {
            char pad[0x9A8];
            s32 choice;
        } viewF90_134;
        struct {
            char pad[0xBCC];
            s32 unk_BCC;
        } view11B4_135;
        struct {
            char pad[0xBCC];
            s32 locked;
        } view11B4_136;
        struct {
            char pad[0xBD0];
            s32 unk_BD0;
        } view11B8_137;
        struct {
            char pad[0xBD0];
            s32 frozen;
        } view11B8_138;
        struct {
            char pad[0xBD4];
            s32 unk_BD4;
        } view11BC_139;
        struct {
            char pad[0xBD4];
            s32 f11BC;
        } view11BC_140;
        struct {
            char pad[0xBD8];
            s32 unk_BD8;
        } view11C0_141;
        struct {
            char pad[0xBD8];
            s32 f11C0;
        } view11C0_142;
        struct {
            char pad[0xBDC];
            f32 unk_BDC;
        } view11C4_143;
        struct {
            char pad[0xBDC];
            f32 soundTime;
        } view11C4_144;
        struct {
            char pad[0xBE4];
            s32 unk_BE4;
        } view11CC_145;
        struct {
            char pad[0xBE4];
            s32 f11CC;
        } view11CC_146;
        struct {
            char pad[0xBF0];
            f32 unk_BF0;
        } view11D8_147;
        struct {
            char pad[0xBF0];
            f32 recoil;
        } view11D8_148;
        struct {
            char pad[0xBF0];
            f32 stun;
        } view11D8_149;
        struct {
            char pad[0xBF4];
            f32 unk_BF4;
        } view11DC_185;
        struct {
            char pad[0xBF8];
            f32 unk_BF8;
        } view11E0_186;
        struct {
            char pad[0xC00];
            s32 unk_C00;
        } view11E8_150;
        struct {
            char pad[0xC00];
            s32 f11E8;
        } view11E8_151;
        struct {
            char pad[0xC04];
            f32 unk_C04;
        } view11EC_189;
        struct {
            char pad[0xC28];
            s32 unk_C28;
        } view1210_152;
        struct {
            char pad[0xC28];
            s32 marker;
        } view1210_153;
        struct {
            char pad[0xC2C];
            s32 unk_C2C;
        } view1214_154;
        struct {
            char pad[0xC2C];
            s32 marker;
        } view1214_155;
        struct {
            char pad[0xC2C];
            s32 markerShown;
        } view1214_156;
        struct {
            char pad[0xC30];
            s32 unk_C30;
        } view1218_157;
        struct {
            char pad[0xC30];
            s32 f1218;
        } view1218_158;
        struct {
            char pad[0xC34];
            s32 unk_C34;
        } view121C_159;
        struct {
            char pad[0xC34];
            s32 f121C;
        } view121C_160;
        struct {
            char pad[0xC38];
            s32 unk_C38;
        } view1220_161;
        struct {
            char pad[0xC38];
            s32 f1220;
        } view1220_162;
        struct { char pad[0xE]; s16 charge; } chargeView;
        struct { char pad[0x11F4 - 0x5E8]; f32 spin; s32 frame; } rapidFireView;
    } views5E8;
    union {
        struct {
            u32 unk_0;
        } view122C_0;
        struct {
            u32 flags;
        } view122C_1;
        struct {
            s32 options;
        } view122C_2;
        struct {
            s32 f122C;
        } view122C_3;
        struct {
            s32 fxFlags;
        } view122C_4;
    } views122C;
    f32 fxTime;
    f32 fxSpeed;
    s32 fxStage;
    char pad123C[0x4];
    f32 unk_1240;
    f32 unk_1244;
    char pad1248[0x7C];
    union {
        struct {
            s32 unk_0;
        } view12C4_0;
        struct {
            s32 f12C4;
        } view12C4_1;
    } views12C4;
    union {
        struct {
            s32 unk_0;
        } view12C8_0;
        struct {
            s32 f12C8;
        } view12C8_1;
    } views12C8;
    union {
        struct {
            s32 unk_0[8];
        } view12CC_0;
        struct {
            s32 splitsA[8];
        } view12CC_1;
    } views12CC;
    s32 unk_12EC;
    char pad12F0[0x4];
    union {
        struct {
            s32 unk_0[8];
        } view12F4_0;
        struct {
            s32 splitsB[8];
        } view12F4_1;
    } views12F4;
    char pad1314[0x20];
    union {
        struct {
            s32 unk_0;
        } view1334_0;
        struct {
            s32 f1334;
        } view1334_1;
    } views1334;
    union {
        struct {
            s32 unk_0;
        } view1338_0;
        struct {
            s32 f1338;
        } view1338_1;
    } views1338;
    union {
        struct {
            s32 unk_0;
        } view133C_0;
        struct {
            s32 laps;
        } view133C_1;
        struct {
            s32 lives;
        } view133C_2;
    } views133C;
    union {
        struct {
            s32 unk_0;
        } view1340_0;
        struct {
            s32 stalls;
        } view1340_1;
        struct {
            s32 timer;
        } view1340_2;
        struct {
            s32 respawnTimer;
        } view1340_3;
    } views1340;
    char pad1344[0x70];
    union {
        struct {
            struct Opaque_StateInfoView * unk_0;
        } view13B4_0;
        struct {
            struct Opaque_StateInfoView * states;
        } view13B4_1;
        struct {
            struct Opaque_ModeView * unk_0;
        } view13B4_2;
        struct {
            void * character;
        } view13B4_3;
        struct {
            s32 f13B4;
        } view13B4_4;
        struct {
            struct Opaque_Shared_StateInfoView * states;
        } view13B4_5;
    } views13B4;
    char pad13B8[0x10];
    union {
        struct {
            s32 unk_0;
        } view13C8_0;
        struct {
            s32 w13C8;
        } view13C8_1;
        struct {
            s32 f13C8;
        } view13C8_2;
    } views13C8;
    char pad13CC[0x8];
    s32 unk_13D4;
    union {
        struct {
            struct Opaque_HeldView * unk_0;
        } view13D8_0;
        struct {
            struct Opaque_HeldView * held;
        } view13D8_1;
    } views13D8;
    char pad13DC[0xC];
    s32 messageIndex;
    char pad13EC[0x64];
    union {
        struct {
            s32 unk_0;
        } view1450_0;
        struct {
            s32 computer;
        } view1450_1;
        struct {
            s32 infinite;
        } view1450_2;
        struct {
            s32 unlimited;
        } view1450_3;
        struct {
            s32 uncounted;
        } view1450_4;
        struct {
            s32 f1450;
        } view1450_5;
    } views1450;
    union {
        struct {
            s32 unk_0;
        } view1454_0;
        struct {
            s32 f1454;
        } view1454_1;
    } views1454;
    char pad1458[0xC];
    union {
        struct {
            Vec3 unk_0;
        } view1464_0;
        struct {
            Vec3 aim;
        } view1464_1;
    } views1464;
    char pad1470[0x10];
    union {
        struct {
            Matrix unk_0[2];
        } view1480_0;
        struct {
            Matrix beams[2];
        } view1480_1;
    } views1480;
    union {
        struct {
            Matrix unk_0[2];
        } view1500_0;
        struct {
            Matrix lasers[2];
        } view1500_1;
    } views1500;
    union {
        struct {
            Matrix unk_0[2];
        } view1580_0;
        struct {
            Matrix dots[2];
        } view1580_1;
    } views1580;
    char pad1600[0xD4];
    union {
        struct {
            s32 unk_0;
        } view16D4_0;
        struct {
            s32 f16D4;
        } view16D4_1;
    } views16D4;
    u16 unk_16D8;
    char pad16DA[0x6];
    union {
        struct {
            struct SharedPlayer16E4_2 * unk_0;
        } view16E0_0;
        struct {
            struct SharedPlayer16E4_2 * next;
        } view16E0_1;
        struct {
            struct SharedPlayer16E4_2 * next;
        } view16E0_2;
    } views16E0;
};
struct func_80207B5C_S2;
struct func_80207B5C_S2 {
    char pad0[0x24];
    s32 unk24;
};
struct Body;
struct Character;
struct Controller;
struct Controls;
struct Ctrl;
struct Held;
struct Mode;
struct Model;
struct Mount;
struct Profile;
struct Record;
struct Rider;
struct SharedPlayer_func_80210248_eu;
struct Shared_Body;
struct Shared_Hud;
struct Shared_Model;
struct Shared_Profile;
struct Shared_StateInfo;
struct Shared_Voice;
struct StateInfo;
struct View;
struct func_80207B5C_S2;
struct SharedPlayer_func_80210248_eu {
    union {
        struct {
            u8 unk0[24];
        } view0_0;
        struct {
            u8 pad0[24];
        } view0_1;
        struct {
            char pad[0x3];
            u8 team;
        } view3_2;
        struct {
            char pad[0x8];
            Vec3 unk8;
        } view8_2;
        struct {
            char pad[0x8];
            Vec3 pos;
        } view8_3;
        struct {
            char pad[0x8];
            Vec3 position;
        } view8_4;
        struct {
            char pad[0x14];
            struct Shared_Model * model;
        } view14_6;
        struct { char pad[8]; s32 positionWords[3]; } positionBits;
    } views0;
    union {
        struct {
            char * unk18;
        } view18_0;
        struct {
            char * track;
        } view18_1;
        struct {
            struct Model * model;
        } view18_2;
        struct {
            struct Body * body;
        } view18_3;
        struct {
            struct Character * character;
        } view18_4;
        struct {
            struct Shared_Body * body;
        } view18_5;
    } views18;
    union {
        struct {
            u8 unk1C[344];
        } view1C_0;
        struct {
            u8 pad1[344];
        } view1C_1;
        struct {
            char pad[0x4];
            f32 velY;
        } view20_2;
        struct {
            char pad[0x1C];
            s32 unk38;
        } view38_2;
        struct {
            char pad[0x1C];
            s32 flags;
        } view38_3;
        struct {
            char pad[0x24];
            f32 unk40;
        } view40_5;
        struct {
            char pad[0x40];
            Shared_Quad unk5C;
        } view5C_6;
        struct {
            char pad[0x50];
            f32 unk6C;
        } view6C_4;
        struct {
            char pad[0x50];
            f32 heading;
        } view6C_5;
        struct {
            char pad[0x50];
            f32 yaw;
        } view6C_9;
        struct {
            char pad[0xC8];
            u16 unkE4;
        } viewE4_6;
        struct {
            char pad[0xC8];
            u16 kind;
        } viewE4_7;
        struct {
            char pad[0xE4];
            s32 unk100;
        } view100_8;
        struct {
            char pad[0xE4];
            s32 flags;
        } view100_9;
        struct {
            char pad[0xE8];
            f32 unk104;
        } view104_10;
        struct {
            char pad[0xE8];
            f32 idleTime;
        } view104_11;
        struct {
            char pad[0xEC];
            s16 anim;
        } view108_16;
        struct {
            char pad[0xF2];
            s8 unk10E;
        } view10E_12;
        struct {
            char pad[0xF2];
            s8 idle;
        } view10E_13;
        struct {
            char pad[0xF2];
            s8 replaying;
        } view10E_14;
        struct {
            char pad[0xF2];
            s8 animPending;
        } view10E_20;
        struct {
            char pad[0x154];
            char unk170[100];
        } view170_15;
        struct {
            char pad[0x154];
            char body[100];
        } view170_16;
        struct {
            char pad[0x154];
            s32 unk170;
        } view170_23;
        struct {
            char pad[0x158];
            s32 unk174;
        } view174_17;
        struct {
            char pad[0x15C];
            u8 unk178[740];
        } view178_18;
        struct {
            char pad[0x15C];
            u8 pad2[740];
        } view178_19;
        struct {
            char pad[0x1B8];
            f32 unk1D4;
        } view1D4_20;
        struct {
            char pad[0x1B8];
            f32 holdTime;
        } view1D4_21;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_80210248_eu * unk1D8;
        } view1D8_22;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_80210248_eu * self;
        } view1D8_23;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_80210248_eu * f1D8;
        } view1D8_24;
        struct {
            char pad[0x1BC];
            void * unk1D8;
        } view1D8_32;
        struct {
            char pad[0x244];
            Vec3 unk260;
        } view260_25;
        struct {
            char pad[0x244];
            Vec3 muzzle;
        } view260_26;
        struct {
            char pad[0x2CC];
            char unk2E8[368];
        } view2E8_27;
        struct {
            char pad[0x2CC];
            char weapon[368];
        } view2E8_28;
        struct {
            char pad[0x2CC];
            Shared_Emitter emitter;
        } view2E8_37;
        struct {
            char pad[0x43C];
            char unk458[384];
        } view458_29;
        struct {
            char pad[0x43C];
            char ammo[384];
        } view458_30;
        struct {
            char pad[0x43C];
            s32 unk458;
        } view458_40;
        struct {
            char pad[0x440];
            s32 unk45C;
        } view45C_31;
        struct {
            char pad[0x444];
            u8 unk460[376];
        } view460_32;
        struct {
            char pad[0x444];
            u8 pad3[376];
        } view460_33;
        struct {
            char pad[0x468];
            struct Shared_Voice * voice;
        } view484_44;
        struct {
            char pad[0x470];
            s8 unk48C;
        } view48C_34;
        struct {
            char pad[0x470];
            s8 state;
        } view48C_35;
        struct {
            char pad[0x4A4];
            void * unk4C0;
        } view4C0_47;
        struct {
            char pad[0x507];
            s8 unk523;
        } view523_36;
        struct {
            char pad[0x507];
            s8 busy;
        } view523_37;
        struct {
            char pad[0x578];
            s32 unk594;
        } view594_38;
        struct {
            char pad[0x578];
            s32 gear;
        } view594_39;
        struct {
            char pad[0x578];
            s32 mode;
        } view594_40;
        struct {
            char pad[0x584];
            f32 unk5A0;
        } view5A0_41;
        struct {
            char pad[0x584];
            f32 charge;
        } view5A0_42;
        struct {
            char pad[0x5B4];
            s32 unk5D0;
        } view5D0_43;
        struct {
            char pad[0x5B4];
            s32 f5D0;
        } view5D0_44;
        struct {
            char pad[0x5B8];
            s32 unk5D4;
        } view5D4_45;
        struct {
            char pad[0x5B8];
            s32 slot;
        } view5D4_46;
        struct {
            char pad[0x5B8];
            s32 profile;
        } view5D4_47;
        struct {
            char pad[0x5B8];
            s32 f5D4;
        } view5D4_48;
    } views1C;
    union {
        struct {
            struct Record * unk5D8;
        } view5D8_0;
        struct {
            struct Record * record;
        } view5D8_1;
        struct {
            struct Controls * controls;
        } view5D8_2;
        struct {
            struct Record * teamInfo;
        } view5D8_3;
        struct {
            struct Ctrl * ctrl;
        } view5D8_4;
        struct {
            unsigned char * info;
        } view5D8_5;
        struct {
            struct Profile * profile;
        } view5D8_6;
        struct {
            struct func_80207B5C_S2 * settings;
        } view5D8_7;
        struct {
            s32 f5D8;
        } view5D8_8;
        struct {
            struct Shared_Profile * profile;
        } view5D8_9;
    } views5D8;
    union {
        struct {
            void * unk5DC;
        } view5DC_0;
        struct {
            void * view;
        } view5DC_1;
        struct {
            struct View * view;
        } view5DC_2;
        struct {
            u8 pad4[8];
        } view5DC_3;
        struct {
            void * entity;
        } view5DC_4;
        struct {
            struct Rider * rider;
        } view5DC_5;
        struct {
            char * storage;
        } view5DC_6;
        struct {
            char * messages;
        } view5DC_7;
        struct {
            struct Shared_Hud * hud;
        } view5DC_8;
        struct {
            char pad[0x4];
            s32 unk5E0;
        } view5E0_8;
        struct {
            char pad[0x4];
            s32 state;
        } view5E0_9;
        struct {
            char pad[0x4];
            s32 slot;
        } view5E0_10;
    } views5DC;
    union {
        struct {
            s32 unk5E4;
        } view5E4_0;
        struct {
            s32 active;
        } view5E4_1;
        struct {
            s32 health;
        } view5E4_2;
        struct {
            s32 alive;
        } view5E4_3;
        struct {
            s32 holding;
        } view5E4_4;
    } views5E4;
    union {
        struct {
            u8 unk5E8[3140];
        } view5E8_0;
        struct {
            u8 pad5[3140];
        } view5E8_1;
        struct {
            char pad[0x2];
            s16 unk5EA;
        } view5EA_2;
        struct {
            char pad[0x2];
            s16 respawns;
        } view5EA_3;
        struct {
            char pad[0x2];
            s16 runType;
        } view5EA_4;
        struct {
            char pad[0x4];
            s32 unk5EC;
        } view5EC_5;
        struct {
            char pad[0x4];
            s32 model;
        } view5EC_6;
        struct {
            char pad[0x4];
            s32 spawnPoint;
        } view5EC_7;
        struct {
            char pad[0x4];
            s32 f5EC;
        } view5EC_8;
        struct {
            char pad[0x8];
            s32 unk5F0;
        } view5F0_9;
        struct {
            char pad[0x8];
            s32 f5F0;
        } view5F0_10;
        struct {
            char pad[0xC];
            s16 unk5F4[4];
        } view5F4_11;
        struct {
            char pad[0xC];
            s16 ammo[4];
        } view5F4_12;
        struct {
            char pad[0xC];
            s16 ammo[3];
        } view5F4_13;
        struct {
            char pad[0x1A];
            Shared_Slot slots[22];
        } view602_14;
        struct {
            char pad[0x46];
            s16 unk62E;
        } view62E_13;
        struct {
            char pad[0x46];
            s16 weapon;
        } view62E_14;
        struct {
            char pad[0x46];
            s16 character;
        } view62E_17;
        struct {
            char pad[0x68];
            s16 unk650;
        } view650_15;
        struct {
            char pad[0x68];
            s16 state;
        } view650_16;
        struct {
            char pad[0x68];
            s16 action;
        } view650_17;
        struct {
            char pad[0x68];
            s16 mode;
        } view650_18;
        struct {
            char pad[0x6A];
            s16 unk652;
        } view652_19;
        struct {
            char pad[0x6A];
            s16 previous;
        } view652_20;
        struct {
            char pad[0x6A];
            s16 pad652;
        } view652_24;
        struct {
            char pad[0x6C];
            s16 prevState;
        } view654_25;
        struct {
            char pad[0x6E];
            s16 pad656;
        } view656_26;
        struct {
            char pad[0x70];
            f32 unk658;
        } view658_21;
        struct {
            char pad[0x70];
            f32 counter;
        } view658_22;
        struct {
            char pad[0x70];
            f32 stride;
        } view658_23;
        struct {
            char pad[0x70];
            f32 swimTime;
        } view658_24;
        struct {
            char pad[0x70];
            f32 stateTime;
        } view658_31;
        struct {
            char pad[0x74];
            s32 unk65C;
        } view65C_32;
        struct {
            char pad[0x78];
            s32 unk660;
        } view660_25;
        struct {
            char pad[0x78];
            s32 previousTimer;
        } view660_26;
        struct {
            char pad[0x7C];
            s32 unk664;
        } view664_27;
        struct {
            char pad[0x7C];
            s32 timer;
        } view664_28;
        struct {
            char pad[0x84];
            f32 unk66C;
        } view66C_29;
        struct {
            char pad[0x88];
            f32 unk670;
        } view670_30;
        struct {
            char pad[0x88];
            f32 shield;
        } view670_31;
        struct {
            char pad[0x90];
            f32 unk678;
        } view678_40;
        struct {
            char pad[0xA0];
            char unk688[16];
        } view688_32;
        struct {
            char pad[0xA0];
            char body[16];
        } view688_33;
        struct {
            char pad[0xA0];
            Shared_Input input;
        } view688_43;
        struct {
            char pad[0xB0];
            struct Controller * unk698;
        } view698_34;
        struct {
            char pad[0xB0];
            struct Controller * controller;
        } view698_35;
        struct {
            char pad[0xB0];
            void * controller;
        } view698_36;
        struct {
            char pad[0xB0];
            char * emitter;
        } view698_37;
        struct {
            char pad[0xB0];
            char * title;
        } view698_38;
        struct {
            char pad[0xB4];
            f32 unk69C;
        } view69C_39;
        struct {
            char pad[0xB4];
            f32 stick;
        } view69C_40;
        struct {
            char pad[0xBC];
            f32 unk6A4;
        } view6A4_41;
        struct {
            char pad[0xBC];
            f32 strafe;
        } view6A4_42;
        struct {
            char pad[0xC0];
            f32 unk6A8;
        } view6A8_43;
        struct {
            char pad[0xC0];
            f32 lift;
        } view6A8_44;
        struct {
            char pad[0xC4];
            s32 unk6AC;
        } view6AC_45;
        struct {
            char pad[0xC8];
            s32 unk6B0;
        } view6B0_46;
        struct {
            char pad[0xC8];
            s32 input;
        } view6B0_47;
        struct {
            char pad[0xC8];
            s32 state;
        } view6B0_48;
        struct {
            char pad[0xD0];
            s32 unk6B8;
        } view6B8_49;
        struct {
            char pad[0xD0];
            s32 input;
        } view6B8_50;
        struct {
            char pad[0xD8];
            f32 unk6C0;
        } view6C0_51;
        struct {
            char pad[0xD8];
            f32 climb;
        } view6C0_52;
        struct {
            char pad[0xD8];
            f32 speed;
        } view6C0_53;
        struct {
            char pad[0xD8];
            f32 velX;
        } view6C0_64;
        struct {
            char pad[0xDC];
            f32 unk6C4;
        } view6C4_54;
        struct {
            char pad[0xDC];
            f32 side;
        } view6C4_55;
        struct {
            char pad[0xDC];
            f32 velZ;
        } view6C4_67;
        struct {
            char pad[0xE0];
            f32 unk6C8;
        } view6C8_56;
        struct {
            char pad[0xE0];
            f32 speed;
        } view6C8_57;
        struct {
            char pad[0xE4];
            f32 lastVelY;
        } view6CC_70;
        struct {
            char pad[0xE8];
            s32 onGround;
        } view6D0_71;
        struct {
            char pad[0xEC];
            f32 unk6D4;
        } view6D4_58;
        struct {
            char pad[0xF0];
            f32 unk6D8;
        } view6D8_59;
        struct {
            char pad[0xF4];
            f32 unk6DC;
        } view6DC_60;
        struct {
            char pad[0xFC];
            f32 unk6E4;
        } view6E4_61;
        struct {
            char pad[0xFC];
            f32 depth;
        } view6E4_62;
        struct {
            char pad[0xFC];
            f32 airTime;
        } view6E4_77;
        struct {
            char pad[0x100];
            f32 unk6E8;
        } view6E8_63;
        struct {
            char pad[0x100];
            Vec3 unk6E8;
        } view6E8_79;
        struct {
            char pad[0x104];
            f32 unk6EC;
        } view6EC_64;
        struct {
            char pad[0x104];
            f32 height;
        } view6EC_65;
        struct {
            char pad[0x108];
            f32 unk6F0;
        } view6F0_66;
        struct {
            char pad[0x10C];
            f32 unk6F4;
        } view6F4_83;
        struct {
            char pad[0x110];
            Vec3 unk6F8;
        } view6F8_84;
        struct {
            char pad[0x11C];
            f32 unk704;
        } view704_67;
        struct {
            char pad[0x11C];
            f32 lift;
        } view704_68;
        struct {
            char pad[0x130];
            f32 unk718;
        } view718_69;
        struct {
            char pad[0x130];
            f32 crouch;
        } view718_70;
        struct {
            char pad[0x134];
            s32 unk71C;
        } view71C_89;
        struct {
            char pad[0x138];
            f32 swim;
        } view720_90;
        struct {
            char pad[0x13C];
            f32 unk724;
        } view724_71;
        struct {
            char pad[0x13C];
            f32 pitch;
        } view724_72;
        struct {
            char pad[0x140];
            f32 unk728;
        } view728_73;
        struct {
            char pad[0x140];
            f32 kickPitch;
        } view728_74;
        struct {
            char pad[0x144];
            f32 unk72C;
        } view72C_75;
        struct {
            char pad[0x144];
            f32 kickRoll;
        } view72C_76;
        struct {
            char pad[0x144];
            f32 lean;
        } view72C_77;
        struct {
            char pad[0x148];
            f32 unk730[3];
        } view730_78;
        struct {
            char pad[0x148];
            f32 sway[3];
        } view730_79;
        struct {
            char pad[0x154];
            f32 unk73C;
        } view73C_80;
        struct {
            char pad[0x154];
            f32 side;
        } view73C_81;
        struct {
            char pad[0x154];
            Vec3 weapon;
        } view73C_82;
        struct {
            char pad[0x158];
            f32 unk740;
        } view740_83;
        struct {
            char pad[0x158];
            f32 height;
        } view740_84;
        struct {
            char pad[0x15C];
            f32 unk744;
        } view744_85;
        struct {
            char pad[0x15C];
            f32 forward;
        } view744_86;
        struct {
            char pad[0x170];
            f32 unk758;
        } view758_87;
        struct {
            char pad[0x170];
            f32 bobStrength;
        } view758_88;
        struct {
            char pad[0x174];
            f32 unk75C;
        } view75C_89;
        struct {
            char pad[0x174];
            f32 bobSpeed;
        } view75C_90;
        struct {
            char pad[0x188];
            s16 unk770;
        } view770_91;
        struct {
            char pad[0x188];
            s16 nextWeapon;
        } view770_92;
        struct {
            char pad[0x188];
            s16 weapon;
        } view770_113;
        struct {
            char pad[0x18A];
            s16 pad772;
        } view772_114;
        struct {
            char pad[0x18C];
            Vec3 unk774;
        } view774_115;
        struct {
            char pad[0x198];
            f32 unk780;
        } view780_116;
        struct {
            char pad[0x19C];
            f32 unk784;
        } view784_117;
        struct {
            char pad[0x1A0];
            s32 unk788;
        } view788_93;
        struct {
            char pad[0x1A0];
            s32 icons;
        } view788_94;
        struct {
            char pad[0x1B0];
            s32 unk798;
        } view798_95;
        struct {
            char pad[0x1B0];
            s32 carried;
        } view798_96;
        struct {
            char pad[0x1B4];
            Vec3 unk79C;
        } view79C_97;
        struct {
            char pad[0x1B4];
            Vec3 carriedPosition;
        } view79C_98;
        struct {
            char pad[0x1D0];
            s32 unk7B8;
        } view7B8_99;
        struct {
            char pad[0x1D0];
            s32 target;
        } view7B8_100;
        struct {
            char pad[0x1D4];
            f32 unk7BC;
        } view7BC_101;
        struct {
            char pad[0x1D4];
            f32 timer;
        } view7BC_102;
        struct {
            char pad[0x1D8];
            Vec3 unk7C0;
        } view7C0_103;
        struct {
            char pad[0x1D8];
            Vec3 targetPosition;
        } view7C0_104;
        struct {
            char pad[0x200];
            s32 unk7E8;
        } view7E8_105;
        struct {
            char pad[0x200];
            s32 zoomed;
        } view7E8_106;
        struct {
            char pad[0x204];
            f32 unk7EC;
        } view7EC_132;
        struct {
            char pad[0x208];
            f32 unk7F0;
        } view7F0_133;
        struct {
            char pad[0x224];
            struct Mount * unk80C;
        } view80C_107;
        struct {
            char pad[0x224];
            struct Mount * mount;
        } view80C_108;
        struct {
            char pad[0x228];
            s32 unk810;
        } view810_109;
        struct {
            char pad[0x228];
            s32 kind;
        } view810_110;
        struct {
            char pad[0x22C];
            Triple unk814;
        } view814_111;
        struct {
            char pad[0x22C];
            Triple offset;
        } view814_112;
        struct {
            char pad[0x250];
            f32 unk838;
        } view838_113;
        struct {
            char pad[0x250];
            f32 rideTime;
        } view838_114;
        struct {
            char pad[0x254];
            f32 unk83C;
        } view83C_115;
        struct {
            char pad[0x254];
            f32 bump;
        } view83C_116;
        struct {
            char pad[0x258];
            s32 unk840;
        } view840_117;
        struct {
            char pad[0x258];
            s32 surfaced;
        } view840_118;
        struct {
            char pad[0x264];
            s32 unk84C;
        } view84C_149;
        struct {
            char pad[0x26C];
            f32 unk854;
        } view854_147;
        struct {
            char pad[0x274];
            s32 unk85C;
        } view85C_119;
        struct {
            char pad[0x274];
            s32 w85C;
        } view85C_120;
        struct {
            char pad[0x27C];
            s32 unk864;
        } view864_121;
        struct {
            char pad[0x27C];
            s32 f864;
        } view864_122;
        struct {
            char pad[0x280];
            s32 unk868;
        } view868_123;
        struct {
            char pad[0x280];
            s32 f868;
        } view868_124;
        struct {
            char pad[0x284];
            s32 unk86C;
        } view86C_125;
        struct {
            char pad[0x284];
            s32 parameter;
        } view86C_126;
        struct {
            char pad[0x284];
            s32 animation;
        } view86C_127;
        struct {
            char pad[0x288];
            s32 unk870;
        } view870_157;
        struct {
            char pad[0x290];
            Shared_Effect effect;
        } view878_158;
        struct {
            char pad[0x350];
            char unk938[2188];
        } view938_128;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_129;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_130;
        struct {
            char pad[0x350];
            s32 unk938;
        } view938_162;
        struct {
            char pad[0x6D0];
            s32 unkCB8;
        } viewCB8_163;
        struct {
            char pad[0x6E4];
            s32 unkCCC;
        } viewCCC_164;
        struct {
            char pad[0x758];
            s32 unkD40;
        } viewD40_165;
        struct {
            char pad[0x96C];
            s32 unkF54;
        } viewF54_131;
        struct {
            char pad[0x96C];
            s32 selection;
        } viewF54_132;
        struct {
            char pad[0x9A8];
            s32 unkF90;
        } viewF90_133;
        struct {
            char pad[0x9A8];
            s32 choice;
        } viewF90_134;
        struct {
            char pad[0xBCC];
            s32 unk11B4;
        } view11B4_135;
        struct {
            char pad[0xBCC];
            s32 locked;
        } view11B4_136;
        struct {
            char pad[0xBD0];
            s32 unk11B8;
        } view11B8_137;
        struct {
            char pad[0xBD0];
            s32 frozen;
        } view11B8_138;
        struct {
            char pad[0xBD4];
            s32 unk11BC;
        } view11BC_139;
        struct {
            char pad[0xBD4];
            s32 f11BC;
        } view11BC_140;
        struct {
            char pad[0xBD8];
            s32 unk11C0;
        } view11C0_141;
        struct {
            char pad[0xBD8];
            s32 f11C0;
        } view11C0_142;
        struct {
            char pad[0xBDC];
            f32 unk11C4;
        } view11C4_143;
        struct {
            char pad[0xBDC];
            f32 soundTime;
        } view11C4_144;
        struct {
            char pad[0xBE4];
            s32 unk11CC;
        } view11CC_145;
        struct {
            char pad[0xBE4];
            s32 f11CC;
        } view11CC_146;
        struct {
            char pad[0xBF0];
            f32 unk11D8;
        } view11D8_147;
        struct {
            char pad[0xBF0];
            f32 recoil;
        } view11D8_148;
        struct {
            char pad[0xBF0];
            f32 stun;
        } view11D8_149;
        struct {
            char pad[0xBF4];
            f32 unk11DC;
        } view11DC_185;
        struct {
            char pad[0xBF8];
            f32 unk11E0;
        } view11E0_186;
        struct {
            char pad[0xC00];
            s32 unk11E8;
        } view11E8_150;
        struct {
            char pad[0xC00];
            s32 f11E8;
        } view11E8_151;
        struct {
            char pad[0xC04];
            f32 unk11EC;
        } view11EC_189;
        struct {
            char pad[0xC28];
            s32 unk1210;
        } view1210_152;
        struct {
            char pad[0xC28];
            s32 marker;
        } view1210_153;
        struct {
            char pad[0xC2C];
            s32 unk1214;
        } view1214_154;
        struct {
            char pad[0xC2C];
            s32 marker;
        } view1214_155;
        struct {
            char pad[0xC2C];
            s32 markerShown;
        } view1214_156;
        struct {
            char pad[0xC30];
            s32 unk1218;
        } view1218_157;
        struct {
            char pad[0xC30];
            s32 f1218;
        } view1218_158;
        struct {
            char pad[0xC34];
            s32 unk121C;
        } view121C_159;
        struct {
            char pad[0xC34];
            s32 f121C;
        } view121C_160;
        struct {
            char pad[0xC38];
            s32 unk1220;
        } view1220_161;
        struct {
            char pad[0xC38];
            s32 f1220;
        } view1220_162;
        struct { char pad[0xE]; s16 charge; } chargeView;
        struct { char pad[0x11F4 - 0x5E8]; f32 spin; s32 frame; } rapidFireView;
    } views5E8;
    union {
        struct {
            u32 unk122C;
        } view122C_0;
        struct {
            u32 flags;
        } view122C_1;
        struct {
            s32 options;
        } view122C_2;
        struct {
            s32 f122C;
        } view122C_3;
        struct {
            s32 fxFlags;
        } view122C_4;
    } views122C;
    f32 fxTime;
    f32 fxSpeed;
    s32 fxStage;
    char pad123C[0x4];
    f32 unk1240;
    f32 unk1244;
    char pad1248[0x7C];
    union {
        struct {
            s32 unk12C4;
        } view12C4_0;
        struct {
            s32 f12C4;
        } view12C4_1;
    } views12C4;
    union {
        struct {
            s32 unk12C8;
        } view12C8_0;
        struct {
            s32 f12C8;
        } view12C8_1;
    } views12C8;
    union {
        struct {
            s32 unk12CC[8];
        } view12CC_0;
        struct {
            s32 splitsA[8];
        } view12CC_1;
    } views12CC;
    s32 unk12EC;
    char pad12F0[0x4];
    union {
        struct {
            s32 unk12F4[8];
        } view12F4_0;
        struct {
            s32 splitsB[8];
        } view12F4_1;
    } views12F4;
    char pad1314[0x20];
    union {
        struct {
            s32 unk1334;
        } view1334_0;
        struct {
            s32 f1334;
        } view1334_1;
    } views1334;
    union {
        struct {
            s32 unk1338;
        } view1338_0;
        struct {
            s32 f1338;
        } view1338_1;
    } views1338;
    union {
        struct {
            s32 unk133C;
        } view133C_0;
        struct {
            s32 laps;
        } view133C_1;
        struct {
            s32 lives;
        } view133C_2;
    } views133C;
    union {
        struct {
            s32 unk1340;
        } view1340_0;
        struct {
            s32 stalls;
        } view1340_1;
        struct {
            s32 timer;
        } view1340_2;
        struct {
            s32 respawnTimer;
        } view1340_3;
    } views1340;
    char pad1344[0x70];
    union {
        struct {
            struct StateInfo * unk13B4;
        } view13B4_0;
        struct {
            struct StateInfo * states;
        } view13B4_1;
        struct {
            struct Mode * unk13B4;
        } view13B4_2;
        struct {
            void * character;
        } view13B4_3;
        struct {
            s32 f13B4;
        } view13B4_4;
        struct {
            struct Shared_StateInfo * states;
        } view13B4_5;
    } views13B4;
    char pad13B8[0x10];
    union {
        struct {
            s32 unk13C8;
        } view13C8_0;
        struct {
            s32 w13C8;
        } view13C8_1;
        struct {
            s32 f13C8;
        } view13C8_2;
    } views13C8;
    char pad13CC[0x8];
    s32 unk13D4;
    union {
        struct {
            struct Held * unk13D8;
        } view13D8_0;
        struct {
            struct Held * held;
        } view13D8_1;
    } views13D8;
    char pad13DC[0xC];
    s32 messageIndex;
    char pad13EC[0x64];
    union {
        struct {
            s32 unk1450;
        } view1450_0;
        struct {
            s32 computer;
        } view1450_1;
        struct {
            s32 infinite;
        } view1450_2;
        struct {
            s32 unlimited;
        } view1450_3;
        struct {
            s32 uncounted;
        } view1450_4;
        struct {
            s32 f1450;
        } view1450_5;
    } views1450;
    union {
        struct {
            s32 unk1454;
        } view1454_0;
        struct {
            s32 f1454;
        } view1454_1;
    } views1454;
    char pad1458[0xC];
    union {
        struct {
            Vec3 unk1464;
        } view1464_0;
        struct {
            Vec3 aim;
        } view1464_1;
    } views1464;
    char pad1470[0x10];
    union {
        struct {
            Matrix unk1480[2];
        } view1480_0;
        struct {
            Matrix beams[2];
        } view1480_1;
    } views1480;
    union {
        struct {
            Matrix unk1500[2];
        } view1500_0;
        struct {
            Matrix lasers[2];
        } view1500_1;
    } views1500;
    union {
        struct {
            Matrix unk1580[2];
        } view1580_0;
        struct {
            Matrix dots[2];
        } view1580_1;
    } views1580;
    char pad1600[0xD4];
    union {
        struct {
            s32 unk16D4;
        } view16D4_0;
        struct {
            s32 f16D4;
        } view16D4_1;
    } views16D4;
    u16 unk16D8;
    char pad16DA[0x6];
    union {
        struct {
            struct SharedPlayer_func_80210248_eu * unk16E0;
        } view16E0_0;
        struct {
            struct SharedPlayer_func_80210248_eu * next;
        } view16E0_1;
        struct {
            struct SharedPlayer_func_80210248_eu * next;
        } view16E0_2;
    } views16E0;
};
struct Body;
struct Character;
struct Controller;
struct Controls;
struct Ctrl;
struct Held;
struct Mode;
struct Model;
struct Mount;
struct Profile;
struct Record;
struct Rider;
struct Settings;
struct SharedPlayer_func_8021D408_de;
struct Shared_Body;
struct Shared_Hud;
struct Shared_Model;
struct Shared_Profile;
struct Shared_StateInfo;
struct Shared_Voice;
struct StateInfo;
struct TeamInfo;
struct func_8023945C_S1;
struct SharedPlayer_func_8021D408_de {
    union {
        struct {
            u8 unk0[24];
        } view0_0;
        struct {
            u8 pad0[24];
        } view0_1;
        struct {
            char pad[0x3];
            u8 team;
        } view3_2;
        struct {
            char pad[0x8];
            Vec3 unk8;
        } view8_2;
        struct {
            char pad[0x8];
            Vec3 pos;
        } view8_3;
        struct {
            char pad[0x8];
            Vec3 position;
        } view8_4;
        struct {
            char pad[0x14];
            struct Shared_Model * model;
        } view14_6;
        struct { char pad[8]; s32 positionWords[3]; } positionBits;
    } views0;
    union {
        struct {
            char * unk18;
        } view18_0;
        struct {
            char * track;
        } view18_1;
        struct {
            struct Model * model;
        } view18_2;
        struct {
            struct Body * body;
        } view18_3;
        struct {
            struct Character * character;
        } view18_4;
        struct {
            struct Shared_Body * body;
        } view18_5;
    } views18;
    union {
        struct {
            u8 unk1C[344];
        } view1C_0;
        struct {
            u8 pad1[344];
        } view1C_1;
        struct {
            char pad[0x4];
            f32 velY;
        } view20_2;
        struct {
            char pad[0x1C];
            s32 unk38;
        } view38_2;
        struct {
            char pad[0x1C];
            s32 flags;
        } view38_3;
        struct {
            char pad[0x24];
            f32 unk40;
        } view40_5;
        struct {
            char pad[0x40];
            Shared_Quad unk5C;
        } view5C_6;
        struct {
            char pad[0x50];
            f32 unk6C;
        } view6C_4;
        struct {
            char pad[0x50];
            f32 heading;
        } view6C_5;
        struct {
            char pad[0x50];
            f32 yaw;
        } view6C_9;
        struct {
            char pad[0xC8];
            u16 unkE4;
        } viewE4_6;
        struct {
            char pad[0xC8];
            u16 kind;
        } viewE4_7;
        struct {
            char pad[0xE4];
            s32 unk100;
        } view100_8;
        struct {
            char pad[0xE4];
            s32 flags;
        } view100_9;
        struct {
            char pad[0xE8];
            f32 unk104;
        } view104_10;
        struct {
            char pad[0xE8];
            f32 idleTime;
        } view104_11;
        struct {
            char pad[0xEC];
            s16 anim;
        } view108_16;
        struct {
            char pad[0xF2];
            s8 unk10E;
        } view10E_12;
        struct {
            char pad[0xF2];
            s8 idle;
        } view10E_13;
        struct {
            char pad[0xF2];
            s8 replaying;
        } view10E_14;
        struct {
            char pad[0xF2];
            s8 animPending;
        } view10E_20;
        struct {
            char pad[0x154];
            char unk170[100];
        } view170_15;
        struct {
            char pad[0x154];
            char body[100];
        } view170_16;
        struct {
            char pad[0x154];
            s32 unk170;
        } view170_23;
        struct {
            char pad[0x158];
            s32 unk174;
        } view174_17;
        struct {
            char pad[0x15C];
            u8 unk178[740];
        } view178_18;
        struct {
            char pad[0x15C];
            u8 pad2[740];
        } view178_19;
        struct {
            char pad[0x1B8];
            f32 unk1D4;
        } view1D4_20;
        struct {
            char pad[0x1B8];
            f32 holdTime;
        } view1D4_21;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8021D408_de * unk1D8;
        } view1D8_22;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8021D408_de * self;
        } view1D8_23;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8021D408_de * f1D8;
        } view1D8_24;
        struct {
            char pad[0x1BC];
            void * unk1D8;
        } view1D8_32;
        struct {
            char pad[0x244];
            Vec3 unk260;
        } view260_25;
        struct {
            char pad[0x244];
            Vec3 muzzle;
        } view260_26;
        struct {
            char pad[0x2CC];
            char unk2E8[368];
        } view2E8_27;
        struct {
            char pad[0x2CC];
            char weapon[368];
        } view2E8_28;
        struct {
            char pad[0x2CC];
            Shared_Emitter emitter;
        } view2E8_37;
        struct {
            char pad[0x43C];
            char unk458[384];
        } view458_29;
        struct {
            char pad[0x43C];
            char ammo[384];
        } view458_30;
        struct {
            char pad[0x43C];
            s32 unk458;
        } view458_40;
        struct {
            char pad[0x440];
            s32 unk45C;
        } view45C_31;
        struct {
            char pad[0x444];
            u8 unk460[376];
        } view460_32;
        struct {
            char pad[0x444];
            u8 pad3[376];
        } view460_33;
        struct {
            char pad[0x468];
            struct Shared_Voice * voice;
        } view484_44;
        struct {
            char pad[0x470];
            s8 unk48C;
        } view48C_34;
        struct {
            char pad[0x470];
            s8 state;
        } view48C_35;
        struct {
            char pad[0x4A4];
            void * unk4C0;
        } view4C0_47;
        struct {
            char pad[0x507];
            s8 unk523;
        } view523_36;
        struct {
            char pad[0x507];
            s8 busy;
        } view523_37;
        struct {
            char pad[0x578];
            s32 unk594;
        } view594_38;
        struct {
            char pad[0x578];
            s32 gear;
        } view594_39;
        struct {
            char pad[0x578];
            s32 mode;
        } view594_40;
        struct {
            char pad[0x584];
            f32 unk5A0;
        } view5A0_41;
        struct {
            char pad[0x584];
            f32 charge;
        } view5A0_42;
        struct {
            char pad[0x5B4];
            s32 unk5D0;
        } view5D0_43;
        struct {
            char pad[0x5B4];
            s32 f5D0;
        } view5D0_44;
        struct {
            char pad[0x5B8];
            s32 unk5D4;
        } view5D4_45;
        struct {
            char pad[0x5B8];
            s32 slot;
        } view5D4_46;
        struct {
            char pad[0x5B8];
            s32 profile;
        } view5D4_47;
        struct {
            char pad[0x5B8];
            s32 f5D4;
        } view5D4_48;
    } views1C;
    union {
        struct {
            struct Record * unk5D8;
        } view5D8_0;
        struct {
            struct Record * record;
        } view5D8_1;
        struct {
            struct Controls * controls;
        } view5D8_2;
        struct {
            struct TeamInfo * teamInfo;
        } view5D8_3;
        struct {
            struct Ctrl * ctrl;
        } view5D8_4;
        struct {
            unsigned char * info;
        } view5D8_5;
        struct {
            struct Profile * profile;
        } view5D8_6;
        struct {
            struct Settings * settings;
        } view5D8_7;
        struct {
            s32 f5D8;
        } view5D8_8;
        struct {
            struct Shared_Profile * profile;
        } view5D8_9;
    } views5D8;
    union {
        struct {
            void * unk5DC;
        } view5DC_0;
        struct {
            void * view;
        } view5DC_1;
        struct {
            struct func_8023945C_S1 * view;
        } view5DC_2;
        struct {
            u8 pad4[8];
        } view5DC_3;
        struct {
            void * entity;
        } view5DC_4;
        struct {
            struct Rider * rider;
        } view5DC_5;
        struct {
            char * storage;
        } view5DC_6;
        struct {
            char * messages;
        } view5DC_7;
        struct {
            struct Shared_Hud * hud;
        } view5DC_8;
        struct {
            char pad[0x4];
            s32 unk5E0;
        } view5E0_8;
        struct {
            char pad[0x4];
            s32 state;
        } view5E0_9;
        struct {
            char pad[0x4];
            s32 slot;
        } view5E0_10;
    } views5DC;
    union {
        struct {
            s32 unk5E4;
        } view5E4_0;
        struct {
            s32 active;
        } view5E4_1;
        struct {
            s32 health;
        } view5E4_2;
        struct {
            s32 alive;
        } view5E4_3;
        struct {
            s32 holding;
        } view5E4_4;
    } views5E4;
    union {
        struct {
            u8 unk5E8[3140];
        } view5E8_0;
        struct {
            u8 pad5[3140];
        } view5E8_1;
        struct {
            char pad[0x2];
            s16 unk5EA;
        } view5EA_2;
        struct {
            char pad[0x2];
            s16 respawns;
        } view5EA_3;
        struct {
            char pad[0x2];
            s16 runType;
        } view5EA_4;
        struct {
            char pad[0x4];
            s32 unk5EC;
        } view5EC_5;
        struct {
            char pad[0x4];
            s32 model;
        } view5EC_6;
        struct {
            char pad[0x4];
            s32 spawnPoint;
        } view5EC_7;
        struct {
            char pad[0x4];
            s32 f5EC;
        } view5EC_8;
        struct {
            char pad[0x8];
            s32 unk5F0;
        } view5F0_9;
        struct {
            char pad[0x8];
            s32 f5F0;
        } view5F0_10;
        struct {
            char pad[0xC];
            s16 unk5F4[4];
        } view5F4_11;
        struct {
            char pad[0xC];
            s16 ammo[4];
        } view5F4_12;
        struct {
            char pad[0xC];
            s16 ammo[3];
        } view5F4_13;
        struct {
            char pad[0x1A];
            Shared_Slot slots[22];
        } view602_14;
        struct {
            char pad[0x46];
            s16 unk62E;
        } view62E_13;
        struct {
            char pad[0x46];
            s16 weapon;
        } view62E_14;
        struct {
            char pad[0x46];
            s16 character;
        } view62E_17;
        struct {
            char pad[0x68];
            s16 unk650;
        } view650_15;
        struct {
            char pad[0x68];
            s16 state;
        } view650_16;
        struct {
            char pad[0x68];
            s16 action;
        } view650_17;
        struct {
            char pad[0x68];
            s16 mode;
        } view650_18;
        struct {
            char pad[0x6A];
            s16 unk652;
        } view652_19;
        struct {
            char pad[0x6A];
            s16 previous;
        } view652_20;
        struct {
            char pad[0x6A];
            s16 pad652;
        } view652_24;
        struct {
            char pad[0x6C];
            s16 prevState;
        } view654_25;
        struct {
            char pad[0x6E];
            s16 pad656;
        } view656_26;
        struct {
            char pad[0x70];
            f32 unk658;
        } view658_21;
        struct {
            char pad[0x70];
            f32 counter;
        } view658_22;
        struct {
            char pad[0x70];
            f32 stride;
        } view658_23;
        struct {
            char pad[0x70];
            f32 swimTime;
        } view658_24;
        struct {
            char pad[0x70];
            f32 stateTime;
        } view658_31;
        struct {
            char pad[0x74];
            s32 unk65C;
        } view65C_32;
        struct {
            char pad[0x78];
            s32 unk660;
        } view660_25;
        struct {
            char pad[0x78];
            s32 previousTimer;
        } view660_26;
        struct {
            char pad[0x7C];
            s32 unk664;
        } view664_27;
        struct {
            char pad[0x7C];
            s32 timer;
        } view664_28;
        struct {
            char pad[0x84];
            f32 unk66C;
        } view66C_29;
        struct {
            char pad[0x88];
            f32 unk670;
        } view670_30;
        struct {
            char pad[0x88];
            f32 shield;
        } view670_31;
        struct {
            char pad[0x90];
            f32 unk678;
        } view678_40;
        struct {
            char pad[0xA0];
            char unk688[16];
        } view688_32;
        struct {
            char pad[0xA0];
            char body[16];
        } view688_33;
        struct {
            char pad[0xA0];
            Shared_Input input;
        } view688_43;
        struct {
            char pad[0xB0];
            struct Controller * unk698;
        } view698_34;
        struct {
            char pad[0xB0];
            struct Controller * controller;
        } view698_35;
        struct {
            char pad[0xB0];
            void * controller;
        } view698_36;
        struct {
            char pad[0xB0];
            char * emitter;
        } view698_37;
        struct {
            char pad[0xB0];
            char * title;
        } view698_38;
        struct {
            char pad[0xB4];
            f32 unk69C;
        } view69C_39;
        struct {
            char pad[0xB4];
            f32 stick;
        } view69C_40;
        struct {
            char pad[0xBC];
            f32 unk6A4;
        } view6A4_41;
        struct {
            char pad[0xBC];
            f32 strafe;
        } view6A4_42;
        struct {
            char pad[0xC0];
            f32 unk6A8;
        } view6A8_43;
        struct {
            char pad[0xC0];
            f32 lift;
        } view6A8_44;
        struct {
            char pad[0xC4];
            s32 unk6AC;
        } view6AC_45;
        struct {
            char pad[0xC8];
            s32 unk6B0;
        } view6B0_46;
        struct {
            char pad[0xC8];
            s32 input;
        } view6B0_47;
        struct {
            char pad[0xC8];
            s32 state;
        } view6B0_48;
        struct {
            char pad[0xD0];
            s32 unk6B8;
        } view6B8_49;
        struct {
            char pad[0xD0];
            s32 input;
        } view6B8_50;
        struct {
            char pad[0xD8];
            f32 unk6C0;
        } view6C0_51;
        struct {
            char pad[0xD8];
            f32 climb;
        } view6C0_52;
        struct {
            char pad[0xD8];
            f32 speed;
        } view6C0_53;
        struct {
            char pad[0xD8];
            f32 velX;
        } view6C0_64;
        struct {
            char pad[0xDC];
            f32 unk6C4;
        } view6C4_54;
        struct {
            char pad[0xDC];
            f32 side;
        } view6C4_55;
        struct {
            char pad[0xDC];
            f32 velZ;
        } view6C4_67;
        struct {
            char pad[0xE0];
            f32 unk6C8;
        } view6C8_56;
        struct {
            char pad[0xE0];
            f32 speed;
        } view6C8_57;
        struct {
            char pad[0xE4];
            f32 lastVelY;
        } view6CC_70;
        struct {
            char pad[0xE8];
            s32 onGround;
        } view6D0_71;
        struct {
            char pad[0xEC];
            f32 unk6D4;
        } view6D4_58;
        struct {
            char pad[0xF0];
            f32 unk6D8;
        } view6D8_59;
        struct {
            char pad[0xF4];
            f32 unk6DC;
        } view6DC_60;
        struct {
            char pad[0xFC];
            f32 unk6E4;
        } view6E4_61;
        struct {
            char pad[0xFC];
            f32 depth;
        } view6E4_62;
        struct {
            char pad[0xFC];
            f32 airTime;
        } view6E4_77;
        struct {
            char pad[0x100];
            f32 unk6E8;
        } view6E8_63;
        struct {
            char pad[0x100];
            Vec3 unk6E8;
        } view6E8_79;
        struct {
            char pad[0x104];
            f32 unk6EC;
        } view6EC_64;
        struct {
            char pad[0x104];
            f32 height;
        } view6EC_65;
        struct {
            char pad[0x108];
            f32 unk6F0;
        } view6F0_66;
        struct {
            char pad[0x10C];
            f32 unk6F4;
        } view6F4_83;
        struct {
            char pad[0x110];
            Vec3 unk6F8;
        } view6F8_84;
        struct {
            char pad[0x11C];
            f32 unk704;
        } view704_67;
        struct {
            char pad[0x11C];
            f32 lift;
        } view704_68;
        struct {
            char pad[0x130];
            f32 unk718;
        } view718_69;
        struct {
            char pad[0x130];
            f32 crouch;
        } view718_70;
        struct {
            char pad[0x134];
            s32 unk71C;
        } view71C_89;
        struct {
            char pad[0x138];
            f32 swim;
        } view720_90;
        struct {
            char pad[0x13C];
            f32 unk724;
        } view724_71;
        struct {
            char pad[0x13C];
            f32 pitch;
        } view724_72;
        struct {
            char pad[0x140];
            f32 unk728;
        } view728_73;
        struct {
            char pad[0x140];
            f32 kickPitch;
        } view728_74;
        struct {
            char pad[0x144];
            f32 unk72C;
        } view72C_75;
        struct {
            char pad[0x144];
            f32 kickRoll;
        } view72C_76;
        struct {
            char pad[0x144];
            f32 lean;
        } view72C_77;
        struct {
            char pad[0x148];
            f32 unk730[3];
        } view730_78;
        struct {
            char pad[0x148];
            f32 sway[3];
        } view730_79;
        struct {
            char pad[0x154];
            f32 unk73C;
        } view73C_80;
        struct {
            char pad[0x154];
            f32 side;
        } view73C_81;
        struct {
            char pad[0x154];
            Vec3 weapon;
        } view73C_82;
        struct {
            char pad[0x158];
            f32 unk740;
        } view740_83;
        struct {
            char pad[0x158];
            f32 height;
        } view740_84;
        struct {
            char pad[0x15C];
            f32 unk744;
        } view744_85;
        struct {
            char pad[0x15C];
            f32 forward;
        } view744_86;
        struct {
            char pad[0x170];
            f32 unk758;
        } view758_87;
        struct {
            char pad[0x170];
            f32 bobStrength;
        } view758_88;
        struct {
            char pad[0x174];
            f32 unk75C;
        } view75C_89;
        struct {
            char pad[0x174];
            f32 bobSpeed;
        } view75C_90;
        struct {
            char pad[0x188];
            s16 unk770;
        } view770_91;
        struct {
            char pad[0x188];
            s16 nextWeapon;
        } view770_92;
        struct {
            char pad[0x188];
            s16 weapon;
        } view770_113;
        struct {
            char pad[0x18A];
            s16 pad772;
        } view772_114;
        struct {
            char pad[0x18C];
            Vec3 unk774;
        } view774_115;
        struct {
            char pad[0x198];
            f32 unk780;
        } view780_116;
        struct {
            char pad[0x19C];
            f32 unk784;
        } view784_117;
        struct {
            char pad[0x1A0];
            s32 unk788;
        } view788_93;
        struct {
            char pad[0x1A0];
            s32 icons;
        } view788_94;
        struct {
            char pad[0x1B0];
            s32 unk798;
        } view798_95;
        struct {
            char pad[0x1B0];
            s32 carried;
        } view798_96;
        struct {
            char pad[0x1B4];
            Vec3 unk79C;
        } view79C_97;
        struct {
            char pad[0x1B4];
            Vec3 carriedPosition;
        } view79C_98;
        struct {
            char pad[0x1D0];
            s32 unk7B8;
        } view7B8_99;
        struct {
            char pad[0x1D0];
            s32 target;
        } view7B8_100;
        struct {
            char pad[0x1D4];
            f32 unk7BC;
        } view7BC_101;
        struct {
            char pad[0x1D4];
            f32 timer;
        } view7BC_102;
        struct {
            char pad[0x1D8];
            Vec3 unk7C0;
        } view7C0_103;
        struct {
            char pad[0x1D8];
            Vec3 targetPosition;
        } view7C0_104;
        struct {
            char pad[0x200];
            s32 unk7E8;
        } view7E8_105;
        struct {
            char pad[0x200];
            s32 zoomed;
        } view7E8_106;
        struct {
            char pad[0x204];
            f32 unk7EC;
        } view7EC_132;
        struct {
            char pad[0x208];
            f32 unk7F0;
        } view7F0_133;
        struct {
            char pad[0x224];
            struct Mount * unk80C;
        } view80C_107;
        struct {
            char pad[0x224];
            struct Mount * mount;
        } view80C_108;
        struct {
            char pad[0x228];
            s32 unk810;
        } view810_109;
        struct {
            char pad[0x228];
            s32 kind;
        } view810_110;
        struct {
            char pad[0x22C];
            Triple unk814;
        } view814_111;
        struct {
            char pad[0x22C];
            Triple offset;
        } view814_112;
        struct {
            char pad[0x250];
            f32 unk838;
        } view838_113;
        struct {
            char pad[0x250];
            f32 rideTime;
        } view838_114;
        struct {
            char pad[0x254];
            f32 unk83C;
        } view83C_115;
        struct {
            char pad[0x254];
            f32 bump;
        } view83C_116;
        struct {
            char pad[0x258];
            s32 unk840;
        } view840_117;
        struct {
            char pad[0x258];
            s32 surfaced;
        } view840_118;
        struct {
            char pad[0x264];
            s32 unk84C;
        } view84C_149;
        struct {
            char pad[0x26C];
            f32 unk854;
        } view854_147;
        struct {
            char pad[0x274];
            s32 unk85C;
        } view85C_119;
        struct {
            char pad[0x274];
            s32 w85C;
        } view85C_120;
        struct {
            char pad[0x27C];
            s32 unk864;
        } view864_121;
        struct {
            char pad[0x27C];
            s32 f864;
        } view864_122;
        struct {
            char pad[0x280];
            s32 unk868;
        } view868_123;
        struct {
            char pad[0x280];
            s32 f868;
        } view868_124;
        struct {
            char pad[0x284];
            s32 unk86C;
        } view86C_125;
        struct {
            char pad[0x284];
            s32 parameter;
        } view86C_126;
        struct {
            char pad[0x284];
            s32 animation;
        } view86C_127;
        struct {
            char pad[0x288];
            s32 unk870;
        } view870_157;
        struct {
            char pad[0x290];
            Shared_Effect effect;
        } view878_158;
        struct {
            char pad[0x350];
            char unk938[2188];
        } view938_128;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_129;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_130;
        struct {
            char pad[0x350];
            s32 unk938;
        } view938_162;
        struct {
            char pad[0x6D0];
            s32 unkCB8;
        } viewCB8_163;
        struct {
            char pad[0x6E4];
            s32 unkCCC;
        } viewCCC_164;
        struct {
            char pad[0x758];
            s32 unkD40;
        } viewD40_165;
        struct {
            char pad[0x96C];
            s32 unkF54;
        } viewF54_131;
        struct {
            char pad[0x96C];
            s32 selection;
        } viewF54_132;
        struct {
            char pad[0x9A8];
            s32 unkF90;
        } viewF90_133;
        struct {
            char pad[0x9A8];
            s32 choice;
        } viewF90_134;
        struct {
            char pad[0xBCC];
            s32 unk11B4;
        } view11B4_135;
        struct {
            char pad[0xBCC];
            s32 locked;
        } view11B4_136;
        struct {
            char pad[0xBD0];
            s32 unk11B8;
        } view11B8_137;
        struct {
            char pad[0xBD0];
            s32 frozen;
        } view11B8_138;
        struct {
            char pad[0xBD4];
            s32 unk11BC;
        } view11BC_139;
        struct {
            char pad[0xBD4];
            s32 f11BC;
        } view11BC_140;
        struct {
            char pad[0xBD8];
            s32 unk11C0;
        } view11C0_141;
        struct {
            char pad[0xBD8];
            s32 f11C0;
        } view11C0_142;
        struct {
            char pad[0xBDC];
            f32 unk11C4;
        } view11C4_143;
        struct {
            char pad[0xBDC];
            f32 soundTime;
        } view11C4_144;
        struct {
            char pad[0xBE4];
            s32 unk11CC;
        } view11CC_145;
        struct {
            char pad[0xBE4];
            s32 f11CC;
        } view11CC_146;
        struct {
            char pad[0xBF0];
            f32 unk11D8;
        } view11D8_147;
        struct {
            char pad[0xBF0];
            f32 recoil;
        } view11D8_148;
        struct {
            char pad[0xBF0];
            f32 stun;
        } view11D8_149;
        struct {
            char pad[0xBF4];
            f32 unk11DC;
        } view11DC_185;
        struct {
            char pad[0xBF8];
            f32 unk11E0;
        } view11E0_186;
        struct {
            char pad[0xC00];
            s32 unk11E8;
        } view11E8_150;
        struct {
            char pad[0xC00];
            s32 f11E8;
        } view11E8_151;
        struct {
            char pad[0xC04];
            f32 unk11EC;
        } view11EC_189;
        struct {
            char pad[0xC28];
            s32 unk1210;
        } view1210_152;
        struct {
            char pad[0xC28];
            s32 marker;
        } view1210_153;
        struct {
            char pad[0xC2C];
            s32 unk1214;
        } view1214_154;
        struct {
            char pad[0xC2C];
            s32 marker;
        } view1214_155;
        struct {
            char pad[0xC2C];
            s32 markerShown;
        } view1214_156;
        struct {
            char pad[0xC30];
            s32 unk1218;
        } view1218_157;
        struct {
            char pad[0xC30];
            s32 f1218;
        } view1218_158;
        struct {
            char pad[0xC34];
            s32 unk121C;
        } view121C_159;
        struct {
            char pad[0xC34];
            s32 f121C;
        } view121C_160;
        struct {
            char pad[0xC38];
            s32 unk1220;
        } view1220_161;
        struct {
            char pad[0xC38];
            s32 f1220;
        } view1220_162;
        struct { char pad[0xE]; s16 charge; } chargeView;
        struct { char pad[0x11F4 - 0x5E8]; f32 spin; s32 frame; } rapidFireView;
    } views5E8;
    union {
        struct {
            u32 unk122C;
        } view122C_0;
        struct {
            u32 flags;
        } view122C_1;
        struct {
            s32 options;
        } view122C_2;
        struct {
            s32 f122C;
        } view122C_3;
        struct {
            s32 fxFlags;
        } view122C_4;
    } views122C;
    f32 fxTime;
    f32 fxSpeed;
    s32 fxStage;
    char pad123C[0x4];
    f32 unk1240;
    f32 unk1244;
    char pad1248[0x7C];
    union {
        struct {
            s32 unk12C4;
        } view12C4_0;
        struct {
            s32 f12C4;
        } view12C4_1;
    } views12C4;
    union {
        struct {
            s32 unk12C8;
        } view12C8_0;
        struct {
            s32 f12C8;
        } view12C8_1;
    } views12C8;
    union {
        struct {
            s32 unk12CC[8];
        } view12CC_0;
        struct {
            s32 splitsA[8];
        } view12CC_1;
    } views12CC;
    s32 unk12EC;
    char pad12F0[0x4];
    union {
        struct {
            s32 unk12F4[8];
        } view12F4_0;
        struct {
            s32 splitsB[8];
        } view12F4_1;
    } views12F4;
    char pad1314[0x20];
    union {
        struct {
            s32 unk1334;
        } view1334_0;
        struct {
            s32 f1334;
        } view1334_1;
    } views1334;
    union {
        struct {
            s32 unk1338;
        } view1338_0;
        struct {
            s32 f1338;
        } view1338_1;
    } views1338;
    union {
        struct {
            s32 unk133C;
        } view133C_0;
        struct {
            s32 laps;
        } view133C_1;
        struct {
            s32 lives;
        } view133C_2;
    } views133C;
    union {
        struct {
            s32 unk1340;
        } view1340_0;
        struct {
            s32 stalls;
        } view1340_1;
        struct {
            s32 timer;
        } view1340_2;
        struct {
            s32 respawnTimer;
        } view1340_3;
    } views1340;
    char pad1344[0x70];
    union {
        struct {
            struct StateInfo * unk13B4;
        } view13B4_0;
        struct {
            struct StateInfo * states;
        } view13B4_1;
        struct {
            struct Mode * unk13B4;
        } view13B4_2;
        struct {
            void * character;
        } view13B4_3;
        struct {
            s32 f13B4;
        } view13B4_4;
        struct {
            struct Shared_StateInfo * states;
        } view13B4_5;
    } views13B4;
    char pad13B8[0x10];
    union {
        struct {
            s32 unk13C8;
        } view13C8_0;
        struct {
            s32 w13C8;
        } view13C8_1;
        struct {
            s32 f13C8;
        } view13C8_2;
    } views13C8;
    char pad13CC[0x8];
    s32 unk13D4;
    union {
        struct {
            struct Held * unk13D8;
        } view13D8_0;
        struct {
            struct Held * held;
        } view13D8_1;
    } views13D8;
    char pad13DC[0xC];
    s32 messageIndex;
    char pad13EC[0x64];
    union {
        struct {
            s32 unk1450;
        } view1450_0;
        struct {
            s32 computer;
        } view1450_1;
        struct {
            s32 infinite;
        } view1450_2;
        struct {
            s32 unlimited;
        } view1450_3;
        struct {
            s32 uncounted;
        } view1450_4;
        struct {
            s32 f1450;
        } view1450_5;
    } views1450;
    union {
        struct {
            s32 unk1454;
        } view1454_0;
        struct {
            s32 f1454;
        } view1454_1;
    } views1454;
    char pad1458[0xC];
    union {
        struct {
            Vec3 unk1464;
        } view1464_0;
        struct {
            Vec3 aim;
        } view1464_1;
    } views1464;
    char pad1470[0x10];
    union {
        struct {
            Matrix unk1480[2];
        } view1480_0;
        struct {
            Matrix beams[2];
        } view1480_1;
    } views1480;
    union {
        struct {
            Matrix unk1500[2];
        } view1500_0;
        struct {
            Matrix lasers[2];
        } view1500_1;
    } views1500;
    union {
        struct {
            Matrix unk1580[2];
        } view1580_0;
        struct {
            Matrix dots[2];
        } view1580_1;
    } views1580;
    char pad1600[0xD4];
    union {
        struct {
            s32 unk16D4;
        } view16D4_0;
        struct {
            s32 f16D4;
        } view16D4_1;
    } views16D4;
    u16 unk16D8;
    char pad16DA[0x6];
    union {
        struct {
            struct SharedPlayer_func_8021D408_de * unk16E0;
        } view16E0_0;
        struct {
            struct SharedPlayer_func_8021D408_de * next;
        } view16E0_1;
        struct {
            struct SharedPlayer_func_8021D408_de * next;
        } view16E0_2;
    } views16E0;
};
struct Body;
struct Character;
struct Controller;
struct Ctrl;
struct Held;
struct Mode;
struct Model;
struct Mount;
struct Profile;
struct Record;
struct Rider;
struct Settings;
struct SharedPlayer_func_8021E2A0_de;
struct Shared_Body;
struct Shared_Hud;
struct Shared_Model;
struct Shared_Profile;
struct Shared_StateInfo;
struct Shared_Voice;
struct StateInfo;
struct TeamInfo;
struct View;
struct func_8020EA10_S3;
struct SharedPlayer_func_8021E2A0_de {
    union {
        struct {
            u8 unk0[24];
        } view0_0;
        struct {
            u8 pad0[24];
        } view0_1;
        struct {
            char pad[0x3];
            u8 team;
        } view3_2;
        struct {
            char pad[0x8];
            Vec3 unk8;
        } view8_2;
        struct {
            char pad[0x8];
            Vec3 pos;
        } view8_3;
        struct {
            char pad[0x8];
            Vec3 position;
        } view8_4;
        struct {
            char pad[0x14];
            struct Shared_Model * model;
        } view14_6;
        struct { char pad[8]; s32 positionWords[3]; } positionBits;
    } views0;
    union {
        struct {
            char * unk18;
        } view18_0;
        struct {
            char * track;
        } view18_1;
        struct {
            struct Model * model;
        } view18_2;
        struct {
            struct Body * body;
        } view18_3;
        struct {
            struct Character * character;
        } view18_4;
        struct {
            struct Shared_Body * body;
        } view18_5;
    } views18;
    union {
        struct {
            u8 unk1C[344];
        } view1C_0;
        struct {
            u8 pad1[344];
        } view1C_1;
        struct {
            char pad[0x4];
            f32 velY;
        } view20_2;
        struct {
            char pad[0x1C];
            s32 unk38;
        } view38_2;
        struct {
            char pad[0x1C];
            s32 flags;
        } view38_3;
        struct {
            char pad[0x24];
            f32 unk40;
        } view40_5;
        struct {
            char pad[0x40];
            Shared_Quad unk5C;
        } view5C_6;
        struct {
            char pad[0x50];
            f32 unk6C;
        } view6C_4;
        struct {
            char pad[0x50];
            f32 heading;
        } view6C_5;
        struct {
            char pad[0x50];
            f32 yaw;
        } view6C_9;
        struct {
            char pad[0xC8];
            u16 unkE4;
        } viewE4_6;
        struct {
            char pad[0xC8];
            u16 kind;
        } viewE4_7;
        struct {
            char pad[0xE4];
            s32 unk100;
        } view100_8;
        struct {
            char pad[0xE4];
            s32 flags;
        } view100_9;
        struct {
            char pad[0xE8];
            f32 unk104;
        } view104_10;
        struct {
            char pad[0xE8];
            f32 idleTime;
        } view104_11;
        struct {
            char pad[0xEC];
            s16 anim;
        } view108_16;
        struct {
            char pad[0xF2];
            s8 unk10E;
        } view10E_12;
        struct {
            char pad[0xF2];
            s8 idle;
        } view10E_13;
        struct {
            char pad[0xF2];
            s8 replaying;
        } view10E_14;
        struct {
            char pad[0xF2];
            s8 animPending;
        } view10E_20;
        struct {
            char pad[0x154];
            char unk170[100];
        } view170_15;
        struct {
            char pad[0x154];
            char body[100];
        } view170_16;
        struct {
            char pad[0x154];
            s32 unk170;
        } view170_23;
        struct {
            char pad[0x158];
            s32 unk174;
        } view174_17;
        struct {
            char pad[0x15C];
            u8 unk178[740];
        } view178_18;
        struct {
            char pad[0x15C];
            u8 pad2[740];
        } view178_19;
        struct {
            char pad[0x1B8];
            f32 unk1D4;
        } view1D4_20;
        struct {
            char pad[0x1B8];
            f32 holdTime;
        } view1D4_21;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8021E2A0_de * unk1D8;
        } view1D8_22;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8021E2A0_de * self;
        } view1D8_23;
        struct {
            char pad[0x1BC];
            struct SharedPlayer_func_8021E2A0_de * f1D8;
        } view1D8_24;
        struct {
            char pad[0x1BC];
            void * unk1D8;
        } view1D8_32;
        struct {
            char pad[0x244];
            Vec3 unk260;
        } view260_25;
        struct {
            char pad[0x244];
            Vec3 muzzle;
        } view260_26;
        struct {
            char pad[0x2CC];
            char unk2E8[368];
        } view2E8_27;
        struct {
            char pad[0x2CC];
            char weapon[368];
        } view2E8_28;
        struct {
            char pad[0x2CC];
            Shared_Emitter emitter;
        } view2E8_37;
        struct {
            char pad[0x43C];
            char unk458[384];
        } view458_29;
        struct {
            char pad[0x43C];
            char ammo[384];
        } view458_30;
        struct {
            char pad[0x43C];
            s32 unk458;
        } view458_40;
        struct {
            char pad[0x440];
            s32 unk45C;
        } view45C_31;
        struct {
            char pad[0x444];
            u8 unk460[376];
        } view460_32;
        struct {
            char pad[0x444];
            u8 pad3[376];
        } view460_33;
        struct {
            char pad[0x468];
            struct Shared_Voice * voice;
        } view484_44;
        struct {
            char pad[0x470];
            s8 unk48C;
        } view48C_34;
        struct {
            char pad[0x470];
            s8 state;
        } view48C_35;
        struct {
            char pad[0x4A4];
            void * unk4C0;
        } view4C0_47;
        struct {
            char pad[0x507];
            s8 unk523;
        } view523_36;
        struct {
            char pad[0x507];
            s8 busy;
        } view523_37;
        struct {
            char pad[0x578];
            s32 unk594;
        } view594_38;
        struct {
            char pad[0x578];
            s32 gear;
        } view594_39;
        struct {
            char pad[0x578];
            s32 mode;
        } view594_40;
        struct {
            char pad[0x584];
            f32 unk5A0;
        } view5A0_41;
        struct {
            char pad[0x584];
            f32 charge;
        } view5A0_42;
        struct {
            char pad[0x5B4];
            s32 unk5D0;
        } view5D0_43;
        struct {
            char pad[0x5B4];
            s32 f5D0;
        } view5D0_44;
        struct {
            char pad[0x5B8];
            s32 unk5D4;
        } view5D4_45;
        struct {
            char pad[0x5B8];
            s32 slot;
        } view5D4_46;
        struct {
            char pad[0x5B8];
            s32 profile;
        } view5D4_47;
        struct {
            char pad[0x5B8];
            s32 f5D4;
        } view5D4_48;
    } views1C;
    union {
        struct {
            struct Record * unk5D8;
        } view5D8_0;
        struct {
            struct Record * record;
        } view5D8_1;
        struct {
            struct func_8020EA10_S3 * controls;
        } view5D8_2;
        struct {
            struct TeamInfo * teamInfo;
        } view5D8_3;
        struct {
            struct Ctrl * ctrl;
        } view5D8_4;
        struct {
            unsigned char * info;
        } view5D8_5;
        struct {
            struct Profile * profile;
        } view5D8_6;
        struct {
            struct Settings * settings;
        } view5D8_7;
        struct {
            s32 f5D8;
        } view5D8_8;
        struct {
            struct Shared_Profile * profile;
        } view5D8_9;
    } views5D8;
    union {
        struct {
            void * unk5DC;
        } view5DC_0;
        struct {
            void * view;
        } view5DC_1;
        struct {
            struct View * view;
        } view5DC_2;
        struct {
            u8 pad4[8];
        } view5DC_3;
        struct {
            void * entity;
        } view5DC_4;
        struct {
            struct Rider * rider;
        } view5DC_5;
        struct {
            char * storage;
        } view5DC_6;
        struct {
            char * messages;
        } view5DC_7;
        struct {
            struct Shared_Hud * hud;
        } view5DC_8;
        struct {
            char pad[0x4];
            s32 unk5E0;
        } view5E0_8;
        struct {
            char pad[0x4];
            s32 state;
        } view5E0_9;
        struct {
            char pad[0x4];
            s32 slot;
        } view5E0_10;
    } views5DC;
    union {
        struct {
            s32 unk5E4;
        } view5E4_0;
        struct {
            s32 active;
        } view5E4_1;
        struct {
            s32 health;
        } view5E4_2;
        struct {
            s32 alive;
        } view5E4_3;
        struct {
            s32 holding;
        } view5E4_4;
    } views5E4;
    union {
        struct {
            u8 unk5E8[3140];
        } view5E8_0;
        struct {
            u8 pad5[3140];
        } view5E8_1;
        struct {
            char pad[0x2];
            s16 unk5EA;
        } view5EA_2;
        struct {
            char pad[0x2];
            s16 respawns;
        } view5EA_3;
        struct {
            char pad[0x2];
            s16 runType;
        } view5EA_4;
        struct {
            char pad[0x4];
            s32 unk5EC;
        } view5EC_5;
        struct {
            char pad[0x4];
            s32 model;
        } view5EC_6;
        struct {
            char pad[0x4];
            s32 spawnPoint;
        } view5EC_7;
        struct {
            char pad[0x4];
            s32 f5EC;
        } view5EC_8;
        struct {
            char pad[0x8];
            s32 unk5F0;
        } view5F0_9;
        struct {
            char pad[0x8];
            s32 f5F0;
        } view5F0_10;
        struct {
            char pad[0xC];
            s16 unk5F4[4];
        } view5F4_11;
        struct {
            char pad[0xC];
            s16 ammo[4];
        } view5F4_12;
        struct {
            char pad[0xC];
            s16 ammo[3];
        } view5F4_13;
        struct {
            char pad[0x1A];
            Shared_Slot slots[22];
        } view602_14;
        struct {
            char pad[0x46];
            s16 unk62E;
        } view62E_13;
        struct {
            char pad[0x46];
            s16 weapon;
        } view62E_14;
        struct {
            char pad[0x46];
            s16 character;
        } view62E_17;
        struct {
            char pad[0x68];
            s16 unk650;
        } view650_15;
        struct {
            char pad[0x68];
            s16 state;
        } view650_16;
        struct {
            char pad[0x68];
            s16 action;
        } view650_17;
        struct {
            char pad[0x68];
            s16 mode;
        } view650_18;
        struct {
            char pad[0x6A];
            s16 unk652;
        } view652_19;
        struct {
            char pad[0x6A];
            s16 previous;
        } view652_20;
        struct {
            char pad[0x6A];
            s16 pad652;
        } view652_24;
        struct {
            char pad[0x6C];
            s16 prevState;
        } view654_25;
        struct {
            char pad[0x6E];
            s16 pad656;
        } view656_26;
        struct {
            char pad[0x70];
            f32 unk658;
        } view658_21;
        struct {
            char pad[0x70];
            f32 counter;
        } view658_22;
        struct {
            char pad[0x70];
            f32 stride;
        } view658_23;
        struct {
            char pad[0x70];
            f32 swimTime;
        } view658_24;
        struct {
            char pad[0x70];
            f32 stateTime;
        } view658_31;
        struct {
            char pad[0x74];
            s32 unk65C;
        } view65C_32;
        struct {
            char pad[0x78];
            s32 unk660;
        } view660_25;
        struct {
            char pad[0x78];
            s32 previousTimer;
        } view660_26;
        struct {
            char pad[0x7C];
            s32 unk664;
        } view664_27;
        struct {
            char pad[0x7C];
            s32 timer;
        } view664_28;
        struct {
            char pad[0x84];
            f32 unk66C;
        } view66C_29;
        struct {
            char pad[0x88];
            f32 unk670;
        } view670_30;
        struct {
            char pad[0x88];
            f32 shield;
        } view670_31;
        struct {
            char pad[0x90];
            f32 unk678;
        } view678_40;
        struct {
            char pad[0xA0];
            char unk688[16];
        } view688_32;
        struct {
            char pad[0xA0];
            char body[16];
        } view688_33;
        struct {
            char pad[0xA0];
            Shared_Input input;
        } view688_43;
        struct {
            char pad[0xB0];
            struct Controller * unk698;
        } view698_34;
        struct {
            char pad[0xB0];
            struct Controller * controller;
        } view698_35;
        struct {
            char pad[0xB0];
            void * controller;
        } view698_36;
        struct {
            char pad[0xB0];
            char * emitter;
        } view698_37;
        struct {
            char pad[0xB0];
            char * title;
        } view698_38;
        struct {
            char pad[0xB4];
            f32 unk69C;
        } view69C_39;
        struct {
            char pad[0xB4];
            f32 stick;
        } view69C_40;
        struct {
            char pad[0xBC];
            f32 unk6A4;
        } view6A4_41;
        struct {
            char pad[0xBC];
            f32 strafe;
        } view6A4_42;
        struct {
            char pad[0xC0];
            f32 unk6A8;
        } view6A8_43;
        struct {
            char pad[0xC0];
            f32 lift;
        } view6A8_44;
        struct {
            char pad[0xC4];
            s32 unk6AC;
        } view6AC_45;
        struct {
            char pad[0xC8];
            s32 unk6B0;
        } view6B0_46;
        struct {
            char pad[0xC8];
            s32 input;
        } view6B0_47;
        struct {
            char pad[0xC8];
            s32 state;
        } view6B0_48;
        struct {
            char pad[0xD0];
            s32 unk6B8;
        } view6B8_49;
        struct {
            char pad[0xD0];
            s32 input;
        } view6B8_50;
        struct {
            char pad[0xD8];
            f32 unk6C0;
        } view6C0_51;
        struct {
            char pad[0xD8];
            f32 climb;
        } view6C0_52;
        struct {
            char pad[0xD8];
            f32 speed;
        } view6C0_53;
        struct {
            char pad[0xD8];
            f32 velX;
        } view6C0_64;
        struct {
            char pad[0xDC];
            f32 unk6C4;
        } view6C4_54;
        struct {
            char pad[0xDC];
            f32 side;
        } view6C4_55;
        struct {
            char pad[0xDC];
            f32 velZ;
        } view6C4_67;
        struct {
            char pad[0xE0];
            f32 unk6C8;
        } view6C8_56;
        struct {
            char pad[0xE0];
            f32 speed;
        } view6C8_57;
        struct {
            char pad[0xE4];
            f32 lastVelY;
        } view6CC_70;
        struct {
            char pad[0xE8];
            s32 onGround;
        } view6D0_71;
        struct {
            char pad[0xEC];
            f32 unk6D4;
        } view6D4_58;
        struct {
            char pad[0xF0];
            f32 unk6D8;
        } view6D8_59;
        struct {
            char pad[0xF4];
            f32 unk6DC;
        } view6DC_60;
        struct {
            char pad[0xFC];
            f32 unk6E4;
        } view6E4_61;
        struct {
            char pad[0xFC];
            f32 depth;
        } view6E4_62;
        struct {
            char pad[0xFC];
            f32 airTime;
        } view6E4_77;
        struct {
            char pad[0x100];
            f32 unk6E8;
        } view6E8_63;
        struct {
            char pad[0x100];
            Vec3 unk6E8;
        } view6E8_79;
        struct {
            char pad[0x104];
            f32 unk6EC;
        } view6EC_64;
        struct {
            char pad[0x104];
            f32 height;
        } view6EC_65;
        struct {
            char pad[0x108];
            f32 unk6F0;
        } view6F0_66;
        struct {
            char pad[0x10C];
            f32 unk6F4;
        } view6F4_83;
        struct {
            char pad[0x110];
            Vec3 unk6F8;
        } view6F8_84;
        struct {
            char pad[0x11C];
            f32 unk704;
        } view704_67;
        struct {
            char pad[0x11C];
            f32 lift;
        } view704_68;
        struct {
            char pad[0x130];
            f32 unk718;
        } view718_69;
        struct {
            char pad[0x130];
            f32 crouch;
        } view718_70;
        struct {
            char pad[0x134];
            s32 unk71C;
        } view71C_89;
        struct {
            char pad[0x138];
            f32 swim;
        } view720_90;
        struct {
            char pad[0x13C];
            f32 unk724;
        } view724_71;
        struct {
            char pad[0x13C];
            f32 pitch;
        } view724_72;
        struct {
            char pad[0x140];
            f32 unk728;
        } view728_73;
        struct {
            char pad[0x140];
            f32 kickPitch;
        } view728_74;
        struct {
            char pad[0x144];
            f32 unk72C;
        } view72C_75;
        struct {
            char pad[0x144];
            f32 kickRoll;
        } view72C_76;
        struct {
            char pad[0x144];
            f32 lean;
        } view72C_77;
        struct {
            char pad[0x148];
            f32 unk730[3];
        } view730_78;
        struct {
            char pad[0x148];
            f32 sway[3];
        } view730_79;
        struct {
            char pad[0x154];
            f32 unk73C;
        } view73C_80;
        struct {
            char pad[0x154];
            f32 side;
        } view73C_81;
        struct {
            char pad[0x154];
            Vec3 weapon;
        } view73C_82;
        struct {
            char pad[0x158];
            f32 unk740;
        } view740_83;
        struct {
            char pad[0x158];
            f32 height;
        } view740_84;
        struct {
            char pad[0x15C];
            f32 unk744;
        } view744_85;
        struct {
            char pad[0x15C];
            f32 forward;
        } view744_86;
        struct {
            char pad[0x170];
            f32 unk758;
        } view758_87;
        struct {
            char pad[0x170];
            f32 bobStrength;
        } view758_88;
        struct {
            char pad[0x174];
            f32 unk75C;
        } view75C_89;
        struct {
            char pad[0x174];
            f32 bobSpeed;
        } view75C_90;
        struct {
            char pad[0x188];
            s16 unk770;
        } view770_91;
        struct {
            char pad[0x188];
            s16 nextWeapon;
        } view770_92;
        struct {
            char pad[0x188];
            s16 weapon;
        } view770_113;
        struct {
            char pad[0x18A];
            s16 pad772;
        } view772_114;
        struct {
            char pad[0x18C];
            Vec3 unk774;
        } view774_115;
        struct {
            char pad[0x198];
            f32 unk780;
        } view780_116;
        struct {
            char pad[0x19C];
            f32 unk784;
        } view784_117;
        struct {
            char pad[0x1A0];
            s32 unk788;
        } view788_93;
        struct {
            char pad[0x1A0];
            s32 icons;
        } view788_94;
        struct {
            char pad[0x1B0];
            s32 unk798;
        } view798_95;
        struct {
            char pad[0x1B0];
            s32 carried;
        } view798_96;
        struct {
            char pad[0x1B4];
            Vec3 unk79C;
        } view79C_97;
        struct {
            char pad[0x1B4];
            Vec3 carriedPosition;
        } view79C_98;
        struct {
            char pad[0x1D0];
            s32 unk7B8;
        } view7B8_99;
        struct {
            char pad[0x1D0];
            s32 target;
        } view7B8_100;
        struct {
            char pad[0x1D4];
            f32 unk7BC;
        } view7BC_101;
        struct {
            char pad[0x1D4];
            f32 timer;
        } view7BC_102;
        struct {
            char pad[0x1D8];
            Vec3 unk7C0;
        } view7C0_103;
        struct {
            char pad[0x1D8];
            Vec3 targetPosition;
        } view7C0_104;
        struct {
            char pad[0x200];
            s32 unk7E8;
        } view7E8_105;
        struct {
            char pad[0x200];
            s32 zoomed;
        } view7E8_106;
        struct {
            char pad[0x204];
            f32 unk7EC;
        } view7EC_132;
        struct {
            char pad[0x208];
            f32 unk7F0;
        } view7F0_133;
        struct {
            char pad[0x224];
            struct Mount * unk80C;
        } view80C_107;
        struct {
            char pad[0x224];
            struct Mount * mount;
        } view80C_108;
        struct {
            char pad[0x228];
            s32 unk810;
        } view810_109;
        struct {
            char pad[0x228];
            s32 kind;
        } view810_110;
        struct {
            char pad[0x22C];
            Triple unk814;
        } view814_111;
        struct {
            char pad[0x22C];
            Triple offset;
        } view814_112;
        struct {
            char pad[0x250];
            f32 unk838;
        } view838_113;
        struct {
            char pad[0x250];
            f32 rideTime;
        } view838_114;
        struct {
            char pad[0x254];
            f32 unk83C;
        } view83C_115;
        struct {
            char pad[0x254];
            f32 bump;
        } view83C_116;
        struct {
            char pad[0x258];
            s32 unk840;
        } view840_117;
        struct {
            char pad[0x258];
            s32 surfaced;
        } view840_118;
        struct {
            char pad[0x264];
            s32 unk84C;
        } view84C_149;
        struct {
            char pad[0x26C];
            f32 unk854;
        } view854_147;
        struct {
            char pad[0x274];
            s32 unk85C;
        } view85C_119;
        struct {
            char pad[0x274];
            s32 w85C;
        } view85C_120;
        struct {
            char pad[0x27C];
            s32 unk864;
        } view864_121;
        struct {
            char pad[0x27C];
            s32 f864;
        } view864_122;
        struct {
            char pad[0x280];
            s32 unk868;
        } view868_123;
        struct {
            char pad[0x280];
            s32 f868;
        } view868_124;
        struct {
            char pad[0x284];
            s32 unk86C;
        } view86C_125;
        struct {
            char pad[0x284];
            s32 parameter;
        } view86C_126;
        struct {
            char pad[0x284];
            s32 animation;
        } view86C_127;
        struct {
            char pad[0x288];
            s32 unk870;
        } view870_157;
        struct {
            char pad[0x290];
            Shared_Effect effect;
        } view878_158;
        struct {
            char pad[0x350];
            char unk938[2188];
        } view938_128;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_129;
        struct {
            char pad[0x350];
            char strokes[2188];
        } view938_130;
        struct {
            char pad[0x350];
            s32 unk938;
        } view938_162;
        struct {
            char pad[0x6D0];
            s32 unkCB8;
        } viewCB8_163;
        struct {
            char pad[0x6E4];
            s32 unkCCC;
        } viewCCC_164;
        struct {
            char pad[0x758];
            s32 unkD40;
        } viewD40_165;
        struct {
            char pad[0x96C];
            s32 unkF54;
        } viewF54_131;
        struct {
            char pad[0x96C];
            s32 selection;
        } viewF54_132;
        struct {
            char pad[0x9A8];
            s32 unkF90;
        } viewF90_133;
        struct {
            char pad[0x9A8];
            s32 choice;
        } viewF90_134;
        struct {
            char pad[0xBCC];
            s32 unk11B4;
        } view11B4_135;
        struct {
            char pad[0xBCC];
            s32 locked;
        } view11B4_136;
        struct {
            char pad[0xBD0];
            s32 unk11B8;
        } view11B8_137;
        struct {
            char pad[0xBD0];
            s32 frozen;
        } view11B8_138;
        struct {
            char pad[0xBD4];
            s32 unk11BC;
        } view11BC_139;
        struct {
            char pad[0xBD4];
            s32 f11BC;
        } view11BC_140;
        struct {
            char pad[0xBD8];
            s32 unk11C0;
        } view11C0_141;
        struct {
            char pad[0xBD8];
            s32 f11C0;
        } view11C0_142;
        struct {
            char pad[0xBDC];
            f32 unk11C4;
        } view11C4_143;
        struct {
            char pad[0xBDC];
            f32 soundTime;
        } view11C4_144;
        struct {
            char pad[0xBE4];
            s32 unk11CC;
        } view11CC_145;
        struct {
            char pad[0xBE4];
            s32 f11CC;
        } view11CC_146;
        struct {
            char pad[0xBF0];
            f32 unk11D8;
        } view11D8_147;
        struct {
            char pad[0xBF0];
            f32 recoil;
        } view11D8_148;
        struct {
            char pad[0xBF0];
            f32 stun;
        } view11D8_149;
        struct {
            char pad[0xBF4];
            f32 unk11DC;
        } view11DC_185;
        struct {
            char pad[0xBF8];
            f32 unk11E0;
        } view11E0_186;
        struct {
            char pad[0xC00];
            s32 unk11E8;
        } view11E8_150;
        struct {
            char pad[0xC00];
            s32 f11E8;
        } view11E8_151;
        struct {
            char pad[0xC04];
            f32 unk11EC;
        } view11EC_189;
        struct {
            char pad[0xC28];
            s32 unk1210;
        } view1210_152;
        struct {
            char pad[0xC28];
            s32 marker;
        } view1210_153;
        struct {
            char pad[0xC2C];
            s32 unk1214;
        } view1214_154;
        struct {
            char pad[0xC2C];
            s32 marker;
        } view1214_155;
        struct {
            char pad[0xC2C];
            s32 markerShown;
        } view1214_156;
        struct {
            char pad[0xC30];
            s32 unk1218;
        } view1218_157;
        struct {
            char pad[0xC30];
            s32 f1218;
        } view1218_158;
        struct {
            char pad[0xC34];
            s32 unk121C;
        } view121C_159;
        struct {
            char pad[0xC34];
            s32 f121C;
        } view121C_160;
        struct {
            char pad[0xC38];
            s32 unk1220;
        } view1220_161;
        struct {
            char pad[0xC38];
            s32 f1220;
        } view1220_162;
        struct { char pad[0xE]; s16 charge; } chargeView;
        struct { char pad[0x11F4 - 0x5E8]; f32 spin; s32 frame; } rapidFireView;
    } views5E8;
    union {
        struct {
            u32 unk122C;
        } view122C_0;
        struct {
            u32 flags;
        } view122C_1;
        struct {
            s32 options;
        } view122C_2;
        struct {
            s32 f122C;
        } view122C_3;
        struct {
            s32 fxFlags;
        } view122C_4;
    } views122C;
    f32 fxTime;
    f32 fxSpeed;
    s32 fxStage;
    char pad123C[0x4];
    f32 unk1240;
    f32 unk1244;
    char pad1248[0x7C];
    union {
        struct {
            s32 unk12C4;
        } view12C4_0;
        struct {
            s32 f12C4;
        } view12C4_1;
    } views12C4;
    union {
        struct {
            s32 unk12C8;
        } view12C8_0;
        struct {
            s32 f12C8;
        } view12C8_1;
    } views12C8;
    union {
        struct {
            s32 unk12CC[8];
        } view12CC_0;
        struct {
            s32 splitsA[8];
        } view12CC_1;
    } views12CC;
    s32 unk12EC;
    char pad12F0[0x4];
    union {
        struct {
            s32 unk12F4[8];
        } view12F4_0;
        struct {
            s32 splitsB[8];
        } view12F4_1;
    } views12F4;
    char pad1314[0x20];
    union {
        struct {
            s32 unk1334;
        } view1334_0;
        struct {
            s32 f1334;
        } view1334_1;
    } views1334;
    union {
        struct {
            s32 unk1338;
        } view1338_0;
        struct {
            s32 f1338;
        } view1338_1;
    } views1338;
    union {
        struct {
            s32 unk133C;
        } view133C_0;
        struct {
            s32 laps;
        } view133C_1;
        struct {
            s32 lives;
        } view133C_2;
    } views133C;
    union {
        struct {
            s32 unk1340;
        } view1340_0;
        struct {
            s32 stalls;
        } view1340_1;
        struct {
            s32 timer;
        } view1340_2;
        struct {
            s32 respawnTimer;
        } view1340_3;
    } views1340;
    char pad1344[0x70];
    union {
        struct {
            struct StateInfo * unk13B4;
        } view13B4_0;
        struct {
            struct StateInfo * states;
        } view13B4_1;
        struct {
            struct Mode * unk13B4;
        } view13B4_2;
        struct {
            void * character;
        } view13B4_3;
        struct {
            s32 f13B4;
        } view13B4_4;
        struct {
            struct Shared_StateInfo * states;
        } view13B4_5;
    } views13B4;
    char pad13B8[0x10];
    union {
        struct {
            s32 unk13C8;
        } view13C8_0;
        struct {
            s32 w13C8;
        } view13C8_1;
        struct {
            s32 f13C8;
        } view13C8_2;
    } views13C8;
    char pad13CC[0x8];
    s32 unk13D4;
    union {
        struct {
            struct Held * unk13D8;
        } view13D8_0;
        struct {
            struct Held * held;
        } view13D8_1;
    } views13D8;
    char pad13DC[0xC];
    s32 messageIndex;
    char pad13EC[0x64];
    union {
        struct {
            s32 unk1450;
        } view1450_0;
        struct {
            s32 computer;
        } view1450_1;
        struct {
            s32 infinite;
        } view1450_2;
        struct {
            s32 unlimited;
        } view1450_3;
        struct {
            s32 uncounted;
        } view1450_4;
        struct {
            s32 f1450;
        } view1450_5;
    } views1450;
    union {
        struct {
            s32 unk1454;
        } view1454_0;
        struct {
            s32 f1454;
        } view1454_1;
    } views1454;
    char pad1458[0xC];
    union {
        struct {
            Vec3 unk1464;
        } view1464_0;
        struct {
            Vec3 aim;
        } view1464_1;
    } views1464;
    char pad1470[0x10];
    union {
        struct {
            Matrix unk1480[2];
        } view1480_0;
        struct {
            Matrix beams[2];
        } view1480_1;
    } views1480;
    union {
        struct {
            Matrix unk1500[2];
        } view1500_0;
        struct {
            Matrix lasers[2];
        } view1500_1;
    } views1500;
    union {
        struct {
            Matrix unk1580[2];
        } view1580_0;
        struct {
            Matrix dots[2];
        } view1580_1;
    } views1580;
    char pad1600[0xD4];
    union {
        struct {
            s32 unk16D4;
        } view16D4_0;
        struct {
            s32 f16D4;
        } view16D4_1;
    } views16D4;
    u16 unk16D8;
    char pad16DA[0x6];
    union {
        struct {
            struct SharedPlayer_func_8021E2A0_de * unk16E0;
        } view16E0_0;
        struct {
            struct SharedPlayer_func_8021E2A0_de * next;
        } view16E0_1;
        struct {
            struct SharedPlayer_func_8021E2A0_de * next;
        } view16E0_2;
    } views16E0;
};
struct Shared_AnimState;
struct Shared_AnimState {
    char pad0[0xB];
    s8 unk_B;
    char padC[0x8];
};
struct Shared_GlobalFlowState;
struct Shared_GlobalFlowState {
    char pad0[0x78];
    s32 transition;
    char pad7C[0x4];
    s32 reset;
    char pad84[0x14];
    s32 active;
    s32 count;
};
struct Shared_GlobalRuntimeState;
struct Shared_GlobalRuntimeState {
    void * actorList;
    char pad4[0x1830];
    s32 frozen;
    char pad1838[0x8];
    Shared_GlobalFlowState flow;
};
struct Shared_MenuGlobal;
struct Shared_MenuGlobal {
    u8 alternateTitle;
    u8 unused0[11];
    volatile s32 selectionIndex;
    s32 selectionValue;
    s32 titleWasShown;
    u8 unused1[8480];
    u8 displayData;
    u8 unused2[127];
    s32 frameCount;
};
struct Shared_MenuTextBuffer;
struct Shared_MenuTextBuffer {
    u8 unused[64];
    s8 title;
};
struct Shared_PosePartEntry;
struct Shared_PosePartEntry {
    char pad0[0x64];
    union {
        struct {
            s8 parent;
            u8 flags;
        } b;
        struct {
            u32 parent : 8;
            u32 kind : 2;
            u32 phase : 3;
            u32 still : 1;
            u32 sway : 2;
        } f;
    } u;
};
struct Shared_PosePartTable;
struct Shared_PosePartTable {
    s32 stride;
    s32 count;
    u8 data[1];
};
struct Shared_PoseModel;
struct Shared_PoseModel {
    s32 kind;
    char pad4[0x34];
    f32 unk_38;
};
struct Shared_PosePart;
struct Shared_PosePart {
    char pad0[0xC];
    s32 unk_C;
    char pad10[0x2];
    s8 unk_12;
    char pad13[0x1];
    s8 unk_14[4];
    Vec3 unk_18;
    char pad24[0x44];
};
struct Shared_PoseWorld;
struct Shared_PoseWorld {
    char pad0[0x1218];
    s32 unk_1218;
    char pad121C[0xA4];
    f32 scale;
};
struct Shared_PoseActor;
struct Shared_PoseContext;
struct Shared_PoseActor {
    char pad0[0x1];
    s8 unk_1;
    char pad2[0x6];
    Vec3 pos;
    StateFlags *surface;
    Shared_PoseModel *model;
    char pad1C[0x54];
    f32 unk_70;
    Mtx mtx;
    s32 handle;
    u8 *unk_B8;
    char padBC[0xC];
    s32 unk_C8;
    char padCC[0x1A];
    s8 unk_E6;
    char padE7[0x19];
    s32 flags;
    Shared_AnimState animA;
    Shared_AnimState animB;
    char pad12C[0x4];
    f32 unk_130;
    char pad134[0x7];
    u8 unk_13B;
    char pad13C[0x4];
    u8 unk_140[2][24];
    Shared_PosePart part;
    Shared_PoseWorld *world;
    char pad1DC[0xB4];
    void (*callback)(Mtx, struct Shared_PoseContext *);
    char pad294[0x4C];
    s32 unk_2E0;
};
struct Shared_PoseContext {
    Shared_PosePartEntry *part;
    s32 index;
    Shared_PoseActor *actor;
    s32 handle;
    Mtx *mtx;
    Shared_PosePartTable *parts;
    void *arg1;
    s32 arg2;
    Shared_AnimState *animA;
    Shared_AnimState *animB;
};
struct Shared_Item_func_8042BD40;
struct Shared_Screen;
struct Shared_Screen {
    char pad0[0x1C];
    s32 state;
    char pad20[0xC0];
    void * menu;
    struct Shared_Item_func_8042BD40 * cursor;
    s32 unkE8;
    s32 count;
    s32 order[8];
    s32 picks[8][2];
    char pad150[0x190];
    char stageName[64];
    s32 unk320;
    s32 result;
    s32 active;
    s32 lastPick;
};
struct Shared_func_80261EB8_S1;
struct Shared_func_80261EB8_S1 {
    f32 unk0;
    char pad4[0x4];
    s16 unk8;
    char padA[0x2];
    s32 unkC;
    s32 ** unk10;
};
struct Shared_func_80261EB8_S2;
struct Shared_func_80261EB8_S2 {
    s8 * unk0;
    s8 * unk4;
    s8 * unk8;
    s8 * unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    f32 unk20;
};
struct SlotDialog;
struct SlotDialog {
    s32 root;
    s32 main;
    s32 absent;
    s32 unavailable;
    s32 prompt;
    s32 elapsed;
    s32 state;
    s32 ready;
    char text[128];
};
struct Slot_func_8042FB48_de;
struct Slot_func_8042FB48_de {
    char pad[0x54];
    int mode;
    int state;
    int selection;
    int next;
    int p64;
    int p68;
    int transition;
    char tail[0xAF8];
};
struct Source_func_8026851C_de;
struct Source_func_8026851C_de {
    unsigned char active;
    char pad1[7];
    Vec3 position;
    s32 id;
    char pad18[4];
    Vec3 velocity;
};
struct Spawn;
struct Spawn {
    Vec3 position;
    s32 kind;
    f32 size;
};
struct State1204;
struct State1204 {
    void ** unk_0;
    char * unk_4;
    s32 unk_8;
    char pC[40];
    s32 unk_34;
    s32 unk_38;
    char p3C[12];
    s32 unk_48;
    char p4C[3788];
    void ** unk_F18;
    char * unk_F1C;
    s32 unk_F20;
    char pF24[732];
    s32 unk_1200;
};
struct StateBlock;
struct StateBlock {
    char pad0[0x84];
    s32 unk84;
};
struct State_func_8040A614_de;
struct State_func_8040A614_de {
    char pad[0xC];
    f32 x;
    f32 y;
    f32 z;
};
struct State_func_80421D94_de;
struct State_func_80421D94_de {
    void *first;
    char pad4[0x10 - 4];
    s32 value;
};
struct State_func_804220A8_de;
struct State_func_804220A8_de {
    char pad0[0x108];
    int a;
    int b;
    int c;
    int d;
};
struct State_func_804232AC_de;
struct State_func_804232AC_de {
    void *menu;
    char pad4[0x20 - 4];
    s32 value;
};
struct State_func_8042D8C4_de;
struct State_func_8042D8C4_de {
    char pad[0xE8];
    s32 count;
};
struct State_func_8042D9E8_de;
struct State_func_8042D9E8_de {
    s32 menu;
    s32 button;
    void *window;
    s32 delay;
    s32 target;
    char text[0xC];
    s32 value;
};
struct State_func_8042F91C_de;
struct State_func_8042F91C_de {
    char pad[0x24];
    s32 unk24;
    s32 unk28;
    char pad2[0x10];
    Field_u16_14 *unk3C;
    u16 unk40;
    u16 unk42;
    Field_u16_14 *unk44;
    u16 unk48;
    u16 unk4A;
    s32 unk4C;
    s32 unk50;
    char pad3[0x341C];
    s32 unk3470;
};
struct State_func_8043577C_de;
struct State_func_8043577C_de {
    char pad[0x4C];
    s32 unk4C;
    s32 unk50;
    char pad54[0x341C];
    s32 unk3470;
};
struct State_func_8044D054_de;
struct State_func_8044D054_de {
    char pad0[4];
    s32 unk4;
    char pad8[48];
    s32 unk38;
    char pad3C[8];
    s32 unk44;
};
struct StyleNextState;
struct StyleNextState {
    char a[0x14];
    s32 unk_14;
    Label *unk_18;
    char text[1];
};
struct Style_func_8043C9AC_de;
struct Style_func_8043C9AC_de {
    char pad0[0x30];
    f32 alpha;
    f32 fade;
};
struct TabOptionsCommitMenu;
struct TabOptionsCommitMenu {
    char pad[0x5C];
};
struct TabOptionsScreen;
struct TabOptionsScreen {
    char pad0[0x1C];
    s32 cursor;
    ListScreenItem *leftTab;
    s32 leftStep;
    ListScreenItem *rightTab;
    s32 rightStep;
    s32 page;
    s32 pages;
    s32 title;
    ListScreenItem *marker;
    ListScreenItem *header;
    ListScreenItem *footer;
    ListScreenItem *pakIcon;
    ListScreenItem *rumbleIcon;
    s32 slider;
    s32 firstList;
    s32 secondList;
    s32 state;
    s32 selection;
    s32 sound;
    ListScreenItem *prompt;
};
struct TargetList;
struct TargetList {
    SharedPlayer_func_80210248_eu *self;
    char pad[0x38 - 4];
    s32 count;
    SharedPlayer_func_80210248_eu *targets[10];
    char pad2[0x6C - 0x64];
    s32 scores[10];
    s32 distances[10];
};
struct TargetSelectionObj;
struct TargetSelectionObj {
    char pad0[8];
    Vec3 pos;
    char pad14[0x100 - 0x14];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    struct TargetSelectionObj *owner;
    char pad1DC[0x5D8 - 0x1DC];
    Record *slot;
    char pad5DC[0x5E4 - 0x5DC];
    s32 active;
    char pad5E8[0x122C - 0x5E8];
    s32 status;
};
struct TargetSelectionBrain;
struct TargetSelectionBrain {
    TargetSelectionObj *self;
    char pad4[0x3C - 4];
    TargetSelectionObj *route[10];
    TargetSelectionObj *target;
    char pad68[0x94 - 0x68];
    s32 routeDist[10];
    char padBC[0x21C - 0xBC];
    s32 mode;
    char pad220[0x258 - 0x220];
    Vec3 aim;
    char pad264[0x28C - 0x264];
    TargetSelectionObj *flagged;
};
struct TaskSetup;
struct TaskSetup {
    s32 width;
    s32 height;
    s32 size;
    s32 pad0C;
    s32 field10;
    char *frames;
    s32 pad18;
    s8 priority;
    char pad1D[3];
    void *name;
};
struct TextBoundsContext;
struct TextBoundsContext {
    char pad0[0x4];
    s16 unk_4;
    char pad4[0x2];
    s32 unk_8;
    s16 unk_C;
    s16 unk_E;
    char padE[0x4];
    void * unk_14;
    char pad14[0xC];
    void * unk_24;
};
struct TextBoundsData;
struct TextBoundsData {
    char pad0[0x29C];
    f32 unk_29C;
    f32 unk_2A0;
};
struct TextBoundsDescriptor;
struct TextBoundsDescriptor {
    char pad0[0x44];
    s8 * unk_44;
};
struct TextBoundsFont;
struct TextBoundsFont {
    s32 kind;
    f32 width;
    f32 height;
    s32 rest[4];
};
struct TextBoundsMetrics;
struct TextBoundsMetrics {
    s32 field0;
    s32 width;
    s32 height;
    s32 rest[6];
};
struct TextBoundsRecord23;
struct TextBoundsRecord23 {
    char pad0[0x24];
    s32 unk_24;
    s32 unk_28;
};
union TextBoundsStateValue4;
union TextBoundsStateValue4 {
    s32 v0;
    s8 v1;
};
struct TextBoundsState;
struct TextBoundsState {
    char pad0[0x4];
    TextBoundsStateValue4 unk_4;
    s32 unk_8;
    f32 unk_C;
    f32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
};
struct TextBoundsText;
struct TextBoundsText {
    s32 value;
    s16 mode;
    s16 reserved;
    s32 flags;
    s32 fieldC;
    s32 field10;
    void *text;
    s32 field18;
    s32 spacing;
    s32 field20;
    s32 field24;
};
struct TextLayerRect;
struct TextLayerRect {
    char pad[0x14];
    int x;
    int right;
    int y;
};
struct Object_func_80401980_de;
struct Track_func_80401980_de;
struct Track_func_80401980_de {
    char pad[0x18];
    struct Object_func_80401980_de *target;
    f32 time;
    char pad20[16];
    f32 start;
    f32 end;
    s32 active;
    char pad3C[0x38];
    s32 flags;
    char pad78[0x78];
    Vec3 position;
    f32 yaw;
    char pad100[0xE0];
    s32 state;
};
struct Triple_func_802683E0_de;
struct Triple_func_802683E0_de {
    s32 x;
    f32 y;
    s32 z;
};
struct UnlockImageMenu;
struct UnlockImageMenu {
    char pad0[0x1C];
    u8 *save;
    char pad20[0x10];
    f32 alpha;
    f32 fade;
};
struct ItemDef;
struct UnlockImageOption;
struct UnlockImageOption {
    char pad0[0x14];
    s32 image;
    struct ItemDef *header;
};
struct UnlockImageOptionPos;
struct UnlockImageOptionPos {
    char pad0[0xC];
    f32 scaleX;
    f32 scaleY;
    char pad14[2];
    s16 x;
    char pad18[6];
    s16 y;
};
struct View_func_80259C5C_de;
struct View_func_80259C5C_de {
    char pad0[0x10];
    Motion motion;
    Angles angles;
    char pad68[4];
    f32 pitch;
    f32 pitchStep;
    char pad74[0xB0 - 0x74];
    s32 presets;
};
struct Context_func_8025AB94_de;
struct View_func_8025AB94_de;
struct View_func_8025AB94_de {
    s32 slot;
    char pad4[0xC];
    Motion_func_8025AB94_de motion;
    char pad38[0x60 - 0x38];
    Angles_func_8025AB94_de angles;
    f32 pitch;
    f32 pitchStep;
    char pad74[0xA4 - 0x74];
    s32 flags;
    char padA8[0xB0 - 0xA8];
    struct Context_func_8025AB94_de *context;
    char padB4[4];
    f32 scale;
};
struct Owner_func_8025A844_de;
struct Voice_func_8025A844_de;
struct Voice_func_8025A844_de {
    s32 index;
    char pad4[0xC];
    Params_func_8025A844_de params;
    char position[0x44];
    s32 sweeping;
    char pad8C[4];
    u16 target;
    char pad92[2];
    s16 delay;
    char pad96[2];
    f32 value;
    f32 step;
    char padA0[4];
    s32 flags;
    char padA8[8];
    struct Owner_func_8025A844_de *owner;
    char padB4[0xC];
    s32 fixed;
};
struct Vtx_t;
struct Vtx_t {
    s16 ob[3];
    u16 flag;
    s16 tc[2];
    u8 cn[4];
};
struct Vtx_tn;
struct Vtx_tn {
    s16 ob[3];
    u16 flag;
    s16 tc[2];
    s8 n[3];
    u8 a;
};
union Vtx10;
union Vtx10 {
    Vtx_t v;
    Vtx_tn n;
    s64 force_structure_alignment;
};
struct WeaponMenuMenu;
struct WeaponMenuMenu {
    s32 active;
    s32 pad4;
    f32 open;
    char padC[0x14 - 0xC];
    f32 phase;
    char pad18[0x37C - 0x18];
    s32 cursor;
};
struct WeaponMenuView;
struct WeaponMenuView {
    char pad[0x29C];
    f32 viewport[4];
};
struct WeaponMenuPlayer;
struct WeaponMenuPlayer {
    char pad[0x5DC];
    WeaponMenuView *view;
};
struct NodeEvent;
typedef signed int ( *WidgetCallback)(void *, struct NodeEvent);
struct WidgetHandler;
struct WidgetHandler {
    s32 id;
    s32 unk_4;
    s32 unk_8;
    WidgetCallback callback;
    s32 unk_10;
};
struct WidgetRegisterWidget;
struct WidgetRegisterWidget {
    s32 unk_0;
    s32 unk_4;
    void *unk_8;
    s32 unk_C;
    s32 unk_10;
    s32 unk_14;
};
struct WidgetTable;
struct WidgetTable {
    u8 pad0[0x1C];
    WidgetHandler handlers[64];
};
struct Widget_func_8040C6FC_de;
struct Widget_func_8040C6FC_de {
    char pad[0xC];
    s16 parentId;
    char pad2[0x44 - 0xC - 2];
    s32 lo;
    s32 hi;
    s32 step;
    s32 value;
    char pad3[0x6C - 0x50 - 4];
    s32 userWord;
};
struct Work56EC8;
struct Work56EC8 {
    void *owner;
    s16 id;
    char pad6[2];
    char payload[0x40];
    void *base;
    s32 offset;
};
struct World;
struct World {
    u8 pad000[0xFC];
    s32 state;
};
struct World24;
struct World24 {
    char pad0[0x20];
    SharedPlayer16E4 *players;
};
struct ZoomEffectPlayer;
struct ZoomEffectPlayer {
    char pad0[0x5D0];
    s32 unk5D0;
    char pad5D0[0x11FC - 0x5D0 - sizeof(s32)];
    f32 unk11FC;
    char pad11FC[0x1200 - 0x11FC - sizeof(f32)];
    Vec3 unk1200;
    char pad1200[0x120C - 0x1200 - sizeof(Vec3)];
    s32 unk120C;
    char pad120C[0x16E0 - 0x120C - sizeof(s32)];
    char * unk16E0;
};
typedef unsigned int size_t;
struct _Pft;
struct _Pft {
    union {
        long long ll;
        double ld;
    } v;
    unsigned char *s;
    int n0;
    int nz0;
    int n1;
    int nz1;
    int n2;
    int nz2;
    int prec;
    int width;
    size_t nchar;
    unsigned int flags;
    unsigned char qual;
};
struct __OSContRequesFormat;
struct __OSContRequesFormat {
    u8 dummy;
    u8 txsize;
    u8 rxsize;
    u8 cmd;
    u8 typeh;
    u8 typel;
    u8 status;
    u8 dummy1;
};
struct __OSViContext;
struct __OSViContext {
    u16 state;
    u16 retraceCount;
    void *framep;
    void *modep;
    u32 control;
    Opaque_OSMesgQueue *msgq;
    void * msg;
};
union du;
union du {
    struct {
        unsigned int hi;
        unsigned int lo;
    } word;
    double d;
};
union fu;
union fu {
    unsigned int i;
    float f;
};
struct func_80203E78_S1;
struct func_80203E78_S1 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80204308_S3;
struct func_80204308_S3 {
    char pad0[0x16];
    s16 unk16;
    char pad16[0x18 - 0x16 - sizeof(s16)];
    s16 unk18;
};
struct func_8020478C_S1;
struct func_8020478C_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};
struct func_802062E0_S2;
struct func_802062E0_S2 {
    char pad0[0x1C];
    Triple unk1C;
};
struct func_802077F4_S2;
struct func_802077F4_S2 {
    char pad0[0x4];
    f32 unk4;
};
struct func_8020CA10_G3;
struct func_8020CA10_G3 {
    s32 * unk0;
};
struct func_8020CC0C_S1;
struct func_8020CC0C_S1 {
    char pad0[0x8];
    char unk8;
};
struct func_8020D0CC_S2;
struct func_8020D0CC_S2 {
    char pad0[0x10];
    void * unk10;
};
struct func_8020F2A8_S3;
struct func_8020F2A8_S3 {
    char pad0[0x34];
    s32 unk34;
};
struct func_80210230_S1;
struct func_80210230_S1 {
    char pad0[0x1860];
    func_80207B5C_S2 unk1860;
};
struct func_80219490_S2;
struct func_80219490_S2 {
    char pad0[0x29C];
    f32 unk29C;
    char pad29C[0x2A0 - 0x29C - sizeof(f32)];
    f32 unk2A0;
    char pad2A0[0x2A4 - 0x2A0 - sizeof(f32)];
    f32 unk2A4;
    char pad2A4[0x2A8 - 0x2A4 - sizeof(f32)];
    f32 unk2A8;
};
struct func_8021C9B4_G6;
struct func_8021C9B4_G6 {
    Gfx * unk0;
};
struct func_8021C9B4_S2;
struct func_8021C9B4_S2 {
    char pad0[0x81];
    u8 unk81;
    char pad81[0x8F - 0x81 - sizeof(u8)];
    u8 unk8F;
};
struct func_802285C4_S1;
struct func_802285C4_S1 {
    char pad0[0x20];
    char * unk20;
};
struct func_80228774_S1;
struct func_80228774_S1 {
    char pad0[0x20];
    void * unk20;
};
struct func_8022A404_S1;
struct func_8022A404_S1 {
    char pad0[0x20];
    int unk20;
};
struct func_8022BC04_S3;
struct func_8022BC04_S3 {
    char pad0[0x10];
    s32 unk10;
};
struct func_8022BECC_S2;
struct func_8022BECC_S2 {
    char pad0[0x8];
    short unk8;
};
struct func_8022C6D4_S1;
struct func_8022C6D4_S1 {
    char pad0[0x650];
    s16 unk650;
};
struct func_8022FD9C_Record;
struct func_8022FD9C_Record {
    char pad0[0x54];
    s32 unk54;
};
struct func_8022FD9C_S4;
struct func_8022FD9C_S4 {
    char pad0[0x58];
    s32 unk58;
};
union func_80239C2C_S1_UF24;
union func_80239C2C_S1_UF24 {
    void * v0;
    char v1;
};
struct func_80239CD0_S1;
struct func_80239CD0_S1 {
    char pad0[0x14];
    int unk14;
    char pad14[0x1C - 0x14 - sizeof(int)];
    int unk1C;
};
struct func_80244E48_S1;
struct func_80244E48_S1 {
    char pad0[0x40];
    s32 unk40;
    char pad40[0x50 - 0x40 - sizeof(s32)];
    s32 unk50;
    char pad50[0x54 - 0x50 - sizeof(s32)];
    s32 unk54;
    char pad54[0x5C - 0x54 - sizeof(s32)];
    s32 unk5C;
    char pad5C[0xD8 - 0x5C - sizeof(s32)];
    s32 unkD8;
    char padD8[0x108 - 0xD8 - sizeof(s32)];
    s32 unk108;
    char pad108[0x10C - 0x108 - sizeof(s32)];
    s32 unk10C;
    char pad10C[0x110 - 0x10C - sizeof(s32)];
    s32 unk110;
    char pad110[0x114 - 0x110 - sizeof(s32)];
    s32 unk114;
};
struct func_80244E48_G1;
struct func_80244E48_S1;
struct func_80244E48_G1 {
    struct func_80244E48_S1 * unk0;
};
struct func_80244E48_G2;
struct func_80244E48_G2 {
    func_80219490_S2 * unk0;
};
struct func_80246E34_S1;
struct func_80246E34_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x18 - 0x8 - sizeof(Vec3)];
    void * unk18;
    char pad18[0xC4 - 0x18 - sizeof(void*)];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
    char pad100[0x1C4 - 0x100 - sizeof(s32)];
    Vec3 unk1C4;
    char pad1C4[0x28C - 0x1C4 - sizeof(Vec3)];
    void * unk28C;
};
struct func_8024BF14_S2;
struct func_8024BF14_S2 {
    char pad0[0x1E];
    u16 unk1E;
};
struct func_8024D150_S1;
struct func_8024D150_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
    char pad100[0x1A0 - 0x100 - sizeof(s32)];
    void * unk1A0;
    char pad1A0[0x1D8 - 0x1A0 - sizeof(void*)];
    void * unk1D8;
};
struct func_8024D150_S2;
struct func_8024D150_S2 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x85C - 0x1C - sizeof(s32)];
    s32 unk85C;
};
struct func_8024D274_S1;
struct func_8024D274_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
    char pad100[0x174 - 0x100 - sizeof(s32)];
    s32 unk174;
    char pad174[0x1D8 - 0x174 - sizeof(s32)];
    void * unk1D8;
};
struct func_8024D274_S2;
struct func_8024D274_S2 {
    char pad0[0x6F4];
    f32 unk6F4;
};
struct func_8024D274_S3;
struct func_8024D274_S3 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x30 - 0x20 - sizeof(f32)];
    f32 unk30;
    char pad30[0xF4 - 0x30 - sizeof(f32)];
    f32 unkF4;
};
struct func_8024D274_S4;
struct func_8024D274_S4 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x1C - 0x14 - sizeof(s32)];
    f32 unk1C;
};
struct func_8024D388_S1;
struct func_8024D388_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    void * unk1D8;
};
struct func_8024D388_S2;
struct func_8024D388_S2 {
    char pad0[0x80C];
    s32 unk80C;
};
struct func_8024D388_S3;
struct func_8024D388_S3 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x28 - 0x1C - sizeof(f32)];
    f32 unk28;
    char pad28[0xEC - 0x28 - sizeof(f32)];
    f32 unkEC;
};
struct func_8024D388_S4;
struct func_8024D388_S4 {
    char pad0[0x18];
    u16 unk18;
    char pad18[0x1C - 0x18 - sizeof(u16)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x28 - 0x20 - sizeof(f32)];
    f32 unk28;
};
struct func_8024E454_S1;
struct func_8024E454_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    u32 unk100;
    char pad100[0x118 - 0x100 - sizeof(u32)];
    void * unk118;
    char pad118[0x1D8 - 0x118 - sizeof(void*)];
    void * unk1D8;
};
struct func_8024E454_S2;
struct func_8024E454_S2 {
    char pad0[0x80C];
    void * unk80C;
};
struct func_8024E454_S3;
struct func_8024E454_S3 {
    char pad0[0xF0];
    f32 unkF0;
};
struct func_8024E454_S4;
struct func_8024E454_S4 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x2C - 0x18 - sizeof(f32)];
    f32 unk2C;
};
struct func_8024E454_S5;
struct func_8024E454_S5 {
    char pad0[0x14];
    u16 unk14;
    char pad14[0x30 - 0x14 - sizeof(u16)];
    void * unk30;
};
struct func_802505CC_S1;
struct func_802505CC_S1 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x68 - 0x1C - sizeof(s32)];
    char unk68;
};
struct func_80250BD4_S1;
struct func_80250BD4_S1 {
    char pad0[0x20];
    s32 * unk20;
};
struct func_80254D70_S1;
struct func_80254D70_S1 {
    char pad0[0x14];
    void * unk14;
};
struct func_80254D70_S2;
struct func_80254D70_S2 {
    char pad0[0x8];
    s32 unk8;
};
struct func_80255220_S1;
struct func_80255220_S1 {
    char pad0[0x230];
    char unk230;
    char pad230[0x1448 - 0x230 - sizeof(char)];
    s32 unk1448;
};
struct func_80255220_S3;
struct func_80255220_S3 {
    char pad0[0x18];
    s32 unk18;
    char pad18[0x20 - 0x18 - sizeof(s32)];
    void * unk20;
};
struct func_802558C0_S1;
struct func_802558C0_S1 {
    char pad0[0x20];
    char unk20;
};
struct func_8025BBA4_S1;
struct func_8025BBA4_S1 {
    char pad0[0x28];
    s16 unk28;
    char pad28[0x44 - 0x28 - sizeof(s16)];
    char unk44;
    char pad44[0x88 - 0x44 - sizeof(char)];
    s32 unk88;
    char pad88[0x8C - 0x88 - sizeof(s32)];
    Block12 unk8C;
    char pad8C[0x98 - 0x8C - sizeof(Block12)];
    f32 unk98;
    char pad98[0x9C - 0x98 - sizeof(f32)];
    f32 unk9C;
    char pad9C[0xA8 - 0x9C - sizeof(f32)];
    s32 unkA8;
    char padA8[0xB0 - 0xA8 - sizeof(s32)];
    void * unkB0;
    char padB0[0xC0 - 0xB0 - sizeof(void*)];
    s32 unkC0;
};
struct func_8025BBA4_S3;
struct func_8025BBA4_S3 {
    char pad0[0x8E];
    u16 unk8E;
    char pad8E[0x90 - 0x8E - sizeof(u16)];
    u16 unk90;
    char pad90[0x92 - 0x90 - sizeof(u16)];
    s16 unk92;
};
struct func_8025BBA4_S4;
struct func_8025BBA4_S4 {
    char pad0[0x2B94];
    s8 unk2B94;
    char pad2B94[0x2B98 - 0x2B94 - sizeof(s8)];
    s32 unk2B98;
};
struct func_8025DA30_S1;
struct func_8025DA30_S1 {
    char pad0[0x2B60];
    void * unk2B60;
    char pad2B60[0x2B64 - 0x2B60 - sizeof(void*)];
    s32 unk2B64;
};
struct func_8025DA30_S3;
struct func_8025DA30_S3 {
    char pad0[0xC];
    void * unkC;
    char padC[0x24 - 0xC - sizeof(void*)];
    s32 unk24;
    char pad24[0x30 - 0x24 - sizeof(s32)];
    f32 unk30;
};
struct func_8025DBA0_S3;
struct func_8025DBA0_S3 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x30 - 0x24 - sizeof(s32)];
    f32 unk30;
};
struct func_8025E55C_S1;
struct func_8025E55C_S1 {
    char pad0[0xA];
    short unkA;
};
struct func_8025E58C_S1;
struct func_8025E58C_S1 {
    char pad0[0x10];
    short unk10;
};
struct func_8025E5B0_S1;
struct func_8025E5B0_S1 {
    char pad0[0x14];
    short unk14;
};
struct func_8026C484_S2;
struct func_8026C484_S2 {
    s32 unk0;
    s32 unk4;
    s8 * unk8;
    s32 unkC;
};
struct func_8026E5E0_S1;
struct func_8026E5E0_S1 {
    char pad0[0xC];
    u32 unkC;
    u16 bone;
    u16 reserved;
};
struct func_8026E5E0_S2;
struct func_8026E5E0_S2 {
    u32 unk0;
    u16 unk4;
    char pad4[0xE];
};
struct func_8026E5E0_S3;
struct func_8026E5E0_S3 {
    char pad0[0x18];
    s32 *unk18;
    char pad18[0x188];
    s8 unk1A4;
    char pad1A4[0xB];
    f32 unk1B0;
    char pad1B0[0x24];
    func_8022C6D4_S1 *unk1D8;
    char pad1D8[0x6C];
    Triple unk248;
    Triple unk254;
    Triple unk260;
    char pad268[0x74];
    s32 unk2E0;
};
union func_8028472C_S2_U118;
union func_8028472C_S2_U118 {
    s32 v0;
    s32 * v1;
};
struct func_8028C544_S1;
struct func_8028C544_S1 {
    char pad0[0x11D8];
    char unk11D8;
    char pad11D8[0x11DC - 0x11D8 - sizeof(char)];
    void * unk11DC;
    char pad11DC[0x11EC - 0x11DC - sizeof(void*)];
    func_80239C2C_S1_UF24 unk11EC;
};
struct func_8028C544_S2;
struct func_8028C544_S2 {
    char pad0[0x8];
    void * unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    f32 unkC;
};
struct func_8028C544_S3;
struct func_8028C544_S3 {
    char pad0[0xC];
    unsigned short unkC;
    char padC[0xE - 0xC - sizeof(unsigned short)];
    u8 unkE;
};
struct func_80290404_S1;
struct func_80290404_S1 {
    char pad0[0x18C];
    f32 unk18C;
    char pad18C[0x190 - 0x18C - sizeof(f32)];
    f32 unk190;
};
struct func_80293268_S1;
struct func_80293268_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x88 - 0xC - sizeof(s32)];
    s32 unk88;
};
struct func_80293268_S2;
struct func_80293268_S2 {
    char pad0[0x26DBC];
    s32 unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(s32)];
    s8 unk26DC1;
    char pad26DC1[0x26DD8 - 0x26DC1 - sizeof(s8)];
    s32 unk26DD8;
    char pad26DD8[0x26DDC - 0x26DD8 - sizeof(s32)];
    s32 unk26DDC;
};
struct func_8029A838_S1;
struct func_8029A838_S1 {
    s32 unk0;
    char pad0[0x10 - 0x0 - sizeof(s32)];
    s32 unk10;
};
struct func_802A2BE0_S1;
struct func_802A2BE0_S1 {
    char pad0[0x8];
    void * unk8;
    char pad8[0x12 - 0x8 - sizeof(void*)];
    u16 unk12;
};
struct func_802A2E5C_S2;
struct func_802A2E5C_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0xE - 0x4 - sizeof(void*)];
    u16 unkE;
    char padE[0x10 - 0xE - sizeof(u16)];
    s8 unk10;
};
struct func_802ADE28_S3;
struct func_802ADE28_S3 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x6 - 0x4 - sizeof(u16)];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
};
struct func_802ADE28_S4;
struct func_802ADE28_S4 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5DC - 0x10 - sizeof(s32)];
    void * unk5DC;
    char pad5DC[0x670 - 0x5DC - sizeof(void*)];
    f32 unk670;
    char pad670[0x674 - 0x670 - sizeof(f32)];
    f32 unk674;
    char pad674[0x678 - 0x674 - sizeof(f32)];
    f32 unk678;
    char pad678[0xD40 - 0x678 - sizeof(f32)];
    char unkD40;
};
struct func_802B54A0_S1;
struct func_802B54A0_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s16 unk30;
    char pad30[0x32 - 0x30 - sizeof(s16)];
    s16 unk32;
    char pad32[0x34 - 0x32 - sizeof(s16)];
    u8 unk34;
    char pad34[0x35 - 0x34 - sizeof(u8)];
    u8 unk35;
    char pad35[0x38 - 0x35 - sizeof(u8)];
    s16 unk38;
    char pad38[0x5C - 0x38 - sizeof(s16)];
    s32 unk5C;
    char pad5C[0x60 - 0x5C - sizeof(s32)];
    s32 unk60;
    char pad60[0x64 - 0x60 - sizeof(s32)];
    s32 unk64;
    char pad64[0x68 - 0x64 - sizeof(s32)];
    s32 unk68;
    char pad68[0x6C - 0x68 - sizeof(s32)];
    func_8028472C_S2_U118 unk6C;
    char pad6C[0x70 - 0x6C - sizeof(func_8028472C_S2_U118)];
    s32 unk70;
    char pad70[0x74 - 0x70 - sizeof(s32)];
    s32 unk74;
    char pad74[0x78 - 0x74 - sizeof(s32)];
    s32 unk78;
    char pad78[0x7C - 0x78 - sizeof(s32)];
    s32 unk7C;
    char pad7C[0x80 - 0x7C - sizeof(s32)];
    s32 unk80;
    char pad80[0x84 - 0x80 - sizeof(s32)];
    s32 unk84;
};
struct func_8041C864_S1;
struct func_8041C864_S1 {
    char pad0[0x204];
    char unk204;
};
struct Screen_func_80422960_de;
struct func_80422C20_G1;
struct func_80422C20_G1 {
    struct Screen_func_80422960_de * unk0;
};
struct Game_func_80422960_de;
struct func_80422C20_G2;
struct func_80422C20_G2 {
    struct Game_func_80422960_de * unk0;
};
struct func_804302F8_S1;
struct func_804302F8_S1 {
    char pad0[0xBA0];
    s32 unkBA0;
    char padBA0[0xBA4 - 0xBA0 - sizeof(s32)];
    s32 unkBA4;
};
struct func_804360F4_S2;
struct func_804360F4_S2 {
    char pad0[0x1C];
    void * unk1C;
};
struct func_804360F4_G1;
struct func_804360F4_S2;
struct func_804360F4_G1 {
    struct func_804360F4_S2 * unk0;
};
struct func_8043D2D0_S;
struct func_8043D2D0_S {
    u8 pad0[0x14];
    s32 **value;
};
struct func_8043DD30_S1;
struct func_8043DD30_S1 {
    s32 unk0;
    char pad0[0x10];
    char **unk14;
};
struct func_8044C410_S1;
struct func_8044C410_S1 {
    char pad0[0x4C];
    char unk4C;
    char pad4C[0x50 - 0x4C - sizeof(char)];
    char unk50;
    char pad50[0x54 - 0x50 - sizeof(char)];
    char unk54;
    char pad54[0x58 - 0x54 - sizeof(char)];
    char unk58;
    char pad58[0x5C - 0x58 - sizeof(char)];
    char unk5C;
    char pad5C[0x74 - 0x5C - sizeof(char)];
    char unk74;
    char pad74[0x1B450 - 0x74 - sizeof(char)];
    char unk1B450;
    char pad1B450[0x1B46C - 0x1B450 - sizeof(char)];
    char unk1B46C;
    char pad1B46C[0x1B488 - 0x1B46C - sizeof(char)];
    char unk1B488;
    char pad1B488[0x1B4A4 - 0x1B488 - sizeof(char)];
    char unk1B4A4;
    char pad1B4A4[0x1B4C0 - 0x1B4A4 - sizeof(char)];
    char unk1B4C0;
};
typedef signed int ( *Handler802A2B50)(void *, signed int, signed int, signed int, signed int);
struct Opaque_World;
typedef struct Opaque_World Opaque_World;
typedef char * va_list;
extern int D_80000000;
extern int D_80000004;
extern int D_80000008;
extern int D_8000000C;
extern int D_8000030C;
extern float D_800C1980;
extern float D_800C1A50;
extern float D_800C1A80;
extern float D_800C1A90;
extern float D_800C1CF0;
extern float D_800C1D0C_eu;
extern float D_800C1D20;
extern float D_800C1D30;
extern float D_800C2010;
extern float D_800C2018;
extern float D_800C201C;
extern float D_800C2020;
extern float D_800C2024;
extern float D_800C2028;
extern float D_800C202C;
extern float D_800C2058;
extern float D_800C20D0;
extern float D_800C2128;
extern float D_800C2224;
extern float D_800C22F4;
extern float D_800C2368_de;
extern float D_800C2370;
extern float D_800C2374;
extern float D_800C2378;
extern float D_800C23C8;
extern float D_800C2408;
extern float D_800C2544_eu;
extern float D_800C2594;
extern float D_800C25D4;
extern float D_800C2610;
extern float D_800C2614;
extern float D_800C2618;
extern float D_800C2650;
extern float D_800C2654;
extern float D_800C2658;
extern float D_800C2C5C_de;
extern float D_800C2C60_de;
extern float D_800C2C64_de;
extern float D_800C2C68_de;
extern float D_800C2C6C_de;
extern float D_800C2C70_de;
extern float D_800C2C74_de;
extern float D_800C2C78_de;
extern float D_800C2C7C_de;
extern float D_800C319C_eu;
extern float D_800C31A4_eu;
extern float D_800C31A8_eu;
extern float D_800C31AC_eu;
extern float D_800C31B0_eu;
extern float D_800C31B4_eu;
extern float D_800C31B8_eu;
extern float D_800C31BC_eu;
extern float D_800C31C0_eu;
extern float D_800C31F8_eu;
extern float D_800C31FC_eu;
extern float D_800C3204_eu;
extern float D_800C3208_eu;
extern float D_800C324C_eu;
extern float D_800C3250_eu;
extern float D_800C3254_eu;
extern float D_800C3258_eu;
extern float D_800C325C_eu;
extern float D_800C32C0_eu;
extern float D_800C3BF0;
extern float D_800C3CC0;
extern float D_800C3E10;
extern float D_800C3E18;
extern float D_800C3E1C;
extern float D_800C3E20;
extern float D_800C3E28;
extern float D_800C3E30;
extern float D_800C3E38;
extern float D_800C3E3C;
extern float D_800C3F70;
extern float D_800C3FB0;
extern float D_800C4400;
extern float D_800C4404;
extern float D_800C4408;
extern float D_800C440C;
extern float D_800C4410;
extern float D_800C4414;
extern float D_800C4418;
extern float D_800C441C;
extern float D_800C46B0;
extern float D_800C46B4;
extern float D_800C46B8;
extern float D_800C4BC8;
extern float D_800C4C10;
extern float D_800C4C18;
extern float D_800C4C20;
extern float D_800C4C24;
extern float D_800C4C28;
extern float D_800C4C30;
extern float D_800C4C34;
extern float D_800C4C98;
extern float D_800C4DE0_eu;
extern float D_800C4F48;
extern float D_800C4F88;
extern float D_800C5350;
extern float D_800C5354;
extern float D_800C53B4;
extern float D_800C53C4;
extern float D_800C53C8;
extern float D_800C5410;
extern float D_800C5420_de;
extern float D_800C5424_de;
extern float D_800C54D4;
extern float D_800C54D8_de;
extern float D_800C5600;
extern float D_800C5674;
extern float D_800C5678;
extern float D_800C5690_eu;
extern float D_800C5694_eu;
extern float D_800C5698_eu;
extern float D_800C569C_eu;
extern float D_800C56AC_eu;
extern float D_800C56B4;
extern float D_800C56B8;
extern float D_800C5774_eu;
extern float D_800C5778_eu;
extern double D_800C60F8;
extern double D_800C61C8;
extern double D_800C6468;
extern double D_800C64A8;
extern float D_800C6504_eu;
extern float D_800C650C_eu;
extern float D_800C6520_eu;
extern float D_800C6540_eu;
extern float D_800C6548_eu;
extern float D_800C6550_eu;
extern float D_800C6B40;
extern float D_800C7218;
extern float D_800C73E4;
extern float D_800C73FC;
extern float D_800C74E0;
extern float D_800C74F0;
extern float D_800C75C0;
extern double D_800C75C8;
extern float D_800C75D0;
extern double D_800C75D8;
extern double D_800C76A8;
extern double D_800C76B8;
extern double D_800C7738;
extern double D_800C7818;
extern double D_800C8100_de;
extern double D_800C8108_de;
extern double D_800C8110_de;
extern float D_800C81B0;
extern float D_800C81C0;
extern double D_800C8298;
extern double D_800C82A8;
extern double D_800C8408;
extern float D_800C8B80;
extern float D_800C8B90;
extern double D_800C8C68;
extern double D_800C8C78;
extern float D_800C8DB0;
extern double D_800C8DD8;
extern int D_800C9233[];
extern int D_800C9237[];
extern float D_800C9D88;
extern float D_800CA4B4;
extern float D_800CA4B8;
extern float D_800CA510;
extern float D_800CA514;
extern float D_800CA5C0;
extern float D_800CA5C4;
extern float D_800CA634;
extern float D_800CB2A0;
extern int D_800CB2B8;
extern double D_800CB358;
extern float D_800CB390;
extern int D_800CB3A8;
extern int D_800CB61C;
extern int D_800CB70C;
extern int D_800CBBB4;
extern int D_800CBBBC;
extern int D_800CBBC0;
extern int D_800CBCA4;
extern int D_800CBCAC;
extern int D_800CBCB0;
extern float D_800CBF70;
extern int D_800CBF88;
extern int D_800CC2EC;
extern float D_800CC810;
extern float D_800CC820;
extern int D_800CC884;
extern int D_800CC88C;
extern int D_800CC890;
extern double D_800CC8F8;
extern double D_800CC908;
extern float D_800CC940;
extern int D_800CC958;
extern double D_800CCA68;
extern int D_800CCCBC;
extern int D_800CD254;
extern int D_800CD25C;
extern int D_800CD260;
extern int D_800CD618;
extern int D_800CD61C;
extern float D_800CD64C;
extern float D_800CD668;
extern int D_800CD698[];
extern float D_800CD73C;
extern float D_800CD758;
extern int D_800CE2E8;
extern float D_800CE31C;
extern float D_800CE338;
extern float D_800CECEC;
extern float D_800CED08;
extern float D_800D05D0;
extern int D_800D05E8;
extern int D_800D094C;
extern int D_800D0EF4;
extern int D_800D0EFC;
extern int D_800D0F00;
extern unsigned char * D_800D1D5C;
extern float D_800D298C;
extern float D_800D29A8;
extern void * D_800D303C;
extern unsigned char * D_800D30B0;
extern unsigned char * D_800D30B4;
extern int D_800D3480;
extern int D_800D3484;
extern int D_800D3488;
extern int D_800D348C;
extern int D_800D3490;
extern int D_800D3494;
extern int D_800D3498;
extern int D_800D349C;
extern int D_800D34A0;
extern int D_800D34A8;
extern int D_800D34AC;
extern int D_800D3580;
extern int D_800D3594;
extern int D_800D3598;
extern int D_800D3770;
extern int D_800D3774;
extern int D_800D3778;
extern int D_800D377C;
extern int D_800D3780;
extern int D_800D3784;
extern int D_800D3788;
extern int D_800D378C;
extern int D_800D3790;
extern int D_800D3794;
extern int D_800D3798;
extern int D_800D379C;
extern int D_800D39F8;
extern unsigned char * D_800D3DE4;
extern float D_800D5240;
extern void * D_800D7068;
extern unsigned char * D_800D70DC;
extern int D_800D74AC;
extern int D_800D74B0;
extern int D_800D74C0;
extern int D_800D74C4;
extern int D_800D74C8;
extern int D_800D74CC;
extern int D_800D74D4;
extern int D_800D74D8;
extern float D_800DB7CC;
extern float D_800DB7DC;
extern float D_800DB8BC;
extern float D_800DB8D4;
extern float D_800DB8E8;
extern float D_800DB900;
extern float D_800DB918;
extern float D_800DBD50;
extern float D_800DBD5C;
extern double D_800DBD98;
extern double D_800DBDB0;
extern double D_800DBDC8;
extern double D_800DBE70;
extern float D_800DC080;
extern float D_800DC170;
extern float D_800DC1F0;
extern float D_800DC224;
extern float D_800DC330;
extern float D_800DC740;
extern void * D_800DCAE8[];
extern float D_800DCB1C;
extern float D_800DCB24;
extern float D_800DCB2C;
extern float D_800DCBD4;
extern float D_800DCC04;
extern float D_800DCC0C;
extern float D_800DCC14;
extern float D_800DCC24;
extern float D_800DCC38;
extern unsigned char * D_800DCC44[];
extern unsigned char * D_800DCC50[];
extern float D_800DCC54;
extern float D_800DCCE4;
extern float D_800DCF04;
extern float D_800DD0A0;
extern float D_800DD0AC;
extern double D_800DD0E8;
extern double D_800DD100;
extern float D_800DD184;
extern double D_800DD1C0;
extern float D_800DD33C;
extern float D_800DD340;
extern float D_800DD3D0;
extern float D_800DD3F4;
extern float D_800DD418;
extern float D_800DD424;
extern float D_800DD430;
extern float D_800DD43C;
extern float D_800DD4A8;
extern float D_800DD4C0;
extern unsigned short D_800DD532;
extern unsigned short D_800DD536;
extern float D_800DD540;
extern float D_800DD574;
extern float D_800DD680;
extern int D_800DD7B4[];
extern int D_800DD7C0[];
extern int D_800DD7F0[];
extern int D_800DD7FC[];
extern int D_800DD808[];
extern int D_800DD814[];
extern int D_800DD82C[];
extern int D_800DD838[];
extern int D_800DDAB4[];
extern float D_800DDAC4;
extern float D_800DDAC8;
extern float D_800DDAD0;
extern float D_800DDAD4;
extern float D_800DDAD8;
extern float D_800DDAE0;
extern int D_800DDAF0[];
extern int D_800DDAFC[];
extern int D_800DDB08[];
extern float D_800DDE74;
extern float D_800DDF10;
extern float D_800DDF24;
extern float D_800DDF54;
extern float D_800DDF64;
extern float D_800DDFA0;
extern float D_800DDFA4;
extern float D_800DE034;
extern float D_800DE244;
extern float D_800DE248;
extern float D_800DE24C_de;
extern float D_800DE254;
extern float D_800DE370;
extern float D_800DE378_de;
extern float D_800DE468;
extern float D_800DE4D4;
extern int D_800DE62C;
extern float D_800DE68C;
extern float D_800DE690;
extern float D_800DE744;
extern float D_800DE768;
extern float D_800DE7C4;
extern float D_800DE7F8;
extern unsigned short D_800DE882;
extern unsigned short D_800DE886;
extern unsigned char * D_800DF3E0[];
extern int D_800DF97C;
extern int D_800E0110;
extern int D_800E0290;
extern void * D_800E0B34[];
extern void * D_800E0B44[];
extern float D_800E0B4C;
extern float D_800E0B5C;
extern float D_800E0C3C;
extern float D_800E0C54;
extern float D_800E0C68;
extern float D_800E0C80;
extern float D_800E0C98;
extern unsigned char * D_800E0D04[];
extern unsigned char * D_800E0D14[];
extern unsigned char * D_800E0D24[];
extern int D_800E0EC4[];
extern int D_800E0ED4[];
extern int D_800E0EE4[];
extern unsigned char * D_800E0EF4[];
extern unsigned char * D_800E0F04[];
extern int D_800E0F14_eu[];
extern unsigned char * D_800E0F24[];
extern unsigned char * D_800E0F34[];
extern int D_800E0F44[];
extern int D_800E0F54[];
extern int D_800E0F64[];
extern int D_800E0F74[];
extern unsigned char * D_800E0F94[];
extern unsigned char * D_800E0FA4[];
extern unsigned char * D_800E0FB4[];
extern unsigned char * D_800E0FC4[];
extern int D_800E0FD4[];
extern int D_800E1044[];
extern int D_800E1054[];
extern int D_800E1064_eu[];
extern int D_800E1074[];
extern int D_800E1084[];
extern int D_800E1094_eu[];
extern int D_800E10A4[];
extern int D_800E10B4[];
extern int D_800E10C4[];
extern float D_800E10D0;
extern int D_800E10D4_eu[];
extern float D_800E10DC;
extern int D_800E10E4[];
extern int D_800E10F4[];
extern int D_800E1104[];
extern int D_800E1114[];
extern double D_800E1118;
extern double D_800E1130;
extern unsigned char * D_800E1134[];
extern double D_800E1148;
extern double D_800E11F0;
extern int D_800E1254[];
extern int D_800E1264[];
extern int D_800E1284[];
extern int D_800E1294[];
extern int D_800E12A4[];
extern int D_800E12B4[];
extern int D_800E12C4[];
extern int D_800E12D4[];
extern int D_800E12E4[];
extern int D_800E12F4[];
extern int D_800E1304[];
extern int D_800E1314[];
extern int D_800E1324[];
extern int D_800E1334[];
extern int D_800E1344[];
extern int D_800E1354[];
extern int D_800E1364[];
extern int D_800E1374_eu[];
extern int D_800E1384[];
extern float D_800E1400;
extern float D_800E1454;
extern float D_800E1460;
extern float D_800E146C;
extern float D_800E14F0;
extern int D_800E1564_eu[];
extern float D_800E1570;
extern float D_800E15A4;
extern int D_800E1664_eu[];
extern float D_800E16B0;
extern int D_800E1720;
extern int D_800E1724[];
extern int D_800E1734_eu[];
extern int D_800E1744[];
extern int D_800E1754[];
extern int D_800E1784[];
extern int D_800E1794_eu[];
extern int D_800E17A4[];
extern int D_800E17B4[];
extern int D_800E17C4[];
extern int D_800E17D4[];
extern int D_800E17E4_eu[];
extern int D_800E17F4[];
extern int D_800E1804[];
extern int D_800E1814[];
extern int D_800E1824[];
extern int D_800E1834[];
extern int D_800E1844[];
extern int D_800E1854_eu[];
extern int D_800E1864[];
extern int D_800E1874[];
extern int D_800E1884[];
extern int D_800E1894[];
extern int D_800E18B4_eu[];
extern float D_800E19E8;
extern float D_800E1AC0;
extern int D_800E1C14[];
extern int D_800E1C24[];
extern int D_800E1C34[];
extern int D_800E1C44[];
extern int D_800E1C54[];
extern int D_800E1C64[];
extern int D_800E1C74[];
extern int D_800E1C84[];
extern int D_800E1C94[];
extern int D_800E1CA4[];
extern int D_800E1CB4[];
extern int D_800E1CC4[];
extern int D_800E1CD4[];
extern int D_800E1CE4[];
extern int D_800E1CF4[];
extern int D_800E1D04[];
extern int D_800E1D14[];
extern int D_800E1D24[];
extern int D_800E1D34_eu[];
extern int D_800E1D44[];
extern int D_800E1DAA[];
extern int D_800E1DB4[];
extern int D_800E1DC4[];
extern float D_800E1EA4;
extern float D_800E1F54;
extern float D_800E1F84;
extern float D_800E1FD0;
extern int D_800E2054[];
extern float D_800E2064;
extern int D_800E2064_eu[];
extern int D_800E2074_eu[];
extern int D_800E2084[];
extern int D_800E2094_eu[];
extern int D_800E20A4[];
extern int D_800E20B4[];
extern int D_800E2224[];
extern int D_800E22F4[];
extern float D_800E23A0;
extern float D_800E23A8;
extern float D_800E2498;
extern float D_800E2504;
extern unsigned char * D_800E25D4[];
extern int D_800E25E4[];
extern float D_800E26BC;
extern float D_800E26C0;
extern float D_800E2774;
extern float D_800E2798;
extern float D_800E27F4;
extern float D_800E27F8;
extern float D_800E27FC;
extern float D_800E2800;
extern float D_800E2804;
extern float D_800E2808;
extern float D_800E2814;
extern int D_800E2814_eu[];
extern int D_800E2824_eu[];
extern int D_800E2834[];
extern int D_800E2844_eu[];
extern float D_800E2848;
extern int D_800E2854_eu[];
extern int D_800E2864[];
extern int D_800E2874[];
extern int D_800E2884[];
extern int D_800E2894[];
extern int D_800E28A4_eu[];
extern int D_800E28B4_eu[];
extern int D_800E28C4_eu[];
extern unsigned short D_800E28D2;
extern unsigned short D_800E28D6;
extern int D_800E2994[];
extern int D_800E2FB4[];
extern int D_800E3234[];
extern int D_800E3244[];
extern int D_800E3294[];
extern int D_800E32B4_eu[];
extern int D_800E32C4_eu[];
extern unsigned char * D_800E3354[];
extern unsigned char * D_800E3364_eu[];
extern unsigned char * D_800E3374[];
extern unsigned char * D_800E33A4[];
extern int D_800E33B4[];
extern unsigned char * D_800E34C4[];
extern int D_800E3B64[];
extern int D_800E3B74[];
extern int D_800E3B84[];
extern int D_800E3B94[];
extern int D_800E40B4[];
extern int D_800E40F4[];
extern int D_800E4134[];
extern int D_800E4154[];
extern int D_800E41B4[];
extern unsigned char * D_800E41E4[];
extern int D_800E4AA0;
extern int D_800E4EC8;
extern int D_800E57E4;
extern float D_800E835C;
extern float D_800E836C;
extern float D_800E844C;
extern float D_800E8464;
extern float D_800E8478;
extern float D_800E8490;
extern float D_800E84A8;
extern float D_800E88E0;
extern float D_800E88EC;
extern double D_800E8928;
extern double D_800E8940;
extern double D_800E8958;
extern double D_800E8A00;
extern float D_800E8C10;
extern float D_800E8C64;
extern float D_800E8C70;
extern float D_800E8C7C;
extern float D_800E8D00;
extern float D_800E8D80;
extern float D_800E8DB4;
extern float D_800E8EC0;
extern float D_800E91F8;
extern float D_800E92D0;
extern float D_800E9304;
extern float D_800E9308;
extern float D_800E9310;
extern float D_800E9314;
extern float D_800E9318;
extern float D_800E9320;
extern float D_800E96B4;
extern float D_800E9750;
extern float D_800E9764;
extern float D_800E9794;
extern float D_800E97A4;
extern float D_800E97E0;
extern float D_800E97E4;
extern float D_800E9874;
extern float D_800E9A94;
extern float D_800E9D14;
extern float D_800E9ECC;
extern float D_800E9ED0;
extern float D_800E9F84;
extern float D_800E9FC8;
extern float D_800E9FF4;
extern float D_800EA028;
extern unsigned short D_800EA0B2;
extern unsigned short D_800EA0B6;
extern int D_800EC6C8;
extern int D_800ECF90;
extern int D_800ECFE4;
extern float D_800ED19C;
extern float D_800ED1AC;
extern float D_800ED28C;
extern float D_800ED2A4;
extern float D_800ED2B8;
extern float D_800ED2D0;
extern float D_800ED2E8;
extern float D_800ED720;
extern float D_800ED72C;
extern double D_800ED768;
extern double D_800ED780;
extern double D_800ED798;
extern double D_800ED840;
extern float D_800EDA50;
extern float D_800EDAA4;
extern float D_800EDAB0;
extern float D_800EDABC;
extern float D_800EDB40;
extern float D_800EDBC0;
extern float D_800EDBF4;
extern float D_800EDD00;
extern float D_800EE038;
extern struct Triple D_800EE0F0;
extern float D_800EE0F8;
extern float D_800EE0FC;
extern struct Triple D_800EE100;
extern float D_800EE108;
extern float D_800EE110;
extern float D_800EE4F4;
extern float D_800EE590;
extern float D_800EE5A4;
extern float D_800EE5D4;
extern float D_800EE5E4;
extern float D_800EE620;
extern float D_800EE624;
extern float D_800EE6B4;
extern float D_800EE8D4;
extern float D_800EE9B8;
extern float D_800EE9F0;
extern float D_800EE9F8;
extern float D_800EEAE0;
extern float D_800EEAE8;
extern float D_800EEAEC;
extern float D_800EEAF0;
extern float D_800EEAF4;
extern float D_800EEAF8;
extern float D_800EEB54;
extern float D_800EED0C;
extern float D_800EED10;
extern float D_800EEDC4;
extern float D_800EEE08;
extern float D_800EEE34;
extern float D_800EEE68;
extern unsigned short D_800EEEF2;
extern unsigned short D_800EEEF6;
extern int D_800EFFD4[];
extern int D_800EFFEC;
extern int D_800F0DC0;
extern int D_800F14E8;
extern int D_800F1E04;
extern int D_800F2DC0;
extern int D_800F6DC0;
extern int D_800F72A8;
extern int D_800FD23C;
extern int D_800FD240;
extern int D_800FE540;
extern int D_800FEAE0[];
extern int D_800FF140_de[];
extern int D_800FF238;
extern int D_800FF23C;
extern int D_800FF240;
extern int D_80100090;
extern int D_80100204;
extern unsigned char D_80100207;
extern int D_8010029C;
extern int D_801002A0;
extern int D_801002B4;
extern int D_801002C4;
extern int D_801002E0;
extern int D_801002EC;
extern int D_801002F0;
extern int D_80100580;
extern int D_80100598[];
extern int D_801005A0[];
extern int D_801005A8;
extern int D_80101108;
extern int D_8010115C;
extern int D_801011A8;
extern int D_801011B0;
extern int D_801076A0;
extern struct Work56EC8 * D_80107E28[];
extern int D_80107E98;
extern int D_80107E9C;
extern int D_801081B4;
extern float D_8010AC70;
extern float D_8010AC7C;
extern int D_8010AC84;
extern int D_8010AC88;
extern short D_8010B320;
extern int D_8010B3D8;
extern int D_8010BBF0[];
extern int D_8010C074;
extern void * D_8010C078;
extern unsigned char D_8010C07F;
extern int D_8010C080_de;
extern void * D_8010C084;
extern int D_801102A0;
extern int D_801102B4;
extern int D_80111D24;
extern float D_80111D34;
extern int D_8011BF00;
extern int D_8011BF08;
extern int D_8011CC18;
extern int D_8012D4E4;
extern void * D_8012D538;
extern int D_80137064;
extern void * D_80137078;
extern float D_801370C4;
extern int D_801370C8;
extern int D_801370CC;
extern int D_801370D0;
extern int D_801371DC;
extern int D_80137214;
extern int D_80137288;
extern int D_801372A8;
extern int D_80137428;
extern void * D_8013D538;
extern int D_801408D8;
extern float D_80140C3C;
extern int D_80140F88;
extern int D_80140FB0;
extern int D_80141000;
extern int D_80141040;
extern int D_801421B4;
extern int D_801421D0;
extern float D_80142228;
extern unsigned char D_80142233;
extern unsigned char D_80142235;
extern signed char D_801422C1;
extern short D_801422DA[];
extern short D_801422DC[];
extern short D_801422DE[];
extern int D_801427D0;
extern int D_80142848;
extern int D_8014284C;
extern int D_8014287C;
extern unsigned long long D_801428A0;
extern int D_801428A8;
extern int D_801428D8;
extern float D_80142C3C;
extern int D_80142CA8;
extern float D_80142CB4;
extern int D_80146998;
extern float D_80146CB8;
extern float D_80146CFC;
extern int D_80146E08;
extern int D_80146E0C;
extern int D_80146E10;
extern int D_80146E18;
extern int D_80146E1C;
extern int D_80146E40;
extern int D_80146E44;
extern int D_80146E48;
extern signed int ( *D_80146E4C)(char *, char *);
extern int D_80147060[];
extern int D_801470A8;
extern int D_80147190;
extern int D_8014721C;
extern float D_8014AE30[];
extern int D_8014AEB8;
extern float D_8014B030[];
extern float D_8014B230[];
extern float D_8014B430_de[];
extern unsigned char D_8014B49B;
extern struct FftTables * D_8014B830;
extern unsigned char D_8014C235;
extern float D_8014CC3C;
extern int D_8014D260[];
extern int D_8014D270[];
extern int D_8014D420_de;
extern int D_8014D424;
extern int D_8014D428;
extern int D_8014D45C;
extern int D_8014D494;
extern unsigned char D_8014D49B;
extern int D_8014D4D4;
extern int D_8014D4FC;
extern struct Element_func_8041200C_de * D_8014D560;
extern int D_8014D564;
extern int D_8014D710;
extern int D_8014D924;
extern int D_8014D940;
extern int D_8014D970;
extern int D_8014D978;
extern short D_8014D99C;
extern unsigned char D_8014D9E5;
extern unsigned char D_8014D9E7;
extern int D_8014D9FC;
extern int D_8014DA20;
extern int D_8014DA24;
extern int D_8014DA28;
extern int D_8014DA2C;
extern int D_8014DA30;
extern int D_8014DA34;
extern int D_8014DA38;
extern int D_8014DA3C;
extern int D_8014DDA4;
extern struct Triple D_80150008;
extern struct ResourceManagerState D_8015000C;
extern int D_80150010;
extern void * D_80150018;
extern signed char D_801500E6;
extern int D_80150100;
extern short D_80150108;
extern short D_8015010A;
extern short D_801522DA[];
extern short D_801522DC[];
extern short D_801522DE[];
extern float D_80152C3C;
extern int D_8015414C;
extern int D_8015D494;
extern unsigned char D_8015D49B;
extern int D_A4040000;
extern unsigned int D_A4040010;
extern int D_A4400010;
extern unsigned int D_A450000C;
extern unsigned int D_A4600010;
extern int D_A4800018;
extern int D_B1FFFFF0;
extern unsigned char D_B2000001;
extern int D_B2000020;
extern int jtbl_800C1988[];
extern int jtbl_800C1A58[];
extern int jtbl_800C1CF8[];
extern int jtbl_800C1D38[];
extern int jtbl_800C1E20[];
extern int jtbl_800C2190[];
extern int jtbl_800C2348[];
extern int jtbl_800C54F8[];
extern int jtbl_800C6558[];
extern int jtbl_800C6598[];
extern int jtbl_800C6B48[];
extern int jtbl_800C7610[];
extern int jtbl_800C7930[];
extern int jtbl_800C8200[];
extern int jtbl_800C8520[];
extern int jtbl_800CA688[];
extern int jtbl_800DCD00[];
extern int jtbl_800DCDD8[];
extern int jtbl_800DD068[];
extern int jtbl_800DD620[];
extern int jtbl_800DDAA0[];
extern int jtbl_800DDB60[];
extern int jtbl_800DDD28[];
extern int jtbl_800DDD48[];
extern int jtbl_800DDD68[];
extern int jtbl_800DDD88[];
extern int jtbl_800DDDA8[];
extern int jtbl_800DE050[];
extern int jtbl_800DE1B8[];
extern int jtbl_800DE288[];
extern int jtbl_800DE2B8[];
extern int jtbl_800DE300[];
extern int jtbl_800E1B90[];
extern int jtbl_800E2080[];
extern int jtbl_800E21E8[];
extern int jtbl_800E22B8[];
extern int jtbl_800E22E8[];
extern int jtbl_800E2330[];
extern int jtbl_800E8E60[];
extern int jtbl_800E9250[];
extern int jtbl_800E92E0[];
extern int jtbl_800E93A0[];
extern int jtbl_800E9568[];
extern int jtbl_800E9588[];
extern int jtbl_800E95A8[];
extern int jtbl_800E95C8[];
extern int jtbl_800E95E8[];
extern int jtbl_800E9890[];
extern int jtbl_800E9B40[];
extern int jtbl_800ED458[];
extern int jtbl_800ED6E8[];
extern int jtbl_800EDD18[];
extern int jtbl_800EE1E0[];
extern int jtbl_800EE408[];
extern int jtbl_800EE428[];
extern int jtbl_800EE510[];
extern int jtbl_800EE6D0[];
extern int jtbl_800EE980[];
extern int jtbl_800EED88[];
extern int jtbl_800EEDA8[];
extern int jtbl_800EEDE8[];
#endif
