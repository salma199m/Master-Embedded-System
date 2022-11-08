/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int unique(int arr[], int n)
{
	int i,j,uni;
	for(i=0; i<n; i++){
		for(j=i+1; i<n; i++){
		if(arr[j]==arr[i])
			continue;
		else
			uni=arr[j];
		}
	}
	return uni;
}
int main()
{
	int arr[30], n, i;
	printf("Enter number of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	printf("Enter elements of array");
	fflush(stdin);
	fflush(stdout);
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);

	printf("unique number in array is: %d ",unique(arr,n));
}


