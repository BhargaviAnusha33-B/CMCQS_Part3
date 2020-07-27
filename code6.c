#include<stdio.h>
int main()
{
	short int n=10,i=1;// 2bytes
	for(;i;)//i=1
	{
		printf("%hi ",++i);//1 2 3 4 5.. 32767.. -32768.....0
	}
	return 0;
}
