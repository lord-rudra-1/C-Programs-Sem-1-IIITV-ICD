#include <stdio.h>
int main() {
int a,b,c ; //angles of triangle

printf("Enter the three angles of triangle\n");
scanf("%d %d %d",&a,&b,&c);

if(a==90 || b==90 || c==90){
       printf("Your triangle is Right Triangle\n");
}
if(a==b || b==c || c==a){
       printf("Your triangle is an Isoceles Triangle\n");
}
if(a==b==c==60){
       printf("Your triangle is Equilateral Triangle\n");
}
return 0;
}
