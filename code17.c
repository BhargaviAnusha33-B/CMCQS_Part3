#include<stdio.h>
int main()
{
	int n=10,i;
	while(n--);//109 8 7 6 5 4 3 2 1 0 -1
	{
		printf("%d ",n--);//-1 -2
	}
	printf("%d",n);
	return 0;
}
