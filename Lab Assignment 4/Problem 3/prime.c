#include<stdio.h>
int main()
{
	int i,count;
	int a=300;
	
	for(i=2;i<=a;i++)
	{
		for(count=2;count<=i;count++)
		{
			if(count==i)
			printf(" %d is a prime number \n",i);
			
			if(i%count==0)
			break ;
		}	
	}
return 0;
}
