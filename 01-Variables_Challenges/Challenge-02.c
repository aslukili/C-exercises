#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float temp_in_c;
    float temp_in_f;

    printf("Enter temperature in Celsuis: ");
    scanf("%f", &temp_in_c);

    temp_in_f = (temp_in_c*1.8) + 32;
    printf("Temperature in Fahrenheit is %f\n", temp_in_f);
}
