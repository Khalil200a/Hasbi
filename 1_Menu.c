#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i ; 
    typedef  struct {
       int  J, M, A;
    } Date;
    typedef struct {
        int  mat ;
        char  NP[50] ;
        Date  DN ;
        float Moy 
    } Etudiant;
    printf("MENU\nVoullez vous?\n");
    printf("1.Remplir\n2.Affichage\n3.Trier(ordre alphabétique)\n4.Tri(ordre de mérite)\n5.Ajoute\n6.Modifier\n7.Supprimer\n8.Rechercher\n");
    printf("Merci de choisir le numéro convenable: ");
    scanf("%d", &i);
}