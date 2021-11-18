// implements binary search for numbers

#include <stdio.h>

int main()
{
    int nbr_elements, first, last, middle, target;

    // how long an array does user want?
    printf("Enter number of elements you want in your array: \n");
    scanf("%d", &nbr_elements);

    int array[nbr_elements];// array with "nbr_elements" of elements

    // giving each element of array a value, but values must be sorted!
    printf("Enter %d sorted integers\n", nbr_elements);
    for (int i = 0; i < nbr_elements; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter value to find\n");
    scanf("%d", &target);

    first = 0;
    last = nbr_elements - 1; // arrays are 0 indexing.
    middle = (first+last)/2;

    while (first <= last) // we can use while(true), but we are not sure we'll find the value we're looking for
    {
        if (array[middle] == target)
        {
            printf("%d found at location %d.\n", target, middle);
            break;
        }
        else if (array[middle] < target)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }


    if (first > last)
    printf("Not found! %d isn't present in the list, or you entered unsorted integers!\n", target);

  return 0;
}
