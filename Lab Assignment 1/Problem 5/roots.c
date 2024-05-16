#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("enter cofficient of x^2");
    scanf("%d", &a);
    printf("enter cofficient of x");
    scanf("%d", &b);
    printf("enter the constant");
    scanf("%d", &c);
    float d = sqrt((b * b) - (4 * a * c));
    float e = (-b + d) / (2 * a);
    float f = (-b - d) / (2 * a);
    printf("roots of equation are :\n %f\n %f \n", e, f);
    return 0;
}
