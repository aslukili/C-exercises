#include <stdio.h>
#include <stdlib.h>

/* Ecrire un algorithme qui demande un nombre à l’utilisateur,
 puis affiche sa table de multiplication de 1 à 10*/
int main(void)
{
    int nombre;
    // get input between 1 and 10
    do {
        printf("entrer un nombre: ");
        scanf("%d", &nombre);
    }
    while (nombre < 1 || nombre > 10);


    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", nombre, i + 1, nombre * (i+1));
    }
}