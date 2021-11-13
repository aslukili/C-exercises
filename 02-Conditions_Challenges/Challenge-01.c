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
        printf("Very cold\n");
        return 0;
    }
    else if (temp_c < 20){
        printf("Cold\n");
        return 0;
    }
    else if (temp_c < 32){
        printf("Hot\n");
        return 0;
    }
    else{
        printf("Very hot\n");
    }
}