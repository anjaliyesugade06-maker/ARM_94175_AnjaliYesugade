#include <stdio.h>
void displayBinary(unsigned int n) 
{
    int i;
    for(i=15;i>=0;i--) 
	{
        unsigned int bit = (n >> i) & 1;
        printf("%u", bit);
    }
}

int main() {
    unsigned int num;

    printf("Enter an integer : ");
    scanf("%u", &num);
    printf("Binary No. : ");
    displayBinary(num);
    printf("\n");

    return 0;
}

