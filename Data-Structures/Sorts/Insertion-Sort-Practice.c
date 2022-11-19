// Practicing insertion sort for exam
#include <stdio.h>
#define size 6
void insertion_sort(int[],int);

int main(){
	
	int n = size;
	int arr[] = {32,51,65,87,12,55};
	
	printf("Unsorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
	insertion_sort(arr,n);
	
	printf("\nSorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
}

void insertion_sort(int arr[],int n){
	int i,k,temp;
	
	for(k=1; k<size; k++){
		temp = arr[k];
		i = k - 1;
		while(i >= 0 && arr[i] > temp){
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = temp;
	}	
}
