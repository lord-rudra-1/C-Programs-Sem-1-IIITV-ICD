#include <stdio.h>
int main()
{
    int x1, x2, y1, y2;
    printf("enter the x1,y1\n");
    scanf("%d %d", &x1, &y1);
    printf("enter the x2,y2\n");
    scanf("%d %d", &x2, &y2);
    float m1 = (x1 + x2) / 2;
    float m2 = (y1 + y2) / 2;
    printf("coordinates of midpoint:(%f ,%f )", m1, m2);
    return 0;
}
