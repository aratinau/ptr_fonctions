// Fonction avec retour et avec arguments

int saisirNombre(char *nom)
{
    int n;

    printf("Bonjour %s saisie un nombre entier : ",nom);
    scanf("%d",&n);

    return n;
}

int main (void)
{
    int (*pointeurSurFonction)(char *);          /*déclaration du pointeur*/
    int nombre;

    pointeurSurFonction = saisirNombre;          /*Initialisation*/

    nombre = (*pointeurSurFonction)("zero");     /*Appel de la fonction*/

    return 0;
}
