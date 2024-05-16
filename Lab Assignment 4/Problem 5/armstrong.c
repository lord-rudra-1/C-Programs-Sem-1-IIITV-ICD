#include<stdio.h>
int main()
{
	int i,count,temp,a,b,result; 
	a=500;
	
	for(i=1;i<=a;i++)
	{
		temp=i;
		result =0;
		
		while(temp!=0)
		{
			b=temp%10;                       //obtain digit
			temp = temp/10;              
			result = result + (b*b*b);			//sum of cube of digits
		}
		
		if(result==i)
		printf("%d\n",i);	
	}		
return 0;
}
