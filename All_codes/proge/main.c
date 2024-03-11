#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,i,j,b=0,s=0;
    scanf("%d %d",&a,&b);
    if(b%a==0)
    {
       for(i=0;i<a;i++)
       {
           for(j=0;j<b/a;j++)
            printf("*");
            printf("\n");
       }

    }
    else
    {
         for(i=0;i<a;i++)
       {
           for(j=0;j<b/a;j++)
            printf("*");
            printf("\n");
       }


    }

    return 0;
}

