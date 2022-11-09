// Re-writing Quick Sort to practice for exam
#include <stdio.h>
#define size 6

int partition(int a[], int beg, int end);
void quick_sort(int a[], int beg, int end);

int main()
{
	int i, n;
	n = size;
	int arr[size] = {11,33,2,10,19,21};
	printf("\nUnsorted array: \n");	
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
    
	printf("\n");
	
	quick_sort(arr, 0, n-1);
	
	printf("\nSorted array:\n");

	for(i=0; i<size; i++)
		printf("%d ", arr[i]);
}

void quick_sort(int a[],int beg, int end){
    int pivot;

    if(beg < end){

        pivot = partition(a,beg,end);
        quick_sort(a,beg,pivot-1);
        quick_sort(a,pivot+1,end);
    }
}

int partition(int a[], int beg, int end){
    int temp,right,left,pivot,flag;
    pivot = left = beg;
    right = end;
    flag = 0;
    while(flag != 1){
        // iterating right pointer to the left by decreasing
        while(a[pivot] <= a[right] && pivot != right)
            right--;

        if(right == pivot)
            flag = 1;

        else if(a[pivot] >= a[right]){
            temp = a[pivot];
            a[pivot] = a[right];
            a[right] = temp;
            pivot = right;
        }

        if(flag != 1){

            // iterating left pointer to the right by increasing
            while(a[pivot] >= a[left] && pivot != left)
                left++;
            
            if(left == pivot)
                flag = 1;
            else if(a[pivot] <= a[left]){
                temp = a[pivot];
                a[pivot] = a[left];
                a[left] = temp;
                pivot = left;
            }
        }
    }
    // printf("\npivot: %d - %d", pivot, a[pivot]);
    return pivot;
}