// Passage de pointeur de fonctions en paramètre

// -> passer un pointeur sur fonction en paramètre à une autre fonction.

// Méthode classique

void fonction1(int n)
{
    printf("fonction 1 appel N° %d\n",n);
}

void fonction2(int n, void (*ptrfonction)(int))
{
    (*ptrfonction)(n);       /*Appel de la fonction pointée par ptrfonction*/
}

// On peut donc appeler notre fonction ainsi :

fonction2(13,fonction1);

/*
RETOURNE 
fonction 1 appel N° 13
*/

// Utilisation de typedef
// ------------------------

typedef void (*ptrfonction)(int);

void fonction1(int n)
{
    printf("fonction 1 appel N° %d\n",n);
}

void fonction2(int n, ptrfonction ptr)
{
    (*ptr)(n);      /*Appel de la fonction pointée par ptrfonction*/
}

int main(void)
{
    fonction2(13,fonction1);
}
