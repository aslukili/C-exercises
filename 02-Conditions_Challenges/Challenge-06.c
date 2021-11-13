#include <stdio.h>

int main(void)
{
    int year;
    int choice;

    printf("Year you want to convert: ");
    scanf("%d", &year);

    printf("type '1' to get months; \ntype '2' to get days; \ntype '3' to get hours;\n");
    printf("type '4' to get minutes; \ntype '5' to get seconds;\n Your choice:");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("equivalent in months is %d\n", year * 12);
        break;

        case 2:
        printf("equivalent in days is %d\n", year * 365);
        break;

        case 3:
        printf("equivalent in hours is %d\n", year * 365 * 24);
        break;

        case 4:
        printf("equivalent in minutes is %d\n", year * 365 * 24 * 60);
        break;

        case 5:
        printf("equivalent in seconds is %d\n", year * 365 * 24 * 60 * 60);
        break;

        default:
        printf("");

    }
}