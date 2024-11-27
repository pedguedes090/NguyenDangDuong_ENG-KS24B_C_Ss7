#include <stdio.h>

int main(){
	
	int arr[5]={1,64,76,23,52};
	int max, min;	
	max = num[0];
	min = num[0];	
	for(int i=0;i<5; i++){
		if (max < arr[i]){
			max=arr[i];
		}
		if (min > arr[i]){
			min=arr[i];
		}
	}	
	printf("Phan tu lon nhat trong mang la: %d\n", max);
	printf("Phan tu nho nhat trong mang la: %d\n", min);
	
	return 0;
}
