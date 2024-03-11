#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double esposant(double reel,int nbr2)
{

    /*while (nbr2>1)
    {
        nbr2--;
    }*/
    if(nbr2==1)
        return reel;
    return reel*esposant(reel,nbr2-1);

}
double esposant(double reel,int nbr2);
int main()
{
    int n;
    double x;
    printf("entrer x et n \n");
    scanf("%lf %d",&x,&n);
    //t=pow(x,n);
    printf("%lf",esposant(x,n));
     return 0;
}
