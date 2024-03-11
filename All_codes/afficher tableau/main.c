#include <stdio.h>
#include <stdlib.h>
int main()
{
int tab[16][16],i,j;
do
{
for(i=0;i<=15;i++)
{
    for (j=0;j<=15;j++)
    {
        if((i==7||i==8)&&(j==7||j==8))
        {
            printf("       ");
        }

        else if(((i==6||i==7||i==8)&&(j==1||j==2))||(((i==9||i==7||i==8)&&(j==13||j==14))||((i==7||i==8)&&(j>1&&j<=14)))||((j==9||j==7||j==8)&&(i==1||i==2))||(((j==6||j==7||j==8)&&(i==13||i==14))||((j==7||j==8)&&(i>1&&i<=14))))
        {
            printf("   0   ");
        }
        else if(j==15||j==0||j==7||j==8||j==6||j==9)
        {
            printf("   *   ");

        }
        else if(i==15||i==0||i==7||i==8||i==6||i==9)
        {
            printf("   *   ");
        }
        else
        {
            printf("       ");
        }
    }
    printf("\n\n\n");
}
}
while(i<=15&&j<=15);
return 0;
}


