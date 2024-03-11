#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int n,t=1;
    double Un;
   do
    {
    do
    {
     printf("Entrer l'entier relatif positif n dont vous voulez determiner son image par la suite de fibonaccie:\n");
     scanf("%d",&n);
    }
     while(n<0||n%1!=0);
    //Un=((5+sqrt(5))/10)*pow(((1+sqrt(5))/2),n)+((5-sqrt(5))/10)*pow(((1-sqrt(5))/2),n);
    printf("U%d=%.0lf",n,((5+sqrt(5))/10)*pow(((1+sqrt(5))/2),n)+((5-sqrt(5))/10)*pow(((1-sqrt(5))/2),n));
    printf("\n\n\n repeter(oui=>1)");
    scanf("%i",&t);
    }
   while(t==1);
    return 0;
}
