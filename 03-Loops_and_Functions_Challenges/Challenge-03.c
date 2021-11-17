#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    bool is_prime = true;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 2; i < number - 1; i++)
    {
        if ((number % i) == 0)
        {
            is_prime = false;
        }
    }
    
    if (number > 2)
    {
        if (is_prime)
        {
            printf("prime number\n");
        }
        else {
            printf("not prime\n");
        }
    }
    else{
        printf("Enter a number greater than 1");
    }
}