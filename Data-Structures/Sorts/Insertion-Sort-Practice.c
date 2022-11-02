// Practicing insertion sort
#include <stdio.h>
void insertion_sort(int *arr,int n);


int main(){
	
	int n = 10;
	int arr[] = {32,51,65,87,12,55,42,76,87,2};
	
	printf("Unsorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
	insertion_sort(&arr,n);
	
	printf("\nSorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
}

void insertion_sort(int *arr,int n){
	
	int k,j,temp;
	
	for(int k=1;k<n;k++){
		temp = arr[k];
		j = k-1;
		
		while((temp<arr[j]) && (j>=0)){
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j+1] = temp;
	}
	
}
