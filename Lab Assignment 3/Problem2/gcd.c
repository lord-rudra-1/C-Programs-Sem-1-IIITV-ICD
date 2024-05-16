#include<stdio.h>
int main()
{
	int a,b,i;

	printf("Enter the integers\n");
	scanf("%d %d",&a,&b);

	if(a == 0 || b == 0)
		printf("GCD Not possible.\n");

	for(i=a;i>0;i--)
	{
		if(a%i==0 && b%i==0)
		{
			printf("GCD of the numbers is : %d\n",i);
			break;
		}
	}	

	return 0;
}
