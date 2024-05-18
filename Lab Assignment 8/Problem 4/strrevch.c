#include<stdio.h>
void revst(char*ptr);
int main()
{
	char stin[50];
	char *ptr;
	
	printf("enter the string\n");
	scanf("%s",stin);
	ptr=stin;
	
	revst(ptr);
	
	printf("%s\n",stin);
	
	return 0;
}
void revst(char*ptr)
{
	int i,j,a,b,temp;
	for(i=0;*(ptr+i)!='\0';i++);
	a=0;
	b=i-1;
	while(a<b)
	{
		if(*(ptr+a)<65 || (*(ptr+a)>90 && *(ptr+a)<97) || *(ptr+a)>122){
		a++;
		}
		else if(*(ptr+b)<65 || (*(ptr+b)>90 && *(ptr+b)<97) || *(ptr+b)>122){
		b--;
		}
		else{
		temp=*(ptr+a);
		*(ptr+a)=*(ptr+b);
		*(ptr+b)=temp;
		a++;
		b--;
		}
	}
}
