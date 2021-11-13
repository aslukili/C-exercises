#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float dis_m;
    float dis_km;
    float dis_ml;

    printf("Enter distance in Mile: ");
    scanf("%f", &dis_ml);

    dis_km = dis_ml * 1.609;
    dis_m = dis_km * 1000;

    printf("equivalent in Meter is: %f\n", dis_m);
}