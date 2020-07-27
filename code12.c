#include<stdio.h>
int main()
{
	int n=10,i,j;
	for(i=1,j=10;i<n;j--,i++)//i=10 j=1; 10<10
	{
		if(i>j)//8>3
		{
			printf("%d ",i++ + --j);//10 10
		}
	}
	return 0;
}
