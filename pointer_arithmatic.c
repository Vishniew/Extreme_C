#include <stdio.h>
int main(int argc, char** argv) 
{
	int *ptr = NULL;
	int x=13;
	ptr =&x;
	printf("Before pointer arithmatic: %p\n",ptr);
	printf("After pointer arithmatic: %p\n",++ptr);
}

