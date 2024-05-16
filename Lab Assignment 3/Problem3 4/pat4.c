#include<stdio.h>
int main()
{ 
    int a=5,i,j;
  
    for(i=a;i>0;i--)
    {
	    for(int j=1;j<=a;j++)
	    {
			if(j>=i)
				printf("* ");
			
    		else
    			printf(" ");
    		
   		}
   		 printf("\n");
	}
	
	return 0;
}
