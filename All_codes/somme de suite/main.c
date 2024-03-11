#include <stdio.h>
#include <stdlib.h>
#include "sommesuite.h"
int main()
{
    int nbr2,a,i,p=1,fact;
    double reel,somme=0,ex;
    while (p==1)
    {
    printf("votre suite est somme de:\n\n Sn(x)=Xn(((-1)^n)*((x^n+1)/(2n+1)!)):\n\n\n entrer le reel x :");
    scanf("%lf",&reel);
    printf("entrer l'entier qui est l'ordre n jusqu'auquel vous voulez determiner la somme: ");
    scanf("%d",&nbr2);

     for(i=1;i<=nbr2;i++)
         {
         if (i%2==0)
             a=1;
         else
             a=-1;
         somme = somme + a*(ex=esposant(reel,i+1))/(fact=factorielle(2*i+1));
         }
    printf("la somme est:\n\n Sn(x)=%lf \n\n",somme);
    printf("\n voulez vous repeter(oui=>1)?");
    scanf("%d",&p);
    }
    printf("\n\n   ==========> au revoir <=========\n\n");
    return 0;
}
