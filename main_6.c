// Retourner un pointeur sur fonctions

// (snippets d'examples : ne compilent pas)

// Exemple pour une fonction sans arguments :

int fonction1(void)
{
    return 1;
}

int (* fonction2(void))(void)
{
    return fonction1;        /*Ici le retour d'un pointeur sur fonction*/
}

// Exemple de fonction avec arguments :

int fonction1(double,double)
{
    return 1;
}

int (* fonction2(char str[]))(double,double)
{
    printf("%s",str);       /*Affichage de la chaine passée en paramètre*/

    return fonction1;       /*Ici le retour d'un pointeur sur fonction*/
}

// Utilisation d'un typedef
// ------------------------

// Exemple de fonction sans arguments :

typedef int (*ptrFonction)(void); 

int fonction1(void)
{
    return 1;
}

ptrFonction fonction2(void)
{
    return fonction1;        /*Ici le retour d'un pointeur sur fonction*/
}

// Exemple de fonction avec arguments :

typedef int (*ptrFonction)(double,double);

int fonction1(double,double)
{
    return 1;
}

ptrFonction fonction2(char str[])
{
    printf("%s",str);       /*Affichage de la chaine passée en paramètre*/

    return fonction1;       /*Ici le retour d'un pointeur sur fonction*/
}
