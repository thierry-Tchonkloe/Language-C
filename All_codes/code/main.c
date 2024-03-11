#include <stdio.h>
#include <stdlib.h>
int max(int *tab,int n)
{
   int i;
   for(i=1;i<n;i++)
   {
       if(tab[i]>tab[0])
        tab[0]=tab[i];
   }
   return tab[0];
}
int main()
{
    int n,i;
    scanf("%d ",&n);
    int tab[n],ta[n];
    for(i=0;i<n;i++)
        scanf("%d %d",&tab[i],&ta[i]);
    for(i=n-1;i>=1;i--)
       tab[i]=(ta[i]-ta[i-1])/(tab[i]-tab[i-1]);
    printf("%d",max(tab,n));
    return 0;
}
