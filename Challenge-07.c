#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;
    int c ;

    printf("Enter 'a' value: ");
    scanf("%d", &a);
    printf("Enter 'b' value: ");
    scanf("%d", &b);

    c = a + b;
    printf("a + b = %d\n", c );

    c = a - b;
    printf("a - b = %d\n", c );

    c = a * b;
    printf("a * b = %d\n", c );

    c = a / b;
    printf("a / b = %d\n", c );

    // c = a % b;
    // printf("a % b = %d\n", c );
}