#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b;
    char operateur,l;
    printf("Entrer votre operation:\n");
    scanf("%d %c %d",&a,&operateur,&b);
    if(operateur=='+')
    {
        if(a+b<0)
        {
            printf("  %d\n+\n  %d\n=-%d",a,b,-(a+b));
            /*char p='a';
            l=strcat(p,operateur)
            printf("%d",strlen(strcat(a,operateur)));*/

        }
        else
        {
            printf("  %d\n+\n  %d\n= %d",a,b,(a+b));
        }
    }
    return 0;
}
