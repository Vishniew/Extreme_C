#include<stdio.h>
int sum(int x,int y)
{
	return x+y;
}
int subtract(int x,int y)
{
	return x-y;
}
int main()
{
	int x=5,y=3;
	int (*fptr)(int,int) = NULL;
	fptr = &sum;
	printf("sum: %d\n",fptr(x,y));
	fptr = &subtract;
	printf("subtract: %d\n",fptr(x,y));
}
	
