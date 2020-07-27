#include<stdio.h>
int main()
{
	int n=10;
	while(1)//n=1
	{
		if(n==1)//1==1
			break;
		if(n%2==0)//2%2==0
			n=n/2;//1
		else
			n=3*n+1;//n=16
		printf("%d ",n);//5 16 8 4 2 1
	}
	return 0;
}
