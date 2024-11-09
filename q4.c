/*
A data analysis company is developing a tool to help researchers combine their findings
from two different studies. Each studys results are represented as matrices, where
each matrix can have a size of m x n. The researchers need to add these matrices
together to obtain a combined result.
Write a C program that prompts users to enter the dimensions (m and n) for two
matrices. Then, allow the users to input the elements of both matrices. The program
should compute the sum of the two matrices and display the resulting matrix.
*/
#include<stdio.h>

void main(){
	int f, l,inp;
	printf("Enter Rows for Matrix 1: ");
	scanf("%d", &f);
	printf("\n");
	printf("Enter Columns for Matrix 1: ");
	scanf("%d", &l);
	int arr1[f][l];
	int arr2[f][l];
	int arr3[f][l];
	printf("\n");
	printf("Enter Matrix 1:\n");
	for(int rows = 0; rows < f; rows++){
		for(int cols = 0; cols < l; cols++){
			printf("Enter Element for Row %d & Column %d:  ", rows + 1, cols + 1);
			scanf("%d", &inp);
			arr1[rows][cols] = inp;
		}
	}
	printf("\n");
	printf("Enter Matrix 2:\n");
	for(int rows = 0; rows < f; rows++){
		for(int cols = 0; cols < l; cols++){
			printf("Enter Element for Row %d & Column %d:  ", rows + 1, cols + 1);
			scanf("%d", &inp);
			arr2[rows][cols] = inp;
		}
	}
	for(int rows = 0; rows < f; rows++){
		for(int cols = 0; cols < l; cols++){
			arr3[rows][cols] = arr1[rows][cols] + arr2[rows][cols];
		}
	}
	printf("\n");
	printf("\n");
	printf("Sum of the 2 Matrix's are:");
	printf("\n");
	for(int rows = 0; rows < f; rows++){
		for(int cols = 0; cols < l; cols++){
			printf("%d\t", arr3[rows][cols]);
		}
		printf("\n");
	}
	
}