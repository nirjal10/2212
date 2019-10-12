.global addU32 /* uint32_t addS32(uint32_t x, uint32_t y) */
.global addS32 /* int32_t addS32(int32_t x, int32_t y) */

.text

addU32:
    ADD R0, R0, R1
    BX LR

addS32:
    ADD R0, R0, R1
    BX LR
