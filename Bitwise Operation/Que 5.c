#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t reg = 0xAA;
    uint8_t field;
    printf("Register before = 0x%X\n", reg);
    field = (reg >> 2) & 0x07;
    printf("Bits 2 to 4 value = 0x%X\n", field);
    reg = reg & ~(0x07 << 2);
    reg = reg | (0x03 << 2);
    printf("Register after  = 0x%X\n", reg);
    return 0;
}

