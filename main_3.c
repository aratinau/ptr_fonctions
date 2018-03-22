// Fonction avec retour et sans arguments

int saisirNombre(void)
{
    int n;

    printf("Saisissez un nombre entier : ");
    scanf("%d",&n);

    return n;
}

int main (void)
{
    int (*pointeurSurFonction)(void);       /*déclaration du pointeur*/
    int nombre;

    pointeurSurFonction = saisirNombre;     /*Initialisation*/

    nombre = (*pointeurSurFonction)();      /*Appel de la fonction*/

    return 0;
}
