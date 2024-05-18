#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the no. of elements of array\n");
	scanf("%d",&n);
	
	char arr[n];
	printf("enter the array element : ");
	
	for(i=0;i<n;i++){
	scanf(" %c",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]>64 && arr[i]<92)
		arr[i]=arr[i]+32;
		
		else if(arr[i]>96 && arr[i]<124)
		arr[i]=arr[i]-32;
	}
	
	printf("the new array elements are :\n");
	for(i=0;i<n;i++)
	printf("%c\n",arr[i]);
	
	int arrfreq[127];
	for(i=0;i<128;i++)
	arrfreq[i]=0;
	
	for(i=0;i<n;i++)
	{
		int count;
		if(arr[i]>96 && arr[i]<123)
		count=arr[i]-32;
		else
		count=arr[i];
		
		arrfreq[count]=arrfreq[count]+1;		
	}
	
	for(i=0;i<128;i++)
	{
	if(arrfreq[i]!=0)
	printf("The Frequency of %c is %d\n",i,arrfreq[i]);
	}
	
	return 0;
}	
