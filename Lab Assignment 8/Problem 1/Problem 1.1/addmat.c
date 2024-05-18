#include<stdio.h>
int main()
{
	int i,j,a,b;
	
	printf("enter the sizes of matrices\n");
	scanf("%d %d",&a,&b);
	
	int mat1[a][b];
	int mat2[a][b];
	int mat3[a][b];
	
	printf("enter the first matrix row x column\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("enter the second matrix row x column\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("\n\n");
	//addition 
	printf("the addition of matrices is : \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			mat3[i][j] = (mat1[i][j] + mat2[i][j]);
			printf("%d  ",mat3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
