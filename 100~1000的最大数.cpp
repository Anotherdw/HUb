#include<stdio.h>
int main()
{
	int num=0;
	for(int a=1000;a>=100;a--)
	{
		if(a%7==0&&a%8==0)
		{
			printf("%d\n",a);
			num++;
		if(num>=6)
		{
			break;
		}
	}
	}
}
