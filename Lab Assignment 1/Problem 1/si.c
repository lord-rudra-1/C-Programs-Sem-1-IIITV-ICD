#include <stdio.h>
int main()
{
    float a, b, c, d;
    printf("enter the principle amount");
    scanf("%f", &a);
    printf("enter the rate of interest");
    scanf("%f", &b);
    printf("enter the time in years");
    scanf("%f", &c);
    d = a * b * c * 0.01;
    printf("Your Simple interest is: %f\n", d);
    return 0;
}
