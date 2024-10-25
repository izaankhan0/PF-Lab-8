#include<stdio.h>

void main(){
	
	int inp, counter = 0;
	printf("Enter the Numba: ");
	scanf("%d", &inp);
	int use1= inp;
	int use2= 2;
	int counter2 = inp;
	//int array[4][4];
	for(int j = inp; j > 0; j--){
		for (int i = use1; i > 0; i--){
			printf("%d ", i);		
		}
		printf("\n");
		
		for (int k = -1; k < counter; k++){
			printf(" ");
		}       
		use1 -= 1;
		counter++;
	}
	
		printf("\n");
		printf("\n");
		printf("\n");
	for(int o = 1; o < inp; o++){
		for (int p = use2; p > 0; p--){
			printf("%d ", p);		
		}
		printf("\n");
		
//		for (int u = counter2; u > -1; u--){
//			printf(" ");
//		}       
		use2 += 1;
//		counter2--;
	}
}