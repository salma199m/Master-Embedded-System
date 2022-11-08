/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
void rev_array(int a[],int size,int b[])
{
	int i,j;
	for(i=size-1, j=0; i>=0; i--,j++)
		b[j]=a[i];

	printf("result of a reverse array is:\n");
	for(i=0; i<size; i++)
		printf("%d",b[i]);
}
int main()
{
	int arr1[100],arr2[100], size,i;
	printf("Enter number of elements:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &size);

	printf("Enter elements of array:\n");
	fflush(stdin);
	fflush(stdout);
	for(i=0; i<size; i++)
		scanf("%d", &arr1[i]);
	rev_array( arr1, size, arr2);
}
