/* A computer science club at a university is hosting a coding competition, and one of the
challenges involves working with matrices. Participants are required to demonstrate
their ability to manipulate matrices effectively.
Write a C program that allows users to input a 4x4 matrix representing the scores of
three different teams across three rounds of a competition. The program should then
rearrange the elements of each column in ascending order to reflect the teams
performance in each round.*/

#include<stdio.h>
void main(){
	int arr[4][4];
	int inp, temp;

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("Enter Score %d for Round %d:  ", i+1, j+1);
			scanf("%d", &inp);
			arr[i][j] = inp;
		}
		printf("\n");
	}
	printf("\n");
	printf("Before:");
	printf("\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	//
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			for(int f = 0; f < 3; f++){
				if(arr[f][i] > arr[f + 1][i]){
					temp = arr[f][i];
					arr[f][i] = arr[f + 1][i];
					arr[f + 1][i] = temp;
				}
			}
		}
	}
	
	printf("\n");
	printf("After:");
	printf("\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	
}












