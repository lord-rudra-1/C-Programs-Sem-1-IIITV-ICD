#include<stdio.h>
int nthTerm(int,int,int);
int main()
{
	int a,d,n,i;
	printf("enter the firt term\n");
	scanf("%d",&a);
	printf("enter the common difference\n");
	scanf("%d",&d);
	printf("enter the no. of terms\n");
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=1;i<=n;i++)
	printf("%d\n",nthTerm(a,d,i));
	
	return 0;
}

int nthTerm(int a,int d,int n)
{
	if(n==1)
	return a;
	
	return d+nthTerm(a,d,n-1);
}	
