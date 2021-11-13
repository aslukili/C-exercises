#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N1;
    int N2;
    int N3;
    int N4;
    int sum;
    float average;

    printf("Enter the first Number: ");
    scanf("%d", &N1);
    printf("Enter the second Number: ");
    scanf("%d", &N2);
    printf("Enter the third Number: ");
    scanf("%d", &N3);
    printf("Enter the fourth Number: ");
    scanf("%d", &N4);

    sum = N1 + N2 + N3 + N4;
    printf("The sum is: %d\n", sum);

    average = (float)sum / 4;
    printf("The sum is: %f\n", average);
}