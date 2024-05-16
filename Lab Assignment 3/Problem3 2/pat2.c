#include<stdio.h>
int main(){
   
    int a=5,i,j;
  
        for(i=1;i<=5;i++)
        {
               for(int j=5;j>0;j--){
               if(i>=j){ printf("*");}
               else{ printf(" "); }
        }
     
            printf("\n");
        }
     return 0;
}
