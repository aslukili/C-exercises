#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float dis_m;
    float dis_km;
    float dis_ml;

    printf("Enter distance in Metre: ");
    scanf("%f", &dis_m);

    dis_km = dis_m / 1000;
    dis_ml = dis_km * 1.609;

    printf("equivalent in Mile is: %f\n", dis_ml);
}