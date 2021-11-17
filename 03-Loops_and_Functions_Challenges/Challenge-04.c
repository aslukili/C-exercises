#include <stdio.h>

// check line 29 for this program's algorithm

/*Ecrire un programme C qui lit un entier et l'affiche inversé.
On choisira de ne pas afficher chiffre par chiffre mais de
construire l'entier inversé puis l'afficher.
Ex: si l'entrée est "12345" on doit afficher l'entier "54321". */

int main()
{
    int number, digit;
    int rev = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number > 0)
    {
        digit = number % 10;
        rev = rev * 10 + digit;
        number /= 10;
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}


/* Digits_inversing


var: int number, digit, rev;

start
print (enter a number)
scan (number)


while (number > 0)
    digit = number % 10;
    rev = rev * 10 + digit;
    number = number / 10;

print (rev);

end */