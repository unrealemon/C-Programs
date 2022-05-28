#include<stdio.h>
#include<math.h>

int main()

{
    double x1, y1, x2, y2, p1, p2, a;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    p1 = x2 - x1;
    p2= y2 - y1;
    a = sqrt((p1 * p1) + (p2 * p2));
    printf("%.4lf\n", a);
    return 0;

}
