#include <stdio.h>


int main(void)
{
    char character;
    printf("Enter a letter: ");
    scanf("%c", &character);

    switch(character)
    {
        case('a'):
        printf("Vowel!\n");
        break;

        case('o'):
        printf("Vowel!\n");
        break;

        case('e'):
        printf("Vowel!\n");
        break;

        case('i'):
        printf("Vowel!\n");
        break;

        case('u'):
        printf("Vowel!\n");
        break;

        default:
        printf("Not vowel\n");
        break;
    }
}