#include <stdio.h>

int main()
{
    float N1, N2;
    printf("Hi dear, Enter two digits\n");
    scanf("%f%f", &N1, &N2);

    if (N1 < N2)
    {
        printf("Max: %g\n", N2);
    }
    else if (N1 > N2)
    {
        printf("Max: %g\n", N1);
    }
    else{
        printf("You entered similar numbers!\n");
    }
}