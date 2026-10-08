/* Horizontal offset used by the four-part HUD flash drawing loop.
 * func_8021EEFC_de reads D_800C9F74_de[k + 4], k=0..3; this is entry4.
 * Original word 0xC3040000; lwc1 loads the indexed array as float.
 * US rev1 ROM 0xCFDC8-0xCFDCC, resident0x800CF1C8.
 */
const float D_800CF1C8 = -132.0f;
