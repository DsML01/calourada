#include <stdio.h>
 int main() {
  double R1, R2;
  double pi = 3.14;
  scanf ("%lf%lf", &R1, &R2);
  double C1 = R1*pi;
  double C2 = R2*pi;

  if (C1>C2){
    printf("Primeiro Circulo\n");
  }
  else if (C1<C2){
    printf("Segundo Circulo\n");
  }
  else if (C1=C2){
    printf("Iguais\n");
  }
 return 0;   
 }