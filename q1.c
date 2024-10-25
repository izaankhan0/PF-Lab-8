/*
A local community center is organizing a workshop where participants will learn about
matrix operations. As part of the workshop, you are tasked with creating a program that
helps the participants understand how to compute the sums of the rows and columns of
a matrix.
Write a C program that allows users to input a 3x3 matrix representing the scores of
three different activities completed by three participants in the workshop. After entering
the matrix, the program should calculate and display:
1. The sum of each row, which indicates the total score of each participant across all
activities.
2. The sum of each column, which reflects the total score for each activity across all
participants.
*/

#include<stdio.h>

void main(){

	int array[3][3];
	int inp, sumRow = 0, sumCol = 0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Enter Participant %d\'s ,Score %d: ", i+1, j+1);
			scanf("%d", &inp);
			array[i][j] = inp;
		}
		printf("\n");		
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d\t", array[i][j]);
		}
		printf("\n");		
	}
	
	for (int z = 0; z < 3; z++){
		sumRow = 0;
		for (int y = 0; y < 3; y++){
			sumRow += array[z][y];
		}
		printf("Sum of Participant %d\'s Activity scores are: %d", z + 1, sumRow);
		printf("\n");
	}
	printf("\n");
	
	for (int y = 0; y < 3; y++){
		sumCol = 0;
		for (int z = 0; z < 3; z++){
			sumCol += array[z][y];
		}
		printf("Sum of Activity %d of all Participants is: %d", y + 1, sumCol);
		printf("\n");
	}
	
}
