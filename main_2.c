// Fonction sans retour et avec arguments

void afficherBonjour(char *nom)
{
    printf("Bonjour %s\n",nom);
}

int main (void)
{
    void (*pointeurSurFonction)(char *);         /*déclaration du pointeur*/
    pointeurSurFonction = afficherBonjour;       /*Initialisation*/

    (*pointeurSurFonction)("zero");              /*Appel de la fonction*/

    return 0;
}
