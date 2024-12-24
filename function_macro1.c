#include <stdio.h>
#define PRINT(a) printf("%d\n", a);
#define LOOP(value, start, end) for (int value = start; value <= end; value++) {
#define ENDLOOP }
int main(int argc, char** argv) 
{
	LOOP(counter, 1, 10)
	PRINT(counter)
	ENDLOOP
	return 0;
}
