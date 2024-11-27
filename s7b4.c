#include <stdio.h>

int main(){
	int n; 
	
	printf("Moi ban nhap vao so phan tu trong mang ban muon: ");
	scanf("%d", &n);	
	int arr[n];	
	for(int i=0;i<n;i++){
		printf("Gia tri ban nhap vao mang %d:", i+1);
		scanf("%d", &arr[i]);
}
	for(int i=0;i<n; i++){
		printf("Mang [%d]:%d \n", i, arr[i] );
}
}
