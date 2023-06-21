#include <stdio.h>
#include <stdlib.h>
    int main()
    {
       int number;
       scanf("%d", &number);
       if(number>7){
        printf("Basica\n");

       }else if(number < 7){
        printf("Acida\n");

       }else{
        printf("Neutra\n");
       }
       return 0;
    }
    