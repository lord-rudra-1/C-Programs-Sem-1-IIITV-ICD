#include <stdio.h>
int main() {
float s1,s2,s3,s4,s5,pom; //marks in subject,percentage of marks
printf("enter your marks of all five subjects\n");
scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
pom = (s1+s2+s3+s4+s5)/5;
if(pom>90){
printf("Your grade is 'A' !!!\n");
}
else if(pom>80){
printf("Your grade is 'B' !!!\n");
}
else if(pom>70){
printf("Your grade is 'C' !!!\n");
}
else if(pom>60){
printf("Your grade is 'D' !!!\n");
}
else if(pom>50){
printf("Your grade is 'E' !!!\n");
}
else if(pom<50){
printf("Your grade is 'F' !!!\n");
}
return 0;
}
