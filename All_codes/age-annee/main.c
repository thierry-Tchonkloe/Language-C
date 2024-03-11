#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
int main()
{
    int n,i,j,m,a,t;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
    {
       do
        {
            scanf("%d %d %d",&j,&m,&a);
        }
        while(j<=0||j>31||m<=0||m>12||a>2023);
         t=2022-a;
            if(3<m)
                p[i]=t-1;
            else
            {
                if(m==3)
                {
                    if(27<j)
                      p[i]=t-1;
                     else
                      p[i]=t;
                }
                else
                p[i]=t;
            }
    }
    for(i=0;i<n;i++)
        printf("\n %d\n",p[i]);
    return 0;
}
