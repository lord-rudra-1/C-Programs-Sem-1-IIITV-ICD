#include<stdio.h>
#include<math.h>
int main()
{
	int num,result,count,temp,x;
	
	printf("Enter your number in Binary\n");
    scanf("%d",&num);
   
	temp=num;
	for(count=0;temp>0;count++)
	{
    	x=temp%10;
    	temp=temp/10;
   		result = result + (x*pow(2,count));
    }
    
    printf("Number in Decimal is : %d\n",result);
    
    return 0;
}
