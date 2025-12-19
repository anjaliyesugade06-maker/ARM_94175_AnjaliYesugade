#include <stdio.h>
void swapXOR(int *x, int *y) 
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapXOR(&a, &b);
    printf("After swap:  a = %d, b = %d\n", a, b);
    return 0;
}

