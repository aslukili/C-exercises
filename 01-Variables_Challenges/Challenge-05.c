#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float temp_f;
    float temp_c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temp_f);

    temp_c = (temp_f - 32) / 1.8;

    // telling temperature state (cold, hot..)
    if (temp_c < 5){
        printf("very cold\n");
    }
    else if (temp_c < 20){
        printf("cold\n");
    }
    else if (temp_c < 32){
        printf("hot\n");
    }
    else{
        printf("very hot\n");
    }
}
