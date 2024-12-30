#include<stdio.h>
#include<stdlib.h>
void print_buffer(void *p, int length)
{
	char *buffer = (char *)p;
	for(int i=0;i<length;i=i+16)
	{
		printf("%08x  ", i);
		for(int j=0;j<16;j++)
		{
			if(i+j < length)
				printf("%02x ",buffer[i+j]);
			else
				printf("   ");
		}

		printf(" |");

		for(int k=0;k<16;k++)
		{
			char ch = buffer[i+k];
			if(i+k < length)
			{
				if((32 <= ch) && (ch <= 126))
				       printf("%c",ch);
				else
					printf(".");	
			}
			else
				printf(" ");
		}

		printf("|\n");
	}

}
int main()
{
	FILE *file = fopen("output","rb");
	if(file == NULL)
	{	printf("File doesn't exist!\n");
		return 0;
	}
	fseek(file,0,SEEK_END);
	unsigned long int file_size = ftell(file);
	rewind(file);

	char *buffer = (char *)malloc(file_size);
	fread(buffer, 1, file_size, file);
	fclose(file);

	print_buffer(buffer, file_size);
	free(buffer);
	
}
