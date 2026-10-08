/* Zero alignment between the preceding Huffman table and 16-byte RSP boot. */
.section .rsp.alignment,"a",@progbits
.globl ragewars_rsp_resource_alignment
ragewars_rsp_resource_alignment:
    .zero 12
.size ragewars_rsp_resource_alignment, .-ragewars_rsp_resource_alignment
