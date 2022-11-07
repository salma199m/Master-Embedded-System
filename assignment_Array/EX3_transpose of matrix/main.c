/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	int arr[10][10], t[10][10];
	int r,c,i,j;

	printf("Enter rows and columns of matrix:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d" ,&r,&c);
	                                  //set elements of matrix
	printf("Enter the element of matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter element a%d%d:",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
	                                  //print the Matrix
	printf("\nEnter matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	                                  //Transpose Matrix
	printf("transpose Matrix is:\n");
	for(i=0; i<c; i++){
			for(j=0; j<r; j++){
				t[i][j]=arr[j][i];
			}
		}
	//print Transpose Matrix
	for(i=0; i<c; i++){
			for(j=0; j<r; j++){
				printf("%d\t",t[i][j]);
			}
			printf("\n");
		}
	return 0;
}

