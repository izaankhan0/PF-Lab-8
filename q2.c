/*
 A school is conducting an analysis of students' grades in four different subjects. The
grades are recorded in a 4x4 matrix, where each row represents a student and each
column represents a subject. However, due to an error in data entry, some students
received negative grades, which are not valid.
Write a C program that allows users to input a 4x4 matrix representing the grades of
four students across four subjects. The program should replace all negative grades in
the matrix with zero, ensuring that the data reflects valid scores. After processing the
matrix, display the updated matrix with the correct grades
*/

#include<stdio.h>

void main(){

	int array[4][4];
	int inp, sumRow = 0, sumCol = 0;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			printf("Enter Student %d\'s , Marks %d: ", i+1, j+1);
			scanf("%d", &inp);
			array[i][j] = inp;
		}
		printf("\n");		
	}
	printf("\n");
	printf("Before:");
	printf("\n");
	for (int z = 0; z < 4; z++){
		for (int y = 0; y < 4; y++){
			printf("%d\t", array[z][y]);
		}
		printf("\n");		
	}
	
	printf("\n");
	
	for (int p = 0; p < 4; p++){
		for (int l = 0; l < 4; l++){
			if(array[p][l] < 0){
				array[p][l] = 0;
			}
		}
		printf("\n");		
	}
	
	printf("\n");
	printf("After:");
	printf("\n");
	
	for (int t = 0; t < 4; t++){
		for (int r = 0; r < 4; r++){
				printf("%d\t", array[t][r]);
			}
		
		printf("\n");		
	}
	
}