#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,m=0,s=0;
    for(i=2;i<100;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
             m++;
            }
        }
        if(m==1)
         {
       s=s+i;
         }
    }
    printf("%d",s);
    return 0;
}
