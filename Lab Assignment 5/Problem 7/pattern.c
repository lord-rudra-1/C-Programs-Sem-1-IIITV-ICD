#include<stdio.h>
int main ()
{
	int n=5,i,j,k,val;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		
		val=1;
		
		for(k=1;k<=i;k++)
		{
			printf("%d ",val);
			val=val*(i-k)/k;
		}
		
		printf("\n");
	}
return 0;
}
