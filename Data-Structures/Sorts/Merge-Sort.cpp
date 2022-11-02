// Merge Sort
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