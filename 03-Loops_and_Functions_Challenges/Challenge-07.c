/*
Créez une fonction bool isPremier() pour vérifier si un nombre il est premier ou non
(constatez que le type de la fonction est bool, donc vous devez créez votre type Bool).
*/


#include <stdio.h>
#include <stdbool.h>


bool isPremier(int n); //function to check if a number prime or not;

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 2)
    {
        if (isPremier(number))
        {
            printf("prime number\n");
        }
        else {
            printf("not prime\n");
        }
    }
    else{
        printf("Enter a number greater than 1\n");
    }
}

bool isPremier(int n)
{
    bool isprime = true;
    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            isprime = false;
        }
    }
    return isprime;
}