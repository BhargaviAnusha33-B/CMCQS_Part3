#include<stdio.h>
int main()
{
	int n=10,i,j;
	for(i=1,j=10;i<j;i++,j--)//i=6 j=5;6<5
	{
		printf("%d ",i+j);//11 11 11 11 11
	}
	return 0;
}
