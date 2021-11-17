#include <stdio.h>
#include <stdlib.h>

// read algorithm of this program at line: 43


void space(int n); // function prints spaces.
void star(int n);  // function prints stars.

int main()
{
    int high;

    printf("Enter pyramid's high: ");
    scanf("%d", &high);


    for (int i = 1; i <= high; i++)
    {
        space(high - i);

        star(i * 2 -1);

        printf("\n");
    }
}

void space(int n)
{
    for (int i = 0; i < n; i++)
    printf(" ");
    return;
}

void star(int n)
{
    for (int i = 0; i < n; i++)
    printf("*");
    return;
}

/*
Algorithm
variable Pyramid's_high

start
print: high of pyramid
scan: Pyramid's_high

for row from 1 to Pyramid's high
    print  spaces * (high - number of row);
    print  stars * (number of row * 2 - 1);
end

big O(n^2)
*/