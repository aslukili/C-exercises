// Implements linear search for numbers

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size;
    int target;

    do
    {
        printf("how many element you want in your array? ");
        scanf("%d", &size);
    }
    while (size < 1);

    size -= 1;// arrays start indexing from 0.

    // giving our array values
    int numbers[size];
    printf("Give values to elements of your array: \n");
    for (int i = 0; i <= size; i++)
    {
        int number = 0;
        scanf("%d", &number);
        numbers[i] = number;
    }


    printf("Enter a number to search for: ");
    scanf("%d", &target);

    // Search for target
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
        {
            printf("Found at position %d\n", i);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}