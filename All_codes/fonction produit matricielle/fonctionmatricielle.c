
for (i=0;i<n;i++)
     {
         for (j=0;j<r;j++)
         {
             tab[i][j]=0;
             for(k=0;k<q;k++)
             {
                 tab[i][j]=tab[i][j]+tabi[i][k]*tabl[k][j];
             }
                 printf("| %f |",tab[i][j]);
         }
             printf("\n");
      }

    return 0;
