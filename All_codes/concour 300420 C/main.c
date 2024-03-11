#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    do
    {
      scanf("%d \r",&N);
    }
  while(N<1);
  int C[N];
  for(i=0;i<N;i++)
  {
      scanf("%d",&C[i]);
  }
  for(i=0;i<N;i++)
  {
      printf("%d %d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S) \n",i+1,C[i]/25,(C[i]-(C[i]/25)*25)/10,((C[i]-(C[i]/25)*25)-((C[i]-(C[i]/25)*25)/10)*10)/5,(((C[i]-(C[i]/25)*25)-((C[i]-(C[i]/25)*25)/10)*10)-(((C[i]-(C[i]/25)*25)-((C[i]-(C[i]/25)*25)/10)*10)/5)*5)/1);
  }
    return 0;
}
