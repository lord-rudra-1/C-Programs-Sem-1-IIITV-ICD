#include<stdio.h>
int main() {
int year;
printf("enter the year\n");
scanf("%d",&year);
float d=(year%4);
if(d==0){
   printf("Your Year is a Leap Year !!\n");
}
else{
   printf("Your Year is NOT a Leap Year !!\n");
   }
return 0;
}
