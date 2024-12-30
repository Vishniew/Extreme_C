#include<stdio.h>
#include<string.h>
struct Book
{
	char title[30];
	char author[30];
	int year;
	int price;
};
int main()
{
	struct Book books[3];

	char B[20];
	for(int i=0;i<3;i++)
	{
		scanf(" %[^\n]",B);
		strcpy(books[i].title,B);  
	}
	printf("%s\n",books[1].title);
}
/*Fight Club
The Silent patient
Sky Fall

Output: The Silent patient*/

