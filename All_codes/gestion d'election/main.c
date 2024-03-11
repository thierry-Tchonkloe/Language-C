#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct elec elec;
    struct elec
    {
        char candidat[1000];
        int s;
    };
    typedef struct gagnant gagne;
    struct gagnant
    {
        char candidat[1000];
        int s;
    };

int main()
  {
    int tour,p,com,i,k,l;
    char toto;
    do
        {
    scanf("%d",&tour);
        }
    while(tour<0||tour>1000);

    for(i=0;i<tour;i++);
    {
        do
        {
            scanf("%d %d",&p,&com);
        }
        while(p<1||p>100||com<1||com>1000);
        elec[p+1];
        for(k=0;k<p;k++)
        {
            scanf("%s",elec[i].candidat);
        }
        for(k=0;k<com;k++)
        {
          scanf("%s %d %s",elec[p].candidat,&elec[p].s,toto);
          for(l=0;l<p;l++)
          {
              if(strcmp(elec[p].candidat,elec[l].candidat)==0)
              {
                  elec[l].s+=elec[p].s;
                  l=p;
              }
          }
        }
        elec[p].s=elec[0].s;

       for(k=0;k<p;k++)
       {
           if(elec[p].s<elec[k].s)
           {
               elec[p].s=elec[0].s
               elec[p].candidat=elec[0].candidat
           }
       }
    }

/*do
        {
            do
                {
               printf("entrer le nombre de candidat et le nombre de centre\n");
               scanf("%d %d",&x,&c);
                }
            while(x<1||c<1);
         printf("Entrer le nom du candidat son resultat et le centre de vote\n");
         fgets("phrase");
        }
    while(i<=n);*/
    return 0;
}
