#include<stdio.h>
int main()
{
	int n=10,i,j;
	for(i=1,j=10;i<j;)//i=1 j=10; 1<10
	{
		if(i>j)//1>10
		{
			printf("%d ",i++ + --j);
		}
		
	}
	return 0;
}
