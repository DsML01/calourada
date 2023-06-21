#include <stdio.h>
 int main () {
  double N1,N2,N3;
  int count=0;
  scanf("%lf%lf%lf", &N1,&N2,&N3);
  double media = (N1 + N2 + N3)/3;
   if (N1>media){
      count++;
    }
   if (N2>media){
      count++;
    }
   if (N3>media){
      count++;
   }
  printf ("%d\n", count);
 return 0;
 }