#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,N5,avr;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    avr = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10.0;
    printf("Media: %0.1lf\n",avr);
    if(avr >= 7.0)
        printf("Aluno aprovado.\n");
    if(avr < 5.0)
        printf("Aluno reprovado.\n");
    if(avr >= 5.0 && avr<7.0){
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %0.1lf\n",N5);
        avr=(avr+N5)/2.0;
        if(avr >= 5.0)
            printf("Aluno aprovado.\n");
        if(avr<5.0)
            printf("Aluno reprovado.\n");
        printf("Media final: %0.1lf\n",avr);}
    return 0;

}
