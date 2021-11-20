#include<stdio.h>
#include<stdlib.h>

// Function to Merge Arrays right[] and left[] into mother[].
// lefCount = number of elements in left
// rightCount = number of elements in right.
void Merge(int *mother,int *left,int leftCount,int *right,int rightCount);

// Recursive function to sort an array of integers.
void MergeSort(int *mother,int length);

int main()
{
    int length;
    printf("Hi! I am merge sorter, how many elements you want to sort? ");
    scanf("%d", &length);

	int array[length]; // creating an array of integers with 'length' value.

	// getting elements to be sorted.
	printf("Enter %d integers: \n", length);
	for (int i = 0; i < length; i++)
	{
	    scanf("%d", &array[i]);
	}

	// Calling merge sort to sort the array.
	MergeSort(array, length);

	//printing all elements in the array once its sorted.
	printf("Sorted version: \n");
	for(int i = 0;i < length;i++) printf("%d \n",array[i]);
	return 0;
}



void Merge(int *mother,int *left,int leftCount,int *right,int rightCount)
{
	int i,j,k;

	// i - to mark the index of left aubarray
	// j - to mark the index of right sub-raay
	// k - to mark the index of "mother" array
	i = 0; j = 0; k =0;

	while(i < leftCount && j < rightCount)
	{
		if(left[i] < right[j])
		{
		     mother[k] = left[i];
		     i++;
		}
		else {
		    mother[k] = right[j];
		    j++;
		}
	    k++;
	}
	while(i < leftCount)
	{
	    mother[k] = left[i];
	    i++; k++;
	}
	while(j < rightCount)
	{
	    mother[k] = right[j];
	    j++; k++;
	}
}

void MergeSort(int *mother, int length)
{
	int mid, i;
	if(length < 2) return; // base condition. If the array has less than two elements, we can't devide it anymore!.

	mid = length/2;  // find the mid index.

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) will be part of left sub-array
	// and (length - mid) elements (from mid to n-1) will be part of right sub-array
	int left[mid];
	int right[length - mid];


	for(i = 0;i<mid;i++) left[i] = mother[i]; // creating left subarray
	for(i = mid;i<length;i++) right[i-mid] = mother[i]; // creating right subarray

	MergeSort(left,mid);  // sorting the left subarray
	MergeSort(right,length - mid);  // sorting the right subarray
	Merge(mother, left , mid, right, length - mid);  // Merging left and right into mother as sorted list.
}
