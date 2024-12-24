#include<stdio.h>
int main()
{
#ifndef CONDITION
#define CONDITION
	int x=7;
	float y=4.7;
#endif
	printf("%d,%f\n",x,y);
}
