#include<stdio.h>
int prime(int);
int divides(int,int);
int main ()
{
	int a=500,i;
	for(i=2;i<=a;i++)
	{
		if(prime(i)==1)
		printf("%d is prime\n",i);
	}
	
	return 0;
}

int prime(int i)
{
	int j;
	for(j=2;j<i;j++)
	{
		if(divides(i,j)==1)
		return 0;
	}
	return 1;
}

int divides(int i, int j)
{
	if(i%j==0)
	return 1;
	
	return 0;
}
