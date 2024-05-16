#include<stdio.h>
int max(int,int,int);
int main ()
{
	int a,b,c;
	printf("enter the three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("the maximum is : %d\n",max(a,b,c));
	
	return 0;
}

int max(int a, int b, int c)
{
	if(a>b && a>c)
	return a;
	
	else if(b>a && b>c)
	return b;
	
	else
	return c;
}
