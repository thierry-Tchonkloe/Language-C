#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* fichier = NULL;
      char *nom;
    fichier = fopen("gilles.txt","w+");
   // fwrite("%s","maxwell tu sais que thierry est vraiment beni de dieuil est actuellement en intelligence artificielle au USAjuste à la fin de ses etudes",50,fichier);
    while(fscanf(fichier, "%s",nom) != -1)
        {
            //fgets("vous etes pas normal");
            printf("%s\n", nom);
            fclose(fichier);
        }

    return 0;
}
