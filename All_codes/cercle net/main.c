#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,p=1;
    while(p==1)
    {
     system("clear");
    printf("entrer le rayon de votre cercle:\n");
    scanf("%i",&n);
    for(i=-n;i<n+1;i+=1)
    {
                 printf("\n");
        for(j=-n;j<n+1;j+=1)
        {
            if((i*i)+(j*j)==(n*n))
            {
                printf("0");
            }
            else
            {
                printf("  ");
            }
        }
    }
    printf("\n\nrepeter (oui=>1)?");
    scanf("%i",&p);
    }
    system("clear");
    printf("\n=========> AUREVOIR <=========\n");
    return 0;
}
