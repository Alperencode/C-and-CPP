#include <stdio.h>
#define size 8

int partition(int a[], int beg, int end);
void quick_sort(int a[], int beg, int end);

int main()
{
	int temp, i, j, n;
	n = size;
	int arr[size] = {14, 12, 11, 4, 89, 91, 24, 75};
	printf("\nUnsorted array: \n");	
	for (int x = 0; x < size; x++)
	{
		printf("%d ", arr[x]);
	}
	printf("\n\n");
	
	quick_sort(arr, 0, n-1);
	
	printf("\nSorted array:\n");

	for(i=0; i<size; i++)
		printf("%d ", arr[i]);
}

void quick_sort(int a[], int beg, int end)
{
	int pivot;
	
	if(beg < end)
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

		while ((a[pivot] <= a[right]) && (pivot !=right))
			right--;
					
		if(pivot ==right)
			flag = 1;
			
		else if (a[pivot] > a[right])
		{
			temp = a[pivot];
			a[pivot] = a[right];
			a[right] = temp;
			pivot = right;
		}
		if(flag != 1)
		{
			while ((a[pivot] >= a[left]) && (pivot !=left))
				left++;
				
			if(pivot == left)
				flag = 1;
				
			else if(a[pivot] < a[left])
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

