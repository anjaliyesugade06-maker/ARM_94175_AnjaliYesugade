#include<stdio.h>
#include<stdint.h>
#define BV(n) (1<<(n))
void binary(uint8_t value)
{
	int i;
	for(i=7;i>=0;i--)
	{
		printf("%d",(value>>i)&1);
	}
}
int main()
{ 
	uint8_t reg = 0x2A; 
	reg = reg | BV(4);
	printf("Result 1 :%X\n",reg);
	binary(reg);
	reg = reg & (~BV(1));
	printf("\nResult 2 :%x\n",reg);
	binary(reg);
	reg = reg ^ BV(5);
	printf("\nToogle 1 :%x\n",reg);
	binary(reg);
	reg = reg ^ BV(5);
	printf("\nToogle 2 :%x\n",reg);
	binary(reg);
	return 0;
}

