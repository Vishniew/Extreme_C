#include <stdio.h>
void print_bytes(void* data, int length) 
{
	char delim = ' ';
	unsigned char* ptr = data;
	for (int i = 0; i < length; i++) 
	{
		printf("%c 0x%x", delim, *ptr);
		delim = ',';
		ptr++;
	}
	printf("\n");
}
int main(int argc, char** argv) 
{
	int a = 0x12345678;
	double b = 18.9;
	print_bytes(&a, sizeof(int));
	print_bytes(&b, sizeof(double));
	return 0;
}
