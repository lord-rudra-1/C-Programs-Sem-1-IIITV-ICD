#include<stdio.h>
int main(){
   
    int a=5,i,j;
  
        for(i=a;i>0;i--)
        {
                for(int j=1;j<=i;j++){
                    printf(" ");
            }
            for(j=1;j<=2*a-2*i-1;j++)
            {
            printf("*");
            }
            printf("\n");
        }
         for(i=2;i<=a;i++)
         {
                for(int j=1;j<=i;j++)
                {
                    printf(" ");
                }
         for(j=1;j<=2*a-2*i-1;j++)
         {
            printf("*");
         }
            printf("\n");
         }
     return 0;
}
