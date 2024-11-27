#include <stdio.h>

int main(){
	
	int num[5]={2,15,45,53,52};
	int count=0; 
	 
	for(int i=0;i<5; i++){
		if(num[i]%2==0){
			printf("So chan trong mang la :%d\n", num[i]);
			count++; 
		}
	}
	if(count==0){
		printf("Mang khong chua so chan");
	}
}
