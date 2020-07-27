#include<stdio.h>
int main()
{
	int n=10,i,j;
	for(i=1,j=10;i<j;)//i=3, j=8; 2<9
	{
		printf("%d ",++i + j--);//12 12 12 12 12
	}
	return 0;
}
