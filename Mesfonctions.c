//
// Created by Utilisateur on 27/09/2021.
//

#include "Mesfonctions.h"
#include <stdio.h>

int saisirEntier () {
    int n;
    printf("Saisissez un entier pour n");
    scanf("%d", &n);
    return n;
}

int getmax (int v1, int v2) {
    if (v1 > v2) {
        return v1;
    }
    else {
        return v2;
    }
}

int calculAire(int l, int L) {
    return (l * L);
}

int calculPerimetre( int l, int L ) {
    return ( l + L ) * 2;
}

int compare(v1, v2) {
    if ( v1 % v2 == 0 ) {
        return 1;
    }
    else {
        return 0;
    }
}

int test (int a) {
    int c = 3;
    if (a % c == 0) {
        printf("%d est divisible par 3\n", a);
    }
    else {
        printf ("%d n'est pas divisible par 3\n", a);
    }
    if (a >= 10) {
        printf ("%d est superieur ou egal a 10\n", a);
    }
    else {
        printf ("%d n'est pas superieur a 10\n", a);
    }
}


float troisNotes( float a, float b, float c) {
    float m;
    if ( a >= 0 && b >= 0 && c >= 0 && a <= 20 && b <= 20 && c <= 20) {
        m = (a + b + c) / 3;
        return m;
    }
    else {
        return -1;
    }
}

float saisirFloat() {
    float f;
    printf ("Saisissez un entier pour n");
    scanf ("%f", &f);
    return f;
}


int eleveTotal() {
    int a = 1, nbclasse, nbeleve, total = 0;
    printf("Saisissez le nombre de classe");
    scanf("%d", &nbclasse);
    while (a <= nbclasse) {
        printf("Saisissez le nombre d'eleve dans la classe : %d", a);
        scanf("%d", &nbeleve);
        total = total + nbeleve;
        a = a + 1;
    }
    printf("Le nombre total d'eleve est %d", total);
}

int multiple(int a) {
    while ( a % 7 != 0 && a % 2 != 0 ) {
        printf ("La valeur saisie n'est un multiple ni de 7 ni de 2, saisissez une nouvelle valeur");
        scanf ("%d", &a);
    }
    printf ("La valeur saisie est un multiple de 7 ou de 2");
}

int etages() {
    int pierre, s = 0, i = 1, b;
    printf ("Saisissez une valeur pour pierre");
    scanf ("%d", &pierre);
    if ( pierre == 0) {
        printf ("Vous ne pouvez pas faire d'etages");
    }
    else {
        while (pierre > (i * i) + s ) {
            s = s + (i *i);
            i = i + 1;
        }
        b = i - 1;
        printf ("Vous pouvez faire %d etages", b);
    }
}

float moyennevaleurspositives() {
    float a, total = 0, b = 0, m;
    printf ("Saisir une valeur pour a");
    scanf ("%f", &a);
    while (a > 0) {
        total = total + a;
        b = b + 1;
        printf ("Saisir une nouvelle valeur pour a");
        scanf ("%f", &a);
    }
    m = (total / b);
    printf ("La moyenne des nombres saisis est %f", m);
    // le debug sert a savoir quel est la valeur affectée a chaque variable */
    return 0;
}








