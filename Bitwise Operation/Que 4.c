#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t value = 5;
    uint8_t left_shift;
    uint8_t right_shift;
    left_shift = value << 2;
    printf("Left shift result = %d\n", left_shift);
    right_shift = value >> 1;
    printf("Right shift result = %d\n", right_shift);
    return 0;
}

