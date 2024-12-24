#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PRINT(format,...) printf(format,__VA_ARGS__)
int main(int argc, char** argv) 
{
	PRINT("One arg: %s\n","Hello");
	PRINT("Two args: %d,%f\n",13,7.5);
	PRINT("Three args: %s,%d,%c\n","Narrator",14,'V');
	return 0;
}
