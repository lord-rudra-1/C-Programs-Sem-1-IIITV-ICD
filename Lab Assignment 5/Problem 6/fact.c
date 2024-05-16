#include<stdio.h>
int fact(int);
int main ()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	
	printf("Factorial = %d\n",fact(num));
	return 0;
}

int fact(int num)
{
	if(num==0)
	return 1;
		
	int f = num * fact(num-1);
	return f;
}

