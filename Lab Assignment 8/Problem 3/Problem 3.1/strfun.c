#include<stdio.h>
int my_strlen(char*);
void my_reverse(char*);
int main()
{
	char*ptr;
	char word[50];
	printf("enter the string:\n");
	scanf("%s",word);
	ptr=word;
	
	printf("Lenght of string is : %d\n",my_strlen(ptr));
	
	my_reverse(ptr);
	
	return 0;
}
int my_strlen(char *ptr)
{
	int len;
	for(len=0;*(ptr+len)!='\0';len++);
	return len;
}
void my_reverse(char*ptr)
{
	int i,j,temp;
	char rev[50];
	for(i=0;*(ptr+i)!='\0';i++);
	for(j=0;j<(i+1)/2;j++)
	{
		temp=*(ptr+j);
		*(ptr+j)=*(ptr+i-j-1);
		*(ptr+i-j-1)=temp;
	}
	printf("\nReverse of string is : %s\n",ptr);
}
