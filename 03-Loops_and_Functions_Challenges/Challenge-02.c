#include <stdio.h>
#include <stdlib.h>

int main()
{
    int high;

    printf("Enter pyramid's high: ");
    scanf("%d", &high);

    // every row has a bunch of spaces and stars
    // i to change between rows
    // j to print spaces
    // k to print stars
    for (int i = 1; i <= high; i++)
    {
        for (int j = high - i; j > 0; j--)
        {
            printf(" ");
        }

        for (int k = i * 2 - 1; k > 0; k--) // we double 'i' to get how stars we should print.
        {
            printf("*");
        }
        printf("\n");
    }
}