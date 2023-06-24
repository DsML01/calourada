#include <stdio.h>
int main (){
double pavela,pcaramelo,ppassas,qavela,qcaramelo,qpassas;
scanf("%lf%lf%lf%lf%lf%lf", &pavela,&pcaramelo,&ppassas,&qavela,&qcaramelo,&qpassas);
printf ("Valor:R$%.2lf\n", (pavela*qavela)+(pcaramelo*qcaramelo)+(ppassas*qpassas));
return 0;
}