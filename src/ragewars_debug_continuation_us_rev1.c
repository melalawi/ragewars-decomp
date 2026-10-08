#include "psyq_debug_records.h"

/* Resident SN/PsyQ debug stream: COFF definitions, function frames,
 * block boundaries and source-line deltas. Values are serialized debugger
 * offsets/enum values, not native runtime pointer objects.
 * Function2(0x9C) extends Function(0x8C) with floating-register save data.
 * Begins with the four-byte OSErrorHandler Pascal-name suffix from the
 * preceding owned stream. Ends at a complete definition-record boundary.
 * ROM F6880..F8E02, VRAM800F5C80, 9602 bytes.
 */
struct RageWarsDebugContinuation {
    char prior_name_suffix[4];
    struct { /* ROM0xF6884: .131fake */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[8];
    } record_0000;
    struct { /* ROM0xF689A: magic */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[5];
    } record_0001;
    struct { /* ROM0xF68AD: len */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[3];
    } record_0002;
    struct { /* ROM0xF68BE: base */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[4];
    } record_0003;
    struct { /* ROM0xF68D0: startCount */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0004;
    struct { /* ROM0xF68E8: writeOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0005;
    struct { /* ROM0xF6901: .131fake; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[4];
    } record_0006;
    struct { /* ROM0xF691E: .131fake; OSLog */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[5];
    } record_0007;
    struct { /* ROM0xF693C: .132fake */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[8];
    } record_0008;
    struct { /* ROM0xF6952: magic */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[5];
    } record_0009;
    struct { /* ROM0xF6965: timeStamp */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0010;
    struct { /* ROM0xF697C: argCount */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[8];
    } record_0011;
    struct { /* ROM0xF6992: eventID */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[7];
    } record_0012;
    struct { /* ROM0xF69A7: .132fake; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[4];
    } record_0013;
    struct { /* ROM0xF69C4: .132fake; OSLogItem */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[9];
    } record_0014;
    struct { /* ROM0xF69E6: .133fake */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[8];
    } record_0015;
    struct { /* ROM0xF69FC: magic */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[5];
    } record_0016;
    struct { /* ROM0xF6A0F: version */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[7];
    } record_0017;
    struct { /* ROM0xF6A24: .133fake; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[4];
    } record_0018;
    struct { /* ROM0xF6A41: .133fake; OSLogFileHdr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[8];
        unsigned char name_length;
        char name[12];
    } record_0019;
    struct { /* ROM0xF6A66: CROMLookupTable_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0020;
    struct { /* ROM0xF6A85: seqctjSegmentROMStartAddr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[25];
    } record_0021;
    struct { /* ROM0xF6AAC: seqctjSegmentROMEndAddr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0022;
    struct { /* ROM0xF6AD1: seqtbjSegmentROMStartAddr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[25];
    } record_0023;
    struct { /* ROM0xF6AF8: seqtbjSegmentROMEndAddr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0024;
    struct { /* ROM0xF6B1D: sfxfsdSegmentROMStartAddr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[25];
    } record_0025;
    struct { /* ROM0xF6B44: sfxfsdSegmentROMEndAddr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0026;
    struct { /* ROM0xF6B69: _staticSegmentRomStartAddr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[26];
    } record_0027;
    struct { /* ROM0xF6B91: _staticSegmentRomEndAddr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0028;
    struct { /* ROM0xF6BB7: CROMLookupTable_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[4];
    } record_0029;
    struct { /* ROM0xF6BDD: CROMLookupTable_t; CROMLookupTable */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[17];
        unsigned char name_length;
        char name[15];
    } record_0030;
    struct { /* ROM0xF6C0E: CROMFacet_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0031;
    struct { /* ROM0xF6C27: m_Vertices */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        PsyqLE32 dimension_0;
        unsigned char tag_length;
        unsigned char name_length;
        char name[10];
    } record_0032;
    struct { /* ROM0xF6C46: CROMFacet_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[4];
    } record_0033;
    struct { /* ROM0xF6C66: CROMFacet_t; CROMFacet */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[11];
        unsigned char name_length;
        char name[9];
    } record_0034;
    struct { /* ROM0xF6C8B: CVector3_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0035;
    struct { /* ROM0xF6CA3: x */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[1];
    } record_0036;
    struct { /* ROM0xF6CB2: y */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[1];
    } record_0037;
    struct { /* ROM0xF6CC1: z */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[1];
    } record_0038;
    struct { /* ROM0xF6CD0: CVector3_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } record_0039;
    struct { /* ROM0xF6CEF: CVector3_t; CVector3 */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } record_0040;
    struct { /* ROM0xF6D12: MtxI_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[6];
    } record_0041;
    struct { /* ROM0xF6D26: i */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        PsyqLE32 dimension_0;
        PsyqLE32 dimension_1;
        unsigned char tag_length;
        unsigned char name_length;
        char name[1];
    } record_0042;
    struct { /* ROM0xF6D40: f */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        PsyqLE32 dimension_0;
        PsyqLE32 dimension_1;
        unsigned char tag_length;
        unsigned char name_length;
        char name[1];
    } record_0043;
    struct { /* ROM0xF6D5A: MtxI_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[6];
        unsigned char name_length;
        char name[4];
    } record_0044;
    struct { /* ROM0xF6D75: MtxI_t; MtxI */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[6];
        unsigned char name_length;
        char name[4];
    } record_0045;
    struct { /* ROM0xF6D90: CMtxF */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        PsyqLE32 dimension_0;
        PsyqLE32 dimension_1;
        unsigned char tag_length;
        unsigned char name_length;
        char name[5];
    } record_0046;
    struct { /* ROM0xF6DAE: CQuatern_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0047;
    struct { /* ROM0xF6DC6: x */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[1];
    } record_0048;
    struct { /* ROM0xF6DD5: y */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[1];
    } record_0049;
    struct { /* ROM0xF6DE4: z */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[1];
    } record_0050;
    struct { /* ROM0xF6DF3: t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[1];
    } record_0051;
    struct { /* ROM0xF6E02: CQuatern_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } record_0052;
    struct { /* ROM0xF6E21: CQuatern_t; CQuatern */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } record_0053;
    struct { /* ROM0xF6E44: CLine_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[7];
    } record_0054;
    struct { /* ROM0xF6E59: CVector3_t; m_vPt */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        PsyqLE32 dimension_0;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[5];
    } record_0055;
    struct { /* ROM0xF6E7D: CVector3_t; m_vDelta */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } record_0056;
    struct { /* ROM0xF6EA0: CVector3_t; m_vDir */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } record_0057;
    struct { /* ROM0xF6EC1: CVector3_t; m_vNormal */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[9];
    } record_0058;
    struct { /* ROM0xF6EE5: CLine_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[4];
    } record_0059;
    struct { /* ROM0xF6F01: CLine_t; CLine */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[5];
    } record_0060;
    struct { /* ROM0xF6F1E: CROMPathPoint_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[15];
    } record_0061;
    struct { /* ROM0xF6F3B: CVector3_t; m_vPos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[6];
    } record_0062;
    struct { /* ROM0xF6F5C: CGameRegion_t; m_pRegion */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[13];
        unsigned char name_length;
        char name[9];
    } record_0063;
    struct { /* ROM0xF6F83: m_RotY */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[6];
    } record_0064;
    struct { /* ROM0xF6F97: m_wFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[8];
    } record_0065;
    struct { /* ROM0xF6FAD: m_wIdleAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0066;
    struct { /* ROM0xF6FCB: m_wInteractiveIdleAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[27];
    } record_0067;
    struct { /* ROM0xF6FF4: pad */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[3];
    } record_0068;
    struct { /* ROM0xF7005: m_BlendRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0069;
    struct { /* ROM0xF7020: m_BlendSpeed */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[12];
    } record_0070;
    struct { /* ROM0xF703A: m_PlatformSpeed */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[15];
    } record_0071;
    struct { /* ROM0xF7057: m_RotX */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[6];
    } record_0072;
    struct { /* ROM0xF706B: m_RotZ */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[6];
    } record_0073;
    struct { /* ROM0xF707F: m_StopSpeed */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0074;
    struct { /* ROM0xF7098: m_StopTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0075;
    struct { /* ROM0xF70B0: CROMPathPoint_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[4];
    } record_0076;
    struct { /* ROM0xF70D4: CROMPathPoint_t; CROMPathPoint */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[15];
        unsigned char name_length;
        char name[13];
    } record_0077;
    struct { /* ROM0xF7101: CROMPath_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0078;
    struct { /* ROM0xF7119: m_Type */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[6];
    } record_0079;
    struct { /* ROM0xF712D: m_nPoints */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0080;
    struct { /* ROM0xF7144: CROMPath_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } record_0081;
    struct { /* ROM0xF7163: CROMPath_t; CROMPath */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[8];
    } record_0082;
    struct { /* ROM0xF7186: PathModes */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0083;
    struct { /* ROM0xF719D: PATH_NONE_MODE */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[14];
    } record_0084;
    struct { /* ROM0xF71B9: PATH_FORWARD_MODE */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0085;
    struct { /* ROM0xF71D8: PATH_FORWARD_USE_PATHFIND_MODE */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[30];
    } record_0086;
    struct { /* ROM0xF7204: PATH_REVERSE_MODE */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0087;
    struct { /* ROM0xF7223: PATH_REVERSE_USE_PATHFIND_MODE */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[30];
    } record_0088;
    struct { /* ROM0xF724F: PATH_MODES */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0089;
    struct { /* ROM0xF7267: PathModes; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[9];
        unsigned char name_length;
        char name[4];
    } record_0090;
    struct { /* ROM0xF7285: CPathTrack */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0091;
    struct { /* ROM0xF729D: m_Mode */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[6];
    } record_0092;
    struct { /* ROM0xF72B1: m_nPath */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[7];
    } record_0093;
    struct { /* ROM0xF72C6: m_nCurrentPoint */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[15];
    } record_0094;
    struct { /* ROM0xF72E3: m_nLastPoint */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[12];
    } record_0095;
    struct { /* ROM0xF72FD: m_Pad */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[5];
    } record_0096;
    struct { /* ROM0xF7310: CPathTrack; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[4];
    } record_0097;
    struct { /* ROM0xF732F: CPathTrack; CPathTrack */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[10];
    } record_0098;
    struct { /* ROM0xF7354: CList_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[7];
    } record_0099;
    struct { /* ROM0xF7369: pHead */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[5];
    } record_0100;
    struct { /* ROM0xF737C: pTail */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[5];
    } record_0101;
    struct { /* ROM0xF738F: LastOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0102;
    struct { /* ROM0xF73A7: NextOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0103;
    struct { /* ROM0xF73BF: Size */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[4];
    } record_0104;
    struct { /* ROM0xF73D1: CList_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[4];
    } record_0105;
    struct { /* ROM0xF73ED: CList_t; CList */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[5];
    } record_0106;
    struct { /* ROM0xF740A: CLoopingSoundData_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[19];
    } record_0107;
    struct { /* ROM0xF742B: CLoopingSoundData_t; m_pPrev */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[7];
    } record_0108;
    struct { /* ROM0xF7456: CLoopingSoundData_t; m_pNext */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[7];
    } record_0109;
    struct { /* ROM0xF7481: m_SoundHandle */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0110;
    struct { /* ROM0xF749C: m_SoundType */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0111;
    struct { /* ROM0xF74B5: CVector3_t; m_vSoundPos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[11];
    } record_0112;
    struct { /* ROM0xF74DB: CVector3_t; m_vSoundPosPtr */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[10];
        unsigned char name_length;
        char name[14];
    } record_0113;
    struct { /* ROM0xF7504: CLoopingSoundData_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } record_0114;
    struct { /* ROM0xF752C: CLoopingSoundData_t; CLoopingSoundData */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[17];
    } record_0115;
    struct { /* ROM0xF7561: CLoopingSoundPool_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[19];
    } record_0116;
    struct { /* ROM0xF7582: CList_t; m_LoopingSoundDataFreeList */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[26];
    } record_0117;
    struct { /* ROM0xF75B4: CList_t; m_LoopingSoundDataActiveList */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[7];
        unsigned char name_length;
        char name[28];
    } record_0118;
    struct { /* ROM0xF75E8: m_Paused */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[8];
    } record_0119;
    struct { /* ROM0xF75FE: CLoopingSoundPool_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[4];
    } record_0120;
    struct { /* ROM0xF7626: CLoopingSoundPool_t; CLoopingSoundPool */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[19];
        unsigned char name_length;
        char name[17];
    } record_0121;
    struct { /* ROM0xF765B: CStaticIntelligence_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0122;
    struct { /* ROM0xF767E: m_dwFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0123;
    struct { /* ROM0xF7695: m_CollisionRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0124;
    struct { /* ROM0xF76B4: m_CollisionHeight */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0125;
    struct { /* ROM0xF76D3: m_CollisionHeightOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0126;
    struct { /* ROM0xF76F8: m_LODDistSquared */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0127;
    struct { /* ROM0xF7716: CStaticIntelligence_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[4];
    } record_0128;
    struct { /* ROM0xF7740: CStaticIntelligence_t; CStaticIntelligence */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[21];
        unsigned char name_length;
        char name[19];
    } record_0129;
    struct { /* ROM0xF7779: CCommonEnemyIntelligence_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[26];
    } record_0130;
    struct { /* ROM0xF77A1: m_dwFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0131;
    struct { /* ROM0xF77B8: m_Health */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[8];
    } record_0132;
    struct { /* ROM0xF77CE: m_StartAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0133;
    struct { /* ROM0xF77E7: m_dwDeathFlag1Pickups */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0134;
    struct { /* ROM0xF780A: m_dwDeathFlag2Pickups */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0135;
    struct { /* ROM0xF782D: m_CollisionRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0136;
    struct { /* ROM0xF784C: m_CollisionWallRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0137;
    struct { /* ROM0xF786F: m_CollisionHeight */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0138;
    struct { /* ROM0xF788E: m_CollisionDeadHeight */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0139;
    struct { /* ROM0xF78B1: m_CollisionHeightOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0140;
    struct { /* ROM0xF78D6: m_LeashRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0141;
    struct { /* ROM0xF78F1: m_Aggression */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[12];
    } record_0142;
    struct { /* ROM0xF790B: m_TranqHealth */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0143;
    struct { /* ROM0xF7926: m_StartSound */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[12];
    } record_0144;
    struct { /* ROM0xF7940: m_PainSound */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0145;
    struct { /* ROM0xF7959: m_HeadTextureIndex */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0146;
    struct { /* ROM0xF7979: m_BodyTextureIndex */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0147;
    struct { /* ROM0xF7999: m_LeftArmTextureIndex */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0148;
    struct { /* ROM0xF79BC: m_RightArmTextureIndex */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[22];
    } record_0149;
    struct { /* ROM0xF79E0: m_LeftLegTextureIndex */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0150;
    struct { /* ROM0xF7A03: m_RightLegTextureIndex */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[22];
    } record_0151;
    struct { /* ROM0xF7A27: CCommonEnemyIntelligence_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[26];
        unsigned char name_length;
        char name[4];
    } record_0152;
    struct { /* ROM0xF7A56: CCommonEnemyIntelligence_t; CCommonEnemyIntelligence */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[26];
        unsigned char name_length;
        char name[24];
    } record_0153;
    struct { /* ROM0xF7A99: CWinEnemyIntelligence_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0154;
    struct { /* ROM0xF7ABE: CCommonEnemyIntelligence_t; m_Common */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[26];
        unsigned char name_length;
        char name[8];
    } record_0155;
    struct { /* ROM0xF7AF1: m_dwFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0156;
    struct { /* ROM0xF7B08: m_AttackCombatRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0157;
    struct { /* ROM0xF7B2A: m_AttackLeapRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0158;
    struct { /* ROM0xF7B4A: m_AttackDartRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0159;
    struct { /* ROM0xF7B6A: m_AttackProjectileRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0160;
    struct { /* ROM0xF7B90: m_AttackWeaponRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0161;
    struct { /* ROM0xF7BB2: m_GroundBehavior */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0162;
    struct { /* ROM0xF7BD0: m_AirBehavior */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0163;
    struct { /* ROM0xF7BEB: m_UnderwaterBehavior */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0164;
    struct { /* ROM0xF7C0D: m_ExtremeDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[19];
    } record_0165;
    struct { /* ROM0xF7C2E: m_PfmDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[15];
    } record_0166;
    struct { /* ROM0xF7C4B: m_HeadBlownOffDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0167;
    struct { /* ROM0xF7C71: m_LeftArmBlownOffDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[27];
    } record_0168;
    struct { /* ROM0xF7C9A: m_RightArmBlownOffDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[28];
    } record_0169;
    struct { /* ROM0xF7CC4: m_BodyHoleDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0170;
    struct { /* ROM0xF7CE6: m_ExtremeDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0171;
    struct { /* ROM0xF7D06: m_PfmDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[14];
    } record_0172;
    struct { /* ROM0xF7D22: m_HeadBlownOffDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0173;
    struct { /* ROM0xF7D47: m_LeftArmBlownOffDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[26];
    } record_0174;
    struct { /* ROM0xF7D6F: m_RightArmBlownOffDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[27];
    } record_0175;
    struct { /* ROM0xF7D98: m_BodyHoleDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[19];
    } record_0176;
    struct { /* ROM0xF7DB9: m_wIdleAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0177;
    struct { /* ROM0xF7DD7: m_wMoveAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0178;
    struct { /* ROM0xF7DF5: m_wPatroleAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[19];
    } record_0179;
    struct { /* ROM0xF7E16: m_wEvadeAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0180;
    struct { /* ROM0xF7E35: m_wCombatAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0181;
    struct { /* ROM0xF7E55: m_wLeapAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0182;
    struct { /* ROM0xF7E73: m_wDartAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0183;
    struct { /* ROM0xF7E91: m_wProjectileAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[22];
    } record_0184;
    struct { /* ROM0xF7EB5: m_wWeaponAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0185;
    struct { /* ROM0xF7ED5: m_wComboEndAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0186;
    struct { /* ROM0xF7EF7: m_wNormalDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0187;
    struct { /* ROM0xF7F1C: m_wMovingDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0188;
    struct { /* ROM0xF7F41: m_wViolentDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0189;
    struct { /* ROM0xF7F67: m_wExplosiveDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[26];
    } record_0190;
    struct { /* ROM0xF7F8F: m_wExtremeDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0191;
    struct { /* ROM0xF7FB5: m_wAlertAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0192;
    struct { /* ROM0xF7FD4: m_wTakeCoverAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0193;
    struct { /* ROM0xF7FF7: m_wLeftArmWoundAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0194;
    struct { /* ROM0xF801D: m_wRightArmWoundAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[25];
    } record_0195;
    struct { /* ROM0xF8044: m_wFleeAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0196;
    struct { /* ROM0xF8062: CWinEnemyIntelligence_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[23];
        unsigned char name_length;
        char name[4];
    } record_0197;
    struct { /* ROM0xF808E: CWinEnemyIntelligence_t; CWinEnemyIntelligence */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[23];
        unsigned char name_length;
        char name[21];
    } record_0198;
    struct { /* ROM0xF80CB: CEnemyIntelligence_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0199;
    struct { /* ROM0xF80ED: CCommonEnemyIntelligence_t; m_Common */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[26];
        unsigned char name_length;
        char name[8];
    } record_0200;
    struct { /* ROM0xF8120: m_dwFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0201;
    struct { /* ROM0xF8137: m_AttackCombatRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0202;
    struct { /* ROM0xF8159: m_AttackLeapRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0203;
    struct { /* ROM0xF8179: m_AttackDartRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0204;
    struct { /* ROM0xF8199: m_AttackProjectileRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0205;
    struct { /* ROM0xF81BF: m_AttackWeaponRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0206;
    struct { /* ROM0xF81E1: m_GroundBehavior */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0207;
    struct { /* ROM0xF81FF: m_AirBehavior */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0208;
    struct { /* ROM0xF821A: m_UnderwaterBehavior */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0209;
    struct { /* ROM0xF823C: m_ExtremeDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[19];
    } record_0210;
    struct { /* ROM0xF825D: m_PfmDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[15];
    } record_0211;
    struct { /* ROM0xF827A: m_HeadBlownOffDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0212;
    struct { /* ROM0xF82A0: m_LeftArmBlownOffDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[27];
    } record_0213;
    struct { /* ROM0xF82C9: m_RightArmBlownOffDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[28];
    } record_0214;
    struct { /* ROM0xF82F3: m_BodyHoleDeathModel */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0215;
    struct { /* ROM0xF8315: pad0 */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[4];
    } record_0216;
    struct { /* ROM0xF8327: m_ExtremeDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0217;
    struct { /* ROM0xF8347: m_PfmDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[14];
    } record_0218;
    struct { /* ROM0xF8363: m_HeadBlownOffDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0219;
    struct { /* ROM0xF8388: m_LeftArmBlownOffDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[26];
    } record_0220;
    struct { /* ROM0xF83B0: m_RightArmBlownOffDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[27];
    } record_0221;
    struct { /* ROM0xF83D9: m_BodyHoleDeathAnim */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[19];
    } record_0222;
    struct { /* ROM0xF83FA: m_wIdleAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0223;
    struct { /* ROM0xF8418: m_wMoveAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0224;
    struct { /* ROM0xF8436: m_wPatroleAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[19];
    } record_0225;
    struct { /* ROM0xF8457: m_wEvadeAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0226;
    struct { /* ROM0xF8476: m_wCombatAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0227;
    struct { /* ROM0xF8496: m_wLeapAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0228;
    struct { /* ROM0xF84B4: m_wDartAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0229;
    struct { /* ROM0xF84D2: m_wProjectileAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[22];
    } record_0230;
    struct { /* ROM0xF84F6: m_wWeaponAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0231;
    struct { /* ROM0xF8516: m_wComboEndAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[20];
    } record_0232;
    struct { /* ROM0xF8538: m_wNormalDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0233;
    struct { /* ROM0xF855D: m_wMovingDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0234;
    struct { /* ROM0xF8582: m_wViolentDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0235;
    struct { /* ROM0xF85A8: m_wExplosiveDeathAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[26];
    } record_0236;
    struct { /* ROM0xF85D0: m_wAlertAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0237;
    struct { /* ROM0xF85EF: m_wTakeCoverAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[21];
    } record_0238;
    struct { /* ROM0xF8612: m_wLeftArmWoundAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[24];
    } record_0239;
    struct { /* ROM0xF8638: m_wRightArmWoundAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[25];
    } record_0240;
    struct { /* ROM0xF865F: m_wFleeAnimFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0241;
    struct { /* ROM0xF867D: CEnemyIntelligence_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[4];
    } record_0242;
    struct { /* ROM0xF86A6: CEnemyIntelligence_t; CEnemyIntelligence */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[20];
        unsigned char name_length;
        char name[18];
    } record_0243;
    struct { /* ROM0xF86DD: CCommonPlatformIntelligence_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[29];
    } record_0244;
    struct { /* ROM0xF8708: m_dwFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0245;
    struct { /* ROM0xF871F: m_CollisionType */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[15];
    } record_0246;
    struct { /* ROM0xF873C: pad */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[3];
    } record_0247;
    struct { /* ROM0xF874D: m_CollisionRadius */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0248;
    struct { /* ROM0xF876C: m_CollisionWidth */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0249;
    struct { /* ROM0xF878A: m_CollisionHeight */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0250;
    struct { /* ROM0xF87A9: m_CollisionLength */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0251;
    struct { /* ROM0xF87C8: m_CollisionXOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0252;
    struct { /* ROM0xF87E8: m_CollisionYOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0253;
    struct { /* ROM0xF8808: m_CollisionZOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[18];
    } record_0254;
    struct { /* ROM0xF8828: CCommonPlatformIntelligence_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[29];
        unsigned char name_length;
        char name[4];
    } record_0255;
    struct { /* ROM0xF885A: CCommonPlatformIntelligence_t; CCommonPlatformIntelligence */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[29];
        unsigned char name_length;
        char name[27];
    } record_0256;
    struct { /* ROM0xF88A3: CWinPlatformIntelligence_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[26];
    } record_0257;
    struct { /* ROM0xF88CB: CCommonPlatformIntelligence_t; m_Common */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[29];
        unsigned char name_length;
        char name[8];
    } record_0258;
    struct { /* ROM0xF8901: m_dwFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0259;
    struct { /* ROM0xF8918: m_Type */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[6];
    } record_0260;
    struct { /* ROM0xF892C: m_MotionStyle */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0261;
    struct { /* ROM0xF8947: m_RotationType */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[14];
    } record_0262;
    struct { /* ROM0xF8963: m_MotionType */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[12];
    } record_0263;
    struct { /* ROM0xF897D: m_VertDist */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0264;
    struct { /* ROM0xF8995: m_HorizDist */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0265;
    struct { /* ROM0xF89AE: m_HorizDir */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0266;
    struct { /* ROM0xF89C6: m_MoveTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0267;
    struct { /* ROM0xF89DE: m_Rotation */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0268;
    struct { /* ROM0xF89F6: m_StartOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0269;
    struct { /* ROM0xF8A11: m_HoverAmplitude */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0270;
    struct { /* ROM0xF8A2F: m_HoverPeriod */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0271;
    struct { /* ROM0xF8A4A: m_DelayTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0272;
    struct { /* ROM0xF8A63: m_GoDelayTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0273;
    struct { /* ROM0xF8A7E: m_ReturnDelayTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0274;
    struct { /* ROM0xF8A9D: m_SpecialDelay */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[14];
    } record_0275;
    struct { /* ROM0xF8AB9: m_SpecialSinkDist */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0276;
    struct { /* ROM0xF8AD8: m_SpecialSinkTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0277;
    struct { /* ROM0xF8AF7: CWinPlatformIntelligence_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[26];
        unsigned char name_length;
        char name[4];
    } record_0278;
    struct { /* ROM0xF8B26: CWinPlatformIntelligence_t; CWinPlatformIntelligence */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[26];
        unsigned char name_length;
        char name[24];
    } record_0279;
    struct { /* ROM0xF8B69: CPlatformIntelligence_t */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[23];
    } record_0280;
    struct { /* ROM0xF8B8E: CCommonPlatformIntelligence_t; m_Common */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[29];
        unsigned char name_length;
        char name[8];
    } record_0281;
    struct { /* ROM0xF8BC4: m_dwFlags */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[9];
    } record_0282;
    struct { /* ROM0xF8BDB: m_Type */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[6];
    } record_0283;
    struct { /* ROM0xF8BEF: m_MotionStyle */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0284;
    struct { /* ROM0xF8C0A: m_RotationType */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[14];
    } record_0285;
    struct { /* ROM0xF8C26: pad0 */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[4];
    } record_0286;
    struct { /* ROM0xF8C38: m_VertDist */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0287;
    struct { /* ROM0xF8C50: m_HorizDist */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[11];
    } record_0288;
    struct { /* ROM0xF8C69: m_HorizDir */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0289;
    struct { /* ROM0xF8C81: m_MoveTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0290;
    struct { /* ROM0xF8C99: m_Rotation */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[10];
    } record_0291;
    struct { /* ROM0xF8CB1: m_StartOffset */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0292;
    struct { /* ROM0xF8CCC: m_HoverAmplitude */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[16];
    } record_0293;
    struct { /* ROM0xF8CEA: m_HoverPeriod */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0294;
    struct { /* ROM0xF8D05: m_GoDelayTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[13];
    } record_0295;
    struct { /* ROM0xF8D20: m_ReturnDelayTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0296;
    struct { /* ROM0xF8D3F: m_SpecialDelay */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[14];
    } record_0297;
    struct { /* ROM0xF8D5B: m_SpecialSinkDist */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0298;
    struct { /* ROM0xF8D7A: m_SpecialSinkTime */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        unsigned char name_length;
        char name[17];
    } record_0299;
    struct { /* ROM0xF8D99: CPlatformIntelligence_t; .eos */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[23];
        unsigned char name_length;
        char name[4];
    } record_0300;
    struct { /* ROM0xF8DC5: CPlatformIntelligence_t; CPlatformIntelligence */
        PsyqLE32 value;
        unsigned char kind;
        PsyqLE16 storage_class;
        PsyqLE16 coff_type;
        PsyqLE32 byte_size;
        PsyqLE16 dimension_count;
        unsigned char tag_length;
        char tag[23];
        unsigned char name_length;
        char name[21];
    } record_0301;
};
const struct RageWarsDebugContinuation ragewars_debug_continuation_us_rev1 = {
    "dler",
    { /* .131fake */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x14U), 8, ".131fake"
    },
    { /* magic */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 5, "magic"
    },
    { /* len */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 3, "len"
    },
    { /* base */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x1f), PSYQ_LE32(0x0U), 4, "base"
    },
    { /* startCount */
        PSYQ_LE32(0xcU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x5), PSYQ_LE32(0x0U), 10, "startCount"
    },
    { /* writeOffset */
        PSYQ_LE32(0x10U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x5), PSYQ_LE32(0x0U), 11, "writeOffset"
    },
    { /* .131fake; .eos */
        PSYQ_LE32(0x14U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x14U), PSYQ_LE16(0x0), 8, ".131fake", 4, ".eos"
    },
    { /* .131fake; OSLog */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x14U), PSYQ_LE16(0x0), 8, ".131fake", 5, "OSLog"
    },
    { /* .132fake */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), 8, ".132fake"
    },
    { /* magic */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 5, "magic"
    },
    { /* timeStamp */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 9, "timeStamp"
    },
    { /* argCount */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 8, "argCount"
    },
    { /* eventID */
        PSYQ_LE32(0xaU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 7, "eventID"
    },
    { /* .132fake; .eos */
        PSYQ_LE32(0xcU), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 8, ".132fake", 4, ".eos"
    },
    { /* .132fake; OSLogItem */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 8, ".132fake", 9, "OSLogItem"
    },
    { /* .133fake */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x8U), 8, ".133fake"
    },
    { /* magic */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 5, "magic"
    },
    { /* version */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 7, "version"
    },
    { /* .133fake; .eos */
        PSYQ_LE32(0x8U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x8U), PSYQ_LE16(0x0), 8, ".133fake", 4, ".eos"
    },
    { /* .133fake; OSLogFileHdr */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x8U), PSYQ_LE16(0x0), 8, ".133fake", 12, "OSLogFileHdr"
    },
    { /* CROMLookupTable_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x20U), 17, "CROMLookupTable_t"
    },
    { /* seqctjSegmentROMStartAddr */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 25, "seqctjSegmentROMStartAddr"
    },
    { /* seqctjSegmentROMEndAddr */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 23, "seqctjSegmentROMEndAddr"
    },
    { /* seqtbjSegmentROMStartAddr */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 25, "seqtbjSegmentROMStartAddr"
    },
    { /* seqtbjSegmentROMEndAddr */
        PSYQ_LE32(0xcU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 23, "seqtbjSegmentROMEndAddr"
    },
    { /* sfxfsdSegmentROMStartAddr */
        PSYQ_LE32(0x10U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 25, "sfxfsdSegmentROMStartAddr"
    },
    { /* sfxfsdSegmentROMEndAddr */
        PSYQ_LE32(0x14U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 23, "sfxfsdSegmentROMEndAddr"
    },
    { /* _staticSegmentRomStartAddr */
        PSYQ_LE32(0x18U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 26, "_staticSegmentRomStartAddr"
    },
    { /* _staticSegmentRomEndAddr */
        PSYQ_LE32(0x1cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 24, "_staticSegmentRomEndAddr"
    },
    { /* CROMLookupTable_t; .eos */
        PSYQ_LE32(0x20U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x20U), PSYQ_LE16(0x0), 17, "CROMLookupTable_t", 4, ".eos"
    },
    { /* CROMLookupTable_t; CROMLookupTable */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x20U), PSYQ_LE16(0x0), 17, "CROMLookupTable_t", 15, "CROMLookupTable"
    },
    { /* CROMFacet_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), 11, "CROMFacet_t"
    },
    { /* m_Vertices */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3f), PSYQ_LE32(0xcU), PSYQ_LE16(0x1), PSYQ_LE32(0x3U), 0, 10, "m_Vertices"
    },
    { /* CROMFacet_t; .eos */
        PSYQ_LE32(0xcU), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 11, "CROMFacet_t", 4, ".eos"
    },
    { /* CROMFacet_t; CROMFacet */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 11, "CROMFacet_t", 9, "CROMFacet"
    },
    { /* CVector3_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), 10, "CVector3_t"
    },
    { /* x */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 1, "x"
    },
    { /* y */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 1, "y"
    },
    { /* z */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 1, "z"
    },
    { /* CVector3_t; .eos */
        PSYQ_LE32(0xcU), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 10, "CVector3_t", 4, ".eos"
    },
    { /* CVector3_t; CVector3 */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 10, "CVector3_t", 8, "CVector3"
    },
    { /* MtxI_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x40U), 6, "MtxI_t"
    },
    { /* i */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf3), PSYQ_LE32(0x20U), PSYQ_LE16(0x2), PSYQ_LE32(0x4U), PSYQ_LE32(0x4U), 0, 1, "i"
    },
    { /* f */
        PSYQ_LE32(0x20U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf3), PSYQ_LE32(0x20U), PSYQ_LE16(0x2), PSYQ_LE32(0x4U), PSYQ_LE32(0x4U), 0, 1, "f"
    },
    { /* MtxI_t; .eos */
        PSYQ_LE32(0x40U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x40U), PSYQ_LE16(0x0), 6, "MtxI_t", 4, ".eos"
    },
    { /* MtxI_t; MtxI */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x40U), PSYQ_LE16(0x0), 6, "MtxI_t", 4, "MtxI"
    },
    { /* CMtxF */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0xf6), PSYQ_LE32(0x40U), PSYQ_LE16(0x2), PSYQ_LE32(0x4U), PSYQ_LE32(0x4U), 0, 5, "CMtxF"
    },
    { /* CQuatern_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x10U), 10, "CQuatern_t"
    },
    { /* x */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 1, "x"
    },
    { /* y */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 1, "y"
    },
    { /* z */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 1, "z"
    },
    { /* t */
        PSYQ_LE32(0xcU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 1, "t"
    },
    { /* CQuatern_t; .eos */
        PSYQ_LE32(0x10U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x10U), PSYQ_LE16(0x0), 10, "CQuatern_t", 4, ".eos"
    },
    { /* CQuatern_t; CQuatern */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x10U), PSYQ_LE16(0x0), 10, "CQuatern_t", 8, "CQuatern"
    },
    { /* CLine_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x3cU), 7, "CLine_t"
    },
    { /* CVector3_t; m_vPt */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x38), PSYQ_LE32(0x18U), PSYQ_LE16(0x1), PSYQ_LE32(0x2U), 10, "CVector3_t", 5, "m_vPt"
    },
    { /* CVector3_t; m_vDelta */
        PSYQ_LE32(0x18U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 10, "CVector3_t", 8, "m_vDelta"
    },
    { /* CVector3_t; m_vDir */
        PSYQ_LE32(0x24U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 10, "CVector3_t", 6, "m_vDir"
    },
    { /* CVector3_t; m_vNormal */
        PSYQ_LE32(0x30U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 10, "CVector3_t", 9, "m_vNormal"
    },
    { /* CLine_t; .eos */
        PSYQ_LE32(0x3cU), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x3cU), PSYQ_LE16(0x0), 7, "CLine_t", 4, ".eos"
    },
    { /* CLine_t; CLine */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x3cU), PSYQ_LE16(0x0), 7, "CLine_t", 5, "CLine"
    },
    { /* CROMPathPoint_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x38U), 15, "CROMPathPoint_t"
    },
    { /* CVector3_t; m_vPos */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 10, "CVector3_t", 6, "m_vPos"
    },
    { /* CGameRegion_t; m_pRegion */
        PSYQ_LE32(0xcU), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x18), PSYQ_LE32(0x0U), PSYQ_LE16(0x0), 13, "CGameRegion_t", 9, "m_pRegion"
    },
    { /* m_RotY */
        PSYQ_LE32(0x10U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 6, "m_RotY"
    },
    { /* m_wFlags */
        PSYQ_LE32(0x14U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 8, "m_wFlags"
    },
    { /* m_wIdleAnimFlags */
        PSYQ_LE32(0x16U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wIdleAnimFlags"
    },
    { /* m_wInteractiveIdleAnimFlags */
        PSYQ_LE32(0x18U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 27, "m_wInteractiveIdleAnimFlags"
    },
    { /* pad */
        PSYQ_LE32(0x1aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 3, "pad"
    },
    { /* m_BlendRadius */
        PSYQ_LE32(0x1cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 13, "m_BlendRadius"
    },
    { /* m_BlendSpeed */
        PSYQ_LE32(0x20U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 12, "m_BlendSpeed"
    },
    { /* m_PlatformSpeed */
        PSYQ_LE32(0x24U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 15, "m_PlatformSpeed"
    },
    { /* m_RotX */
        PSYQ_LE32(0x28U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 6, "m_RotX"
    },
    { /* m_RotZ */
        PSYQ_LE32(0x2cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 6, "m_RotZ"
    },
    { /* m_StopSpeed */
        PSYQ_LE32(0x30U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 11, "m_StopSpeed"
    },
    { /* m_StopTime */
        PSYQ_LE32(0x34U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_StopTime"
    },
    { /* CROMPathPoint_t; .eos */
        PSYQ_LE32(0x38U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x38U), PSYQ_LE16(0x0), 15, "CROMPathPoint_t", 4, ".eos"
    },
    { /* CROMPathPoint_t; CROMPathPoint */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x38U), PSYQ_LE16(0x0), 15, "CROMPathPoint_t", 13, "CROMPathPoint"
    },
    { /* CROMPath_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x4U), 10, "CROMPath_t"
    },
    { /* m_Type */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 6, "m_Type"
    },
    { /* m_nPoints */
        PSYQ_LE32(0x2U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 9, "m_nPoints"
    },
    { /* CROMPath_t; .eos */
        PSYQ_LE32(0x4U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x4U), PSYQ_LE16(0x0), 10, "CROMPath_t", 4, ".eos"
    },
    { /* CROMPath_t; CROMPath */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x4U), PSYQ_LE16(0x0), 10, "CROMPath_t", 8, "CROMPath"
    },
    { /* PathModes */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_ENTAG), PSYQ_LE16(0xa), PSYQ_LE32(0x4U), 9, "PathModes"
    },
    { /* PATH_NONE_MODE */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOE), PSYQ_LE16(0xb), PSYQ_LE32(0x0U), 14, "PATH_NONE_MODE"
    },
    { /* PATH_FORWARD_MODE */
        PSYQ_LE32(0x1U), 148, PSYQ_LE16(PSYQ_MOE), PSYQ_LE16(0xb), PSYQ_LE32(0x0U), 17, "PATH_FORWARD_MODE"
    },
    { /* PATH_FORWARD_USE_PATHFIND_MODE */
        PSYQ_LE32(0x2U), 148, PSYQ_LE16(PSYQ_MOE), PSYQ_LE16(0xb), PSYQ_LE32(0x0U), 30, "PATH_FORWARD_USE_PATHFIND_MODE"
    },
    { /* PATH_REVERSE_MODE */
        PSYQ_LE32(0x3U), 148, PSYQ_LE16(PSYQ_MOE), PSYQ_LE16(0xb), PSYQ_LE32(0x0U), 17, "PATH_REVERSE_MODE"
    },
    { /* PATH_REVERSE_USE_PATHFIND_MODE */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOE), PSYQ_LE16(0xb), PSYQ_LE32(0x0U), 30, "PATH_REVERSE_USE_PATHFIND_MODE"
    },
    { /* PATH_MODES */
        PSYQ_LE32(0x5U), 148, PSYQ_LE16(PSYQ_MOE), PSYQ_LE16(0xb), PSYQ_LE32(0x0U), 10, "PATH_MODES"
    },
    { /* PathModes; .eos */
        PSYQ_LE32(0x4U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x4U), PSYQ_LE16(0x0), 9, "PathModes", 4, ".eos"
    },
    { /* CPathTrack */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x8U), 10, "CPathTrack"
    },
    { /* m_Mode */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 6, "m_Mode"
    },
    { /* m_nPath */
        PSYQ_LE32(0x1U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 7, "m_nPath"
    },
    { /* m_nCurrentPoint */
        PSYQ_LE32(0x2U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 15, "m_nCurrentPoint"
    },
    { /* m_nLastPoint */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 12, "m_nLastPoint"
    },
    { /* m_Pad */
        PSYQ_LE32(0x6U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 5, "m_Pad"
    },
    { /* CPathTrack; .eos */
        PSYQ_LE32(0x8U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x8U), PSYQ_LE16(0x0), 10, "CPathTrack", 4, ".eos"
    },
    { /* CPathTrack; CPathTrack */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x8U), PSYQ_LE16(0x0), 10, "CPathTrack", 10, "CPathTrack"
    },
    { /* CList_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x14U), 7, "CList_t"
    },
    { /* pHead */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x11), PSYQ_LE32(0x0U), 5, "pHead"
    },
    { /* pTail */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x11), PSYQ_LE32(0x0U), 5, "pTail"
    },
    { /* LastOffset */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 10, "LastOffset"
    },
    { /* NextOffset */
        PSYQ_LE32(0xcU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 10, "NextOffset"
    },
    { /* Size */
        PSYQ_LE32(0x10U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 4, "Size"
    },
    { /* CList_t; .eos */
        PSYQ_LE32(0x14U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x14U), PSYQ_LE16(0x0), 7, "CList_t", 4, ".eos"
    },
    { /* CList_t; CList */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x14U), PSYQ_LE16(0x0), 7, "CList_t", 5, "CList"
    },
    { /* CLoopingSoundData_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x20U), 19, "CLoopingSoundData_t"
    },
    { /* CLoopingSoundData_t; m_pPrev */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x18), PSYQ_LE32(0x20U), PSYQ_LE16(0x0), 19, "CLoopingSoundData_t", 7, "m_pPrev"
    },
    { /* CLoopingSoundData_t; m_pNext */
        PSYQ_LE32(0x4U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x18), PSYQ_LE32(0x20U), PSYQ_LE16(0x0), 19, "CLoopingSoundData_t", 7, "m_pNext"
    },
    { /* m_SoundHandle */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x5), PSYQ_LE32(0x0U), 13, "m_SoundHandle"
    },
    { /* m_SoundType */
        PSYQ_LE32(0xcU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x5), PSYQ_LE32(0x0U), 11, "m_SoundType"
    },
    { /* CVector3_t; m_vSoundPos */
        PSYQ_LE32(0x10U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 10, "CVector3_t", 11, "m_vSoundPos"
    },
    { /* CVector3_t; m_vSoundPosPtr */
        PSYQ_LE32(0x1cU), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x18), PSYQ_LE32(0xcU), PSYQ_LE16(0x0), 10, "CVector3_t", 14, "m_vSoundPosPtr"
    },
    { /* CLoopingSoundData_t; .eos */
        PSYQ_LE32(0x20U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x20U), PSYQ_LE16(0x0), 19, "CLoopingSoundData_t", 4, ".eos"
    },
    { /* CLoopingSoundData_t; CLoopingSoundData */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x20U), PSYQ_LE16(0x0), 19, "CLoopingSoundData_t", 17, "CLoopingSoundData"
    },
    { /* CLoopingSoundPool_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x2cU), 19, "CLoopingSoundPool_t"
    },
    { /* CList_t; m_LoopingSoundDataFreeList */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0x14U), PSYQ_LE16(0x0), 7, "CList_t", 26, "m_LoopingSoundDataFreeList"
    },
    { /* CList_t; m_LoopingSoundDataActiveList */
        PSYQ_LE32(0x14U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0x14U), PSYQ_LE16(0x0), 7, "CList_t", 28, "m_LoopingSoundDataActiveList"
    },
    { /* m_Paused */
        PSYQ_LE32(0x28U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x4), PSYQ_LE32(0x0U), 8, "m_Paused"
    },
    { /* CLoopingSoundPool_t; .eos */
        PSYQ_LE32(0x2cU), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x2cU), PSYQ_LE16(0x0), 19, "CLoopingSoundPool_t", 4, ".eos"
    },
    { /* CLoopingSoundPool_t; CLoopingSoundPool */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x2cU), PSYQ_LE16(0x0), 19, "CLoopingSoundPool_t", 17, "CLoopingSoundPool"
    },
    { /* CStaticIntelligence_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x14U), 21, "CStaticIntelligence_t"
    },
    { /* m_dwFlags */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 9, "m_dwFlags"
    },
    { /* m_CollisionRadius */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_CollisionRadius"
    },
    { /* m_CollisionHeight */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_CollisionHeight"
    },
    { /* m_CollisionHeightOffset */
        PSYQ_LE32(0xcU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 23, "m_CollisionHeightOffset"
    },
    { /* m_LODDistSquared */
        PSYQ_LE32(0x10U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 16, "m_LODDistSquared"
    },
    { /* CStaticIntelligence_t; .eos */
        PSYQ_LE32(0x14U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x14U), PSYQ_LE16(0x0), 21, "CStaticIntelligence_t", 4, ".eos"
    },
    { /* CStaticIntelligence_t; CStaticIntelligence */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x14U), PSYQ_LE16(0x0), 21, "CStaticIntelligence_t", 19, "CStaticIntelligence"
    },
    { /* CCommonEnemyIntelligence_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x38U), 26, "CCommonEnemyIntelligence_t"
    },
    { /* m_dwFlags */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 9, "m_dwFlags"
    },
    { /* m_Health */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 8, "m_Health"
    },
    { /* m_StartAnim */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 11, "m_StartAnim"
    },
    { /* m_dwDeathFlag1Pickups */
        PSYQ_LE32(0xcU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 21, "m_dwDeathFlag1Pickups"
    },
    { /* m_dwDeathFlag2Pickups */
        PSYQ_LE32(0x10U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 21, "m_dwDeathFlag2Pickups"
    },
    { /* m_CollisionRadius */
        PSYQ_LE32(0x14U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_CollisionRadius"
    },
    { /* m_CollisionWallRadius */
        PSYQ_LE32(0x18U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 21, "m_CollisionWallRadius"
    },
    { /* m_CollisionHeight */
        PSYQ_LE32(0x1cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_CollisionHeight"
    },
    { /* m_CollisionDeadHeight */
        PSYQ_LE32(0x20U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 21, "m_CollisionDeadHeight"
    },
    { /* m_CollisionHeightOffset */
        PSYQ_LE32(0x24U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 23, "m_CollisionHeightOffset"
    },
    { /* m_LeashRadius */
        PSYQ_LE32(0x28U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 13, "m_LeashRadius"
    },
    { /* m_Aggression */
        PSYQ_LE32(0x2cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 12, "m_Aggression"
    },
    { /* m_TranqHealth */
        PSYQ_LE32(0x2dU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 13, "m_TranqHealth"
    },
    { /* m_StartSound */
        PSYQ_LE32(0x2eU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 12, "m_StartSound"
    },
    { /* m_PainSound */
        PSYQ_LE32(0x30U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 11, "m_PainSound"
    },
    { /* m_HeadTextureIndex */
        PSYQ_LE32(0x32U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 18, "m_HeadTextureIndex"
    },
    { /* m_BodyTextureIndex */
        PSYQ_LE32(0x33U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 18, "m_BodyTextureIndex"
    },
    { /* m_LeftArmTextureIndex */
        PSYQ_LE32(0x34U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 21, "m_LeftArmTextureIndex"
    },
    { /* m_RightArmTextureIndex */
        PSYQ_LE32(0x35U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 22, "m_RightArmTextureIndex"
    },
    { /* m_LeftLegTextureIndex */
        PSYQ_LE32(0x36U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 21, "m_LeftLegTextureIndex"
    },
    { /* m_RightLegTextureIndex */
        PSYQ_LE32(0x37U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 22, "m_RightLegTextureIndex"
    },
    { /* CCommonEnemyIntelligence_t; .eos */
        PSYQ_LE32(0x38U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x38U), PSYQ_LE16(0x0), 26, "CCommonEnemyIntelligence_t", 4, ".eos"
    },
    { /* CCommonEnemyIntelligence_t; CCommonEnemyIntelligence */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x38U), PSYQ_LE16(0x0), 26, "CCommonEnemyIntelligence_t", 24, "CCommonEnemyIntelligence"
    },
    { /* CWinEnemyIntelligence_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x90U), 23, "CWinEnemyIntelligence_t"
    },
    { /* CCommonEnemyIntelligence_t; m_Common */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0x38U), PSYQ_LE16(0x0), 26, "CCommonEnemyIntelligence_t", 8, "m_Common"
    },
    { /* m_dwFlags */
        PSYQ_LE32(0x38U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 9, "m_dwFlags"
    },
    { /* m_AttackCombatRadius */
        PSYQ_LE32(0x3cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 20, "m_AttackCombatRadius"
    },
    { /* m_AttackLeapRadius */
        PSYQ_LE32(0x40U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 18, "m_AttackLeapRadius"
    },
    { /* m_AttackDartRadius */
        PSYQ_LE32(0x44U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 18, "m_AttackDartRadius"
    },
    { /* m_AttackProjectileRadius */
        PSYQ_LE32(0x48U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 24, "m_AttackProjectileRadius"
    },
    { /* m_AttackWeaponRadius */
        PSYQ_LE32(0x4cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 20, "m_AttackWeaponRadius"
    },
    { /* m_GroundBehavior */
        PSYQ_LE32(0x50U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 16, "m_GroundBehavior"
    },
    { /* m_AirBehavior */
        PSYQ_LE32(0x51U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 13, "m_AirBehavior"
    },
    { /* m_UnderwaterBehavior */
        PSYQ_LE32(0x52U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 20, "m_UnderwaterBehavior"
    },
    { /* m_ExtremeDeathModel */
        PSYQ_LE32(0x53U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 19, "m_ExtremeDeathModel"
    },
    { /* m_PfmDeathModel */
        PSYQ_LE32(0x54U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 15, "m_PfmDeathModel"
    },
    { /* m_HeadBlownOffDeathModel */
        PSYQ_LE32(0x55U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 24, "m_HeadBlownOffDeathModel"
    },
    { /* m_LeftArmBlownOffDeathModel */
        PSYQ_LE32(0x56U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 27, "m_LeftArmBlownOffDeathModel"
    },
    { /* m_RightArmBlownOffDeathModel */
        PSYQ_LE32(0x57U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 28, "m_RightArmBlownOffDeathModel"
    },
    { /* m_BodyHoleDeathModel */
        PSYQ_LE32(0x58U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 20, "m_BodyHoleDeathModel"
    },
    { /* m_ExtremeDeathAnim */
        PSYQ_LE32(0x5aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 18, "m_ExtremeDeathAnim"
    },
    { /* m_PfmDeathAnim */
        PSYQ_LE32(0x5cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 14, "m_PfmDeathAnim"
    },
    { /* m_HeadBlownOffDeathAnim */
        PSYQ_LE32(0x5eU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 23, "m_HeadBlownOffDeathAnim"
    },
    { /* m_LeftArmBlownOffDeathAnim */
        PSYQ_LE32(0x60U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 26, "m_LeftArmBlownOffDeathAnim"
    },
    { /* m_RightArmBlownOffDeathAnim */
        PSYQ_LE32(0x62U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 27, "m_RightArmBlownOffDeathAnim"
    },
    { /* m_BodyHoleDeathAnim */
        PSYQ_LE32(0x64U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 19, "m_BodyHoleDeathAnim"
    },
    { /* m_wIdleAnimFlags */
        PSYQ_LE32(0x66U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wIdleAnimFlags"
    },
    { /* m_wMoveAnimFlags */
        PSYQ_LE32(0x68U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wMoveAnimFlags"
    },
    { /* m_wPatroleAnimFlags */
        PSYQ_LE32(0x6aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 19, "m_wPatroleAnimFlags"
    },
    { /* m_wEvadeAnimFlags */
        PSYQ_LE32(0x6cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 17, "m_wEvadeAnimFlags"
    },
    { /* m_wCombatAnimFlags */
        PSYQ_LE32(0x6eU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 18, "m_wCombatAnimFlags"
    },
    { /* m_wLeapAnimFlags */
        PSYQ_LE32(0x70U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wLeapAnimFlags"
    },
    { /* m_wDartAnimFlags */
        PSYQ_LE32(0x72U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wDartAnimFlags"
    },
    { /* m_wProjectileAnimFlags */
        PSYQ_LE32(0x74U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 22, "m_wProjectileAnimFlags"
    },
    { /* m_wWeaponAnimFlags */
        PSYQ_LE32(0x76U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 18, "m_wWeaponAnimFlags"
    },
    { /* m_wComboEndAnimFlags */
        PSYQ_LE32(0x78U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 20, "m_wComboEndAnimFlags"
    },
    { /* m_wNormalDeathAnimFlags */
        PSYQ_LE32(0x7aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 23, "m_wNormalDeathAnimFlags"
    },
    { /* m_wMovingDeathAnimFlags */
        PSYQ_LE32(0x7cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 23, "m_wMovingDeathAnimFlags"
    },
    { /* m_wViolentDeathAnimFlags */
        PSYQ_LE32(0x7eU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 24, "m_wViolentDeathAnimFlags"
    },
    { /* m_wExplosiveDeathAnimFlags */
        PSYQ_LE32(0x80U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 26, "m_wExplosiveDeathAnimFlags"
    },
    { /* m_wExtremeDeathAnimFlags */
        PSYQ_LE32(0x82U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 24, "m_wExtremeDeathAnimFlags"
    },
    { /* m_wAlertAnimFlags */
        PSYQ_LE32(0x84U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 17, "m_wAlertAnimFlags"
    },
    { /* m_wTakeCoverAnimFlags */
        PSYQ_LE32(0x86U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 21, "m_wTakeCoverAnimFlags"
    },
    { /* m_wLeftArmWoundAnimFlags */
        PSYQ_LE32(0x88U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 24, "m_wLeftArmWoundAnimFlags"
    },
    { /* m_wRightArmWoundAnimFlags */
        PSYQ_LE32(0x8aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 25, "m_wRightArmWoundAnimFlags"
    },
    { /* m_wFleeAnimFlags */
        PSYQ_LE32(0x8cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wFleeAnimFlags"
    },
    { /* CWinEnemyIntelligence_t; .eos */
        PSYQ_LE32(0x90U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x90U), PSYQ_LE16(0x0), 23, "CWinEnemyIntelligence_t", 4, ".eos"
    },
    { /* CWinEnemyIntelligence_t; CWinEnemyIntelligence */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x90U), PSYQ_LE16(0x0), 23, "CWinEnemyIntelligence_t", 21, "CWinEnemyIntelligence"
    },
    { /* CEnemyIntelligence_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x8cU), 20, "CEnemyIntelligence_t"
    },
    { /* CCommonEnemyIntelligence_t; m_Common */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0x38U), PSYQ_LE16(0x0), 26, "CCommonEnemyIntelligence_t", 8, "m_Common"
    },
    { /* m_dwFlags */
        PSYQ_LE32(0x38U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 9, "m_dwFlags"
    },
    { /* m_AttackCombatRadius */
        PSYQ_LE32(0x3cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 20, "m_AttackCombatRadius"
    },
    { /* m_AttackLeapRadius */
        PSYQ_LE32(0x40U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 18, "m_AttackLeapRadius"
    },
    { /* m_AttackDartRadius */
        PSYQ_LE32(0x44U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 18, "m_AttackDartRadius"
    },
    { /* m_AttackProjectileRadius */
        PSYQ_LE32(0x48U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 24, "m_AttackProjectileRadius"
    },
    { /* m_AttackWeaponRadius */
        PSYQ_LE32(0x4cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 20, "m_AttackWeaponRadius"
    },
    { /* m_GroundBehavior */
        PSYQ_LE32(0x50U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 16, "m_GroundBehavior"
    },
    { /* m_AirBehavior */
        PSYQ_LE32(0x51U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 13, "m_AirBehavior"
    },
    { /* m_UnderwaterBehavior */
        PSYQ_LE32(0x52U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 20, "m_UnderwaterBehavior"
    },
    { /* m_ExtremeDeathModel */
        PSYQ_LE32(0x53U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 19, "m_ExtremeDeathModel"
    },
    { /* m_PfmDeathModel */
        PSYQ_LE32(0x54U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 15, "m_PfmDeathModel"
    },
    { /* m_HeadBlownOffDeathModel */
        PSYQ_LE32(0x55U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 24, "m_HeadBlownOffDeathModel"
    },
    { /* m_LeftArmBlownOffDeathModel */
        PSYQ_LE32(0x56U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 27, "m_LeftArmBlownOffDeathModel"
    },
    { /* m_RightArmBlownOffDeathModel */
        PSYQ_LE32(0x57U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 28, "m_RightArmBlownOffDeathModel"
    },
    { /* m_BodyHoleDeathModel */
        PSYQ_LE32(0x58U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 20, "m_BodyHoleDeathModel"
    },
    { /* pad0 */
        PSYQ_LE32(0x59U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x2), PSYQ_LE32(0x0U), 4, "pad0"
    },
    { /* m_ExtremeDeathAnim */
        PSYQ_LE32(0x5aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 18, "m_ExtremeDeathAnim"
    },
    { /* m_PfmDeathAnim */
        PSYQ_LE32(0x5cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 14, "m_PfmDeathAnim"
    },
    { /* m_HeadBlownOffDeathAnim */
        PSYQ_LE32(0x5eU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 23, "m_HeadBlownOffDeathAnim"
    },
    { /* m_LeftArmBlownOffDeathAnim */
        PSYQ_LE32(0x60U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 26, "m_LeftArmBlownOffDeathAnim"
    },
    { /* m_RightArmBlownOffDeathAnim */
        PSYQ_LE32(0x62U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 27, "m_RightArmBlownOffDeathAnim"
    },
    { /* m_BodyHoleDeathAnim */
        PSYQ_LE32(0x64U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x3), PSYQ_LE32(0x0U), 19, "m_BodyHoleDeathAnim"
    },
    { /* m_wIdleAnimFlags */
        PSYQ_LE32(0x66U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wIdleAnimFlags"
    },
    { /* m_wMoveAnimFlags */
        PSYQ_LE32(0x68U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wMoveAnimFlags"
    },
    { /* m_wPatroleAnimFlags */
        PSYQ_LE32(0x6aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 19, "m_wPatroleAnimFlags"
    },
    { /* m_wEvadeAnimFlags */
        PSYQ_LE32(0x6cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 17, "m_wEvadeAnimFlags"
    },
    { /* m_wCombatAnimFlags */
        PSYQ_LE32(0x6eU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 18, "m_wCombatAnimFlags"
    },
    { /* m_wLeapAnimFlags */
        PSYQ_LE32(0x70U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wLeapAnimFlags"
    },
    { /* m_wDartAnimFlags */
        PSYQ_LE32(0x72U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wDartAnimFlags"
    },
    { /* m_wProjectileAnimFlags */
        PSYQ_LE32(0x74U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 22, "m_wProjectileAnimFlags"
    },
    { /* m_wWeaponAnimFlags */
        PSYQ_LE32(0x76U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 18, "m_wWeaponAnimFlags"
    },
    { /* m_wComboEndAnimFlags */
        PSYQ_LE32(0x78U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 20, "m_wComboEndAnimFlags"
    },
    { /* m_wNormalDeathAnimFlags */
        PSYQ_LE32(0x7aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 23, "m_wNormalDeathAnimFlags"
    },
    { /* m_wMovingDeathAnimFlags */
        PSYQ_LE32(0x7cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 23, "m_wMovingDeathAnimFlags"
    },
    { /* m_wViolentDeathAnimFlags */
        PSYQ_LE32(0x7eU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 24, "m_wViolentDeathAnimFlags"
    },
    { /* m_wExplosiveDeathAnimFlags */
        PSYQ_LE32(0x80U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 26, "m_wExplosiveDeathAnimFlags"
    },
    { /* m_wAlertAnimFlags */
        PSYQ_LE32(0x82U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 17, "m_wAlertAnimFlags"
    },
    { /* m_wTakeCoverAnimFlags */
        PSYQ_LE32(0x84U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 21, "m_wTakeCoverAnimFlags"
    },
    { /* m_wLeftArmWoundAnimFlags */
        PSYQ_LE32(0x86U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 24, "m_wLeftArmWoundAnimFlags"
    },
    { /* m_wRightArmWoundAnimFlags */
        PSYQ_LE32(0x88U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 25, "m_wRightArmWoundAnimFlags"
    },
    { /* m_wFleeAnimFlags */
        PSYQ_LE32(0x8aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 16, "m_wFleeAnimFlags"
    },
    { /* CEnemyIntelligence_t; .eos */
        PSYQ_LE32(0x8cU), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x8cU), PSYQ_LE16(0x0), 20, "CEnemyIntelligence_t", 4, ".eos"
    },
    { /* CEnemyIntelligence_t; CEnemyIntelligence */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x8cU), PSYQ_LE16(0x0), 20, "CEnemyIntelligence_t", 18, "CEnemyIntelligence"
    },
    { /* CCommonPlatformIntelligence_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x24U), 29, "CCommonPlatformIntelligence_t"
    },
    { /* m_dwFlags */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 9, "m_dwFlags"
    },
    { /* m_CollisionType */
        PSYQ_LE32(0x4U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 15, "m_CollisionType"
    },
    { /* pad */
        PSYQ_LE32(0x6U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xd), PSYQ_LE32(0x0U), 3, "pad"
    },
    { /* m_CollisionRadius */
        PSYQ_LE32(0x8U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_CollisionRadius"
    },
    { /* m_CollisionWidth */
        PSYQ_LE32(0xcU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 16, "m_CollisionWidth"
    },
    { /* m_CollisionHeight */
        PSYQ_LE32(0x10U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_CollisionHeight"
    },
    { /* m_CollisionLength */
        PSYQ_LE32(0x14U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_CollisionLength"
    },
    { /* m_CollisionXOffset */
        PSYQ_LE32(0x18U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 18, "m_CollisionXOffset"
    },
    { /* m_CollisionYOffset */
        PSYQ_LE32(0x1cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 18, "m_CollisionYOffset"
    },
    { /* m_CollisionZOffset */
        PSYQ_LE32(0x20U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 18, "m_CollisionZOffset"
    },
    { /* CCommonPlatformIntelligence_t; .eos */
        PSYQ_LE32(0x24U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x24U), PSYQ_LE16(0x0), 29, "CCommonPlatformIntelligence_t", 4, ".eos"
    },
    { /* CCommonPlatformIntelligence_t; CCommonPlatformIntelligence */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x24U), PSYQ_LE16(0x0), 29, "CCommonPlatformIntelligence_t", 27, "CCommonPlatformIntelligence"
    },
    { /* CWinPlatformIntelligence_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x64U), 26, "CWinPlatformIntelligence_t"
    },
    { /* CCommonPlatformIntelligence_t; m_Common */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0x24U), PSYQ_LE16(0x0), 29, "CCommonPlatformIntelligence_t", 8, "m_Common"
    },
    { /* m_dwFlags */
        PSYQ_LE32(0x24U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 9, "m_dwFlags"
    },
    { /* m_Type */
        PSYQ_LE32(0x28U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 6, "m_Type"
    },
    { /* m_MotionStyle */
        PSYQ_LE32(0x29U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 13, "m_MotionStyle"
    },
    { /* m_RotationType */
        PSYQ_LE32(0x2aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 14, "m_RotationType"
    },
    { /* m_MotionType */
        PSYQ_LE32(0x2bU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 12, "m_MotionType"
    },
    { /* m_VertDist */
        PSYQ_LE32(0x2cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_VertDist"
    },
    { /* m_HorizDist */
        PSYQ_LE32(0x30U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 11, "m_HorizDist"
    },
    { /* m_HorizDir */
        PSYQ_LE32(0x34U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_HorizDir"
    },
    { /* m_MoveTime */
        PSYQ_LE32(0x38U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_MoveTime"
    },
    { /* m_Rotation */
        PSYQ_LE32(0x3cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_Rotation"
    },
    { /* m_StartOffset */
        PSYQ_LE32(0x40U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 13, "m_StartOffset"
    },
    { /* m_HoverAmplitude */
        PSYQ_LE32(0x44U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 16, "m_HoverAmplitude"
    },
    { /* m_HoverPeriod */
        PSYQ_LE32(0x48U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 13, "m_HoverPeriod"
    },
    { /* m_DelayTime */
        PSYQ_LE32(0x4cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 11, "m_DelayTime"
    },
    { /* m_GoDelayTime */
        PSYQ_LE32(0x50U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 13, "m_GoDelayTime"
    },
    { /* m_ReturnDelayTime */
        PSYQ_LE32(0x54U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_ReturnDelayTime"
    },
    { /* m_SpecialDelay */
        PSYQ_LE32(0x58U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 14, "m_SpecialDelay"
    },
    { /* m_SpecialSinkDist */
        PSYQ_LE32(0x5cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_SpecialSinkDist"
    },
    { /* m_SpecialSinkTime */
        PSYQ_LE32(0x60U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_SpecialSinkTime"
    },
    { /* CWinPlatformIntelligence_t; .eos */
        PSYQ_LE32(0x64U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x64U), PSYQ_LE16(0x0), 26, "CWinPlatformIntelligence_t", 4, ".eos"
    },
    { /* CWinPlatformIntelligence_t; CWinPlatformIntelligence */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x64U), PSYQ_LE16(0x0), 26, "CWinPlatformIntelligence_t", 24, "CWinPlatformIntelligence"
    },
    { /* CPlatformIntelligence_t */
        PSYQ_LE32(0x0U), 148, PSYQ_LE16(PSYQ_STRTAG), PSYQ_LE16(0x8), PSYQ_LE32(0x60U), 23, "CPlatformIntelligence_t"
    },
    { /* CCommonPlatformIntelligence_t; m_Common */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x8), PSYQ_LE32(0x24U), PSYQ_LE16(0x0), 29, "CCommonPlatformIntelligence_t", 8, "m_Common"
    },
    { /* m_dwFlags */
        PSYQ_LE32(0x24U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xf), PSYQ_LE32(0x0U), 9, "m_dwFlags"
    },
    { /* m_Type */
        PSYQ_LE32(0x28U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 6, "m_Type"
    },
    { /* m_MotionStyle */
        PSYQ_LE32(0x29U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 13, "m_MotionStyle"
    },
    { /* m_RotationType */
        PSYQ_LE32(0x2aU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 14, "m_RotationType"
    },
    { /* pad0 */
        PSYQ_LE32(0x2bU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0xc), PSYQ_LE32(0x0U), 4, "pad0"
    },
    { /* m_VertDist */
        PSYQ_LE32(0x2cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_VertDist"
    },
    { /* m_HorizDist */
        PSYQ_LE32(0x30U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 11, "m_HorizDist"
    },
    { /* m_HorizDir */
        PSYQ_LE32(0x34U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_HorizDir"
    },
    { /* m_MoveTime */
        PSYQ_LE32(0x38U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_MoveTime"
    },
    { /* m_Rotation */
        PSYQ_LE32(0x3cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 10, "m_Rotation"
    },
    { /* m_StartOffset */
        PSYQ_LE32(0x40U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 13, "m_StartOffset"
    },
    { /* m_HoverAmplitude */
        PSYQ_LE32(0x44U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 16, "m_HoverAmplitude"
    },
    { /* m_HoverPeriod */
        PSYQ_LE32(0x48U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 13, "m_HoverPeriod"
    },
    { /* m_GoDelayTime */
        PSYQ_LE32(0x4cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 13, "m_GoDelayTime"
    },
    { /* m_ReturnDelayTime */
        PSYQ_LE32(0x50U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_ReturnDelayTime"
    },
    { /* m_SpecialDelay */
        PSYQ_LE32(0x54U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 14, "m_SpecialDelay"
    },
    { /* m_SpecialSinkDist */
        PSYQ_LE32(0x58U), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_SpecialSinkDist"
    },
    { /* m_SpecialSinkTime */
        PSYQ_LE32(0x5cU), 148, PSYQ_LE16(PSYQ_MOS), PSYQ_LE16(0x6), PSYQ_LE32(0x0U), 17, "m_SpecialSinkTime"
    },
    { /* CPlatformIntelligence_t; .eos */
        PSYQ_LE32(0x60U), 150, PSYQ_LE16(PSYQ_EOS), PSYQ_LE16(0x0), PSYQ_LE32(0x60U), PSYQ_LE16(0x0), 23, "CPlatformIntelligence_t", 4, ".eos"
    },
    { /* CPlatformIntelligence_t; CPlatformIntelligence */
        PSYQ_LE32(0x0U), 150, PSYQ_LE16(PSYQ_TPDEF), PSYQ_LE16(0x8), PSYQ_LE32(0x60U), PSYQ_LE16(0x0), 23, "CPlatformIntelligence_t", 21, "CPlatformIntelligence"
    }
};
typedef char debug_stream_extent_size[(sizeof(struct RageWarsDebugContinuation) == 9602) ? 1 : -1];
