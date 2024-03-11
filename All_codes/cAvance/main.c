#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PCellule* PCellule;
typedef void Object*;
typedef struct Celluledbl* CelluleDbl;
typedef struct Cellule
{
    PCellule suivant;
    PCellule precedent;
    Object valeur;
}Liste;
void AfficherList(PCellule l)
{
    PCellule p;
    p=l;
    while(p!=NULL)
    {
        printf("%d",p->valeur);
        p=p->suivant;
    }
}
PCellule Ajoutertete(PCellule l,Object* donne)
{
    PCellule tete;
    tete=malloc(sizeof(PCellule));
    tete->valeur=donne;
    tete->suivant=l;
    return tete;
}

int main()
{
    printf("char %d octets",sizeof(long));
    return 0;
}
