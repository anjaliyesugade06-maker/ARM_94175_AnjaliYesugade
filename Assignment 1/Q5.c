#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
        printf("%c is an alphabet.\n", ch);
        char flipped = ch ^ 32;
        printf("After XOR with 32: %c\n", flipped);
    }
	else
	{
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
}

