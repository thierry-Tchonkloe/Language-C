/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*int main()
{
    int i;
    char tab[2048];
    scanf("%s",&tab);
    for(i=1;i<strlen(tab);i++)
    {
        if(((tab[i-1]==':'||tab[i-1]==';')&&tab[i]==')')||(tab[i-1]==':'||tab[i-1]==';')&&(tab[i]=='-'&&tab[i+1]==')'))
        {
          printf("%d\n",i-1);
        }
    }
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{
    if(a<b)
        return b;
    else
        return a;
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",max(b-a,c-b)-1);
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a-c>1&&b-d>1)
        printf("1");
    else
        printf("0");
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ag[11];
     int i,ta[10],s;
    scanf("%s",&ag);
    for(i=6;i<10;i++)
        ag[i]=ag[i+1];
    for(i=0;i<10;i++)
    {
      char tab[2]={ag[i],' '};
      ta[i]=atoi(tab);
    }
    s=4*ta[0]+3*ta[1]+2*ta[2]+7*ta[3]+6*ta[4]+5*ta[5]+4*ta[6]+3*ta[7]+2*ta[8]+1*ta[9];
    if(s%11==0)
    printf("1");
    else
    printf("0");
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int som(int *tab,int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s=s+tab[i];
    return s;
}
int main()
{
    int n,s,s1,i;
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&tab[i]);
    }
    s=som(tab,n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&tab[i]);
    }
    s1=som(tab,n-1);
    printf("%d",s-s1);
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int a,n,i,j,b=0,c=0;
    scanf("%d %d",&a,&n);
    int tab[n];
    for(j=0;j<n;j++)
        scanf("%d",&tab[j]);
    for(i=0;i<a;i++)
    {
        b=0;
        for(j=0;j<n;j++)
        {
          if(i==tab[j])
           b++;
        }
        if(b==0)
        {
            printf("%d\n",i);
            c++;
        }
    }
    printf("Mario got %d of the dangerous obstacles.",min(n,a-c));
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int som(int *tab,int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s=s+tab[i];
    return s;
}
int main()
{
   int n,i;
   scanf("%d",&n);
   int tab[n],ta[n];
   for(i=0;i<n;i++)
   {
       scanf("%d %d",&tab[i],&ta[i]);
   }
   if(som(ta,n)*1.0/(60*som(tab,n))>1)
   printf("%0.9lf",som(ta,n)*1.0/(60*som(tab,n)));
   else
    printf("measurement error");
   return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float tab[n],ta[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&tab[i],&ta[i]);
        if(i!=0)
        s=s+((ta[i-1]+ta[i])*1.0/2)/((tab[i]-tab[i-1])*1.0/1000);
    }
    if(s/2==s*1.0/2)
       printf("%0.0lf",s);
    else
    printf("%0.6lf",s);
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int tab[n],ta[n],pa[n];
    for(i=0;i<n;i++)
        scanf("%d %d %d",&tab[i],&ta[i],&pa[i]);
    for(i=0;i<n;i++)
    {
        if(ta[i]*tab[i]==pa[i]||ta[i]-tab[i]==pa[i]||ta[i]+tab[i]==pa[i]||(ta[i]/tab[i]==pa[i]&&ta[i]%tab[i]==0)||tab[i]-ta[i]==pa[i]||(tab[i]/ta[i]==pa[i]&&tab[i]%ta[i]==0))
            ta[i]=1;
        else
            ta[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(ta[i]==1)
            printf("Possible\n");
        else if(ta[i]==0)
            printf("Impossible\n");
    }
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&tab[i]);
       if(tab[i]<0)
           a++;
    }
    printf("%d",a);
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    double c;
    scanf("%d %d %lf",&a,&b,&c);
    if(b*1.0/a<=c)
        printf("spela inte!");
    else
        printf("spela");
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float tab[n][3],b,p;
    for(i=0;i<n;i++)
    {
       scanf("%f %f",&b,&p);
       tab[i][0]=60*b*1.0/p-60*1.0/p;
       tab[i][1]=60*b*1.0/p;
       tab[i][2]=60*b*1.0/p+60*1.0/p;
    }
    for(i=0;i<n;i++)
    {
        printf("%0.4f %0.4f %0.4f\n",tab[i][0],tab[i][1],tab[i][2]);
    }
    return 0;
}*/

/*int main()
{
    int tab[2][3],i,j;
    double s;
    for(i=0;i<2;i++)
        scanf("%d %d %d",&tab[i][0],&tab[i][1],&tab[i][2]);

    s=tab[0][0]*1.0/tab[1][0];
   /* for(j=0;j<3;j++)
        {
            if(s>tab[0][j]*1.0/tab[1][j])
                s=tab[0][j]*1.0/tab[1][j];
        }
    printf("%0.6f %0.6f %0.6f",tab[0][0]-s*tab[1][0],tab[0][1]-s*tab[1][1],tab[0][2]-s*tab[1][2]);
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i=1,a=1;
    scanf("%d",&n);
    while(a!=n)
    {
       a=a*i;
       i++;
    }
    printf("%d",i-1);
    return 0;
}
*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,a=0;
    scanf("%d",&n);
    char tab[15],ta[15];
    gets("ta");
    gets("tab");
    for(i=0;i<15;i+=2)
    {
        if(ta[i]!=tab[i])
         a++;
    }
    printf("%0.2f",100-(100*a*1.0/8));
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char tab[100];
    scanf("%s",&tab);
    for(i=0;i<strlen(tab);i++)
    {
        if(tab[i]=='0')
            tab[i]='1';
        else
            tab[i]='0';
    }
    printf("%s",tab);
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long tab[n],ta[n];
    for(i=0;i<n;i++)
    {
      scanf("%ld %ld",&tab[i],&ta[i]);
      ta[i]=ta[i]*ta[i]*tab[i];
    }
    for(i=0;i<n;i++)
        printf("\n%ld",ta[i]);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&tab[i]);
    if(tab[i]%2==0)
      tab[i]=tab[i]*3;
    else
        tab[i]=tab[i]*5;
    s=s+tab[i];
    }
    printf("%d",s);
    return 0;
}
