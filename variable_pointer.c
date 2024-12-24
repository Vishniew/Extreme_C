#include<stdio.h>
int main()
{
	int *ptr = NULL;
	int x =13;
	ptr = &x;
	printf("Accessed value through pointer: %d\n",*ptr);
}
