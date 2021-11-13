#include <stdio.h>

int main(void)
{
    float number;
    printf("Enter a number: ");
    scanf("%f", & number);

    if (number > 0)
    {
        printf("This number is positive\n");
        return 0;
    }
    else if (number < 0)
    {
        printf("This number is negative\n");
        return 0;
    }
    else {
        printf("nul\n");
    }
}