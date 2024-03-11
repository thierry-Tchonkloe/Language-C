#include <stdio.h>
#include <stdlib.h>
int min(int a,int b)
{
    if(a<=b)
    {
        return a;
    }

    else
    {
        return b;
    }

}

int main()
{
    int t,i,a,b,n;
    do
    {
        scanf("%d",&t);

    }
    while(t<1||t>10000);
    int x[t],m[t],d[t];

    for(i=0; i<t; i++)
    {
        do
        {

            scanf("%d %d %d",&x[i],&m[i],&d[i]);
        }
        while((x[i]<1||x[i]>10)||(m[i]<1||m[i]>10)||(d[i]<0||d[i]>=100));
    }

    printf("\n\n");
    for(i=0; i<t; i++)
    {
        a=x[i]*m[i];
        b=x[i]+d[i];
        n=min(a,b);
        printf("%d \n",n);
    }

    return 0;
}
