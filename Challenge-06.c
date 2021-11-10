#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float temp_f;
    float temp_c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temp_f);

    temp_c = (temp_f - 32) / 1.8;

    printf("equivalent temperature in Celsius is: %f \n", temp_c);
}