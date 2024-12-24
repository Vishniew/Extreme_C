#include<stdio.h>
int fun(int x)
{
	x=x+1;

}
int main()
{
	int x=1;
	printf("Before function call: %d\n",x);
	fun(x);
	printf("After function call: %d\n",x);
}
	
