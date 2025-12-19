#include <stdio.h>
int countOnes(unsigned char b)
{
    int count = 0;
    while (b)
	{
        count += (b & 1);
        b >>= 1;
    }
    return count;
}
unsigned char ensureEvenParity(unsigned char b)
{
    int ones = countOnes(b);
    if (ones % 2 != 0)
	{
        b |= 0x80;
    }
    return b;
}
int main()
{
    unsigned char x;
    printf("Enter a byte value (0–255): ");
    scanf("%u", &x);
    unsigned char result = ensureEvenParity(x);
    printf("Original: %u  Result with even parity: %u\n", x, result);
    return 0;
}

