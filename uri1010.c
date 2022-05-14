#include<stdio.h>
int main()
{
    float p1,p2,total;
    int c1,c2,u1,u2;
    scanf("%d %d %f",&c1,&u1,&p1);
    scanf("%d %d %f",&c2,&u2,&p2);
    total = p1*u1+p2*u2;
    printf("VALOR A PAGAR: R$ %0.2f\n",total);
    return 0;
}
