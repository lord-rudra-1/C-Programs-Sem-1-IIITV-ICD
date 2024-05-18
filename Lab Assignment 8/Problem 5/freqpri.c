#include<stdio.h>
void freqdet(char*poit);
int main()
{
	char sting[60];
	char*poit;
	printf("enter the string\n");
	scanf("%s",sting);
	poit=sting;
	
	freqdet(poit);
	
	return 0;
}

void freqdet(char*poit)
{
	int freq[26]={0};
	int count,i;
	
	for(i=0;*(poit+i)!='\0';i++)
	{
		count=0;
		if(*(poit+i)>='a' && *(poit+i)<='z'){
		count = *(poit+i)-'a';
		freq[count]++;
		}
	}
		
	printf("\nthe frequency of lowercase characters :\n");
	for(i=0;i<26;i++)
	{
		if(freq[i]!=0)
		printf("%c    %d\n",i+'a',freq[i]);
	}
}
