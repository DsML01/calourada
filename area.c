#include <stdio.h>
int main (){
 float A;
 float B;
 float C;
 float pi = 3.14159;

  scanf("%f %f %f", &A, &B, &C);

  printf ("Triangulo %.3f\n", ( (A*C)/2 ));
  printf ("Circulo %.3f\n", (pi*(C*C)));
  printf ("Trapezio %.3f\n", (((A+B)*C)/2));
  printf ("Quadrado %.3f\n", (B*B));
  printf ("Retângulo %.3f\n", (A*B));
return 0;
}


