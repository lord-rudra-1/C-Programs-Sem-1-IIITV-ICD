#include<stdio.h>
int sum (int);
int main ()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	
	printf("The sum is : %d\n", sum(num)); 

return 0;
}

int sum (int num)
{
	if(num==0)
	return 0;
	
	int x,ans;
	x=num%10;
	num = num/10;
	ans = x+sum(num); 

	return ans;
}
