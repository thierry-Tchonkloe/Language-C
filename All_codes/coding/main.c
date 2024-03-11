#include <stdio.h>
#include <stdlib.h>
/*int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    if(r/90%2==1)
        printf("%d",n);
    else
    printf("safe");
    return 0;
}*/
/*int min(int a,int b,int c)
{
    if(b>c)
    b=c;
    if(a>b)
    a=b;
    return a;
}
int main()
{
    int n,i=0,a=0,b=0,c=0;
    char tab[50];
    scanf("%s",tab);
    for(i=0;i<strlen(tab);i++)
    {
        if(tab[i]=='T')
            a++;
        else if(tab[i]=='C')
            c++;
        else if(tab[i]=='G')
            b++;
    }
    printf("%d",a*a+b*b+c*c+7*min(a,b,c));

    return 0;
}*/
int main()
{
   int n,a,b,c,d,i,j;
   char ca;
   scanf("%d",&n);
   int tab[n][2];
   for(i=0;i<n;i++)
    {
      scanf("%s %d %d %d",&ca,&a,&b,&c);
       if(ca=='B')
       {
           d=c;
           c=(c-a)%60;
           if(d-a<0)
           {
               c=-c;
           b=(b-1)%24;
           }
           else
            b=b%24;
       }
       if(b<0)
        b=-b;
       else if(ca=='F')
       {
          d=c;
          c=(a+c)%60;
          b=(b+(a+d)/60)%24;
       }
       tab[i][0]=b;
       tab[i][1]=c;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",tab[i][j]);
        printf("\n");
    }
    return 0;
}
