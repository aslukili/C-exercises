#include <stdio.h>
#include <stdlib.h>

const Pi = 3.14

int main(void)
{
    float radius, circ;

    printf("Enter radius of your circle: ");
    scanf("%f", &radius);

    circ = 2*Pi*radius;

    printf("Circumference of your circle = %f\n", circ);
}
