#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float radius, circ;
    float pi = 3.14;

    printf("Enter radius of your circle: ");
    scanf("%f", &radius);

    circ = 2*pi*radius;

    printf("Circumference of your circle = %f\n", circ);
}