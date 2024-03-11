#include <stdio.h>
#include <stdlib.h>
    /*int fibo(int a)
    {
        if(a==0||a==1)
            return 1;
        return a*fibo(a-1);
    }*/
  int main()
    {
        int n;
        scanf("%d",&n);
        printf("\n%d\n",fibo(n));
  return 0;
    }
