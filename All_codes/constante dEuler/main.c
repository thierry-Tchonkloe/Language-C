#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*fact(n-1);
}
double som(int p)
{
    if(p==0)
        return 1;
    return 1.0/fact(p)+som(p-1);
   // return 1.0/fact(p);
}
int main()
{
    int i;
    printf(" n e \n - -----------\n");
    for(i=0; i<10; i++)
    {
        printf(" %d %0.9f \n",i+1,som(i));
    }
    return 0;
}
