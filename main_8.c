#include <stdio.h>

/*
// Utilité des pointeurs sur fonction

Exercice calculatrice

Il faut écrire un programme qui affiche un menu avec les calculs d'addition, soustraction, multiplication et division à l'utilisateur, et lui demande d'en choisir un. Ensuite il lui demande de saisir les opérandes.
Le programme devra faire le calcul choisi avec les opérandes entrées, et afficher le résultat.
*/

// Les fonctions de calcul

double addition(double n1,double n2)
{
    return n1 + n2;
}
double soustraction(double n1,double n2)
{
    return n1 - n2;
}
double multiplication(double n1,double n2)
{
    return n1 * n2;
}
double division(double n1,double n2)
{
    return n1 / n2;
}

// voici un tableau de pointeurs sur fonctions qu'on initialisera avec les fonctions de calcul qu'on vient d'écrire :

double (*listeFonctions[4])(double,double) = { addition, soustraction, multiplication, division };

// Affichage du menu

double (* affichMenu(void))(double,double)       /*Le retour correspondant à un pointeur sur fonction*/
{
    int choix;                                   /*La variable pour le choix*/
    do{
        printf("-------------------------------MENU--------------------------------------\n");
        printf("Veuillez choisir une operation (en choisissant un nombre entre 1 et 4) :\n");
        printf("1 pour addition\n");
        printf("2 pour soustraction\n");
        printf("3 pour multiplication\n");
        printf("4 pour division\n");
        printf("Votre choix : ");
        scanf("%d",&choix);

    } while(choix < 1 || choix > 4);            /*En cas d'erreur de saisie*/

    return listeFonctions[choix - 1];           /*On renvoi le pointeur sur la fonction de calcul choisie*/
}

int main (void)
{
    double (*fonctionDeCalcul)(double,double);       /*déclaration du pointeur*/
    double n1,n2;

    fonctionDeCalcul = affichMenu();                 /*On charge la fonction de calcul choisie*/

    printf("Saisissez les operandes : ");            /*On lit les opérandes de notre calcul*/
    scanf("%lf",&n1);
    scanf("%lf",&n2);

    printf("le resultat du calcul est : %f\n",(*fonctionDeCalcul)(n1,n2));  /*On appelle la fonction choisie et on affiche le résultat.*/
    return 0;
}
