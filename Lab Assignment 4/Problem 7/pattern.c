#include<stdio.h>
int main()
{
	int n=7,i,j,a;
	a='A'-1;
	
	for(i=n;i>0;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(i>=j)
			printf("%c ",a+j);
			else
			printf("  ");
		}
		
		for(j=n-1;j>0;j--)
		{
			if(i>=j)
			printf("%c ",a+j);
			else
			printf("  ");
		}
		printf("\n");
	}
return 0;
}
