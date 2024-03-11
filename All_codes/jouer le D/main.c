#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* lancer()

int main()
{
  int tab[4],i=0;

  for(i=0;i<4;i++)
  {
        tab[i]=0;
  tab[i]=(rand()%6) +1;
  }
    return 0;
}
