// Bubble sort using pointers
#include <stdio.h>

void printArr(int*, int*);
void bubble_sort(int*, int*);

int main(){
	
	int arr[] = {63,21,53,68,47,58,99,24,11,52};
	
	int len = sizeof(arr) / sizeof(int);
	
	printf("Unsorted array: ");
	printArr(&arr,&len);
	
	bubble_sort(&arr,&len);
	printf("\nSorted array: ");
	printArr(&arr,&len);
	
}

void bubble_sort(int *arr,int *len){

	for(int i=0;i<*len;i++){
	
		for(int j=0; j<(*len-1); j++){
			
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			
		}
		
	}
}

void printArr(int *arr, int *len){
	
	for(int i=0;i<*len;i++){
		printf("%d ",arr[i]);
	}
	
}
