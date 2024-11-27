#include <stdio.h>

int main(){
	int n; 	
	printf("Moi ban nhap vao so phan tu trong mang ban muon:");
	scanf("%d", &n);	
	int arr[n];
	
	for(int i=0;i<n; i++){
		printf("Moi ban nhap phan tu le vao mang:");
		scanf("%d", &arr[i]);	
		while(arr[i]%2==0){
			printf("Ban can nhap phan tu le vao mang:");
			scanf("%d", &arr[i]);
	}
}
	for(int i=0;i<n; i++){
	printf("Mang [%d]:%d\n", i, arr[i] );
}
}
