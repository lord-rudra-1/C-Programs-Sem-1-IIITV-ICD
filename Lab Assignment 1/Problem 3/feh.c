#include <stdio.h>
int main()
{
    float c, f;
    printf("enter the temp in celcius");
    scanf("%f", &c);
    f = (1.8 * c) + 32;
    printf("temp in F : %f", f);
    return 0;
}
