#include<stdio.h>
int main()
{
	int a,i,count;
	unsigned int num;
	printf("enter number = ");
	scanf("%d",&num);
	count = 0;
	while(num>0)
	{
		if(num & 1)
		{
			count ++;
		}
		num=num>>1;
	}
	printf("count of 1's bit is :%d",count);
	return 0;
}
