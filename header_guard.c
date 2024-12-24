#include<stdio.h>
#ifndef HEADER
#define HEADER
int sum(int x,int y);
#endif

int main()
{
	int x=3,y=4;
	int res = sum(x,y);
	printf("sum: %d\n",res);
	return 0;
}

int sum(int x,int y)
{
	return x+y;
}
