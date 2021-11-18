/* Créez une fonction echanger() pour échanger la valeur de a avec la valeur de b,
 qu'est ce que vous constatez ?
affichez aussi l'etat initial des variables a et b.*/

#include <stdio.h>


void echanger(int a, int b);

int main()
{
    int N1, N2;
    printf("Enter a value for a: ");
    scanf("%d", &N1);
    printf("Enter a value for b: ");
    scanf("%d", &N2);


    printf("before switching; \n a = %d\n b = %d\n", N1, N2); //initial state

    echanger(N1, N2);
}

void echanger(int a, int b)
{
    int c = a;
    a = b;
    b = c;

    printf("after switching: \n a = %d\n b = %d\n", a, b);
}