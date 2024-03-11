#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float a,b,c,r,d,x1,x2,x0;
    int n;
printf ("entrer le coeficient du second degre:\n");
scanf("%lf",&a);
printf ("entrer le coeficient du degre 1:\n");
scanf("%lf",&b);
printf ("entrer le coeficient du degre 0:\n");
scanf("%lf",&c);

d=b*b-4*a*c;
float vare=10;

 if(d==0)
{
  r=sqrt(d);
  x1=(-b+r)/(2*a);
  x2=(-b-r)/(2*a);
   printf("votre polynome admet deux solutions %f et %f sa forme factorise est:(x-(%f))(x-(%f)):\n",x1,x2,x1,x2);
}
else if (d<0)
{
    printf("votre polynome n'admet pas de solution dans R,voulez vous le resultats en C? SI oui tapez 1 si non taper 0:\n");
    scanf("%d",&n);
    while(n!=0&&n!=1)
    {
     printf ("vous avez male choisi prenez le temp de bien lire ceci:");
      printf("votre polynome n'admet pas de solution dans R,voulez vous le resultats en C? SI oui tapez 1 si non taper 0:\n");
    scanf("%d",&n);
    }
    if(n==0)
    {
        printf("merci veulliez nous contacter pour tous vos factorisations ou recherches de solution d'equation du second degre en R ou en C");
    }
    if (n==1)
    {
        b=-b/(2*a);
        r=(sqrt(-d))/(2*a);
      printf("votre polynome admet deux solutions complexe:%f-( %f )i  et %f+( %f )i  sa forme factorise est:(x-( %f-( %f )i))(x-( %f+( %f )i)):\n",b,r,b,r,b,r,b,r);
    }
}
else
{
x0=-b/(2*a);
 printf("votre polynome admet une double solution %f et sa forme factorise est:(x-(%f))(x-(%f)):\n",x0,-x0,-x0);
}
    return 0;
}
