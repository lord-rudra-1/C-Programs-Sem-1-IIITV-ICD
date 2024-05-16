#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the numbers");
    scanf("%d %d %d", &a, &b, &c);
    int d = (a == b);
    int f = (b == c);
    int e = (a == c);
    printf("%d\n %d\n %d\n", d, e, f);
    return 0;
}
