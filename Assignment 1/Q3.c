#include <stdio.h>
#include <stdlib.h>

void displayBinary(unsigned int n)
{
	int i;
    for (i=7;i>=0;i--)
    {
        unsigned int bit = (n >> i) & 1;
        printf("%u", bit);
    }
}

int main(int argc, char *argv[])
{
    unsigned int num;

    if (argc == 2)
	{
        num = (unsigned int)atoi(argv[1]);
    } 
	else
	{
        printf("Enter number: ");
        scanf("%u", &num);
    }
    printf("Binary of %u is: ", num);
    displayBinary(num);
    printf("\n");
    return 0;
}

