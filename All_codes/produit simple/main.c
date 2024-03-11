#include <stdio.h>
#include <stdlib.h>

void produit(int* a,int* b,int* c)
{
    *c=(*a)*(*b);
}
int main()
{
    int c=0,a,b;
    printf("entrer le premier nombre\n");
    scanf("%d",&a);
     printf("entrer le second nombre\n");
    scanf("%d",&b);
    produit(&a,&b,&c);
        printf("%d*%d=%d\n",a,b,c);
    return 0;
}
