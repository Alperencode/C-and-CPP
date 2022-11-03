// Bubble Sort = proceeds by comparing between two consecutive elements.

#include <stdio.h>
int main()
{
	int n = 10;
	int x, j, k, temp;
	
	int a[n] = {10, 6, 2, 8, 4, 42, 98, 87, 67, 1};
	printf("Unsorted Array: ");
	for(k = 0; k < n; k++)
		printf("%d ", a[k]);
	
	for(x = 0; x < n; x++)
	{
		int flag = 0;
		for(j = 0; j < n-1-x; j++) 
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
	
	printf("\nSorted Array: ");
	for(x = 0; x < n; x++)
		printf("%d", a[x]);
		
	return 0;	
}



// Selection Sort = finds the index of the smallest number in the array and puts it in the right place
#include <stdio.h>

void selection_sort (int a[], int n);

int main () 
{
	int i, n = 8;
	int a[n] = {14, 12, 11, 4, 89, 91, 24, 75};
	
	for(i = 0; i < n; i++)
		printf("%d,", a[i]);
		
	printf("\n\n");
	
	selection_sort(a, n);
	
	for(i = 0; i < n; i++)
		printf("%d,", a[i]);
		
	printf("\n");
	
	return 0;	
}

void selection_sort(int a[], int n)
{
	int i, temp;
	
	for(i = 0; i < n-1; i++)
	{
		int min_indis = i;
		
		for(int j = i+1; j< n; j++)
		{
			if(a[j] < a[min_indis])
			{
				min_indis = j;
			}
		}
		
		temp = a[i];
		a[i] = a[min_indis];
		a[min_indis] = temp;
		
	}
}


// Insertion Sort = finds the smallest number in the array and puts it in the right place
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n);

int main()
{
	int i, j, k, n = 8;
	int arr[n] = {14, 12, 11, 4, 89, 91, 24, 75};
	
	printf("Unsorted Array: ");
	for(i = 0; i < n; i++)
		printf("%d ", arr[i]);
	
	insertion_sort(arr, n);
	
	printf("\nSorted Array: ");
	for(i = 0; i < n; i++)
		printf("%d ", arr[i]);
	
}

void insertion_sort(int a[], int n)
{
	int i, j, k, temp;
	for(k = 1; k < n; k++)
	{
		temp = a[k];
		j = k - 1;

		while((temp < a[j]) && (j >= 0))
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		
		a[j+1] = temp;
	}
}



/* 
Quick Sort: Picks a pivot point and
moves elements greater than the pivot to the right of the pivot and elements less than the pivot to the left of the pivot.
Repeats this process does this using recursive functions until the array is reduced to 1 or 0 elements.
Which means its sorted.
*/


#include <stdio.h>
#define size 8

int partition(int a[], int beg, int end);
void quick_sort(int a[], int beg, int end);

int main() 
{
	int temp, i, j, n;
	n = size;
	
	int arr[size] = {14, 12, 11, 4, 89, 91, 24, 75};
	printf("\nthe original array is: \n");
	
	for (int x = 0; x < size; x++)
	{
		printf("%d, ", arr[x]);
	}
	printf("\n\n");
	
	quick_sort(arr, 0, n-1);
	
	printf("\nthe sorted array is: \n");
	
	for (i = 0; i < size; i++)
		printf("%d, ", arr[i]);
	
}

void quick_sort(int a[], int beg, int end)
{
	int pivot;
	
	if (beg < end)
	{
		pivot = partition(a, beg, end);
		quick_sort(a, beg, pivot-1);
		quick_sort(a, pivot+1, end);
	}
}

int partition(int a[], int beg, int end)
{
	int left, right, temp, pivot, flag;
	pivot = left = beg;
	right = end;
	flag = 0;
	
	while (flag != 1)
	{
		
		while ((a[pivot] <= a[right]) && (pivot != right)) 
			right--;
			
		if (pivot == right)
			flag = 1;
			
		else if (a[pivot] > a[right])
		{
			temp = a[pivot];
			a[pivot] = a[right];
			a[right] = temp;
			pivot = right;
		}
		
		if (flag != 1)
		{
			while ((a[pivot] >= a[left]) && (pivot != left))
				left++;
				
			if (pivot == left)
				flag == 1;
				
			else if (a[pivot] < a[left])
			{
				temp = a[pivot];
				a[pivot] = a[left];
				a[left] = temp;
				pivot = left;
			}	
		}
	}
	
	return pivot;
}

/*
Merge Sort: uses the divide and conquer method.
First it splits the array in half.
It compares the elements of these 2 arrays with each other and merges them in order into a new array.
Since it continues the division process until the array has 0 or 1 element left, the array eventually turns into an ordered array.
It then merges these ordered arrays to get the sorted version of the first array
*/

// C++
#include <iostream>
using namespace std;
void merge(int[],int,int,int);
void merge_sort(int[],int,int);

int main(){

    int l = 0;
    int A[] = {12,4,5,19,8,82,6,19,81,94};
    int h = sizeof(A)/sizeof(int);

    cout << "Unsorted Array: ";
    for(int i=0;i<h;i++) cout << A[i] << " ";
    
    merge_sort(A, l, h-1);
    
    cout << "\nSorted Arry: ";
    for(int i=0;i<h;i++) cout << A[i] << " ";

}

void merge_sort(int A[], int l, int h){
	
	if(l<h){
		int mid = (l+h)/2;
		merge_sort(A, l, mid);
		merge_sort(A, mid+1, h);
		merge(A, l, mid, h);
	}
	
}

void merge(int A[],int l, int mid, int h){

    int i = l;
    int j = mid+1;
    int k = l;
    int B[h+1] = {0};

    while(i<=mid && j<=h){
        if(A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    for(;i <= mid; i++) B[k++] = A[i];
    for(;j <= h; j++) B[k++] = A[j];
        
   	for(i=l; i<=h; i++)
	    A[i] = B[i];
    
}