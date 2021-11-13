#include <stdio.h>


int main()
{
    int number;

    printf("Entrer un nombre: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Paire\n");
    }
    else{
        printf("Impaire\n");
    }
}