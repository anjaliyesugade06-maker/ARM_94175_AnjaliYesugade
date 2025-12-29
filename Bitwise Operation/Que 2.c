#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t status;

    printf("Enter the value of status: ");
    scanf("%hhu", &status);

    if (status & (1 << 3))
    {
        printf("Bit 3 is SET");
    }
    else
    {
        printf("Bit 3 is CLEAR");
    }

    return 0;
}

