#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Xa,Xb,Ya,Yb,p=1;
    double a,b;

    do
    {
    printf(" Pour A(Xa,Ya)entrer l'abscice Xa du Point A:");
    scanf("%d",&Xa);
    printf(" Pour A(Xa,Ya)entrer l'ordonnee Ya du Point A:");
    scanf("%d",&Ya);
    printf(" Pour B(Xb,Yb)entrer l'abscice Xb du Point B:");
    scanf("%d",&Xb);
    printf(" Pour B(Xb,Yb)entrer l'ordonnee Yb du Point B:");
    scanf("%d",&Ya);
    if(Xa==Xb||Ya==Yb)
    {
        a=0;
    }

    else
    {
        a=(Yb-Ya)/(Xb-Xa)*1.0;
    }
    b=Ya-a*Xa;
    printf("l'equation reduite de la droite (AB) est: Y=%lf*X + %lf",a,b);

    printf("\n\n\n voulez vous repeter? (oui=>1):");
    scanf("%d",&p);
    }
    while (p==1);
    printf("\n\n\n    ==============> au revoir <============= \n\n\n");
    return 0;
}
