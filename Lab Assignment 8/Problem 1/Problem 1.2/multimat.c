#include<stdio.h>
int main()
{
	int i,j,a,b,c,d,k,sum=0;
	
	printf("enter the size of matrix1\n");
	scanf("%d %d",&a,&b);
	
	printf("enter the size of matrix2\n");
	scanf("%d %d",&c,&d);
	
	int mat1[a][b];
	int mat2[c][d];
	int mat3[a][d];
	
	printf("enter the first matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("enter the second matrix\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	//multiplication
	for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			for(k=0;k<b;k++)
			{
				sum = sum + (mat1[i][k] * mat2[k][j]);
			}
			mat3[i][j]=sum;
			sum=0;
		}
	}
	printf("\nthe multiplication matrix is : \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("%d  ",mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
