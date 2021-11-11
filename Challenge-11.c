#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float width, lenght, circ;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Wnter lenght: ");
    scanf("%f", &lenght);

    circ = 2 * (width + lenght);

    printf("circumference of this rectangle is: %f\n", circ);
}