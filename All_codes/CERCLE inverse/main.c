#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
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
            printf(" t ");

        printf("\n");
    }

    for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=1;j--)
        {
          printf("   ");
        }

        for(j=2*i-1;j>=1;j--)

            printf(" t ");

        printf("\n");
    }
    return 0;
}
