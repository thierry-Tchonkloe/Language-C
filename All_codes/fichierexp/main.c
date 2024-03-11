#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fichier = NULL;
   float score[3] = {0};
    fichier = fopen("te.txt", "r");
    if (fichier != NULL)
        {
            fscanf(fichier, "%f %f %f", &score[0], &score[1], &score[2]);
            printf("Les meilleurs scores sont : %0.2f %0.2f %0.2f",score[0],score[1],score[2]);
            fclose(fichier);

        }

    return 0;
}
/*int main(int argc, char *argv[])
 {
      FILE* fichier = NULL;
      float score[3] = {0}; // Tableau des 3 meilleurs scores
      fichier = fopen("te.txt", "r");
      if (fichier != NULL)
            {
                fscanf(fichier, "%f %f %f", &score[0], &score[1], &score[2]);
                printf("Les meilleurs scores sont : %0.2f, %0.2f et %0.2f", score[0], score[1], score[2]);
                fclose(fichier);
           }
    return 0;
 }*/
