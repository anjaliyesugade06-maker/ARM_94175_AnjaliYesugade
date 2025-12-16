#include<stdio.h>
#include<stdint.h>
#define BV(n) (1<<(n))
int main()
{
	uint8_t status = 0x08;
	if(status&(BV(3)))
	{
		printf("Bit 3 is set");
	}
	else
	{
		printf("Bit is clear");
	}
	return 0;
}
