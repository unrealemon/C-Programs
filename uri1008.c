#include<stdio.h>
int main()
{
    int a,b;
    float c;
    double s;
    scanf("%d %d %f",&a,&b,&c);
    s=b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %0.2lf\n",s);
    return 0;
}
