#include<stdio.h>
int main()
{
	int n=10,i=1;
	while(n-- && i++)// 
	{
		printf("%d ",n);// 9 8 7 6 5 4 3 2 1 0
	}
	printf("%d",i);
	return 0;
}
