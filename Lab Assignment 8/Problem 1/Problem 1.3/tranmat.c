#include<stdio.h>
int main()
{
	int i,j,a,b;
	
	printf("enter the size of matrix\n");
	scanf("%d %d",&a,&b);
	
	int mat1[a][b];
	int mat2[b][a];
	
	printf("enter the matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("given matrix\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d  ",mat1[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			mat2[j][i]=mat1[i][j];
		}
	}
	printf("\nTranspose of the given matrix is :\n");
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d  ",mat2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
