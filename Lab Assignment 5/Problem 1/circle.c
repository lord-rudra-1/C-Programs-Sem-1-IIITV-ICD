#include<stdio.h>
float area (float);
int main ()
{
	float r;
	printf("enter the radius of the circle\n");
	scanf("%f",&r);
	
	printf("The area of the circle is : %f\n",area (r));

	return 0;
}

float area (float r)
{
	float ans = 3.14*r*r;
	return ans;
}
