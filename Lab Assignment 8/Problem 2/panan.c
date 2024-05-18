#include<stdio.h>
int check(char*);
int main()
{
	int a;
	char*ptr;
	
	char word[30];
	printf("enter the word to check\n");
	scanf("%s",word);
	
	ptr=&word[0];

	a=check(ptr);
	
	if(a==1)
	printf("it is a panandrom\n");
	else
	printf("it is NOT a panandrom\n");
	
	return 0;
}

int check(char*ptr)
{
	int i,j;
	
	for(i=0;*(ptr+i)!='\0';i++);
	
	for(j=0;j<(i+1)/2;j++)
	{
		if(*(ptr+j)!=*(ptr+i-j-1))
		break;
	}
	
	if(j>=(i+1)/2)
	return 1;
	else
	return 0;
}
