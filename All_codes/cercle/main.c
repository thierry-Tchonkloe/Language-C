#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i=0,j=0;
    scanf("%d",&n);
    for(i=0; i<=(2*n)+1; i+=1)
    {
        for(j=0; j<=(2*n)+1; j+=1)
        {
            if((i-n)*(i-n)+(j-n)*(j-n)-(n*n)==0)
                printf(" @");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
