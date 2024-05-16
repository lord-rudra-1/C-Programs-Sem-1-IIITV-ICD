#include<stdio.h>
int main()
{
	int m,n,i,ans=1;
	
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the power\n");
	scanf("%d",&m);
	
	for(i=1;i<=m;i++)
	{
		ans = ans*n;
	}
	
	printf("The Answer is : %d\n",ans);	

return 0;
}
