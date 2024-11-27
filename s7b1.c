#include <stdio.h>

int main(){	
	int arr[5]={1,4,6,32,23};	 
	for(int i=0;i<5; i++){
		printf("Gia tri co trong mang la mang:%d\n", arr[i]);
	}
	printf("Do dai cua mang la: %d", sizeof(arr)/ sizeof(int));
}
