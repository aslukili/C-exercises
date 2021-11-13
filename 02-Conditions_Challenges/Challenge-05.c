#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c; // equation variables;
    float d, S, S1, S2; // delta and two possible solutions when delta > 0;
    printf("Hi, I am 2nd degree equations solver! plear enter values for a, b, and c in order: \n");
    scanf("%d %d %d", &a, &b, &c);

    d = pow(b, 2) - (4 * a * c);

    if (d < 0)
    {
        printf("No solution in R\n");
        return 0;
    }
    else if (d > 0)
    {
        S1 = (-b + sqrt(d)) / (2 * a);
        S2 = (-b - sqrt(d)) / (2 * a);
        printf("there are two solutions for this:\n S1 = %f\n S2 = %f\n", S1, S2);
    }
    else{
        S = -b / (2*a);
        printf("this equation has one solution: S = %f\n", S);
    }

}