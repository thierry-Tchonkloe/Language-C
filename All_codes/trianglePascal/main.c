#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* long fact(long n)
{
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
long comb(long n,long p)
{
    return fact(n)/(fact(p)*fact(n-p));
}
int main()
{
    long n,i,j;
    scanf("%d",&n);
   /* int c[n][n];
    for(i=0;i<=n;i++)
    {
      c[i][i]=1;
      c[i][0]=1;
      for(j=0;j<i;j++)
            c[i][j]=c[i-1][j-1]+c[i-1][j];
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%ld",comb(i,j));
        }
        printf("\n");
    }
}*/
    //system("PAUSE");*/
/*int t(int n)
{
    if(n==0)
        return 0;
    return n+t(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",t(n));
    return 0;
}*/
/*int t(int a,int n)
{
    if(n==0)
        return 1;
    return a*t(a,n-1);
}
int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    printf("%d",t(a,n));
    return 0;
}*/
/*int pgcd(int a,int b)
{
int r;
if(b==0)
return a;
else
{
r=a%b;
return pgcd(b,r);
}
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",pgcd(a,b));
    return 0;
}*/
int t(char* x,char* y)
{
    int i,a=1;
    if(strlen(x)!=strlen(y))
        return 0;
    else
    {
        for(i=0; i<strlen(x); i++)
        {
            if(x[i]!=y[strlen(x)-i-1])
                a=0;
        }
        if(a==1)
            return 1;
        else
            return 0;
    }
}
int main()
{
    char x[20],y[20];
    scanf("%s %s",&x,&y);
    if(t(x,y)==1)
        printf("\noui\n");
    else
        printf("\nnon\n");
 return 0;
}
/*void supr(char *text,char x)
{
    int i,j;
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]==x)
        {
            for(j=i;text[j]!=0;j++)
                text[j]=text[j+1];
            i--;
        }
    }
}*/
/*char t(char* x,int n)
{
     int i;
     if(n==1)
        return *x;
     else
     {
      for(i=0;i<n;i++)
      return x[n-i-1];
     }
}
int main()
{
    char x[20];
    scanf("%s",&x);
     printf("%s",t(x,strlen(x)));
     return 0;
}*/
/*int som(int x,int n)
{
    int i,s;
    for(i=1;i<=n;i++)
     return t(x,i);
}*/
/*int t(int x,int n)
{
    int i;
      if(n==0)
        return 1;
      if(n%2==1)
        return pow(x,n-1);
      if(n%2==0)
       return pow(x,n/2)*pow(x,n/2);
}
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    printf("%d",t(x,n));
    return 0;
}*/
/*int t(int a,int n)
{
    if(n==0)
        return 1;
    return a*t(a,n-1);
}
int main()
{
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    b=t(a,b);
    printf("%d",t(x,b));
    return 0;
}*/
/*int t(int a,int n)
{
}
int main()
{

    return 0;
}*/
/*int t(int *tab,int n)
{
    if
}
int main()
{
    int tab[];
    scanf("%d %d %d",&x,&a,&b);
    b=t(a,b);
    printf("%d",t(x,b));
    return 0;
}*/
