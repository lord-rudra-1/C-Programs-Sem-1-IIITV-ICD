#include<stdio.h>
int main()
{
	int i,c,a=99999999,b=-99999999; 
	do
	{
		printf("enter the number\n");
		scanf("%d",&i);
		
		if(a>i) //smallest number in input
		a=i;
		if(b<i) //largest number in input
		b=i;
	
		printf("enter number again ??\nenter 0 to stop and 1 to continue\n");
		scanf("%d",&c);		
	}
	while(c==1);
	
	printf("the range of the numbers is : %d\n",b-a);
	
return 0;
}
