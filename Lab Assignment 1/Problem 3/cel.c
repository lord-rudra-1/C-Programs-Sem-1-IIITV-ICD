#include <stdio.h>
int main()
{
    float c, f;
    printf("enter the temp in fehrenheit");
    scanf("%f", &f);
    c = (f - 32) * 0.5556;
    printf("temp in F : %f", c);
    return 0;
}
