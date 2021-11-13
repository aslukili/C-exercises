#include <stdio.h>
#include <math.h>


int main() {
    
    int value, o, t, h, temp; // ones, tens, and hundreds of the value 
    
    printf("Enter a value of three digits : \n");
    scanf("%d", &value);
    
    printf("inverse version is : \n");
    o = value % 10;
    temp = value / 10;
    printf("%d", o);
    t = temp % 10;
    temp = temp / 10;
    printf("%d", t);
    h = temp % 10;
    printf("%d", h);
    

    return 0;
}