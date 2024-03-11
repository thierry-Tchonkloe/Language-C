#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i=0,p=0;
    char x[100],y[100];
    scanf("%d %s %s",&n,&x,&y);
    if(n%2==0)
    {
    if(strcmp(x,y)!=0)
    printf("Deletion failed");
    else if(strcmp(x,y)==0)
      printf("Deletion succeeded");
    }
    else
    {
    if(strcmp(x,y)==0)
    printf("Deletion failed");
    else if(strcmp(x,y)!=0)
      printf("Deletion succeeded");
    }
    return 0;
}
