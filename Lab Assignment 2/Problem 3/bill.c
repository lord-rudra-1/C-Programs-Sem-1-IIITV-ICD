#include <stdio.h>
int main() {
float u,t ;
printf("enter the number of units\n");
scanf("%f",&u);

if(u<=100){
    t=u;
    }
else if(u>100 && u<=300){
    t=(u*2);
    }
else if(u>300){
    t=(u*3);
}
float totalbill;
if(t<=1000){
totalbill = t +50;
}
else{
totalbill = t +50 +(t*0.15);
}
printf("Your Total Bill is %f\n",totalbill);
return 0;
}
