#include <stdio.h>
#include <limits.h>

void swap(int *arr, int *arr1){
	int temp = *arr;
	*arr = *arr1;
	*arr1 = temp;	
}

void selection_sort(int arr[], int size){
	int x,y;
	int minimum;
	
	for(x=0; x<size; x++){
		minimum = x;
		for(y=x+1; y<size; y++){
			
			if(arr[y]<arr[minimum]){
				
				minimum = y;
			}	
		}
		swap(&arr[x], &arr[minimum]);
	}
}


int main(){
	int size, number;
	int x = 0;
	int a = 0;
	
	printf("Enter how many numbers you want to enter:\n");
	scanf("%d", &size);
	
	int numbers[size];
	
	printf("Enter the numbers you want(Press enter after each number):\n");
	
	for(a=0; a<size; a++){
		
		scanf("%d", &number);
		numbers[a] = number;
	}
	
	selection_sort(numbers,size);
	
	for(x=0; x<size; x++){
		
		printf("%d ", numbers[x]);		
	}	
}
