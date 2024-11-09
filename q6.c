#include<stdio.h>

int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	while(n%2 == 0){
		printf("n should be an even number! - Enter n: ");
		scanf("%d", &n);
	}
	for(int z = 0; z < n; z++ ){
		printf("* ");
	}
	printf("\n");
	//
	int top = 0, bottom = (n -3);
	for(int i = 0; i < (n - 2); i ++){
		printf("* ");
		
		for(int f = 0; f < (n - 2); f++){
			if(top == f || bottom == f){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		top++;
		bottom--;
		printf("* ");
		printf("\n");
		
	}
	
	
	
	//
	for(int z = 0; z < n; z++ ){
		printf("* ");
	}
}