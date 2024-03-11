#include <stdio.h>
#include <stdlib.h>

int main()
{
   float tab[50][50],c;
    int i,j,n,k=1,t=1;
    while(t==1)
    {
    printf("entrer l'ordre de la matrice:\n");
    scanf("%d",&n);

    while(n<=1)
    {
        printf("desole ! nombre invalide l'ordre de la matrice doit etre de nombre entier superieur a un \n");
     printf("entrer l'ordre de la matrice:\n");
    scanf("%d",&n);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Entrer le nombre du %d eme ligne %d eme colonne de la matrice:",i+1,j+1);
            scanf("%f",&tab[i][j]);
        }
        printf("\n");
    }
      do
      {

     for(i=k;i<n;i++)
     {
         c=tab[i][k-1]/tab[k-1][k-1];
         for(j=0;j<n;j++)
         {
            tab[i][j]=tab[i][j]-c*tab[i-1][j];
         }
     }
       k++;
     }
     while(k<n);

      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
            printf("|%f|",tab[i][j]);
          }
          printf("\n");
      }
printf("\n\n repeter(oui=>1)\n\n");
scanf("%i",&t);
    }
printf("==============> AUREVOIR <==============");
    return 0;
}

