#include <stdio.h>
#include <stdlib.h>

int pgcd(int a,int b)
{
    int r,c;
    if(a<0)
    {
        a=-a;
    }
    if(b<0)
    {
        b=-b;
    }
    if(a<b)
    {
        r=a;
        a=b;
        b=r;
    }
    if(b==0)
    {
        c=a;
    }
    else
    {
        while(b!=0)
        {
            r=a%b;
            a=b;
            b=r;
        }
        c=a;
    }
    return c;
}
int pgcd(int a,int b);
int main()
{
    int a,b,d,e;
    printf("veuillez suivre les indications suivantes:\n");
    do
    {
       printf("entrer le numerateur de votre fraction:");
    scanf("%d",&a);
    printf("entrer le denominateur de votre fraction:");
    scanf("%d",&b);
    }
    while(b==0);
    d=a/(pgcd(a,b));
    e=b/(pgcd(a,b));
    if(e==-1)
    {
            printf("\n");
    printf("la forme irreductible de votre fraction est: %d",-d);
    }
    else if(e==1)
    {
            printf("\n");
         printf("la forme irreductible de votre fraction est: %d",d);
    }
    else
    {
            printf("\n");
        printf("la forme irreductible de votre fraction est:%d/%d",d,e);
    }
        printf("\n");
    return 0;
}
