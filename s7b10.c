#include<stdio.h>
int main(){
    int n,count=0;
    printf("moi ban nhap so phan tu mang");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n ;i++){
		printf("moi ban nhap phan tu ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int c=arr[i];c>=1;c--){
			if(arr[i]%c==0);
			count++;
		}
		if(count==2){
			printf("arr[%d]=%d la so nguyen to",i,arr[i]);
		}
	}
    
}
