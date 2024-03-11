#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int main()
{
    int n;
    double aire;
    float r;
    printf("entrer le nombre de cote du polygone:\n");
    scanf("%d",&n);
    printf("entrer le rayon du cercle permettant l'obtension du polygone:\n");
    scanf("%f",&r);
    aire=n*r*r*sin(M_PI/n)*cos(M_PI/n);
    printf("l'aire du polygone est: %lf",aire);
    return 0;
}*/

int main()
{
int n;
float r;
scanf("%d %f",&n,&r);
printf(" \n%lf\n",n*r*r*sin(M_PI/n)*cos(M_PI/n));
return 0;
}
