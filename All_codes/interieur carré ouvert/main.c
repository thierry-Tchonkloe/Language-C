#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("entrer le nombre impair qui est le cote du carre6:");
    scanf("%d",&n);
    while(n%2!=1||n<5)
    {
    printf("veuillez entrer un nombre entier impair superieur ou egale à 5 :\n");
    scanf("%d",&n);
    }
    for (i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
        if((j<=n/2)&&(i+j)<=(n/2))
        {
            //if((i+j)<=(n/2))
            //{
                printf(" *");
            //}
        }
        if((j>n/2)&&(j-i>=n/2))
        {
            //if(j-i>=n/2)
           // {
                printf(" *");
           // }
        }

        if((j<=n/2)&&(j-i+n/2<=0))
        {
            //if (j-i+n/2<=0)
           // {
                printf(" *");
            //}
        }
         if((j>n/2)&&(i+j) >=3*(n/2))
        {
            //if( (i+j) >=3*(n/2) )
            //{
                printf(" *");
           // }
        }
    }
        printf("\n");

    }
   /* for (i=0;i<=n/2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(((i+j)<=(n/2))||((j-i>=-n/2)&&i>=n/2))
            {
                printf(" *");
            }
        }
        printf("\n");
    }
    for(i=n/2+1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if ((i-j+n/2<=0)||(i+j) >=3*(n/2))
            {
                printf(" *");
            }
        }
        printf("\n");
    }*/
    return 0;
}
