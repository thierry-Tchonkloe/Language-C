#include <stdio.h>
#include <stdlib.h>
#include "suite.h"

int main()
{
    int n,suite,p=1;
    while(p==1)
    {
    do
       {
    printf("Choisisser entre les suites suivantes en prenant le numero conforme a la votre travail:\n\n");
    printf("1-Fibonacci: Uo=U1=0 ET Un=U(n-1)+U(n-2):\n\n2-geometrique: Uo=1 ET Un=3U(n-1):\n\n3-arithmetique simple: Uo=1 ET Un=7+U(n-1):\n\n");
    scanf("%d",&suite);
        }
    while(suite!=1&&suite!=2&&suite!=3);

    switch(suite)
      {
        case 1:
        do
        {
        printf("entrer l'entier positif dont vous voulez determiner son image par suite de fibonacci\n");
        scanf("%d",&n);
        }
        while(n<0||n%1!=0);
        printf("c'est: %d\n\n",fibo(n));
        break;

        case 2:
            do
            {
               printf("entrer l'entier positif dont vous voulez determiner son image par suite geometrique\n");
        scanf("%d",&n);
            }
        while(n<0||n%1!=0);
        printf("c'est: %d\n\n",geome(n));
        break;

        case 3:
            do
            {
                  printf("entrer l'entier positif dont vous voulez determiner son image par suite arithmetique simple\n");
        scanf("%d",&n);
            }
        while(n<0||n%1!=0);
        printf("c'est: %d\n\n",arithm(n));
        break;

        default :
            {
                printf("error");
            }
      }
        printf("\n\n repeter (oui=>1)\n\n");
        scanf("%i",&p);

    }
    printf(" \n\n\n            ===========>AU REVOIR <=============     \n\n\n");
    return 0;
}

