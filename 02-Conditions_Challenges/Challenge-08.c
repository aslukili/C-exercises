#include <stdio.h>

int main(void)
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if ((int)character < 65 || (int)character > 90)
    {
        printf("This is not an uppercase alphabet! \n");
    }
    else{
        printf("UPPER-CASE ALPHABET!\n");
    }
}