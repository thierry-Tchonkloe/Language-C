#include <stdio.h>
#include <stdlib.h>
int main()
{
    float tab[50][50];
    float tabi[50][50];
    float tabl[50][50];
    int i,j,k,n,p,q,r;
    printf("entrer le nombre de ligne de la premiere matrice:\n");
    scanf("%d",&n);
    printf("entrer le nombre de colonne de la premiere matrice:\n");
    scanf("%d",&p);
    printf("entrer le nombre de ligne de la deuxiemme matrice:\n");
    scanf("%d",&q);
    printf("entrer le nombre de colonne de la deuxiemme matrice:\n");
    scanf("%d",&r);
    while(n<=0||p<=0||q<=0||r<=0||p!=q)
    {
        printf("desole ! nombre invalide  avant tout produit matriciel le nombre de ligne et de colonne des matrices doivent etre des nombres entiers superieurs a zero et le nombre de colonne de la premiere matrice est egale au nombre de ligne de la deuxieme\n");
     printf("entrer le nombre de ligne de la premiere matrice:\n");
    scanf("%d",&n);
    printf("entrer le nombre de colonne de la premiere matrice:\n");
    scanf("%d",&p);
    printf("entrer le nombre de ligne de la deuxiemme matrice:\n");
    scanf("%d",&q);
    printf("entrer le nombre de colonne de la deuxiemme matrice:\n");
    scanf("%d",&r);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            printf("premier matrice ,entrer le nombre du %d eme ligne %d eme colonne:",i+1,j+1);
            scanf("%f",&tabi[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<q;i++)
    {
    for (j=0;j<r;j++)
        {
         printf("deuxieme matrice ,entrer le nombre du %d eme ligne %d eme colonne:",i+1,j+1);
            scanf("%f",&tabl[i][j]);
        }
        printf("\n");
    }
     for (i=0;i<n;i++)
     {
         for (j=0;j<r;j++)
         {
             tab[i][j]=0;
             for(k=0;k<q;k++)
             {
                 tab[i][j]=tab[i][j]+tabi[i][k]*tabl[k][j];
             }
                 printf("| %f |",tab[i][j]);
             }
             printf("\n");
         }

    return 0;
}
