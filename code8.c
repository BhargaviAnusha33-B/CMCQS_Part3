#include<stdio.h>
int main()
{
	int n=10,i;
	for(i=1;i>=n;i--)//i=1 1>=10
	{
		printf("%d ",++i);
	}
	return 0;
}
