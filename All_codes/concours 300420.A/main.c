#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=-1,j,R[10];
    float D[10],T[10];
        do
        {
            i=i+1;
            scanf("%f %d %f",&D[i],&R[i],&T[i]);
        }
        while(R[i]!=0);
        printf("\n\n");
        for(j=0;j<i;j++)
        {
            printf("Trip #%d: %0.2f  %0.2f \n",j+1,(D[j]*R[j]*3.1415927)/63360,((D[j]*R[j]*3.1415927)/63360)/(T[j]/3600));
        }
    return 0;
}
