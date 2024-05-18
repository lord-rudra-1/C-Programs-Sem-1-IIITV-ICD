#include<stdio.h>
int main ()
{
	int i,j,n;
	printf("enter the odd integer\n");
	scanf("%d",&n);
	
	if(n%2!=0)
	{
	for(i=1;i<=n;i++)
	printf("*");
	
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==((n+1)/2))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	}
	else
	printf("plz input odd no. next time\n");	
return 0;
}
