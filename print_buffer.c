#include<stdio.h>
void print_buffer(void *p, int length)
{
	unsigned char *buffer = (unsigned char *)p;
	static int x;
	printf("%08x  ",x);
	x+=length;
	if(length != 0)
	{		
		for(int i=0;i<16;i++)
		{
			if(i==8)
				printf(" ");
			if(i<length)
				printf("%02x ",buffer[i]);
			else
				printf("   ");
		}
		unsigned char ch;
		printf(" |");
		for(int i=0;i<length;i++)
		{
			ch = buffer[i];
			if(32 <= ch && ch <= 126)
				printf("%c",buffer[i]);
			else
				printf(".");
		}
		printf("|\n");
	}
	else
		printf("\n");
}

int main(int *argc,char *argv[])
{
	FILE *file = fopen(argv[1],"r");
	if(file == NULL)
	{
		printf("File doesn't exist!\n");
		return 0;
	}
	unsigned char buffer[16];
	int length;
	while(1)
	{	
		
		length = fread(buffer,1,16,file);
		print_buffer(buffer,length);
		if(length == 0)
			break;
		
	}
	//unsigned char ch;
	/*while(i<16 && (ch=fgetc(file) != EOF))
	{
		buffer[i++] = ch
	}*/

	fclose(file);
}
