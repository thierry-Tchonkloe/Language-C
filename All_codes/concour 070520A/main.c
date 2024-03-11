#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c,i=0,d,max[35];
    do
    {
        scanf("%d %d",&c,&d);
        max[i]=c*30+d*40;
        if(max[i]>c*35+d*30)
            max[i]=c*35+d*30;
        if(max[i]>c*40+d*20)
            max[i]=c*40+d*20;
            i++;
    }
    while(c!=0&&d!=0);
  for(c=0; c<i-1; c++)
    printf("%d\n",max[c]);
return 0;
}
