#include<stdio.h>
int main()
{
	int n=5,i=1;
	while(1)//n=0 i=5
	{
		if(n==0)//0==0
			break;
		else
		{
			if(i>n)//5>4
				printf("%d ",n--);//
			else
				printf("%d ",i++);//1 2 3 4 5 5 4 3 2 1
		}
	}
	return 0;
}
