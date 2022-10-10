#include <stdio.h>

void insertionSort(int n,int *arr){
	
	int pointer;
	for(int i=1;i<n;i++){
		
		int temp = arr[i];
		pointer = i-1;
		
		while(pointer>=0 && arr[pointer]>temp){
			
			arr[pointer+1] = arr[pointer];
			pointer--;
			
		}
		arr[pointer+1] = temp;	
	}
	
}

int main(){
	
	int n = 10;
	int arr[] = {42,52,15,62,36,24,12,76,54,35};
	
	printf("Unsorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
	insertionSort(n,&arr);
	
	printf("\nSorted Array: ");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
	
}
