#ifndef menu_h_inc
#define menu_h_inc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"
#include "etd.h"
int main(){
    int k, ent ;
    printf("MENU\nVoullez vous?\n");
    printf("1.Remplir\n2.Affichage\n3.Trier(ordre alphabetique)\n4.Tri(ordre de merite)\n5.Ajouter\n6.Modifier\n7.Supprimer\n8.Rechercher\n");
    printf("Merci de choisir le numero convenable: ");
    scanf("%d", &k);
    switch (k)
    {
    case 1:
        printf("Entrer le nombre d'etudiants a remplir : ");
        scanf("%d", &ent);
        remplir(ent);
        break;
    case 5:
        ajouter();
        break;
    case 8:
        printf("Entrer le matricule : ");
        scanf("%d", &ent);
        char matri[5];
        itoa(ent, matri, 10);
        int m = rechercher(matri);
        if (m==1)
        {
            printf("l'etudiant est deja existe");
        }
        else
        {
            printf("l'etudiant n'existe pas");
        }
        break;
    }
    return 0;
}
#endif
