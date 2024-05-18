#include<stdio.h>
int main ()
{
	int i,n,pos;
	
	printf("enter the no. of elements for array\n");
	scanf("%d",&n);
	
	int array[n];
	
	printf("enter the elements of array\n");
	
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	printf("enter the position of element you want to delete\n");
	scanf("%d",&pos);
	
	if(pos<1 && pos>n){
	printf("enter a valid position\n");
	}
	
	else{
	for(i=pos-1;i<n;i++)
	array[i]=array[i+1];
	
	for(i=0;i<n-1;i++)
	printf("%d",array[i]);
	}
	
	return 0;
}
