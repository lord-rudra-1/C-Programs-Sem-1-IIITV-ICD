#include<stdio.h>
int main()
{
	int i,j,a,b,temp;
	
	printf("enter the size of square matrix\n");
	scanf("%d %d",&a,&b);
	
	if(a==b)
	{
		int mat1[a][b];
	
		printf("enter the matrix\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				scanf("%d",&mat1[i][j]);
			}
		}
	
		printf("\ngiven matrix\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("%d  ",mat1[i][j]);
			}
		printf("\n");
		}
		
		for(i=0;i<a;i++)
		{
			for(j=0;j<i;j++)
			{
				temp=mat1[i][j];
				mat1[i][j]=mat1[j][i];
				mat1[j][i]=temp;
			}
		}
		printf("\ntranspose matrix\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("%d  ",mat1[i][j]);
			}
		printf("\n");
		}
	}
	else
	printf("enter valid dimentions\n");
	return 0;
}
