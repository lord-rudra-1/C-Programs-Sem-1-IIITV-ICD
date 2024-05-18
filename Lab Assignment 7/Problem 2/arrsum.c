#include<stdio.h>
int main()
{
	int i,n;
	float flo,even,odd,neg;
	
	printf("enter the no. of elements of array\n");
	scanf("%d",&n);
	
	float arr[n];
	
	printf("enter the array\n");
	for(i=0;i<n;i++)
	scanf("%f",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		int j=arr[i];
		if(arr[i]!=j)
		flo=flo+arr[i];
		
		else if(j%2==0)
		even=even+arr[i];
		else
		odd=odd+arr[i];
		
		if(arr[i]<0)
		neg=neg+arr[i];	
	}
	
	printf("The sum of even no. = %f\n",even);
	printf("The sum of odd no. = %f\n",odd);
	printf("The sum of negative no. = %f\n",neg);
	printf("The sum of float type no. = %f\n",flo);

	return 0;
}	
