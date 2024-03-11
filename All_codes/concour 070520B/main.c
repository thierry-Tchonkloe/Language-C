#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int c,d,l,n,i,j,tab[16],som=0,t=0,p[100];
do
    {
        t=0;
for(i=0;i<4;i++)
{
   scanf("%d %d %d %d",&c,&d,&l,&n);
}
if(c<1000||d<1000||l<1000||n<1000)
   p[t]=0;
else
{
   for(i=0;i<16;i++)
   {
       for(j=1;j<=1000;j+=10)
        tab[i]=c%(j*10)/j;
       for(j=1;j<=1000;j+=10)
        tab[i+4]=d%(j*10)/j;
        for(j=1;j<=1000;j+=10)
        tab[i+8]=l%(j*10)/j;
        for(j=1;j<=1000;j+=10)
        tab[i+11]=n%(j*10)/j;
   }
   for(i=0;i<16;i++)
   {
       if(tab[i]%2!=0)
        tab[i]=2*tab[i];
       if(tab[i]>=10)
        tab[i]=tab[i]-9;
   }
   for(i=0;i<16;i++)
   {
      som=som+tab[i];
   }
   if(som%10!=0)
    p[t]=0;
   else
    p[t]=1;
}
t++;
    }
  while(c!=0&&d!=0&&l!=0&&n!=0);
  for(j=0;j<t;j++)
    {
    if(p[j]==0)
    printf("\nNos");
    else if(p[j]==1)
     printf("\nYes");
    }
    return 0;
}
