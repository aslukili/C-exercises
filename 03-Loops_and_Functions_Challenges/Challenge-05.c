// Créez une fonction add(int a , int b) qui permet de faire l'addition des deux nombres a et b.
// raed algorithm of this challenge at line 25.


#include <stdio.h>

int add(int a, int b);

int main()
{
    int N1, N2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &N1, &N2);

    printf("the sum is: %d\n",add(N1, N2));
}

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

/*
Add_fuction


var: int N1, N2 (to store user's input)
fanction: int add(int a, int b) (function takes two integers and return sum of them)
          int c; (to store the sum of two numbers)
          c = a + b;

          return c;

start
print (enter two numbers)
scan (N1, N2)

print ("..." call add(N1, N2)) to get the sum, and print it

finish