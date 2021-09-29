//
// Created by Utilisateur on 29/09/2021.
//

#include "exercies.h"
#include "Mesfonctions.h"
#include <stdio.h>

void exercice1(){
    //IN : Saisie des valeurs pour les 2 paramètres
    int v1, v2;
    printf ("Saisir une valeur  pour v1", v1);
    scanf ("%d", &v1);
    printf ("Saisir une valeur pour v2", v2);
    scanf ("%d", &v2);
    printf ("Le plus grand est %d", getmax(v1, v2));
    return;
    //OUT : Renvoie le plus grand des deux
}



void exercice2() {
    //IN : Saisie de l'entier
    printf("L'entier est %d", saisirEntier());
    //OUT : Renvoie l'entier saisie
}

void exercice3() {
    int l, L;
    //IN : Donne une valeur pour la longueur et la largeur
    printf ("Saisir une valeur pour l");
    scanf ("%d", &l);
    printf ("Saisir une valeur pour L");
    scanf ("%d", &L);
    printf ("Le perimetre est %d", calculPerimetre(l, L));
    printf ("L'Aire est %d", calculAire(l, L));
    return;
    //OUT : Renvoi le périmetre et l'aire du rectangle
}


void exercice4() {
    int v1, v2, a;
    //IN :Saisie des valeurs pour les paramètres
    printf ("Saisir une valeur pour v1");
    scanf ("%d", &v1);
    printf ("Saisir une valeur pour v2");
    scanf ("%d", &v2);
    printf ("Saisir une valeurpour a");
    scanf ("%d", &a);
    compare(v1, v2);
    test(a);
    return;
    //OUT : Compare renvoie si v1 est un miltiple de v2 et test renvoie a est un multiple de 3 et si il est plus grand que 10
}

void exercice5() {
    float a, b, c;
    //IN : Saisie des valeurs pour les paramètres
    printf ("Saisir une valeur pour a");
    scanf ("%f", &a);
    printf ("Sausir une valeur pour b");
    scanf ("%f", &b);
    printf ("Saisir une valeur pour c");
    scanf ("%f", &c);
    troisNotes(a, b,c);
    return;
    //OUT : Renvoie la moyenne des 3 notes
}

void exercice5plus7() {
    //IN : Saisie du nombre de classe
    eleveTotal();
    return;
    //OUT : Renvoie le nimbre d'eleves total
}

void exercice5plus8() {
    int a;
    //IN : Saisie de la valeur du paramètre
    printf ("Saisir une valeur pour a");
    scanf ("%d", &a);
    multiple(a);
    return;
    // OUT : Renvoie si le nombre est un multiple de 2 ou de 7
}


void exercice5plus9() {
    //IN : Rentre le nombre de pierre
    etages();
    return;
    //OUT : Renvoie le nombre d'etages possible
}

void exercice5plus10(){
    //IN : Saisie des valeurs positives
    moyennevaleurspositives();
    //OUT : Renvoie la moyenne de ces valeurs positives
    return;
}

