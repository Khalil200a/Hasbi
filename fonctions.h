#ifndef REMPLIR_H_INCLUDED
#define REMPLIR_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include "etd.h"
int rechercher(char * motR){
    char test[]="Etudiant.csv";
    FILE *Fichier;
    char motFr[50];
    Fichier = fopen(test, "r");
    if (!Fichier)
    printf("\aERREUR: Impossible d'ouvrir "
    "le fichier: %s.\n", test);
    while (fgets(motFr,50,Fichier) != NULL)
    {
        char *p = strchr(motFr, ',');
        if (p != NULL)
        {
            /* si on l'a trouve, on l'elimine. */
            *p = 0;
        }
        //printf("%s",motFr);
        if (strcmp(motFr, motR) == 0)
        {
            fclose(Fichier);
            return 1;
        }
    }
    return 0;
}
void remplir(int N){
    int i = 0; 
    FILE *f;
    f = fopen("Etudiant.csv", "a");
    while (i<N)
    {
        Etudiant etd; 
        int j = 1;
        printf("Entrer les infomations de cet etudiant :");
        fflush(stdin);
        scanf("%d", &etd.mat);
        char matricule[5];
        itoa(etd.mat, matricule, 10);
        if (rechercher(matricule)==0)
        {
            fprintf(f, "%s, ", matricule);
            printf("le nom est : ");
            fflush(stdin);
            gets(etd.NP);
            printf("l'annee de naissance : ");
            fflush(stdin);
            scanf("%d", &etd.DN.A);
            printf("le mois de naissance : ");
            fflush(stdin);
            scanf("%d", &etd.DN.M);
            printf("le jour de naissance : ");
            fflush(stdin);
            scanf("%d", &etd.DN.J);
            printf("la moyenne : ");
            fflush(stdin);
            scanf("%f", &etd.Moy);
            fprintf(f, "%s, %d/%d/%d, %.2f\n", etd.NP, etd.DN.J, etd.DN.M, etd.DN.A, etd.Moy);
        }
        else
        {
            printf("Ce etudiant existe");
        }
        ++i;
    }
    fclose(f);
}
void ajouter(){
    FILE *f;
    f = fopen("Etudiant.csv", "a");
    Etudiant etd; 
    int j = 1;
    printf("Entrer les infomations de cet etudiant :");
    fflush(stdin);
    scanf("%d", &etd.mat);
    char matricule[5];
    itoa(etd.mat, matricule, 10);
    if (rechercher(matricule)==0){
        fprintf(f, "%s, ", matricule);
        printf("le nom est : ");
        fflush(stdin);
        gets(etd.NP);
        printf("\nl'annee de naissance : ");
        fflush(stdin);
        scanf("%d", &etd.DN.A);
        printf("\nle mois de naissance : ");
        fflush(stdin);
        scanf("%d", &etd.DN.M);
        printf("\nle jour de naissance : ");
        fflush(stdin);
        scanf("%d", &etd.DN.J);
        printf("\nla moyenne : ");
        fflush(stdin);
        scanf("%f", &etd.Moy);
        fprintf(f, "%s, %d/%d/%d, %.2f\n", etd.NP, etd.DN.J, etd.DN.M, etd.DN.A, etd.Moy);
    }
    else{
        printf("Ce etudiant existe");
    }
    fclose(f);
}
#endif