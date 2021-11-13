#include <stdio.h>


int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("equivalent in octal: %o\n", number);
    printf("equivalent in hexadecimal: %x\n", number);
}