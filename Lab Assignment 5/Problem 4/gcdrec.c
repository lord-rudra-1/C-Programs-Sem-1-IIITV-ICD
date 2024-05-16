#include<stdio.h>
int gcdcal(int,int);
int main ()
{
	int a,b,i;
	printf("enter the two numbers\n");
	scanf("%d %d",&a,&b);
	i=a;
	printf("GCD = %d\n",gcdcal(a,b));
	return 0;
}

int gcdcal(int a, int b)
{
	int remainder;
	remainder = b;	
	if(a%b == 0)	
		return remainder;
	
	remainder = a%b;
	gcdcal(b, remainder);
}

