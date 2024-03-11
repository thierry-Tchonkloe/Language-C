#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,p=1;
    while(p==1)
    {
    do
    {
    printf("entrer l'entier naturel qui represente la hauteur de votre triangle:\n");
    scanf("%d",&n);
    }
    while(n<=1);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
          printf("   ");
        }

        for(j=1;j<=2*i-1;j++)
            printf(" T ");

        printf("\n");
    }
    printf("\n\n repeter (oui=>1)");
    scanf("%i",&p);
    }
    printf("\n\n\n     ========>au revoir<=========    \n\n");
    return 0;
}
