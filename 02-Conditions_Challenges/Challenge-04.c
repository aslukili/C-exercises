#include <stdio.h>

int main(void)
{
    int N1, N2, N3;
    printf("Enter first number: ");
    scanf("%d", &N1);
    printf("Enter second number: ");
    scanf("%d", &N2);

    N3 = N1 + N2;

    if (N1 == N2)
    {
        printf("The sum is: %d\n", N3 * 3);
    }
    else{
        printf("The sum is: %d\n", N3);
    }
}
