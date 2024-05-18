#include<stdio.h>
void toh(int n,int T1,int T2,int T3);
int main ()
{
	int n;
	int A=65,B=66,C=67;
	
	printf("enter no. of disks\n");
	scanf("%d",&n);

	toh(n,A,B,C);

	return 0;
}

void toh(int n,int T1,int T2,int T3)
{
	if(n==1){
	printf("take disc %c to %c\n",T1,T3);
	return;
	}
	
	toh(n-1,T1,T3,T2);
	
	printf("take disc %c to %c\n",T1,T3);
	
	toh(n-1,T2,T1,T3);
}	
