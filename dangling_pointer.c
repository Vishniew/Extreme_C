#include<stdio.h>
#include<stdlib.h>
int *fun()
{
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 13;
	return ptr;
}
int main()
{
	int *ptr = fun();
	printf("Accessed value from heap : %d\n",*ptr);
}
