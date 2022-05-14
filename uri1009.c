#include<stdio.h>
int main()
{
    char name[30];
    float salary;
    double sels,total;
    gets(name);
    scanf("%f %lf",&salary,&sels);
    total = salary + ((sels*15)/100);
    printf("TOTAL = R$ %0.2lf\n",total);
    return 0;
}
