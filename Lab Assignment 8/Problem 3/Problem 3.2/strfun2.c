#include<stdio.h>
void conc(char*,char*,char*);
int my_cmpstr(char*,char*);
int main()
{
	int a;
	char *poi1,*poi2,*poi3;
	char word1[50],word2[50],merg[100];
	printf("enter the first string:\n");
	scanf("%s",word1);
	printf("enter the second string:\n");
	scanf("%s",word2);
	poi1=word1;
	poi2=word2;
	poi3=merg;
	
	conc(poi1,poi2,poi3);
	printf("\nconcatenationof two strings is : %s\n",merg);
	
	printf("\nComparision of the given strings : %d\n",my_cmpstr(poi1,poi2));
	
	return 0;
}
void conc(char*poi1,char*poi2,char*poi3)
{
	int i,j;
	for(i=0;*(poi1+i)!='\0';i++)
	*(poi3+i)=*(poi1+i);
	for(j=0;*(poi1+j)!='\0';j++)
	*(poi3+i+j)=*(poi2+j);
}
int my_cmpstr(char*poi1,char*poi2)
{
	int i;
	for(i=0;((*(poi1+i)==*(poi2+i)) && (*(poi1+i)!='\0') || (*(poi2+i)!='\0') );i++)
	{
		if(*(poi1+i)=='\0' && *(poi2+i)=='\0')
		return 0;
		else if(*(poi1+i)>*(poi2+i))
		return 1;
		else if(*(poi1+i)<*(poi2+i))
		return -1;
	}

}
