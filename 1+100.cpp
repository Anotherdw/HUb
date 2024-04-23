#include <stdio.h>
int main()
{
	int a=1,sum=0;
	do
	{
		sum=sum+a;
		a++;
	}while(a<=100);
	printf("s=1+2+3+4+...+100=%d",sum);
}
