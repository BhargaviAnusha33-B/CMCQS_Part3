#include<stdio.h>
int main()
{
	int n=10,i=0;
	while(n-- && i++)// 10 && 0
	{
		printf("%d ",n);
	}
	printf("%d",i);//1
	return 0;
}
