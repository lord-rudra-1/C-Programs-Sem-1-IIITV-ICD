#include<stdio.h>
int main()
{
	int i=1,c,flag1,flag2,flag3;
	
	do
	{
		printf("enter the number\n");
		scanf("%d",&i);
	
		if(i>0)
		flag1 = flag1 +1;
		
		if(i==0)
		flag2 = flag2 +1;
		
		if(i<0)
		flag3 = flag3 +1;
		
		printf("enter number again ??\nenter 0 to stop and 1 to continue\n");
		scanf("%d",&c);		
	}
	while(c==1);
	
	printf("The Positive numbers entered : %d\n",flag1);
	printf("The Number of Zeroes entered : %d\n",flag2);
	printf("The Negative numbers entered : %d\n",flag3);

return 0;
}
