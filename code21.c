#include<stdio.h>
int main()
{
	int n=10,i=1;
	while(i<n)//3<10
	{
		if(i%3==0)//3%3==0
		{
			continue;
		}
		printf("%d ",i);//1 2 
		i++;
	}
	return 0;
}
