#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void supr(char *text,char x)
{
    int i,j;
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]==x)
        {
            for(j=i;text[j]!=0;j++)
                text[j]=text[j+1];
            i--;
        }
    }
}
int main()
{
    char ens1[20],ens2[20];
    int i,j,t=0;
   scanf("%s %s",&ens1,&ens2);
    for(i=0;ens1[i]!='\0';i++)
    {
        for(j=0;ens2[j]!='\0';j++)
        {
            if(ens1[i]==ens2[j])
            {
                supr(ens1,ens1[i]);
                supr(ens2,ens2[j]);

            }
          i--;
        }
    }

   strcat(ens1,ens2);

    for(i=0;i<strlen(ens1);i++)
    {
        for(j=0;j<strlen(ens1);j++)
        {
           if(i!=j&&ens1[i]==ens1[j])
            {

            supr(ens1,ens1[i]);

            }

        }
    }
    printf("%s",ens1);
    return 0;
}
