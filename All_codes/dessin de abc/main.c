#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i=0,j=0,k;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
               if(j<n-i)
                    printf(" ");
               else
               printf("%c",97+(2*n-i-j)%26);
            }
            for(j=n;j<=2*n-1;j++)
            {
                if(j<=n+i)
                 printf("%c",97+(n+i-1)%26);
                else
                 printf(" ");
            }
            printf("\n");
        }
        for(i=n;i<=2*n-1;i++)
        {
            for(j=0;j<n;j++)
            {
               if(j<i-n)
                    printf(" ");
               else
               printf("%c",97+(2*n-i-j)%26);
            }
            for(j=n;j<=2*n-1;j++)
            {
                if(j<=i-n)
                 printf("%c",97+(n+i-1)%26);
                else
                 printf(" ");
            }
            printf("\n");
        }

    return 0;
}
