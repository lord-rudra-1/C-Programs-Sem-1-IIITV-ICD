#include<stdio.h>
int main(){
   
    int a=5,num=1,i,j;
  
        for(i=1;i<=5;i++){
                for(int j=5;j>0;j--){
                 if(i>=j){ printf("%d ",num); num++;}
                 else{ printf(" "); }
            }
     
            printf("\n");
        }
     return 0;
}
